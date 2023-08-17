
// Generated from CPP14Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CPP14ParserBase.hpp"


class CPP14Parser : public CPP14ParserBase
{
public:
    enum
    {
        IntegerLiteral = 1, CharacterLiteral = 2, FloatingLiteral = 3, StringLiteral = 4,
        BooleanLiteral = 5, PointerLiteral = 6, UserDefinedLiteral = 7, MultiLineMacro = 8,
        Directive = 9, Alignas = 10, Alignof = 11, Asm = 12, Auto = 13, Bool = 14,
        Break = 15, Case = 16, Catch = 17, Char = 18, Char16 = 19, Char32 = 20,
        Class = 21, Const = 22, Constexpr = 23, Const_cast = 24, Continue = 25,
        Decltype = 26, Default = 27, Delete = 28, Do = 29, Double = 30, Dynamic_cast = 31,
        Else = 32, Enum = 33, Explicit = 34, Export = 35, Extern = 36, False_ = 37,
        Final = 38, Float = 39, For = 40, Friend = 41, Goto = 42, If = 43, Inline = 44,
        Int = 45, Long = 46, Mutable = 47, Namespace = 48, New = 49, Noexcept = 50,
        Nullptr = 51, Operator = 52, Override = 53, Private = 54, Protected = 55,
        Public = 56, Register = 57, Reinterpret_cast = 58, Return = 59, Short = 60,
        Signed = 61, Sizeof = 62, Static = 63, Static_assert = 64, Static_cast = 65,
        Struct = 66, Switch = 67, Template = 68, This = 69, Thread_local = 70,
        Throw = 71, True_ = 72, Try = 73, Typedef = 74, Typeid_ = 75, Typename_ = 76,
        Union = 77, Unsigned = 78, Using = 79, Virtual = 80, Void = 81, Volatile = 82,
        Wchar = 83, While = 84, LeftParen = 85, RightParen = 86, LeftBracket = 87,
        RightBracket = 88, LeftBrace = 89, RightBrace = 90, Plus = 91, Minus = 92,
        Star = 93, Div = 94, Mod = 95, Caret = 96, And = 97, Or = 98, Tilde = 99,
        Not = 100, Assign = 101, Less = 102, Greater = 103, PlusAssign = 104,
        MinusAssign = 105, StarAssign = 106, DivAssign = 107, ModAssign = 108,
        XorAssign = 109, AndAssign = 110, OrAssign = 111, LeftShiftAssign = 112,
        RightShiftAssign = 113, Equal = 114, NotEqual = 115, LessEqual = 116,
        GreaterEqual = 117, AndAnd = 118, OrOr = 119, PlusPlus = 120, MinusMinus = 121,
        Comma = 122, ArrowStar = 123, Arrow = 124, Question = 125, Colon = 126,
        Doublecolon = 127, Semi = 128, Dot = 129, DotStar = 130, Ellipsis = 131,
        Identifier = 132, DecimalLiteral = 133, OctalLiteral = 134, HexadecimalLiteral = 135,
        BinaryLiteral = 136, Integersuffix = 137, UserDefinedIntegerLiteral = 138,
        UserDefinedFloatingLiteral = 139, UserDefinedStringLiteral = 140, UserDefinedCharacterLiteral = 141,
        Whitespace = 142, Newline = 143, BlockComment = 144, LineComment = 145
    };
    
    enum
    {
        RuleTranslationUnit = 0, RulePrimaryExpression = 1, RuleIdExpression = 2,
        RuleUnqualifiedId = 3, RuleQualifiedId = 4, RuleNestedNameSpecifier = 5,
        RuleLambdaExpression = 6, RuleLambdaIntroducer = 7, RuleLambdaCapture = 8,
        RuleCaptureDefault = 9, RuleCaptureList = 10, RuleCapture = 11, RuleSimpleCapture = 12,
        RuleInitcapture = 13, RuleLambdaDeclarator = 14, RulePostfixExpression = 15,
        RuleTypeIdOfTheTypeId = 16, RuleExpressionList = 17, RulePseudoDestructorName = 18,
        RuleUnaryExpression = 19, RuleUnaryOperator = 20, RuleNewExpression_ = 21,
        RuleNewPlacement = 22, RuleNewTypeId = 23, RuleNewDeclarator_ = 24,
        RuleNoPointerNewDeclarator = 25, RuleNewInitializer_ = 26, RuleDeleteExpression = 27,
        RuleNoExceptExpression = 28, RuleCastExpression = 29, RulePointerMemberExpression = 30,
        RuleMultiplicativeExpression = 31, RuleAdditiveExpression = 32, RuleShiftExpression = 33,
        RuleShiftOperator = 34, RuleRelationalExpression = 35, RuleEqualityExpression = 36,
        RuleAndExpression = 37, RuleExclusiveOrExpression = 38, RuleInclusiveOrExpression = 39,
        RuleLogicalAndExpression = 40, RuleLogicalOrExpression = 41, RuleConditionalExpression = 42,
        RuleAssignmentExpression = 43, RuleAssignmentOperator = 44, RuleExpression = 45,
        RuleConstantExpression = 46, RuleStatement = 47, RuleLabeledStatement = 48,
        RuleExpressionStatement = 49, RuleCompoundStatement = 50, RuleStatementSeq = 51,
        RuleSelectionStatement = 52, RuleCondition = 53, RuleIterationStatement = 54,
        RuleForInitStatement = 55, RuleForRangeDeclaration = 56, RuleForRangeInitializer = 57,
        RuleJumpStatement = 58, RuleDeclarationStatement = 59, RuleDeclarationseq = 60,
        RuleDeclaration = 61, RuleBlockDeclaration = 62, RuleAliasDeclaration = 63,
        RuleSimpleDeclaration = 64, RuleStaticAssertDeclaration = 65, RuleEmptyDeclaration_ = 66,
        RuleAttributeDeclaration = 67, RuleDeclSpecifier = 68, RuleDeclSpecifierSeq = 69,
        RuleStorageClassSpecifier = 70, RuleFunctionSpecifier = 71, RuleTypedefName = 72,
        RuleTypeSpecifier = 73, RuleTrailingTypeSpecifier = 74, RuleTypeSpecifierSeq = 75,
        RuleTrailingTypeSpecifierSeq = 76, RuleSimpleTypeLengthModifier = 77,
        RuleSimpleTypeSignednessModifier = 78, RuleSimpleTypeSpecifier = 79,
        RuleTheTypeName = 80, RuleDecltypeSpecifier = 81, RuleElaboratedTypeSpecifier = 82,
        RuleEnumName = 83, RuleEnumSpecifier = 84, RuleEnumHead = 85, RuleOpaqueEnumDeclaration = 86,
        RuleEnumkey = 87, RuleEnumbase = 88, RuleEnumeratorList = 89, RuleEnumeratorDefinition = 90,
        RuleEnumerator = 91, RuleNamespaceName = 92, RuleOriginalNamespaceName = 93,
        RuleNamespaceDefinition = 94, RuleNamespaceAlias = 95, RuleNamespaceAliasDefinition = 96,
        RuleQualifiednamespacespecifier = 97, RuleUsingDeclaration = 98, RuleUsingDirective = 99,
        RuleAsmDefinition = 100, RuleLinkageSpecification = 101, RuleAttributeSpecifierSeq = 102,
        RuleAttributeSpecifier = 103, RuleAlignmentspecifier = 104, RuleAttributeList = 105,
        RuleAttribute = 106, RuleAttributeNamespace = 107, RuleAttributeArgumentClause = 108,
        RuleBalancedTokenSeq = 109, RuleBalancedtoken = 110, RuleInitDeclaratorList = 111,
        RuleInitDeclarator = 112, RuleDeclarator = 113, RulePointerDeclarator = 114,
        RuleNoPointerDeclarator = 115, RuleParametersAndQualifiers = 116, RuleTrailingReturnType = 117,
        RulePointerOperator = 118, RuleCvqualifierseq = 119, RuleCvQualifier = 120,
        RuleRefqualifier = 121, RuleDeclaratorid = 122, RuleTheTypeId = 123,
        RuleAbstractDeclarator = 124, RulePointerAbstractDeclarator = 125, RuleNoPointerAbstractDeclarator = 126,
        RuleAbstractPackDeclarator = 127, RuleNoPointerAbstractPackDeclarator = 128,
        RuleParameterDeclarationClause = 129, RuleParameterDeclarationList = 130,
        RuleParameterDeclaration = 131, RuleFunctionDefinition = 132, RuleFunctionBody = 133,
        RuleInitializer = 134, RuleBraceOrEqualInitializer = 135, RuleInitializerClause = 136,
        RuleInitializerList = 137, RuleBracedInitList = 138, RuleClassName = 139,
        RuleClassSpecifier = 140, RuleClassHead = 141, RuleClassHeadName = 142,
        RuleClassVirtSpecifier = 143, RuleClassKey = 144, RuleMemberSpecification = 145,
        RuleMemberdeclaration = 146, RuleMemberDeclaratorList = 147, RuleMemberDeclarator = 148,
        RuleVirtualSpecifierSeq = 149, RuleVirtualSpecifier = 150, RulePureSpecifier = 151,
        RuleBaseClause = 152, RuleBaseSpecifierList = 153, RuleBaseSpecifier = 154,
        RuleClassOrDeclType = 155, RuleBaseTypeSpecifier = 156, RuleAccessSpecifier = 157,
        RuleConversionFunctionId = 158, RuleConversionTypeId = 159, RuleConversionDeclarator = 160,
        RuleConstructorInitializer = 161, RuleMemInitializerList = 162, RuleMemInitializer = 163,
        RuleMeminitializerid = 164, RuleOperatorFunctionId = 165, RuleLiteralOperatorId = 166,
        RuleTemplateDeclaration = 167, RuleTemplateparameterList = 168, RuleTemplateParameter = 169,
        RuleTypeParameter = 170, RuleSimpleTemplateId = 171, RuleTemplateId = 172,
        RuleTemplateName = 173, RuleTemplateArgumentList = 174, RuleTemplateArgument = 175,
        RuleTypeNameSpecifier = 176, RuleExplicitInstantiation = 177, RuleExplicitSpecialization = 178,
        RuleTryBlock = 179, RuleFunctionTryBlock = 180, RuleHandlerSeq = 181,
        RuleHandler = 182, RuleExceptionDeclaration = 183, RuleThrowExpression = 184,
        RuleExceptionSpecification = 185, RuleDynamicExceptionSpecification = 186,
        RuleTypeIdList = 187, RuleNoeExceptSpecification = 188, RuleTheOperator = 189,
        RuleLiteral = 190
    };
    
    explicit CPP14Parser(antlr4::TokenStream *input);
    
