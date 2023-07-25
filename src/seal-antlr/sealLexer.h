
// Generated from Z:/seal-the-lang\seal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  sealLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    CppRaw = 27, FromLabel = 28, ModuleLabel = 29, Dot = 30, Var = 31, Ptr = 32, 
    Let = 33, Ref = 34, Fn = 35, WS = 36, Int = 37, Float = 38, HexNumber = 39, 
    Plus = 40, Minus = 41, Multiply = 42, Mod = 43, Divide = 44, LParen = 45, 
    RParen = 46, LTo = 47, RTo = 48, If = 49, Elif = 50, Else = 51, True = 52, 
    False = 53, DoubleAdd = 54, DoubleMinus = 55, AddEqual = 56, MinusEqual = 57, 
    DivEqual = 58, MulEqual = 59, End = 60, Equal = 61, EMol = 62, EAnd = 63, 
    NotEqual = 64, LTemplate = 65, RTemplate = 66, Interface = 67, Public = 68, 
    Protected = 69, Private = 70, InherfPublic = 71, InherfPrivate = 72, 
    Virtual = 73, Override = 74, Static = 75, Break = 76, Continue = 77, 
    Class = 78, Case = 79, To = 80, Leq = 81, Geq = 82, RefOp = 83, Opeartor = 84, 
    String = 85, Id = 86, MULTI_LINE_COMMENT = 87, SINGLE_LINE_COMMENT = 88
  };

  explicit sealLexer(antlr4::CharStream *input);

  ~sealLexer() override;


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

