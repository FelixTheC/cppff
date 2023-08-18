#include "../include/isort.hpp"

namespace fs = std::filesystem;

namespace isort
{
    namespace utils
    {
        bool is_standard_lib(const std::string &val)
        {
            for (const auto &header: STD_HEADERS)
            {
                if (val.find(header) != std::string::npos)
                {
                    return true;
                }
            }
            return false;
        }
        
        bool is_cpp_file(const std::string &file)
        {
            auto it = std::find(file.cbegin(), file.cend(), '.');
            if (it != std::end(file))
            {
                auto domain = file.substr(std::distance(file.begin(), it));
                return std::any_of(allowed_file_domains.begin(),
                                   allowed_file_domains.end(),
                                   [&domain](const auto &val){ return domain == val; });
            }
            else
            {
                return false;
            }
        }
        
        bool is_file_from_same_level(const std::string &val, std::vector<std::string> &files)
        {
            return std::any_of(files.begin(),
                               files.end(),
                               [&val](const std::string &file)
                               {
                                    return val.find(file) != std::string::npos;
                               });
        }
        
        std::vector<std::string> files_from_same_level(const std::string &val)
        {
            auto path = fs::path(val);
            auto parent_dir = path.parent_path();
            std::vector<std::string> filenames_in_dir {};
            filenames_in_dir.reserve(std::distance(parent_dir.begin(), parent_dir.end()));
            
            for (const auto &child_path: fs::directory_iterator(parent_dir))
            {
                if (is_cpp_file(child_path.path()))
                {
                    filenames_in_dir.emplace_back(child_path.path().string().substr(parent_dir.string().size() + 1));
                }
            }
            
            return filenames_in_dir;
        }
        
        bool  IsortIncludeSortLess::operator()(const std::string &a, const std::string &b) const
        {
            if (a.find('/') != std::string::npos)
            {
                if (b.find(a.substr(0, a.find('/') - 1)) != std::string::npos)
                {
                    return false;
                }
            }
            if (b.find('/') != std::string::npos)
            {
                if (a.find(b.substr(0, b.find('/') - 1)) != std::string::npos)
                {
                    return true;
                }
            }
            return a < b;
        }
    }
    
    void Isort::parse_from_tokens(std::vector<std::unique_ptr<Token>> &&tokens)
    {
        size_t previous_element_line = 0;
        this->lines.reserve(tokens.size());
        
        // val->geLine() starts from `1` and not from `0`
        for (auto const &val : tokens)
        {
            auto current_line = val->getLine();
            auto current_elements = this->lines.size();
            auto current_text = val->getText();
            
            if (current_line > 1 && current_line - previous_element_line > 1)
            {
                for (int idx = 0; idx < ((current_line - 1) - current_elements); ++idx)
                {
                    this->lines.emplace_back("\n");
                }
            }
            else if (current_line == current_elements)
            {
                auto current_idx = current_line - 1;
                this->lines[current_idx] = this->lines[current_idx] + std::move(current_text);
                previous_element_line = current_line;
                continue;
            }
            
            if (val->getType() == CPP14Lexer::IncludeDirective)
            {
                if (this->start == UINT_MAX)
                {
                    this->start = current_line - 1;
                }
                this->stop = current_line;
            }
            
            previous_element_line = current_line;
            this->lines.emplace_back(std::move(current_text));
        }
    }
    
    void Isort::sort(bool check_only)
    {
        if (this->start == UINT_MAX) { return; }
        
        std::vector<std::string> std_includes {};
        std::vector<std::string> user_includes {};
        std::vector<std::string> user_libraries {};
        
        // we will reserve for both vectors the same amount of possible entries
        // to be sure we never need to recalculate memory
        std_includes.reserve(this->stop - this->start);
        user_includes.reserve(this->stop - this->start);
        user_libraries.reserve(this->stop - this->start);
        
        std::for_each(this->lines.begin() + this->start,
                      this->lines.begin() + this->stop + 1,
                      [&std_includes, &user_libraries, &user_includes, this](const std::string &val){
                          if (utils::is_standard_lib(val) && val != "\n")
                          {
                              std_includes.emplace_back(val);
                          }
                          else if (std::find(val.cbegin(), val.cend(), '/') < val.cend() ||
                                    utils::is_file_from_same_level(val, this->same_level_files))
                          {
                              user_includes.emplace_back(val);
                          }
                          else if (val != "\n")
                          {
                              user_libraries.emplace_back(val);
                          }
                      });
        
        // let's sort the different include types/sections separately
        std::sort(std_includes.begin(), std_includes.end(), utils::IsortIncludeSortLess());
        std::sort(user_includes.begin(), user_includes.end(), utils::IsortIncludeSortLess());
        std::sort(user_libraries.begin(), user_libraries.end(), utils::IsortIncludeSortLess());
        
        if (!std_includes.empty())
        {
            std_includes.emplace_back("\n");
        }
        if (!user_includes.empty())
        {
            user_includes.emplace_back("\n");
        }
        if (!user_libraries.empty())
        {
            user_libraries.emplace_back("\n");
        }
        
        std::vector<std::string> include_lines {};
        include_lines.reserve(std_includes.size() + user_libraries.size() + user_includes.size());
        
        // bring them all together this will make it easier to include the lines later back
        std::move(std_includes.begin(), std_includes.end(), std::back_inserter(include_lines));
        std::move(user_libraries.begin(), user_libraries.end(), std::back_inserter(include_lines));
        std::move(user_includes.begin(), user_includes.end(), std::back_inserter(include_lines));
        
        std::vector<std::string> origin_lines {};
        
        if (check_only)
        {
            origin_lines.reserve(this->lines.size());
            std::copy(this->lines.begin(), this->lines.end(), std::back_inserter(origin_lines));
        }
        
        this->lines.erase(this->lines.begin() + this->start,
                          this->lines.begin() + this->stop + 1);
        this->lines.insert(this->lines.begin() + this->start,
                           include_lines.begin(),
                           include_lines.end());
        
        if (check_only)
        {
            if (!std::equal(this->lines.begin(),
                            this->lines.end(),
                            origin_lines.begin(),
                            origin_lines.end()))
            {
                throw std::invalid_argument("Include formats are not correctly formatted.");
            }
        }
    }
}