    CPP14Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);
    
    ~CPP14Parser() override;
    
    std::string getGrammarFileName() const override;
    
    const antlr4::atn::ATN &getATN() const override;
    
    const std::vector<std::string> &getRuleNames() const override;
    
    const antlr4::dfa::Vocabulary &getVocabulary() const override;
    
    antlr4::atn::SerializedATNView getSerializedATN() const override;
    
    
    class TranslationUnitContext;
    
    class PrimaryExpressionContext;
    
    class IdExpressionContext;
    
    class UnqualifiedIdContext;
    
    class QualifiedIdContext;
    
    class NestedNameSpecifierContext;
    
    class LambdaExpressionContext;
    
    class LambdaIntroducerContext;
    
    class LambdaCaptureContext;
    
    class CaptureDefaultContext;
    
    class CaptureListContext;
    
    class CaptureContext;
    
    class SimpleCaptureContext;
    
    class InitcaptureContext;
    
    class LambdaDeclaratorContext;
    
    class PostfixExpressionContext;
    
    class TypeIdOfTheTypeIdContext;
    
    class ExpressionListContext;
    
    class PseudoDestructorNameContext;
    
    class UnaryExpressionContext;
    
    class UnaryOperatorContext;
    
    class NewExpression_Context;
    
    class NewPlacementContext;
    
    class NewTypeIdContext;
    
    class NewDeclarator_Context;
    
    class NoPointerNewDeclaratorContext;
    
    class NewInitializer_Context;
    
    class DeleteExpressionContext;
    
    class NoExceptExpressionContext;
    
    class CastExpressionContext;
    
    class PointerMemberExpressionContext;
    
    class MultiplicativeExpressionContext;
    
    class AdditiveExpressionContext;
    
    class ShiftExpressionContext;
    
    class ShiftOperatorContext;
    
    class RelationalExpressionContext;
    
    class EqualityExpressionContext;
    
    class AndExpressionContext;
    
    class ExclusiveOrExpressionContext;
    
    class InclusiveOrExpressionContext;
    
    class LogicalAndExpressionContext;
    
    class LogicalOrExpressionContext;
    
    class ConditionalExpressionContext;
    
    class AssignmentExpressionContext;
    
    class AssignmentOperatorContext;
    
    class ExpressionContext;
    
    class ConstantExpressionContext;
    
    class StatementContext;
    
    class LabeledStatementContext;
    
    class ExpressionStatementContext;
    
    class CompoundStatementContext;
    
    class StatementSeqContext;
    
    class SelectionStatementContext;
    
    class ConditionContext;
    
    class IterationStatementContext;
    
    class ForInitStatementContext;
    
    class ForRangeDeclarationContext;
    
    class ForRangeInitializerContext;
    
    class JumpStatementContext;
    
    class DeclarationStatementContext;
    
    class DeclarationseqContext;
    
    class DeclarationContext;
    
    class BlockDeclarationContext;
    
    class AliasDeclarationContext;
    
    class SimpleDeclarationContext;
    
    class StaticAssertDeclarationContext;
    
    class EmptyDeclaration_Context;
    
    class AttributeDeclarationContext;
    
    class DeclSpecifierContext;
    
    class DeclSpecifierSeqContext;
    
    class StorageClassSpecifierContext;
    
    class FunctionSpecifierContext;
    
    class TypedefNameContext;
    
    class TypeSpecifierContext;
    
    class TrailingTypeSpecifierContext;
    
    class TypeSpecifierSeqContext;
    
    class TrailingTypeSpecifierSeqContext;
    
    class SimpleTypeLengthModifierContext;
    
    class SimpleTypeSignednessModifierContext;
    
    class SimpleTypeSpecifierContext;
    
    class TheTypeNameContext;
    
    class DecltypeSpecifierContext;
    
    class ElaboratedTypeSpecifierContext;
    
    class EnumNameContext;
    
    class EnumSpecifierContext;
    
    class EnumHeadContext;
    
    class OpaqueEnumDeclarationContext;
    
    class EnumkeyContext;
    
    class EnumbaseContext;
    
    class EnumeratorListContext;
    
    class EnumeratorDefinitionContext;
    
    class EnumeratorContext;
    
    class NamespaceNameContext;
    
    class OriginalNamespaceNameContext;
    
    class NamespaceDefinitionContext;
    
    class NamespaceAliasContext;
    
    class NamespaceAliasDefinitionContext;
    
    class QualifiednamespacespecifierContext;
    
    class UsingDeclarationContext;
    
    class UsingDirectiveContext;
    
    class AsmDefinitionContext;
    
    class LinkageSpecificationContext;
    
    class AttributeSpecifierSeqContext;
    
    class AttributeSpecifierContext;
    
    class AlignmentspecifierContext;
    
    class AttributeListContext;
    
    class AttributeContext;
    
    class AttributeNamespaceContext;
    
    class AttributeArgumentClauseContext;
    
    class BalancedTokenSeqContext;
    
    class BalancedtokenContext;
    
    class InitDeclaratorListContext;
    
    class InitDeclaratorContext;
    
    class DeclaratorContext;
    
    class PointerDeclaratorContext;
    
    class NoPointerDeclaratorContext;
    
    class ParametersAndQualifiersContext;
    
    class TrailingReturnTypeContext;
    
    class PointerOperatorContext;
    
    class CvqualifierseqContext;
    
    class CvQualifierContext;
    
    class RefqualifierContext;
    
    class DeclaratoridContext;
    
    class TheTypeIdContext;
    
    class AbstractDeclaratorContext;
    
    class PointerAbstractDeclaratorContext;
    
    class NoPointerAbstractDeclaratorContext;
    
    class AbstractPackDeclaratorContext;
    
    class NoPointerAbstractPackDeclaratorContext;
    
    class ParameterDeclarationClauseContext;
    
    class ParameterDeclarationListContext;
    
    class ParameterDeclarationContext;
    
    class FunctionDefinitionContext;
    
    class FunctionBodyContext;
    
    class InitializerContext;
    
    class BraceOrEqualInitializerContext;
    
    class InitializerClauseContext;
    
    class InitializerListContext;
    
    class BracedInitListContext;
    
    class ClassNameContext;
    
    class ClassSpecifierContext;
    
    class ClassHeadContext;
    
    class ClassHeadNameContext;
    
    class ClassVirtSpecifierContext;
    
    class ClassKeyContext;
    
    class MemberSpecificationContext;
    
    class MemberdeclarationContext;
    
    class MemberDeclaratorListContext;
    
    class MemberDeclaratorContext;
    
    class VirtualSpecifierSeqContext;
    
    class VirtualSpecifierContext;
    
    class PureSpecifierContext;
    
    class BaseClauseContext;
    
    class BaseSpecifierListContext;
    
    class BaseSpecifierContext;
    
    class ClassOrDeclTypeContext;
    
    class BaseTypeSpecifierContext;
    
    class AccessSpecifierContext;
    
    class ConversionFunctionIdContext;
    
    class ConversionTypeIdContext;
    
    class ConversionDeclaratorContext;
    
    class ConstructorInitializerContext;
    
    class MemInitializerListContext;
    
    class MemInitializerContext;
    
    class MeminitializeridContext;
    
    class OperatorFunctionIdContext;
    
    class LiteralOperatorIdContext;
    
    class TemplateDeclarationContext;
    
    class TemplateparameterListContext;
    
    class TemplateParameterContext;
    
    class TypeParameterContext;
    
    class SimpleTemplateIdContext;
    
    class TemplateIdContext;
    
    class TemplateNameContext;
    
    class TemplateArgumentListContext;
    
    class TemplateArgumentContext;
    
    class TypeNameSpecifierContext;
    
    class ExplicitInstantiationContext;
    
    class ExplicitSpecializationContext;
    
    class TryBlockContext;
    
    class FunctionTryBlockContext;
    
    class HandlerSeqContext;
    
    class HandlerContext;
    
    class ExceptionDeclarationContext;
    
    class ThrowExpressionContext;
    
    class ExceptionSpecificationContext;
    
    class DynamicExceptionSpecificationContext;
    
    class TypeIdListContext;
    
    class NoeExceptSpecificationContext;
    
    class TheOperatorContext;
    
    class LiteralContext;
    
    class TranslationUnitContext : public antlr4::ParserRuleContext
    {
    public:
        TranslationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *EOF();
        
        DeclarationseqContext *declarationseq();
        
        
    };
    
    TranslationUnitContext *translationUnit();
    
    class PrimaryExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<LiteralContext *> literal();
        
        LiteralContext *literal(size_t i);
        
        antlr4::tree::TerminalNode *This();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ExpressionContext *expression();
        
        antlr4::tree::TerminalNode *RightParen();
        
        IdExpressionContext *idExpression();
        
        LambdaExpressionContext *lambdaExpression();
        
        
    };
    
    PrimaryExpressionContext *primaryExpression();
    
    class IdExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        UnqualifiedIdContext *unqualifiedId();
        
        QualifiedIdContext *qualifiedId();
        
        
    };
    
    IdExpressionContext *idExpression();
    
    class UnqualifiedIdContext : public antlr4::ParserRuleContext
    {
    public:
        UnqualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        OperatorFunctionIdContext *operatorFunctionId();
        
        ConversionFunctionIdContext *conversionFunctionId();
        
        LiteralOperatorIdContext *literalOperatorId();
        
        antlr4::tree::TerminalNode *Tilde();
        
        ClassNameContext *className();
        
        DecltypeSpecifierContext *decltypeSpecifier();
        
        TemplateIdContext *templateId();
        
        
    };
    
    UnqualifiedIdContext *unqualifiedId();
    
    class QualifiedIdContext : public antlr4::ParserRuleContext
    {
    public:
        QualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        UnqualifiedIdContext *unqualifiedId();
        
        antlr4::tree::TerminalNode *Template();
        
        
    };
    
    QualifiedIdContext *qualifiedId();
    
    class NestedNameSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Doublecolon();
        
        TheTypeNameContext *theTypeName();
        
        NamespaceNameContext *namespaceName();
        
        DecltypeSpecifierContext *decltypeSpecifier();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        antlr4::tree::TerminalNode *Identifier();
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        antlr4::tree::TerminalNode *Template();
        
        
    };
    
    NestedNameSpecifierContext *nestedNameSpecifier();
    
    NestedNameSpecifierContext *nestedNameSpecifier(int precedence);
    
    class LambdaExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        LambdaIntroducerContext *lambdaIntroducer();
        
        CompoundStatementContext *compoundStatement();
        
        LambdaDeclaratorContext *lambdaDeclarator();
        
        
    };
    
    LambdaExpressionContext *lambdaExpression();
    
    class LambdaIntroducerContext : public antlr4::ParserRuleContext
    {
    public:
        LambdaIntroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        LambdaCaptureContext *lambdaCapture();
        
        
    };
    
    LambdaIntroducerContext *lambdaIntroducer();
    
    class LambdaCaptureContext : public antlr4::ParserRuleContext
    {
    public:
        LambdaCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        CaptureListContext *captureList();
        
        CaptureDefaultContext *captureDefault();
        
        antlr4::tree::TerminalNode *Comma();
        
        
    };
    
    LambdaCaptureContext *lambdaCapture();
    
    class CaptureDefaultContext : public antlr4::ParserRuleContext
    {
    public:
        CaptureDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *And();
        
        antlr4::tree::TerminalNode *Assign();
        
        
    };
    
    CaptureDefaultContext *captureDefault();
    
    class CaptureListContext : public antlr4::ParserRuleContext
    {
    public:
        CaptureListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<CaptureContext *> capture();
        
        CaptureContext *capture(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        
    };
    
    CaptureListContext *captureList();
    
    class CaptureContext : public antlr4::ParserRuleContext
    {
    public:
        CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        SimpleCaptureContext *simpleCapture();
        
        InitcaptureContext *initcapture();
        
        
    };
    
    CaptureContext *capture();
    
    class SimpleCaptureContext : public antlr4::ParserRuleContext
    {
    public:
        SimpleCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        antlr4::tree::TerminalNode *And();
        
        antlr4::tree::TerminalNode *This();
        
        
    };
    
    SimpleCaptureContext *simpleCapture();
    
    class InitcaptureContext : public antlr4::ParserRuleContext
    {
    public:
        InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        InitializerContext *initializer();
        
        antlr4::tree::TerminalNode *And();
        
        
    };
    
    InitcaptureContext *initcapture();
    
    class LambdaDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        ParameterDeclarationClauseContext *parameterDeclarationClause();
        
        antlr4::tree::TerminalNode *Mutable();
        
        ExceptionSpecificationContext *exceptionSpecification();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        TrailingReturnTypeContext *trailingReturnType();
        
        
    };
    
    LambdaDeclaratorContext *lambdaDeclarator();
    
    class PostfixExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        PrimaryExpressionContext *primaryExpression();
        
        SimpleTypeSpecifierContext *simpleTypeSpecifier();
        
        TypeNameSpecifierContext *typeNameSpecifier();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        BracedInitListContext *bracedInitList();
        
        ExpressionListContext *expressionList();
        
        antlr4::tree::TerminalNode *Less();
        
        TheTypeIdContext *theTypeId();
        
        antlr4::tree::TerminalNode *Greater();
        
        ExpressionContext *expression();
        
        antlr4::tree::TerminalNode *Dynamic_cast();
        
        antlr4::tree::TerminalNode *Static_cast();
        
        antlr4::tree::TerminalNode *Reinterpret_cast();
        
        antlr4::tree::TerminalNode *Const_cast();
        
        TypeIdOfTheTypeIdContext *typeIdOfTheTypeId();
        
        PostfixExpressionContext *postfixExpression();
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        antlr4::tree::TerminalNode *Dot();
        
        antlr4::tree::TerminalNode *Arrow();
        
        IdExpressionContext *idExpression();
        
        PseudoDestructorNameContext *pseudoDestructorName();
        
        antlr4::tree::TerminalNode *Template();
        
        antlr4::tree::TerminalNode *PlusPlus();
        
        antlr4::tree::TerminalNode *MinusMinus();
        
        
    };
    
    PostfixExpressionContext *postfixExpression();
    
    PostfixExpressionContext *postfixExpression(int precedence);
    
    class TypeIdOfTheTypeIdContext : public antlr4::ParserRuleContext
    {
    public:
        TypeIdOfTheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Typeid_();
        
        
    };
    
    TypeIdOfTheTypeIdContext *typeIdOfTheTypeId();
    
    class ExpressionListContext : public antlr4::ParserRuleContext
    {
    public:
        ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        InitializerListContext *initializerList();
        
        
    };
    
    ExpressionListContext *expressionList();
    
    class PseudoDestructorNameContext : public antlr4::ParserRuleContext
    {
    public:
        PseudoDestructorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Tilde();
        
        std::vector<TheTypeNameContext *> theTypeName();
        
        TheTypeNameContext *theTypeName(size_t i);
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        antlr4::tree::TerminalNode *Doublecolon();
        
        antlr4::tree::TerminalNode *Template();
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        DecltypeSpecifierContext *decltypeSpecifier();
        
        
    };
    
    PseudoDestructorNameContext *pseudoDestructorName();
    
    class UnaryExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        PostfixExpressionContext *postfixExpression();
        
        UnaryExpressionContext *unaryExpression();
        
        antlr4::tree::TerminalNode *PlusPlus();
        
        antlr4::tree::TerminalNode *MinusMinus();
        
        UnaryOperatorContext *unaryOperator();
        
        antlr4::tree::TerminalNode *Sizeof();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        TheTypeIdContext *theTypeId();
        
        antlr4::tree::TerminalNode *RightParen();
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        antlr4::tree::TerminalNode *Identifier();
        
        antlr4::tree::TerminalNode *Alignof();
        
        NoExceptExpressionContext *noExceptExpression();
        
        NewExpression_Context *newExpression_();
        
        DeleteExpressionContext *deleteExpression();
        
        
    };
    
    UnaryExpressionContext *unaryExpression();
    
    class UnaryOperatorContext : public antlr4::ParserRuleContext
    {
    public:
        UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Or();
        
        antlr4::tree::TerminalNode *Star();
        
        antlr4::tree::TerminalNode *And();
        
        antlr4::tree::TerminalNode *Plus();
        
        antlr4::tree::TerminalNode *Tilde();
        
        antlr4::tree::TerminalNode *Minus();
        
        antlr4::tree::TerminalNode *Not();
        
        
    };
    
    UnaryOperatorContext *unaryOperator();
    
    class NewExpression_Context : public antlr4::ParserRuleContext
    {
    public:
        NewExpression_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *New();
        
        NewTypeIdContext *newTypeId();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        TheTypeIdContext *theTypeId();
        
        antlr4::tree::TerminalNode *RightParen();
        
        antlr4::tree::TerminalNode *Doublecolon();
        
        NewPlacementContext *newPlacement();
        
        NewInitializer_Context *newInitializer_();
        
        
    };
    
    NewExpression_Context *newExpression_();
    
    class NewPlacementContext : public antlr4::ParserRuleContext
    {
    public:
        NewPlacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ExpressionListContext *expressionList();
        
        antlr4::tree::TerminalNode *RightParen();
        
        
    };
    
    NewPlacementContext *newPlacement();
    
    class NewTypeIdContext : public antlr4::ParserRuleContext
    {
    public:
        NewTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TypeSpecifierSeqContext *typeSpecifierSeq();
        
        NewDeclarator_Context *newDeclarator_();
        
        
    };
    
    NewTypeIdContext *newTypeId();
    
    class NewDeclarator_Context : public antlr4::ParserRuleContext
    {
    public:
        NewDeclarator_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        PointerOperatorContext *pointerOperator();
        
        NewDeclarator_Context *newDeclarator_();
        
        NoPointerNewDeclaratorContext *noPointerNewDeclarator();
        
        
    };
    
    NewDeclarator_Context *newDeclarator_();
    
    class NoPointerNewDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        NoPointerNewDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        ExpressionContext *expression();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        NoPointerNewDeclaratorContext *noPointerNewDeclarator();
        
        ConstantExpressionContext *constantExpression();
        
        
    };
    
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();
    
    NoPointerNewDeclaratorContext *noPointerNewDeclarator(int precedence);
    
    class NewInitializer_Context : public antlr4::ParserRuleContext
    {
    public:
        NewInitializer_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        ExpressionListContext *expressionList();
        
        BracedInitListContext *bracedInitList();
        
        
    };
    
    NewInitializer_Context *newInitializer_();
    
    class DeleteExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        DeleteExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Delete();
        
        CastExpressionContext *castExpression();
        
        antlr4::tree::TerminalNode *Doublecolon();
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        
    };
    
    DeleteExpressionContext *deleteExpression();
    
    class NoExceptExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        NoExceptExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Noexcept();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ExpressionContext *expression();
        
        antlr4::tree::TerminalNode *RightParen();
        
        
    };
    
    NoExceptExpressionContext *noExceptExpression();
    
    class CastExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        UnaryExpressionContext *unaryExpression();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        TheTypeIdContext *theTypeId();
        
        antlr4::tree::TerminalNode *RightParen();
        
        CastExpressionContext *castExpression();
        
        
    };
    
    CastExpressionContext *castExpression();
    
    class PointerMemberExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        PointerMemberExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<CastExpressionContext *> castExpression();
        
        CastExpressionContext *castExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> DotStar();
        
        antlr4::tree::TerminalNode *DotStar(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> ArrowStar();
        
        antlr4::tree::TerminalNode *ArrowStar(size_t i);
        
        
    };
    
    PointerMemberExpressionContext *pointerMemberExpression();
    
    class MultiplicativeExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<PointerMemberExpressionContext *> pointerMemberExpression();
        
        PointerMemberExpressionContext *pointerMemberExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Star();
        
        antlr4::tree::TerminalNode *Star(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Div();
        
        antlr4::tree::TerminalNode *Div(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Mod();
        
        antlr4::tree::TerminalNode *Mod(size_t i);
        
        
    };
    
    MultiplicativeExpressionContext *multiplicativeExpression();
    
    class AdditiveExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
        
        MultiplicativeExpressionContext *multiplicativeExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Plus();
        
        antlr4::tree::TerminalNode *Plus(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Minus();
        
        antlr4::tree::TerminalNode *Minus(size_t i);
        
        
    };
    
    AdditiveExpressionContext *additiveExpression();
    
    class ShiftExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<AdditiveExpressionContext *> additiveExpression();
        
        AdditiveExpressionContext *additiveExpression(size_t i);
        
        std::vector<ShiftOperatorContext *> shiftOperator();
        
        ShiftOperatorContext *shiftOperator(size_t i);
        
        
    };
    
    ShiftExpressionContext *shiftExpression();
    
    class ShiftOperatorContext : public antlr4::ParserRuleContext
    {
    public:
        ShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<antlr4::tree::TerminalNode *> Greater();
        
        antlr4::tree::TerminalNode *Greater(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Less();
        
        antlr4::tree::TerminalNode *Less(size_t i);
        
        
    };
    
    ShiftOperatorContext *shiftOperator();
    
    class RelationalExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<ShiftExpressionContext *> shiftExpression();
        
        ShiftExpressionContext *shiftExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Less();
        
        antlr4::tree::TerminalNode *Less(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Greater();
        
        antlr4::tree::TerminalNode *Greater(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> LessEqual();
        
        antlr4::tree::TerminalNode *LessEqual(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> GreaterEqual();
        
        antlr4::tree::TerminalNode *GreaterEqual(size_t i);
        
        
    };
    
    RelationalExpressionContext *relationalExpression();
    
    class EqualityExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<RelationalExpressionContext *> relationalExpression();
        
        RelationalExpressionContext *relationalExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Equal();
        
        antlr4::tree::TerminalNode *Equal(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> NotEqual();
        
        antlr4::tree::TerminalNode *NotEqual(size_t i);
        
        
    };
    
    EqualityExpressionContext *equalityExpression();
    
    class AndExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<EqualityExpressionContext *> equalityExpression();
        
        EqualityExpressionContext *equalityExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> And();
        
        antlr4::tree::TerminalNode *And(size_t i);
        
        
    };
    
    AndExpressionContext *andExpression();
    
    class ExclusiveOrExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<AndExpressionContext *> andExpression();
        
        AndExpressionContext *andExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Caret();
        
        antlr4::tree::TerminalNode *Caret(size_t i);
        
        
    };
    
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    
    class InclusiveOrExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<ExclusiveOrExpressionContext *> exclusiveOrExpression();
        
        ExclusiveOrExpressionContext *exclusiveOrExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Or();
        
        antlr4::tree::TerminalNode *Or(size_t i);
        
        
    };
    
    InclusiveOrExpressionContext *inclusiveOrExpression();
    
    class LogicalAndExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
        
        InclusiveOrExpressionContext *inclusiveOrExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> AndAnd();
        
        antlr4::tree::TerminalNode *AndAnd(size_t i);
        
        
    };
    
    LogicalAndExpressionContext *logicalAndExpression();
    
    class LogicalOrExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<LogicalAndExpressionContext *> logicalAndExpression();
        
        LogicalAndExpressionContext *logicalAndExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> OrOr();
        
        antlr4::tree::TerminalNode *OrOr(size_t i);
        
        
    };
    
    LogicalOrExpressionContext *logicalOrExpression();
    
    class ConditionalExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        LogicalOrExpressionContext *logicalOrExpression();
        
        antlr4::tree::TerminalNode *Question();
        
        ExpressionContext *expression();
        
        antlr4::tree::TerminalNode *Colon();
        
        AssignmentExpressionContext *assignmentExpression();
        
        
    };
    
    ConditionalExpressionContext *conditionalExpression();
    
    class AssignmentExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ConditionalExpressionContext *conditionalExpression();
        
        LogicalOrExpressionContext *logicalOrExpression();
        
        AssignmentOperatorContext *assignmentOperator();
        
        InitializerClauseContext *initializerClause();
        
        ThrowExpressionContext *throwExpression();
        
        
    };
    
    AssignmentExpressionContext *assignmentExpression();
    
    class AssignmentOperatorContext : public antlr4::ParserRuleContext
    {
    public:
        AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Assign();
        
        antlr4::tree::TerminalNode *StarAssign();
        
        antlr4::tree::TerminalNode *DivAssign();
        
        antlr4::tree::TerminalNode *ModAssign();
        
        antlr4::tree::TerminalNode *PlusAssign();
        
        antlr4::tree::TerminalNode *MinusAssign();
        
        antlr4::tree::TerminalNode *RightShiftAssign();
        
        antlr4::tree::TerminalNode *LeftShiftAssign();
        
        antlr4::tree::TerminalNode *AndAssign();
        
        antlr4::tree::TerminalNode *XorAssign();
        
        antlr4::tree::TerminalNode *OrAssign();
        
        
    };
    
    AssignmentOperatorContext *assignmentOperator();
    
    class ExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<AssignmentExpressionContext *> assignmentExpression();
        
        AssignmentExpressionContext *assignmentExpression(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    ExpressionContext *expression();
    
    class ConstantExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ConditionalExpressionContext *conditionalExpression();
        
        
    };
    
    ConstantExpressionContext *constantExpression();
    
    class StatementContext : public antlr4::ParserRuleContext
    {
    public:
        StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        LabeledStatementContext *labeledStatement();
        
        DeclarationStatementContext *declarationStatement();
        
        ExpressionStatementContext *expressionStatement();
        
        CompoundStatementContext *compoundStatement();
        
        SelectionStatementContext *selectionStatement();
        
        IterationStatementContext *iterationStatement();
        
        JumpStatementContext *jumpStatement();
        
        TryBlockContext *tryBlock();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    StatementContext *statement();
    
    class LabeledStatementContext : public antlr4::ParserRuleContext
    {
    public:
        LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Colon();
        
        StatementContext *statement();
        
        antlr4::tree::TerminalNode *Identifier();
        
        antlr4::tree::TerminalNode *Case();
        
        ConstantExpressionContext *constantExpression();
        
        antlr4::tree::TerminalNode *Default();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    LabeledStatementContext *labeledStatement();
    
    class ExpressionStatementContext : public antlr4::ParserRuleContext
    {
    public:
        ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Semi();
        
        ExpressionContext *expression();
        
        
    };
    
    ExpressionStatementContext *expressionStatement();
    
    class CompoundStatementContext : public antlr4::ParserRuleContext
    {
    public:
        CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftBrace();
        
        antlr4::tree::TerminalNode *RightBrace();
        
        StatementSeqContext *statementSeq();
        
        
    };
    
    CompoundStatementContext *compoundStatement();
    
    class StatementSeqContext : public antlr4::ParserRuleContext
    {
    public:
        StatementSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<StatementContext *> statement();
        
        StatementContext *statement(size_t i);
        
        
    };
    
    StatementSeqContext *statementSeq();
    
    class SelectionStatementContext : public antlr4::ParserRuleContext
    {
    public:
        SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *If();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ConditionContext *condition();
        
        antlr4::tree::TerminalNode *RightParen();
        
        std::vector<StatementContext *> statement();
        
        StatementContext *statement(size_t i);
        
        antlr4::tree::TerminalNode *Else();
        
        antlr4::tree::TerminalNode *Switch();
        
        
    };
    
    SelectionStatementContext *selectionStatement();
    
    class ConditionContext : public antlr4::ParserRuleContext
    {
    public:
        ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ExpressionContext *expression();
        
        DeclSpecifierSeqContext *declSpecifierSeq();
        
        DeclaratorContext *declarator();
        
        antlr4::tree::TerminalNode *Assign();
        
        InitializerClauseContext *initializerClause();
        
        BracedInitListContext *bracedInitList();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    ConditionContext *condition();
    
    class IterationStatementContext : public antlr4::ParserRuleContext
    {
    public:
        IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *While();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ConditionContext *condition();
        
        antlr4::tree::TerminalNode *RightParen();
        
        StatementContext *statement();
        
        antlr4::tree::TerminalNode *Do();
        
        ExpressionContext *expression();
        
        antlr4::tree::TerminalNode *Semi();
        
        antlr4::tree::TerminalNode *For();
        
        ForInitStatementContext *forInitStatement();
        
        ForRangeDeclarationContext *forRangeDeclaration();
        
        antlr4::tree::TerminalNode *Colon();
        
        ForRangeInitializerContext *forRangeInitializer();
        
        
    };
    
    IterationStatementContext *iterationStatement();
    
    class ForInitStatementContext : public antlr4::ParserRuleContext
    {
    public:
        ForInitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ExpressionStatementContext *expressionStatement();
        
        SimpleDeclarationContext *simpleDeclaration();
        
        
    };
    
    ForInitStatementContext *forInitStatement();
    
    class ForRangeDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        ForRangeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        DeclSpecifierSeqContext *declSpecifierSeq();
        
        DeclaratorContext *declarator();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    ForRangeDeclarationContext *forRangeDeclaration();
    
    class ForRangeInitializerContext : public antlr4::ParserRuleContext
    {
    public:
        ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ExpressionContext *expression();
        
        BracedInitListContext *bracedInitList();
        
        
    };
    
    ForRangeInitializerContext *forRangeInitializer();
    
    class JumpStatementContext : public antlr4::ParserRuleContext
    {
    public:
        JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Semi();
        
        antlr4::tree::TerminalNode *Break();
        
        antlr4::tree::TerminalNode *Continue();
        
        antlr4::tree::TerminalNode *Return();
        
        antlr4::tree::TerminalNode *Goto();
        
        antlr4::tree::TerminalNode *Identifier();
        
        ExpressionContext *expression();
        
        BracedInitListContext *bracedInitList();
        
        
    };
    
    JumpStatementContext *jumpStatement();
    
    class DeclarationStatementContext : public antlr4::ParserRuleContext
    {
    public:
        DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        BlockDeclarationContext *blockDeclaration();
        
        
    };
    
    DeclarationStatementContext *declarationStatement();
    
    class DeclarationseqContext : public antlr4::ParserRuleContext
    {
    public:
        DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<DeclarationContext *> declaration();
        
        DeclarationContext *declaration(size_t i);
        
        
    };
    
    DeclarationseqContext *declarationseq();
    
    class DeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        BlockDeclarationContext *blockDeclaration();
        
        FunctionDefinitionContext *functionDefinition();
        
        TemplateDeclarationContext *templateDeclaration();
        
        ExplicitInstantiationContext *explicitInstantiation();
        
        ExplicitSpecializationContext *explicitSpecialization();
        
        LinkageSpecificationContext *linkageSpecification();
        
        NamespaceDefinitionContext *namespaceDefinition();
        
        EmptyDeclaration_Context *emptyDeclaration_();
        
        AttributeDeclarationContext *attributeDeclaration();
        
        
    };
    
    DeclarationContext *declaration();
    
    class BlockDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        BlockDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        SimpleDeclarationContext *simpleDeclaration();
        
        AsmDefinitionContext *asmDefinition();
        
        NamespaceAliasDefinitionContext *namespaceAliasDefinition();
        
        UsingDeclarationContext *usingDeclaration();
        
        UsingDirectiveContext *usingDirective();
        
        StaticAssertDeclarationContext *staticAssertDeclaration();
        
        AliasDeclarationContext *aliasDeclaration();
        
        OpaqueEnumDeclarationContext *opaqueEnumDeclaration();
        
        
    };
    
    BlockDeclarationContext *blockDeclaration();
    
    class AliasDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        AliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Using();
        
        antlr4::tree::TerminalNode *Identifier();
        
        antlr4::tree::TerminalNode *Assign();
        
        TheTypeIdContext *theTypeId();
        
        antlr4::tree::TerminalNode *Semi();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    AliasDeclarationContext *aliasDeclaration();
    
    class SimpleDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        SimpleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Semi();
        
        DeclSpecifierSeqContext *declSpecifierSeq();
        
        InitDeclaratorListContext *initDeclaratorList();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    SimpleDeclarationContext *simpleDeclaration();
    
    class StaticAssertDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        StaticAssertDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Static_assert();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ConstantExpressionContext *constantExpression();
        
        antlr4::tree::TerminalNode *Comma();
        
        antlr4::tree::TerminalNode *StringLiteral();
        
        antlr4::tree::TerminalNode *RightParen();
        
        antlr4::tree::TerminalNode *Semi();
        
        
    };
    
    StaticAssertDeclarationContext *staticAssertDeclaration();
    
    class EmptyDeclaration_Context : public antlr4::ParserRuleContext
    {
    public:
        EmptyDeclaration_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Semi();
        
        
    };
    
    EmptyDeclaration_Context *emptyDeclaration_();
    
    class AttributeDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        AttributeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        antlr4::tree::TerminalNode *Semi();
        
        
    };
    
    AttributeDeclarationContext *attributeDeclaration();
    
    class DeclSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        DeclSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        StorageClassSpecifierContext *storageClassSpecifier();
        
        TypeSpecifierContext *typeSpecifier();
        
        FunctionSpecifierContext *functionSpecifier();
        
        antlr4::tree::TerminalNode *Friend();
        
        antlr4::tree::TerminalNode *Typedef();
        
        antlr4::tree::TerminalNode *Constexpr();
        
        
    };
    
    DeclSpecifierContext *declSpecifier();
    
    class DeclSpecifierSeqContext : public antlr4::ParserRuleContext
    {
    public:
        DeclSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<DeclSpecifierContext *> declSpecifier();
        
        DeclSpecifierContext *declSpecifier(size_t i);
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    DeclSpecifierSeqContext *declSpecifierSeq();
    
    class StorageClassSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        StorageClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Register();
        
        antlr4::tree::TerminalNode *Static();
        
        antlr4::tree::TerminalNode *Thread_local();
        
        antlr4::tree::TerminalNode *Extern();
        
        antlr4::tree::TerminalNode *Mutable();
        
        
    };
    
    StorageClassSpecifierContext *storageClassSpecifier();
    
    class FunctionSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        FunctionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Inline();
        
        antlr4::tree::TerminalNode *Virtual();
        
        antlr4::tree::TerminalNode *Explicit();
        
        
    };
    
    FunctionSpecifierContext *functionSpecifier();
    
    class TypedefNameContext : public antlr4::ParserRuleContext
    {
    public:
        TypedefNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    TypedefNameContext *typedefName();
    
    class TypeSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TrailingTypeSpecifierContext *trailingTypeSpecifier();
        
        ClassSpecifierContext *classSpecifier();
        
        EnumSpecifierContext *enumSpecifier();
        
        
    };
    
    TypeSpecifierContext *typeSpecifier();
    
    class TrailingTypeSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        TrailingTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        SimpleTypeSpecifierContext *simpleTypeSpecifier();
        
        ElaboratedTypeSpecifierContext *elaboratedTypeSpecifier();
        
        TypeNameSpecifierContext *typeNameSpecifier();
        
        CvQualifierContext *cvQualifier();
        
        
    };
    
    TrailingTypeSpecifierContext *trailingTypeSpecifier();
    
    class TypeSpecifierSeqContext : public antlr4::ParserRuleContext
    {
    public:
        TypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<TypeSpecifierContext *> typeSpecifier();
        
        TypeSpecifierContext *typeSpecifier(size_t i);
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    TypeSpecifierSeqContext *typeSpecifierSeq();
    
    class TrailingTypeSpecifierSeqContext : public antlr4::ParserRuleContext
    {
    public:
        TrailingTypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<TrailingTypeSpecifierContext *> trailingTypeSpecifier();
        
        TrailingTypeSpecifierContext *trailingTypeSpecifier(size_t i);
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    TrailingTypeSpecifierSeqContext *trailingTypeSpecifierSeq();
    
    class SimpleTypeLengthModifierContext : public antlr4::ParserRuleContext
    {
    public:
        SimpleTypeLengthModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Short();
        
        antlr4::tree::TerminalNode *Long();
        
        
    };
    
    SimpleTypeLengthModifierContext *simpleTypeLengthModifier();
    
    class SimpleTypeSignednessModifierContext : public antlr4::ParserRuleContext
    {
    public:
        SimpleTypeSignednessModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Unsigned();
        
        antlr4::tree::TerminalNode *Signed();
        
        
    };
    
    SimpleTypeSignednessModifierContext *simpleTypeSignednessModifier();
    
    class SimpleTypeSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        SimpleTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TheTypeNameContext *theTypeName();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        antlr4::tree::TerminalNode *Template();
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        antlr4::tree::TerminalNode *Char();
        
        antlr4::tree::TerminalNode *Char16();
        
        antlr4::tree::TerminalNode *Char32();
        
        antlr4::tree::TerminalNode *Wchar();
        
        antlr4::tree::TerminalNode *Bool();
        
        antlr4::tree::TerminalNode *Short();
        
        antlr4::tree::TerminalNode *Int();
        
        antlr4::tree::TerminalNode *Long();
        
        antlr4::tree::TerminalNode *Float();
        
        antlr4::tree::TerminalNode *Signed();
        
        antlr4::tree::TerminalNode *Unsigned();
        
        antlr4::tree::TerminalNode *Double();
        
        antlr4::tree::TerminalNode *Void();
        
        antlr4::tree::TerminalNode *Auto();
        
        DecltypeSpecifierContext *decltypeSpecifier();
        
        
    };
    
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    
    class TheTypeNameContext : public antlr4::ParserRuleContext
    {
    public:
        TheTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassNameContext *className();
        
        EnumNameContext *enumName();
        
        TypedefNameContext *typedefName();
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        
    };
    
    TheTypeNameContext *theTypeName();
    
    class DecltypeSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        DecltypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Decltype();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        ExpressionContext *expression();
        
        antlr4::tree::TerminalNode *Auto();
        
        
    };
    
    DecltypeSpecifierContext *decltypeSpecifier();
    
    class ElaboratedTypeSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        ElaboratedTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassKeyContext *classKey();
        
        antlr4::tree::TerminalNode *Identifier();
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        antlr4::tree::TerminalNode *Template();
        
        antlr4::tree::TerminalNode *Enum();
        
        
    };
    
    ElaboratedTypeSpecifierContext *elaboratedTypeSpecifier();
    
    class EnumNameContext : public antlr4::ParserRuleContext
    {
    public:
        EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    EnumNameContext *enumName();
    
    class EnumSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        EnumHeadContext *enumHead();
        
        antlr4::tree::TerminalNode *LeftBrace();
        
        antlr4::tree::TerminalNode *RightBrace();
        
        EnumeratorListContext *enumeratorList();
        
        antlr4::tree::TerminalNode *Comma();
        
        
    };
    
    EnumSpecifierContext *enumSpecifier();
    
    class EnumHeadContext : public antlr4::ParserRuleContext
    {
    public:
        EnumHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        EnumkeyContext *enumkey();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        antlr4::tree::TerminalNode *Identifier();
        
        EnumbaseContext *enumbase();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        
    };
    
    EnumHeadContext *enumHead();
    
    class OpaqueEnumDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        OpaqueEnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        EnumkeyContext *enumkey();
        
        antlr4::tree::TerminalNode *Identifier();
        
        antlr4::tree::TerminalNode *Semi();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        EnumbaseContext *enumbase();
        
        
    };
    
    OpaqueEnumDeclarationContext *opaqueEnumDeclaration();
    
    class EnumkeyContext : public antlr4::ParserRuleContext
    {
    public:
        EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Enum();
        
        antlr4::tree::TerminalNode *Class();
        
        antlr4::tree::TerminalNode *Struct();
        
        
    };
    
    EnumkeyContext *enumkey();
    
    class EnumbaseContext : public antlr4::ParserRuleContext
    {
    public:
        EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Colon();
        
        TypeSpecifierSeqContext *typeSpecifierSeq();
        
        
    };
    
    EnumbaseContext *enumbase();
    
    class EnumeratorListContext : public antlr4::ParserRuleContext
    {
    public:
        EnumeratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<EnumeratorDefinitionContext *> enumeratorDefinition();
        
        EnumeratorDefinitionContext *enumeratorDefinition(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    EnumeratorListContext *enumeratorList();
    
    class EnumeratorDefinitionContext : public antlr4::ParserRuleContext
    {
    public:
        EnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        EnumeratorContext *enumerator();
        
        antlr4::tree::TerminalNode *Assign();
        
        ConstantExpressionContext *constantExpression();
        
        
    };
    
    EnumeratorDefinitionContext *enumeratorDefinition();
    
    class EnumeratorContext : public antlr4::ParserRuleContext
    {
    public:
        EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    EnumeratorContext *enumerator();
    
    class NamespaceNameContext : public antlr4::ParserRuleContext
    {
    public:
        NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        OriginalNamespaceNameContext *originalNamespaceName();
        
        NamespaceAliasContext *namespaceAlias();
        
        
    };
    
    NamespaceNameContext *namespaceName();
    
    class OriginalNamespaceNameContext : public antlr4::ParserRuleContext
    {
    public:
        OriginalNamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    OriginalNamespaceNameContext *originalNamespaceName();
    
    class NamespaceDefinitionContext : public antlr4::ParserRuleContext
    {
    public:
        CPP14Parser::DeclarationseqContext *namespaceBody = nullptr;
        
        NamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Namespace();
        
        antlr4::tree::TerminalNode *LeftBrace();
        
        antlr4::tree::TerminalNode *RightBrace();
        
        antlr4::tree::TerminalNode *Inline();
        
        antlr4::tree::TerminalNode *Identifier();
        
        OriginalNamespaceNameContext *originalNamespaceName();
        
        DeclarationseqContext *declarationseq();
        
        
    };
    
    NamespaceDefinitionContext *namespaceDefinition();
    
    class NamespaceAliasContext : public antlr4::ParserRuleContext
    {
    public:
        NamespaceAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    NamespaceAliasContext *namespaceAlias();
    
    class NamespaceAliasDefinitionContext : public antlr4::ParserRuleContext
    {
    public:
        NamespaceAliasDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Namespace();
        
        antlr4::tree::TerminalNode *Identifier();
        
        antlr4::tree::TerminalNode *Assign();
        
        QualifiednamespacespecifierContext *qualifiednamespacespecifier();
        
        antlr4::tree::TerminalNode *Semi();
        
        
    };
    
    NamespaceAliasDefinitionContext *namespaceAliasDefinition();
    
    class QualifiednamespacespecifierContext : public antlr4::ParserRuleContext
    {
    public:
        QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        NamespaceNameContext *namespaceName();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        
    };
    
    QualifiednamespacespecifierContext *qualifiednamespacespecifier();
    
    class UsingDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        UsingDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Using();
        
        UnqualifiedIdContext *unqualifiedId();
        
        antlr4::tree::TerminalNode *Semi();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        antlr4::tree::TerminalNode *Doublecolon();
        
        antlr4::tree::TerminalNode *Typename_();
        
        
    };
    
    UsingDeclarationContext *usingDeclaration();
    
    class UsingDirectiveContext : public antlr4::ParserRuleContext
    {
    public:
        UsingDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Using();
        
        antlr4::tree::TerminalNode *Namespace();
        
        NamespaceNameContext *namespaceName();
        
        antlr4::tree::TerminalNode *Semi();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        
    };
    
    UsingDirectiveContext *usingDirective();
    
    class AsmDefinitionContext : public antlr4::ParserRuleContext
    {
    public:
        AsmDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Asm();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *StringLiteral();
        
        antlr4::tree::TerminalNode *RightParen();
        
        antlr4::tree::TerminalNode *Semi();
        
        
    };
    
    AsmDefinitionContext *asmDefinition();
    
    class LinkageSpecificationContext : public antlr4::ParserRuleContext
    {
    public:
        LinkageSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Extern();
        
        antlr4::tree::TerminalNode *StringLiteral();
        
        antlr4::tree::TerminalNode *LeftBrace();
        
        antlr4::tree::TerminalNode *RightBrace();
        
        DeclarationContext *declaration();
        
        DeclarationseqContext *declarationseq();
        
        
    };
    
    LinkageSpecificationContext *linkageSpecification();
    
    class AttributeSpecifierSeqContext : public antlr4::ParserRuleContext
    {
    public:
        AttributeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<AttributeSpecifierContext *> attributeSpecifier();
        
        AttributeSpecifierContext *attributeSpecifier(size_t i);
        
        
    };
    
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    
    class AttributeSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<antlr4::tree::TerminalNode *> LeftBracket();
        
        antlr4::tree::TerminalNode *LeftBracket(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> RightBracket();
        
        antlr4::tree::TerminalNode *RightBracket(size_t i);
        
        AttributeListContext *attributeList();
        
        AlignmentspecifierContext *alignmentspecifier();
        
        
    };
    
    AttributeSpecifierContext *attributeSpecifier();
    
    class AlignmentspecifierContext : public antlr4::ParserRuleContext
    {
    public:
        AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Alignas();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        TheTypeIdContext *theTypeId();
        
        ConstantExpressionContext *constantExpression();
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        
    };
    
    AlignmentspecifierContext *alignmentspecifier();
    
    class AttributeListContext : public antlr4::ParserRuleContext
    {
    public:
        AttributeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<AttributeContext *> attribute();
        
        AttributeContext *attribute(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        
    };
    
    AttributeListContext *attributeList();
    
    class AttributeContext : public antlr4::ParserRuleContext
    {
    public:
        AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        AttributeNamespaceContext *attributeNamespace();
        
        antlr4::tree::TerminalNode *Doublecolon();
        
        AttributeArgumentClauseContext *attributeArgumentClause();
        
        
    };
    
    AttributeContext *attribute();
    
    class AttributeNamespaceContext : public antlr4::ParserRuleContext
    {
    public:
        AttributeNamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    AttributeNamespaceContext *attributeNamespace();
    
    class AttributeArgumentClauseContext : public antlr4::ParserRuleContext
    {
    public:
        AttributeArgumentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        BalancedTokenSeqContext *balancedTokenSeq();
        
        
    };
    
    AttributeArgumentClauseContext *attributeArgumentClause();
    
    class BalancedTokenSeqContext : public antlr4::ParserRuleContext
    {
    public:
        BalancedTokenSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<BalancedtokenContext *> balancedtoken();
        
        BalancedtokenContext *balancedtoken(size_t i);
        
        
    };
    
    BalancedTokenSeqContext *balancedTokenSeq();
    
    class BalancedtokenContext : public antlr4::ParserRuleContext
    {
    public:
        BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<antlr4::tree::TerminalNode *> LeftParen();
        
        antlr4::tree::TerminalNode *LeftParen(size_t i);
        
        BalancedTokenSeqContext *balancedTokenSeq();
        
        std::vector<antlr4::tree::TerminalNode *> RightParen();
        
        antlr4::tree::TerminalNode *RightParen(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> LeftBracket();
        
        antlr4::tree::TerminalNode *LeftBracket(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> RightBracket();
        
        antlr4::tree::TerminalNode *RightBracket(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> LeftBrace();
        
        antlr4::tree::TerminalNode *LeftBrace(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> RightBrace();
        
        antlr4::tree::TerminalNode *RightBrace(size_t i);
        
        
    };
    
    BalancedtokenContext *balancedtoken();
    
    class InitDeclaratorListContext : public antlr4::ParserRuleContext
    {
    public:
        InitDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<InitDeclaratorContext *> initDeclarator();
        
        InitDeclaratorContext *initDeclarator(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    InitDeclaratorListContext *initDeclaratorList();
    
    class InitDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        InitDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        DeclaratorContext *declarator();
        
        InitializerContext *initializer();
        
        
    };
    
    InitDeclaratorContext *initDeclarator();
    
    class DeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        PointerDeclaratorContext *pointerDeclarator();
        
        NoPointerDeclaratorContext *noPointerDeclarator();
        
        ParametersAndQualifiersContext *parametersAndQualifiers();
        
        TrailingReturnTypeContext *trailingReturnType();
        
        
    };
    
    DeclaratorContext *declarator();
    
    class PointerDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        PointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        NoPointerDeclaratorContext *noPointerDeclarator();
        
        std::vector<PointerOperatorContext *> pointerOperator();
        
        PointerOperatorContext *pointerOperator(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Const();
        
        antlr4::tree::TerminalNode *Const(size_t i);
        
        
    };
    
    PointerDeclaratorContext *pointerDeclarator();
    
    class NoPointerDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        NoPointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        DeclaratoridContext *declaratorid();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        PointerDeclaratorContext *pointerDeclarator();
        
        antlr4::tree::TerminalNode *RightParen();
        
        NoPointerDeclaratorContext *noPointerDeclarator();
        
        ParametersAndQualifiersContext *parametersAndQualifiers();
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        ConstantExpressionContext *constantExpression();
        
        
    };
    
    NoPointerDeclaratorContext *noPointerDeclarator();
    
    NoPointerDeclaratorContext *noPointerDeclarator(int precedence);
    
    class ParametersAndQualifiersContext : public antlr4::ParserRuleContext
    {
    public:
        ParametersAndQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        ParameterDeclarationClauseContext *parameterDeclarationClause();
        
        CvqualifierseqContext *cvqualifierseq();
        
        RefqualifierContext *refqualifier();
        
        ExceptionSpecificationContext *exceptionSpecification();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    ParametersAndQualifiersContext *parametersAndQualifiers();
    
    class TrailingReturnTypeContext : public antlr4::ParserRuleContext
    {
    public:
        TrailingReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Arrow();
        
        TrailingTypeSpecifierSeqContext *trailingTypeSpecifierSeq();
        
        AbstractDeclaratorContext *abstractDeclarator();
        
        
    };
    
    TrailingReturnTypeContext *trailingReturnType();
    
    class PointerOperatorContext : public antlr4::ParserRuleContext
    {
    public:
        PointerOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *And();
        
        antlr4::tree::TerminalNode *AndAnd();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        antlr4::tree::TerminalNode *Star();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        CvqualifierseqContext *cvqualifierseq();
        
        
    };
    
    PointerOperatorContext *pointerOperator();
    
    class CvqualifierseqContext : public antlr4::ParserRuleContext
    {
    public:
        CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<CvQualifierContext *> cvQualifier();
        
        CvQualifierContext *cvQualifier(size_t i);
        
        
    };
    
    CvqualifierseqContext *cvqualifierseq();
    
    class CvQualifierContext : public antlr4::ParserRuleContext
    {
    public:
        CvQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Const();
        
        antlr4::tree::TerminalNode *Volatile();
        
        
    };
    
    CvQualifierContext *cvQualifier();
    
    class RefqualifierContext : public antlr4::ParserRuleContext
    {
    public:
        RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *And();
        
        antlr4::tree::TerminalNode *AndAnd();
        
        
    };
    
    RefqualifierContext *refqualifier();
    
    class DeclaratoridContext : public antlr4::ParserRuleContext
    {
    public:
        DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        IdExpressionContext *idExpression();
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        
    };
    
    DeclaratoridContext *declaratorid();
    
    class TheTypeIdContext : public antlr4::ParserRuleContext
    {
    public:
        TheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TypeSpecifierSeqContext *typeSpecifierSeq();
        
        AbstractDeclaratorContext *abstractDeclarator();
        
        
    };
    
    TheTypeIdContext *theTypeId();
    
    class AbstractDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        AbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
        
        ParametersAndQualifiersContext *parametersAndQualifiers();
        
        TrailingReturnTypeContext *trailingReturnType();
        
        NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
        
        AbstractPackDeclaratorContext *abstractPackDeclarator();
        
        
    };
    
    AbstractDeclaratorContext *abstractDeclarator();
    
    class PointerAbstractDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        PointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
        
        std::vector<PointerOperatorContext *> pointerOperator();
        
        PointerOperatorContext *pointerOperator(size_t i);
        
        
    };
    
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    
    class NoPointerAbstractDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        NoPointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ParametersAndQualifiersContext *parametersAndQualifiers();
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        ConstantExpressionContext *constantExpression();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
        
        antlr4::tree::TerminalNode *RightParen();
        
        std::vector<NoPointerAbstractDeclaratorContext *> noPointerAbstractDeclarator();
        
        NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator(size_t i);
        
        
    };
    
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
    
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator(int precedence);
    
    class AbstractPackDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        AbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
        
        std::vector<PointerOperatorContext *> pointerOperator();
        
        PointerOperatorContext *pointerOperator(size_t i);
        
        
    };
    
    AbstractPackDeclaratorContext *abstractPackDeclarator();
    
    class NoPointerAbstractPackDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        NoPointerAbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
        
        ParametersAndQualifiersContext *parametersAndQualifiers();
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        ConstantExpressionContext *constantExpression();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
    
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator(int precedence);
    
    class ParameterDeclarationClauseContext : public antlr4::ParserRuleContext
    {
    public:
        ParameterDeclarationClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ParameterDeclarationListContext *parameterDeclarationList();
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        antlr4::tree::TerminalNode *Comma();
        
        
    };
    
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    
    class ParameterDeclarationListContext : public antlr4::ParserRuleContext
    {
    public:
        ParameterDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<ParameterDeclarationContext *> parameterDeclaration();
        
        ParameterDeclarationContext *parameterDeclaration(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    ParameterDeclarationListContext *parameterDeclarationList();
    
    class ParameterDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        DeclSpecifierSeqContext *declSpecifierSeq();
        
        DeclaratorContext *declarator();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        antlr4::tree::TerminalNode *Assign();
        
        InitializerClauseContext *initializerClause();
        
        AbstractDeclaratorContext *abstractDeclarator();
        
        
    };
    
    ParameterDeclarationContext *parameterDeclaration();
    
    class FunctionDefinitionContext : public antlr4::ParserRuleContext
    {
    public:
        FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        DeclaratorContext *declarator();
        
        FunctionBodyContext *functionBody();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        DeclSpecifierSeqContext *declSpecifierSeq();
        
        VirtualSpecifierSeqContext *virtualSpecifierSeq();
        
        
    };
    
    FunctionDefinitionContext *functionDefinition();
    
    class FunctionBodyContext : public antlr4::ParserRuleContext
    {
    public:
        FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        CompoundStatementContext *compoundStatement();
        
        ConstructorInitializerContext *constructorInitializer();
        
        FunctionTryBlockContext *functionTryBlock();
        
        antlr4::tree::TerminalNode *Assign();
        
        antlr4::tree::TerminalNode *Semi();
        
        antlr4::tree::TerminalNode *Default();
        
        antlr4::tree::TerminalNode *Delete();
        
        
    };
    
    FunctionBodyContext *functionBody();
    
    class InitializerContext : public antlr4::ParserRuleContext
    {
    public:
        InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        BraceOrEqualInitializerContext *braceOrEqualInitializer();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ExpressionListContext *expressionList();
        
        antlr4::tree::TerminalNode *RightParen();
        
        
    };
    
    InitializerContext *initializer();
    
    class BraceOrEqualInitializerContext : public antlr4::ParserRuleContext
    {
    public:
        BraceOrEqualInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Assign();
        
        InitializerClauseContext *initializerClause();
        
        BracedInitListContext *bracedInitList();
        
        
    };
    
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    
    class InitializerClauseContext : public antlr4::ParserRuleContext
    {
    public:
        InitializerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        AssignmentExpressionContext *assignmentExpression();
        
        BracedInitListContext *bracedInitList();
        
        
    };
    
    InitializerClauseContext *initializerClause();
    
    class InitializerListContext : public antlr4::ParserRuleContext
    {
    public:
        InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<InitializerClauseContext *> initializerClause();
        
        InitializerClauseContext *initializerClause(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Ellipsis();
        
        antlr4::tree::TerminalNode *Ellipsis(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    InitializerListContext *initializerList();
    
    class BracedInitListContext : public antlr4::ParserRuleContext
    {
    public:
        BracedInitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *LeftBrace();
        
        antlr4::tree::TerminalNode *RightBrace();
        
        InitializerListContext *initializerList();
        
        antlr4::tree::TerminalNode *Comma();
        
        
    };
    
    BracedInitListContext *bracedInitList();
    
    class ClassNameContext : public antlr4::ParserRuleContext
    {
    public:
        ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        
    };
    
    ClassNameContext *className();
    
    class ClassSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        ClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassHeadContext *classHead();
        
        antlr4::tree::TerminalNode *LeftBrace();
        
        antlr4::tree::TerminalNode *RightBrace();
        
        MemberSpecificationContext *memberSpecification();
        
        
    };
    
    ClassSpecifierContext *classSpecifier();
    
    class ClassHeadContext : public antlr4::ParserRuleContext
    {
    public:
        ClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassKeyContext *classKey();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        ClassHeadNameContext *classHeadName();
        
        BaseClauseContext *baseClause();
        
        ClassVirtSpecifierContext *classVirtSpecifier();
        
        antlr4::tree::TerminalNode *Union();
        
        
    };
    
    ClassHeadContext *classHead();
    
    class ClassHeadNameContext : public antlr4::ParserRuleContext
    {
    public:
        ClassHeadNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassNameContext *className();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        
    };
    
    ClassHeadNameContext *classHeadName();
    
    class ClassVirtSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        ClassVirtSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Final();
        
        
    };
    
    ClassVirtSpecifierContext *classVirtSpecifier();
    
    class ClassKeyContext : public antlr4::ParserRuleContext
    {
    public:
        ClassKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Class();
        
        antlr4::tree::TerminalNode *Struct();
        
        
    };
    
    ClassKeyContext *classKey();
    
    class MemberSpecificationContext : public antlr4::ParserRuleContext
    {
    public:
        MemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<MemberdeclarationContext *> memberdeclaration();
        
        MemberdeclarationContext *memberdeclaration(size_t i);
        
        std::vector<AccessSpecifierContext *> accessSpecifier();
        
        AccessSpecifierContext *accessSpecifier(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Colon();
        
        antlr4::tree::TerminalNode *Colon(size_t i);
        
        
    };
    
    MemberSpecificationContext *memberSpecification();
    
    class MemberdeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Semi();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        DeclSpecifierSeqContext *declSpecifierSeq();
        
        MemberDeclaratorListContext *memberDeclaratorList();
        
        FunctionDefinitionContext *functionDefinition();
        
        UsingDeclarationContext *usingDeclaration();
        
        StaticAssertDeclarationContext *staticAssertDeclaration();
        
        TemplateDeclarationContext *templateDeclaration();
        
        AliasDeclarationContext *aliasDeclaration();
        
        EmptyDeclaration_Context *emptyDeclaration_();
        
        
    };
    
    MemberdeclarationContext *memberdeclaration();
    
    class MemberDeclaratorListContext : public antlr4::ParserRuleContext
    {
    public:
        MemberDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<MemberDeclaratorContext *> memberDeclarator();
        
        MemberDeclaratorContext *memberDeclarator(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    MemberDeclaratorListContext *memberDeclaratorList();
    
    class MemberDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        MemberDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        DeclaratorContext *declarator();
        
        VirtualSpecifierSeqContext *virtualSpecifierSeq();
        
        PureSpecifierContext *pureSpecifier();
        
        BraceOrEqualInitializerContext *braceOrEqualInitializer();
        
        antlr4::tree::TerminalNode *Colon();
        
        ConstantExpressionContext *constantExpression();
        
        antlr4::tree::TerminalNode *Identifier();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    MemberDeclaratorContext *memberDeclarator();
    
    class VirtualSpecifierSeqContext : public antlr4::ParserRuleContext
    {
    public:
        VirtualSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<VirtualSpecifierContext *> virtualSpecifier();
        
        VirtualSpecifierContext *virtualSpecifier(size_t i);
        
        
    };
    
    VirtualSpecifierSeqContext *virtualSpecifierSeq();
    
    class VirtualSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        VirtualSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Override();
        
        antlr4::tree::TerminalNode *Final();
        
        
    };
    
    VirtualSpecifierContext *virtualSpecifier();
    
    class PureSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        PureSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Assign();
        
        antlr4::tree::TerminalNode *IntegerLiteral();
        
        
    };
    
    PureSpecifierContext *pureSpecifier();
    
    class BaseClauseContext : public antlr4::ParserRuleContext
    {
    public:
        BaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Colon();
        
        BaseSpecifierListContext *baseSpecifierList();
        
        
    };
    
    BaseClauseContext *baseClause();
    
    class BaseSpecifierListContext : public antlr4::ParserRuleContext
    {
    public:
        BaseSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<BaseSpecifierContext *> baseSpecifier();
        
        BaseSpecifierContext *baseSpecifier(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Ellipsis();
        
        antlr4::tree::TerminalNode *Ellipsis(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    BaseSpecifierListContext *baseSpecifierList();
    
    class BaseSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        BaseSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        BaseTypeSpecifierContext *baseTypeSpecifier();
        
        antlr4::tree::TerminalNode *Virtual();
        
        AccessSpecifierContext *accessSpecifier();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        
    };
    
    BaseSpecifierContext *baseSpecifier();
    
    class ClassOrDeclTypeContext : public antlr4::ParserRuleContext
    {
    public:
        ClassOrDeclTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassNameContext *className();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        DecltypeSpecifierContext *decltypeSpecifier();
        
        
    };
    
    ClassOrDeclTypeContext *classOrDeclType();
    
    class BaseTypeSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        BaseTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassOrDeclTypeContext *classOrDeclType();
        
        
    };
    
    BaseTypeSpecifierContext *baseTypeSpecifier();
    
    class AccessSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Private();
        
        antlr4::tree::TerminalNode *Protected();
        
        antlr4::tree::TerminalNode *Public();
        
        
    };
    
    AccessSpecifierContext *accessSpecifier();
    
    class ConversionFunctionIdContext : public antlr4::ParserRuleContext
    {
    public:
        ConversionFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Operator();
        
        ConversionTypeIdContext *conversionTypeId();
        
        
    };
    
    ConversionFunctionIdContext *conversionFunctionId();
    
    class ConversionTypeIdContext : public antlr4::ParserRuleContext
    {
    public:
        ConversionTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TypeSpecifierSeqContext *typeSpecifierSeq();
        
        ConversionDeclaratorContext *conversionDeclarator();
        
        
    };
    
    ConversionTypeIdContext *conversionTypeId();
    
    class ConversionDeclaratorContext : public antlr4::ParserRuleContext
    {
    public:
        ConversionDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        PointerOperatorContext *pointerOperator();
        
        ConversionDeclaratorContext *conversionDeclarator();
        
        
    };
    
    ConversionDeclaratorContext *conversionDeclarator();
    
    class ConstructorInitializerContext : public antlr4::ParserRuleContext
    {
    public:
        ConstructorInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Colon();
        
        MemInitializerListContext *memInitializerList();
        
        
    };
    
    ConstructorInitializerContext *constructorInitializer();
    
    class MemInitializerListContext : public antlr4::ParserRuleContext
    {
    public:
        MemInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<MemInitializerContext *> memInitializer();
        
        MemInitializerContext *memInitializer(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Ellipsis();
        
        antlr4::tree::TerminalNode *Ellipsis(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    MemInitializerListContext *memInitializerList();
    
    class MemInitializerContext : public antlr4::ParserRuleContext
    {
    public:
        MemInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        MeminitializeridContext *meminitializerid();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        BracedInitListContext *bracedInitList();
        
        ExpressionListContext *expressionList();
        
        
    };
    
    MemInitializerContext *memInitializer();
    
    class MeminitializeridContext : public antlr4::ParserRuleContext
    {
    public:
        MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        ClassOrDeclTypeContext *classOrDeclType();
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    MeminitializeridContext *meminitializerid();
    
    class OperatorFunctionIdContext : public antlr4::ParserRuleContext
    {
    public:
        OperatorFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Operator();
        
        TheOperatorContext *theOperator();
        
        
    };
    
    OperatorFunctionIdContext *operatorFunctionId();
    
    class LiteralOperatorIdContext : public antlr4::ParserRuleContext
    {
    public:
        LiteralOperatorIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Operator();
        
        antlr4::tree::TerminalNode *StringLiteral();
        
        antlr4::tree::TerminalNode *Identifier();
        
        antlr4::tree::TerminalNode *UserDefinedStringLiteral();
        
        
    };
    
    LiteralOperatorIdContext *literalOperatorId();
    
    class TemplateDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        TemplateDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Template();
        
        antlr4::tree::TerminalNode *Less();
        
        TemplateparameterListContext *templateparameterList();
        
        antlr4::tree::TerminalNode *Greater();
        
        DeclarationContext *declaration();
        
        
    };
    
    TemplateDeclarationContext *templateDeclaration();
    
    class TemplateparameterListContext : public antlr4::ParserRuleContext
    {
    public:
        TemplateparameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<TemplateParameterContext *> templateParameter();
        
        TemplateParameterContext *templateParameter(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    TemplateparameterListContext *templateparameterList();
    
    class TemplateParameterContext : public antlr4::ParserRuleContext
    {
    public:
        TemplateParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TypeParameterContext *typeParameter();
        
        ParameterDeclarationContext *parameterDeclaration();
        
        
    };
    
    TemplateParameterContext *templateParameter();
    
    class TypeParameterContext : public antlr4::ParserRuleContext
    {
    public:
        TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Class();
        
        antlr4::tree::TerminalNode *Typename_();
        
        antlr4::tree::TerminalNode *Assign();
        
        TheTypeIdContext *theTypeId();
        
        antlr4::tree::TerminalNode *Template();
        
        antlr4::tree::TerminalNode *Less();
        
        TemplateparameterListContext *templateparameterList();
        
        antlr4::tree::TerminalNode *Greater();
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    TypeParameterContext *typeParameter();
    
    class SimpleTemplateIdContext : public antlr4::ParserRuleContext
    {
    public:
        SimpleTemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TemplateNameContext *templateName();
        
        antlr4::tree::TerminalNode *Less();
        
        antlr4::tree::TerminalNode *Greater();
        
        TemplateArgumentListContext *templateArgumentList();
        
        
    };
    
    SimpleTemplateIdContext *simpleTemplateId();
    
    class TemplateIdContext : public antlr4::ParserRuleContext
    {
    public:
        TemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        antlr4::tree::TerminalNode *Less();
        
        antlr4::tree::TerminalNode *Greater();
        
        OperatorFunctionIdContext *operatorFunctionId();
        
        LiteralOperatorIdContext *literalOperatorId();
        
        TemplateArgumentListContext *templateArgumentList();
        
        
    };
    
    TemplateIdContext *templateId();
    
    class TemplateNameContext : public antlr4::ParserRuleContext
    {
    public:
        TemplateNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Identifier();
        
        
    };
    
    TemplateNameContext *templateName();
    
    class TemplateArgumentListContext : public antlr4::ParserRuleContext
    {
    public:
        TemplateArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<TemplateArgumentContext *> templateArgument();
        
        TemplateArgumentContext *templateArgument(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Ellipsis();
        
        antlr4::tree::TerminalNode *Ellipsis(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    TemplateArgumentListContext *templateArgumentList();
    
    class TemplateArgumentContext : public antlr4::ParserRuleContext
    {
    public:
        TemplateArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TheTypeIdContext *theTypeId();
        
        ConstantExpressionContext *constantExpression();
        
        IdExpressionContext *idExpression();
        
        
    };
    
    TemplateArgumentContext *templateArgument();
    
    class TypeNameSpecifierContext : public antlr4::ParserRuleContext
    {
    public:
        TypeNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Typename_();
        
        NestedNameSpecifierContext *nestedNameSpecifier();
        
        antlr4::tree::TerminalNode *Identifier();
        
        SimpleTemplateIdContext *simpleTemplateId();
        
        antlr4::tree::TerminalNode *Template();
        
        
    };
    
    TypeNameSpecifierContext *typeNameSpecifier();
    
    class ExplicitInstantiationContext : public antlr4::ParserRuleContext
    {
    public:
        ExplicitInstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Template();
        
        DeclarationContext *declaration();
        
        antlr4::tree::TerminalNode *Extern();
        
        
    };
    
    ExplicitInstantiationContext *explicitInstantiation();
    
    class ExplicitSpecializationContext : public antlr4::ParserRuleContext
    {
    public:
        ExplicitSpecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Template();
        
        antlr4::tree::TerminalNode *Less();
        
        antlr4::tree::TerminalNode *Greater();
        
        DeclarationContext *declaration();
        
        
    };
    
    ExplicitSpecializationContext *explicitSpecialization();
    
    class TryBlockContext : public antlr4::ParserRuleContext
    {
    public:
        TryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Try();
        
        CompoundStatementContext *compoundStatement();
        
        HandlerSeqContext *handlerSeq();
        
        
    };
    
    TryBlockContext *tryBlock();
    
    class FunctionTryBlockContext : public antlr4::ParserRuleContext
    {
    public:
        FunctionTryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Try();
        
        CompoundStatementContext *compoundStatement();
        
        HandlerSeqContext *handlerSeq();
        
        ConstructorInitializerContext *constructorInitializer();
        
        
    };
    
    FunctionTryBlockContext *functionTryBlock();
    
    class HandlerSeqContext : public antlr4::ParserRuleContext
    {
    public:
        HandlerSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<HandlerContext *> handler();
        
        HandlerContext *handler(size_t i);
        
        
    };
    
    HandlerSeqContext *handlerSeq();
    
    class HandlerContext : public antlr4::ParserRuleContext
    {
    public:
        HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Catch();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ExceptionDeclarationContext *exceptionDeclaration();
        
        antlr4::tree::TerminalNode *RightParen();
        
        CompoundStatementContext *compoundStatement();
        
        
    };
    
    HandlerContext *handler();
    
    class ExceptionDeclarationContext : public antlr4::ParserRuleContext
    {
    public:
        ExceptionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        TypeSpecifierSeqContext *typeSpecifierSeq();
        
        AttributeSpecifierSeqContext *attributeSpecifierSeq();
        
        DeclaratorContext *declarator();
        
        AbstractDeclaratorContext *abstractDeclarator();
        
        antlr4::tree::TerminalNode *Ellipsis();
        
        
    };
    
    ExceptionDeclarationContext *exceptionDeclaration();
    
    class ThrowExpressionContext : public antlr4::ParserRuleContext
    {
    public:
        ThrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Throw();
        
        AssignmentExpressionContext *assignmentExpression();
        
        
    };
    
    ThrowExpressionContext *throwExpression();
    
    class ExceptionSpecificationContext : public antlr4::ParserRuleContext
    {
    public:
        ExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        DynamicExceptionSpecificationContext *dynamicExceptionSpecification();
        
        NoeExceptSpecificationContext *noeExceptSpecification();
        
        
    };
    
    ExceptionSpecificationContext *exceptionSpecification();
    
    class DynamicExceptionSpecificationContext : public antlr4::ParserRuleContext
    {
    public:
        DynamicExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Throw();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        TypeIdListContext *typeIdList();
        
        
    };
    
    DynamicExceptionSpecificationContext *dynamicExceptionSpecification();
    
    class TypeIdListContext : public antlr4::ParserRuleContext
    {
    public:
        TypeIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        std::vector<TheTypeIdContext *> theTypeId();
        
        TheTypeIdContext *theTypeId(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Ellipsis();
        
        antlr4::tree::TerminalNode *Ellipsis(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Comma();
        
        antlr4::tree::TerminalNode *Comma(size_t i);
        
        
    };
    
    TypeIdListContext *typeIdList();
    
    class NoeExceptSpecificationContext : public antlr4::ParserRuleContext
    {
    public:
        NoeExceptSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *Noexcept();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        ConstantExpressionContext *constantExpression();
        
        antlr4::tree::TerminalNode *RightParen();
        
        
    };
    
    NoeExceptSpecificationContext *noeExceptSpecification();
    
    class TheOperatorContext : public antlr4::ParserRuleContext
    {
    public:
        TheOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *New();
        
        antlr4::tree::TerminalNode *LeftBracket();
        
        antlr4::tree::TerminalNode *RightBracket();
        
        antlr4::tree::TerminalNode *Delete();
        
        antlr4::tree::TerminalNode *Plus();
        
        antlr4::tree::TerminalNode *Minus();
        
        antlr4::tree::TerminalNode *Star();
        
        antlr4::tree::TerminalNode *Div();
        
        antlr4::tree::TerminalNode *Mod();
        
        antlr4::tree::TerminalNode *Caret();
        
        antlr4::tree::TerminalNode *And();
        
        antlr4::tree::TerminalNode *Or();
        
        antlr4::tree::TerminalNode *Tilde();
        
        antlr4::tree::TerminalNode *Not();
        
        antlr4::tree::TerminalNode *Assign();
        
        std::vector<antlr4::tree::TerminalNode *> Greater();
        
        antlr4::tree::TerminalNode *Greater(size_t i);
        
        std::vector<antlr4::tree::TerminalNode *> Less();
        
        antlr4::tree::TerminalNode *Less(size_t i);
        
        antlr4::tree::TerminalNode *GreaterEqual();
        
        antlr4::tree::TerminalNode *PlusAssign();
        
        antlr4::tree::TerminalNode *MinusAssign();
        
        antlr4::tree::TerminalNode *StarAssign();
        
        antlr4::tree::TerminalNode *ModAssign();
        
        antlr4::tree::TerminalNode *XorAssign();
        
        antlr4::tree::TerminalNode *AndAssign();
        
        antlr4::tree::TerminalNode *OrAssign();
        
        antlr4::tree::TerminalNode *RightShiftAssign();
        
        antlr4::tree::TerminalNode *LeftShiftAssign();
        
        antlr4::tree::TerminalNode *Equal();
        
        antlr4::tree::TerminalNode *NotEqual();
        
        antlr4::tree::TerminalNode *LessEqual();
        
        antlr4::tree::TerminalNode *AndAnd();
        
        antlr4::tree::TerminalNode *OrOr();
        
        antlr4::tree::TerminalNode *PlusPlus();
        
        antlr4::tree::TerminalNode *MinusMinus();
        
        antlr4::tree::TerminalNode *Comma();
        
        antlr4::tree::TerminalNode *ArrowStar();
        
        antlr4::tree::TerminalNode *Arrow();
        
        antlr4::tree::TerminalNode *LeftParen();
        
        antlr4::tree::TerminalNode *RightParen();
        
        
    };
    
    TheOperatorContext *theOperator();
    
    class LiteralContext : public antlr4::ParserRuleContext
    {
    public:
        LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
        
        virtual size_t getRuleIndex() const override;
        
        antlr4::tree::TerminalNode *IntegerLiteral();
        
        antlr4::tree::TerminalNode *CharacterLiteral();
        
        antlr4::tree::TerminalNode *FloatingLiteral();
        
        antlr4::tree::TerminalNode *StringLiteral();
        
        antlr4::tree::TerminalNode *BooleanLiteral();
        
        antlr4::tree::TerminalNode *PointerLiteral();
        
        antlr4::tree::TerminalNode *UserDefinedLiteral();
        
        
    };
    
    LiteralContext *literal();
    
    
    bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
    
    bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);
    
    bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);
    
    bool noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex);
    
    bool noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex);
    
    bool noPointerAbstractDeclaratorSempred(NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex);
    
    bool
    noPointerAbstractPackDeclaratorSempred(NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex);
    
    bool memberDeclaratorSempred(MemberDeclaratorContext *_localctx, size_t predicateIndex);
    
    // By default the static state used to implement the parser is lazily initialized during the first
    // call to the constructor. You can call this function if you wish to initialize the static state
    // ahead of time.
    static void initialize();

private:
};
