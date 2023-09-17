//
// Created by felix on 27.08.23.
//

#ifndef CPPFF_HELPERS_HPP
#define CPPFF_HELPERS_HPP

#include <ctime>
#include <filesystem>
#include <fstream>
#include <string>

namespace fs = std::filesystem;

/// @brief Create an example c++ file under /tmp/ with the current timestamp as name.
/// @param file_domain which should be any of: [`.c`, `.cpp`, `.h`, `.hpp`]
/// @return the complete filename with path
[[ nodiscard ]] static std::string create_example_file(const std::string &file_domain) noexcept
{
    auto time = std::time(nullptr);
    auto temp_file = "/tmp/" + std::to_string(time) + file_domain;
    
    std::ofstream outFile;
    outFile.open(temp_file, std::ios_base::trunc);
    
    if (outFile.is_open())
    {
        outFile << "//\n";
        outFile << "// Created by google test\n";
        outFile << "//\n";
        outFile << "#include <iostream>\n";
        outFile << "#include <fstream>\n\n";
        outFile << "using namespace std;\n\n";
        outFile << "int main() {\n\n";
        outFile << "    // Create and open a text file\n";
        outFile << "    ofstream MyFile(\"filename.txt\");\n\n";
        outFile << "    // Write to the file\n";
        outFile << "    MyFile << \"Files can be tricky, but it is fun enough!\";\n\n";
        outFile << "    // Close the file\n";
        outFile << "    MyFile.close();\n";
        outFile << "}\n";
    }
    
    outFile.close();
    
    return temp_file;
}

/// @brief Create an example directory with 10 random files (.hpp, .cpp, .txt).
/// @return the directory path.
[[ nodiscard ]] static std::string create_example_dir() noexcept
{
    auto test_dir = fs::temp_directory_path() += "/test";
    fs::create_directory(test_dir);
    
    for (int idx = 0; idx < 10; ++idx)
    {
        auto temp_file = test_dir.string();
        
        if (idx % 3 == 0)
        {
            temp_file = temp_file.append("/example_file_").append(std::to_string(idx)).append(".hpp");
        }
        else if (idx % 2 == 0)
        {
            temp_file = temp_file.append("/example_file_").append(std::to_string(idx)).append(".cpp");
        }
        else if (idx % 5 == 0)
        {
            temp_file = temp_file.append("/example_file_").append(std::to_string(idx)).append(".txt");
        }
        
        std::ofstream outFile;
        outFile.open(temp_file, std::ios_base::trunc);
        
        if (outFile.is_open())
        {
            outFile << "//\n";
            outFile << "// Created by google test\n";
            outFile << "//\n";
        }
        
        outFile.close();
    }
    
    return test_dir;
}

/// @brief Read the file content for a specific file into an std::vector.
/// @param file the file to read the content from.
/// @return the lines of the file as std::vector.
inline std::vector<std::string> read_file(const std::string &file)
{
    std::vector<std::string> result {};
    
    std::ifstream ifstream;
    ifstream.open(file);
    
    if (ifstream.is_open())
    {
        std::string partial;
        while(getline(ifstream, partial))
        {
            result.emplace_back(partial);
        }
    }
    
    return result;
}

#endif //CPPFF_HELPERS_HPP
