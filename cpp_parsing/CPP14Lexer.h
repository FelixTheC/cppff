
// Generated from CPP14Lexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  CPP14Lexer : public antlr4::Lexer {
public:
  enum {
    IntegerLiteral = 1, CharacterLiteral = 2, FloatingLiteral = 3, StringLiteral = 4, 
    BooleanLiteral = 5, PointerLiteral = 6, UserDefinedLiteral = 7, IncludeDirective = 8, 
    MultiLineMacro = 9, Directive = 10, Alignas = 11, Alignof = 12, Asm = 13, 
    Auto = 14, Bool = 15, Break = 16, Case = 17, Catch = 18, Char = 19, 
    Char16 = 20, Char32 = 21, Class = 22, Const = 23, Constexpr = 24, Const_cast = 25, 
    Continue = 26, Decltype = 27, Default = 28, Delete = 29, Do = 30, Double = 31, 
    Dynamic_cast = 32, Else = 33, Enum = 34, Explicit = 35, Export = 36, 
    Extern = 37, False_ = 38, Final = 39, Float = 40, For = 41, Friend = 42, 
    Goto = 43, If = 44, Inline = 45, Include = 46, Int = 47, Long = 48, 
    Mutable = 49, Namespace = 50, New = 51, Noexcept = 52, Nullptr = 53, 
    Operator = 54, Override = 55, Private = 56, Protected = 57, Public = 58, 
    Register = 59, Reinterpret_cast = 60, Return = 61, Short = 62, Signed = 63, 
    Sizeof = 64, Static = 65, Static_assert = 66, Static_cast = 67, Struct = 68, 
    Switch = 69, Template = 70, This = 71, Thread_local = 72, Throw = 73, 
    True_ = 74, Try = 75, Typedef = 76, Typeid_ = 77, Typename_ = 78, Union = 79, 
    Unsigned = 80, Using = 81, Virtual = 82, Void = 83, Volatile = 84, Wchar = 85, 
    While = 86, LeftParen = 87, RightParen = 88, LeftBracket = 89, RightBracket = 90, 
    LeftBrace = 91, RightBrace = 92, DoubleLeftBracket = 93, DoubleRightBracket = 94, 
    Plus = 95, Minus = 96, Star = 97, Div = 98, Mod = 99, Caret = 100, And = 101, 
    Or = 102, Tilde = 103, Not = 104, Assign = 105, Less = 106, Greater = 107, 
    PlusAssign = 108, MinusAssign = 109, StarAssign = 110, DivAssign = 111, 
    ModAssign = 112, XorAssign = 113, AndAssign = 114, OrAssign = 115, LeftShiftAssign = 116, 
    RightShiftAssign = 117, Equal = 118, NotEqual = 119, LessEqual = 120, 
    GreaterEqual = 121, AndAnd = 122, OrOr = 123, PlusPlus = 124, MinusMinus = 125, 
    Comma = 126, ArrowStar = 127, Arrow = 128, Question = 129, Colon = 130, 
    Doublecolon = 131, Semi = 132, Dot = 133, DotStar = 134, Ellipsis = 135, 
    Identifier = 136, DecimalLiteral = 137, OctalLiteral = 138, HexadecimalLiteral = 139, 
    BinaryLiteral = 140, Integersuffix = 141, UserDefinedIntegerLiteral = 142, 
    UserDefinedFloatingLiteral = 143, UserDefinedStringLiteral = 144, UserDefinedCharacterLiteral = 145, 
    Whitespace = 146, Newline = 147, BlockCommentStart = 148, BlockCommentBody = 149, 
    BlockCommentEnd = 150, LineComment = 151, ClassExpression = 152
  };

  explicit CPP14Lexer(antlr4::CharStream *input);

  ~CPP14Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

