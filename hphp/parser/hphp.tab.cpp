// @generated

/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         Compilerparse
#define yylex           Compilerlex
#define yyerror         Compilererror
#define yylval          Compilerlval
#define yychar          Compilerchar
#define yydebug         Compilerdebug
#define yynerrs         Compilernerrs
#define yylloc          Compilerlloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "hphp.y"

// macros for bison
#define YYSTYPE HPHP::HPHP_PARSER_NS::Token
#define YYSTYPE_IS_TRIVIAL false
#define YYLTYPE HPHP::Location
#define YYLTYPE_IS_TRIVIAL true
#define YYERROR_VERBOSE
#define YYINITDEPTH 500
#define YYLEX_PARAM _p

#include "hphp/compiler/parser/parser.h"
#include "folly/Conv.h"
#include "hphp/util/text-util.h"
#include "hphp/util/logger.h"

#ifdef yyerror
#undef yyerror
#endif
#define yyerror(loc,p,msg) p->parseFatal(loc,msg)

#ifdef YYLLOC_DEFAULT
# undef YYLLOC_DEFAULT
#endif
#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
  do                                                                    \
    if (N) {                                                            \
      (Current).first(YYRHSLOC (Rhs, 1));                               \
      (Current).last (YYRHSLOC (Rhs, N));                               \
    } else {                                                            \
      (Current).line0 = (Current).line1 = YYRHSLOC (Rhs, 0).line1;      \
      (Current).char0 = (Current).char1 = YYRHSLOC (Rhs, 0).char1;      \
    }                                                                   \
  while (0);                                                            \
  _p->setRuleLocation(&Current);

#define YYCOPY(To, From, Count)                  \
  do {                                           \
    YYSIZE_T yyi;                                \
    for (yyi = 0; yyi < (Count); yyi++) {        \
      (To)[yyi] = (From)[yyi];                   \
    }                                            \
    if (From != From ## a) {                     \
      YYSTACK_FREE (From);                       \
    }                                            \
  }                                              \
  while (0)

#define YYCOPY_RESET(To, From, Count)           \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (To)[yyi] = (From)[yyi];                \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (0)

#define YYTOKEN_RESET(From, Count)              \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (0)

# define YYSTACK_RELOCATE_RESET(Stack_alloc, Stack)                     \
  do                                                                    \
    {                                                                   \
      YYSIZE_T yynewbytes;                                              \
      YYCOPY_RESET (&yyptr->Stack_alloc, Stack, yysize);                \
      Stack = &yyptr->Stack_alloc;                                      \
      yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
      yyptr += yynewbytes / sizeof (*yyptr);                            \
    }                                                                   \
  while (0)

#define YYSTACK_CLEANUP                         \
  YYTOKEN_RESET (yyvs, yystacksize);            \
  if (yyvs != yyvsa) {                          \
    YYSTACK_FREE (yyvs);                        \
  }                                             \
  if (yyls != yylsa) {                          \
    YYSTACK_FREE (yyls);                        \
  }                                             \


// macros for rules
#define BEXP(e...) _p->onBinaryOpExp(e);
#define UEXP(e...) _p->onUnaryOpExp(e);

using namespace HPHP::HPHP_PARSER_NS;

typedef HPHP::ClosureType ClosureType;

///////////////////////////////////////////////////////////////////////////////
// helpers

static void scalar_num(Parser *_p, Token &out, const char *num) {
  Token t;
  t.setText(num);
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_num(Parser *_p, Token &out, int num) {
  Token t;
  t.setText(folly::to<std::string>(num));
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_null(Parser *_p, Token &out) {
  Token tnull; tnull.setText("null");
  _p->onConstantValue(out, tnull);
}

static void scalar_file(Parser *_p, Token &out) {
  Token file; file.setText("__FILE__");
  _p->onScalar(out, T_FILE, file);
}

static void scalar_line(Parser *_p, Token &out) {
  Token line; line.setText("__LINE__");
  _p->onScalar(out, T_LINE, line);
}

///////////////////////////////////////////////////////////////////////////////

static void constant_ae(Parser *_p, Token &out, Token &value) {
  const std::string& valueStr = value.text();
  if (valueStr.size() < 3 || valueStr.size() > 5 ||
      (strcasecmp("true", valueStr.c_str()) != 0 &&
       strcasecmp("false", valueStr.c_str()) != 0 &&
       strcasecmp("null", valueStr.c_str()) != 0 &&
       strcasecmp("inf", valueStr.c_str()) != 0 &&
       strcasecmp("nan", valueStr.c_str()) != 0)) {
    HPHP_PARSER_ERROR("User-defined constants are not allowed in user "
                      "attribute expressions", _p);
  }
  _p->onConstantValue(out, value);
}

///////////////////////////////////////////////////////////////////////////////

/**
 * XHP functions: They are defined here, so different parsers don't have to
 * handle XHP rules at all.
 */

static void xhp_tag(Parser *_p, Token &out, Token &label, Token &body) {
  if (!body.text().empty() && body.text() != label.text()) {
    HPHP_PARSER_ERROR("XHP: mismatched tag: '%s' not the same as '%s'",
                      _p, body.text().c_str(), label.text().c_str());
  }

  label.xhpLabel();
  Token name; _p->onName(name, label, Parser::StringName);
  _p->onNewObject(out, name, body);
}

static void xhp_attribute(Parser *_p, Token &out, Token &type, Token &label,
                          Token &def, Token &req) {
  /**
   * The bool, int, float, and string typenames are not given any special
   * treatment by the parser and are treated the same as regular class names
   * (which initially gets marked as type code 5). However, XHP wants to use
   * different type codes for bool, int, float, and string, so we need to fix
   * up the type code here to make XHP happy.
   */
  if (type.num() == 5) {
    auto* str = type.text().c_str();
    if (_p->scanner().isHHSyntaxEnabled()) {
      switch (type.text().size()) {
        case 6:
          if (!strcasecmp(str, "HH\\int")) {
            type.reset(); type.setNum(3);
          }
          break;
        case 7:
          if (!strcasecmp(str, "HH\\bool")) {
            type.reset(); type.setNum(2);
          }
          break;
        case 8:
          if (!strcasecmp(str, "HH\\float")) {
            type.reset(); type.setNum(8);
          } else if (!strcasecmp(str, "HH\\mixed")) {
            type.reset(); type.setNum(6);
          }
          break;
        case 9:
          if (!strcasecmp(str, "HH\\string")) {
            type.reset(); type.setNum(1);
          }
          break;
        default:
          break;
      }
    } else {
      switch (type.text().size()) {
        case 3:
          if (!strcasecmp(str, "int")) {
            type.reset(); type.setNum(3);
          }
          break;
        case 4:
          if (!strcasecmp(str, "bool")) {
            type.reset(); type.setNum(2);
          } else if (!strcasecmp(str, "real")) {
            type.reset(); type.setNum(8);
          }
          break;
        case 5:
          if (!strcasecmp(str, "float")) {
            type.reset(); type.setNum(8);
          } else if (!strcasecmp(str, "mixed")) {
            type.reset(); type.setNum(6);
          }
          break;
        case 6:
          if (!strcasecmp(str, "string")) {
            type.reset(); type.setNum(1);
          } else if (!strcasecmp(str, "double")) {
            type.reset(); type.setNum(8);
          }
          break;
        case 7:
          if (!strcasecmp(str, "integer")) {
            type.reset(); type.setNum(3);
          } else if (!strcasecmp(str, "boolean")) {
            type.reset(); type.setNum(2);
          }
          break;
        default:
          break;
      }
    }
  }

  Token num;  scalar_num(_p, num, type.num());
  Token arr1; _p->onArrayPair(arr1, 0, 0, num, 0);

  Token arr2;
  switch (type.num()) {
    case 5: /* class */ {
      Token cls; _p->onScalar(cls, T_CONSTANT_ENCAPSED_STRING, type);
      _p->onArrayPair(arr2, &arr1, 0, cls, 0);
      break;
    }
    case 7: /* enum */ {
      Token arr;   _p->onArray(arr, type);
      _p->onArrayPair(arr2, &arr1, 0, arr, 0);
      break;
    }
    default: {
      Token tnull; scalar_null(_p, tnull);
      _p->onArrayPair(arr2, &arr1, 0, tnull, 0);
      break;
    }
  }

  Token arr3; _p->onArrayPair(arr3, &arr2, 0, def, 0);
  Token arr4; _p->onArrayPair(arr4, &arr3, 0, req, 0);
  _p->onArray(out, arr4);
  out.setText(label);
}

static void xhp_attribute_list(Parser *_p, Token &out, Token *list,
                               Token &decl) {
  if (decl.num() == 0) {
    decl.xhpLabel();
    if (list) {
      out = *list;
      out.setText(list->text() + ":" + decl.text()); // avoiding vector<string>
    } else {
      out.setText(decl);
    }
  } else {
    Token name; _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, decl);
    _p->onArrayPair(out, list, &name, decl, 0);
    if (list) {
      out.setText(list->text());
    } else {
      out.setText("");
    }
  }
}

static void xhp_attribute_stmt(Parser *_p, Token &out, Token &attributes) {
  Token modifiers;
  Token fname; fname.setText("__xhpAttributeDeclaration");
  {
    Token m;
    Token m1; m1.setNum(T_PROTECTED); _p->onMemberModifier(m, NULL, m1);
    Token m2; m2.setNum(T_STATIC);    _p->onMemberModifier(modifiers, &m, m2);
  }
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  std::vector<std::string> classes;
  HPHP::split(':', attributes.text().c_str(), classes, true);
  Token arrAttributes; _p->onArray(arrAttributes, attributes);

  Token dummy;

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = -1;
    Token one;     scalar_num(_p, one, "1");
    Token mone;    UEXP(mone, one, '-', 1);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &mone);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // if ($_ === -1) {
    //   $_ = array_merge(parent::__xhpAttributeDeclaration(),
    //                    attributes);
    // }
    Token parent;  parent.set(T_STRING, "parent");
    Token cls;     _p->onName(cls, parent, Parser::StringName);
    Token fname;   fname.setText("__xhpAttributeDeclaration");
    Token param1;  _p->onCall(param1, 0, fname, dummy, &cls);
    Token params1; _p->onCallParam(params1, NULL, param1, false, false);

    for (unsigned int i = 0; i < classes.size(); i++) {
      Token parent;  parent.set(T_STRING, classes[i]);
      Token cls;     _p->onName(cls, parent, Parser::StringName);
      Token fname;   fname.setText("__xhpAttributeDeclaration");
      Token param;   _p->onCall(param, 0, fname, dummy, &cls);

      Token params; _p->onCallParam(params, &params1, param, false, false);
      params1 = params;
    }

    Token params2; _p->onCallParam(params2, &params1, arrAttributes,
                                   false, false);

    Token name;    name.set(T_STRING, "array_merge");
    Token call;    _p->onCall(call, 0, name, params2, NULL);
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token assign;  _p->onAssign(assign, var, call, 0);
    Token exp;     _p->onExpStatement(exp, assign);
    Token block;   _p->onBlock(block, exp);

    Token tvar2;   tvar2.set(T_VARIABLE, "_");
    Token var2;    _p->onSimpleVariable(var2, tvar2);
    Token one;     scalar_num(_p, one, "1");
    Token mone;    UEXP(mone, one, '-', 1);
    Token cond;    BEXP(cond, var2, mone, T_IS_IDENTICAL);
    Token dummy1, dummy2;
    Token sif;     _p->onIf(sif, cond, block, dummy1, dummy2);
    _p->addStatement(stmts2, stmts1, sif);
  }
  Token stmts3;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts3, stmts2, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts3);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, nullptr, false);
  }
}

static void xhp_collect_attributes(Parser *_p, Token &out, Token &stmts) {
  Token *attr = _p->xhpGetAttributes();
  if (attr) {
    Token stmt;
    xhp_attribute_stmt(_p, stmt, *attr);
    _p->onClassStatement(out, stmts, stmt);
  } else {
    out = stmts;
  }
}

static void xhp_category_stmt(Parser *_p, Token &out, Token &categories) {
  Token fname;     fname.setText("__xhpCategoryDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = categories;
    Token arr;     _p->onArray(arr, categories);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, nullptr, false);
  }
}

static void xhp_children_decl_tag(Parser *_p, Token &arr, Token &tag) {
  Token num;  scalar_num(_p, num, tag.num());
  Token arr1; _p->onArrayPair(arr1, &arr, 0, num, 0);

  Token name;
  if (tag.num() == 3 || tag.num() == 4) {
    _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, tag);
  } else if (tag.num() >= 0) {
    scalar_null(_p, name);
  } else {
    HPHP_PARSER_ERROR("XHP: unknown children declaration", _p);
  }
  Token arr2; _p->onArrayPair(arr2, &arr1, 0, name, 0);
  arr = arr2;
}

static void xhp_children_decl(Parser *_p, Token &out, Token &op1, int op,
                              Token *op2) {
  Token num; scalar_num(_p, num, op);
  Token arr; _p->onArrayPair(arr, 0, 0, num, 0);

  if (op2) {
    Token arr1; _p->onArrayPair(arr1, &arr,  0, op1,  0);
    Token arr2; _p->onArrayPair(arr2, &arr1, 0, *op2, 0);
    _p->onArray(out, arr2);
  } else {
    xhp_children_decl_tag(_p, arr, op1);
    _p->onArray(out, arr);
  }
}

static void xhp_children_paren(Parser *_p, Token &out, Token exp, int op) {
  Token num;  scalar_num(_p, num, op);
  Token arr1; _p->onArrayPair(arr1, 0, 0, num, 0);

  Token num5; scalar_num(_p, num5, 5);
  Token arr2; _p->onArrayPair(arr2, &arr1, 0, num5, 0);

  Token arr3; _p->onArrayPair(arr3, &arr2, 0, exp, 0);
  _p->onArray(out, arr3);
}

static void xhp_children_stmt(Parser *_p, Token &out, Token &children) {
  Token fname;     fname.setText("__xhpChildrenDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = children;
    Token arr;
    if (children.num() == 2) {
      arr = children;
    } else if (children.num() >= 0) {
      scalar_num(_p, arr, children.num());
    } else {
      HPHP_PARSER_ERROR("XHP: XHP unknown children declaration", _p);
    }
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, nullptr, false);
  }
}

static void only_in_hh_syntax(Parser *_p) {
  if (!_p->scanner().isHHSyntaxEnabled()) {
    HPHP_PARSER_ERROR(
      "Syntax only allowed in Hack files (<?hh) or with -v "
        "Eval.EnableHipHopSyntax=true",
      _p);
  }
}

static void validate_hh_variadic_variant(Parser* _p,
                                         Token& userAttrs, Token& typehint,
                                         Token* mod) {
  if (!userAttrs.text().empty() || !typehint.text().empty() ||
     (mod && !mod->text().empty())) {
    HPHP_PARSER_ERROR("Variadic '...' should be followed by a '$variable'", _p);
  }
  only_in_hh_syntax(_p);
}

// Shapes may not have leading integers in key names, considered as a
// parse time error.  This is because at runtime they are currently
// hphp arrays, which will treat leading integer keys as numbers.
static void validate_shape_keyname(Token& tok, Parser* _p) {
  if (tok.text().empty()) {
    HPHP_PARSER_ERROR("Shape key names may not be empty", _p);
  }
  if (isdigit(tok.text()[0])) {
    HPHP_PARSER_ERROR("Shape key names may not start with integers", _p);
  }
}

///////////////////////////////////////////////////////////////////////////////

static int yylex(YYSTYPE *token, HPHP::Location *loc, Parser *_p) {
  return _p->scan(token, loc);
}


/* Line 189 of yacc.c  */
#line 646 "hphp.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LAMBDA_ARROW = 263,
     T_LOGICAL_OR = 264,
     T_LOGICAL_XOR = 265,
     T_LOGICAL_AND = 266,
     T_PRINT = 267,
     T_POW_EQUAL = 268,
     T_SR_EQUAL = 269,
     T_SL_EQUAL = 270,
     T_XOR_EQUAL = 271,
     T_OR_EQUAL = 272,
     T_AND_EQUAL = 273,
     T_MOD_EQUAL = 274,
     T_CONCAT_EQUAL = 275,
     T_DIV_EQUAL = 276,
     T_MUL_EQUAL = 277,
     T_MINUS_EQUAL = 278,
     T_PLUS_EQUAL = 279,
     T_YIELD = 280,
     T_AWAIT = 281,
     T_BOOLEAN_OR = 282,
     T_BOOLEAN_AND = 283,
     T_IS_NOT_IDENTICAL = 284,
     T_IS_IDENTICAL = 285,
     T_IS_NOT_EQUAL = 286,
     T_IS_EQUAL = 287,
     T_IS_GREATER_OR_EQUAL = 288,
     T_IS_SMALLER_OR_EQUAL = 289,
     T_SR = 290,
     T_SL = 291,
     T_INSTANCEOF = 292,
     T_UNSET_CAST = 293,
     T_BOOL_CAST = 294,
     T_OBJECT_CAST = 295,
     T_ARRAY_CAST = 296,
     T_STRING_CAST = 297,
     T_DOUBLE_CAST = 298,
     T_INT_CAST = 299,
     T_DEC = 300,
     T_INC = 301,
     T_POW = 302,
     T_CLONE = 303,
     T_NEW = 304,
     T_EXIT = 305,
     T_IF = 306,
     T_ELSEIF = 307,
     T_ELSE = 308,
     T_ENDIF = 309,
     T_LNUMBER = 310,
     T_DNUMBER = 311,
     T_ONUMBER = 312,
     T_STRING = 313,
     T_STRING_VARNAME = 314,
     T_VARIABLE = 315,
     T_NUM_STRING = 316,
     T_INLINE_HTML = 317,
     T_HASHBANG = 318,
     T_CHARACTER = 319,
     T_BAD_CHARACTER = 320,
     T_ENCAPSED_AND_WHITESPACE = 321,
     T_CONSTANT_ENCAPSED_STRING = 322,
     T_ECHO = 323,
     T_DO = 324,
     T_WHILE = 325,
     T_ENDWHILE = 326,
     T_FOR = 327,
     T_ENDFOR = 328,
     T_FOREACH = 329,
     T_ENDFOREACH = 330,
     T_DECLARE = 331,
     T_ENDDECLARE = 332,
     T_AS = 333,
     T_SWITCH = 334,
     T_ENDSWITCH = 335,
     T_CASE = 336,
     T_DEFAULT = 337,
     T_BREAK = 338,
     T_GOTO = 339,
     T_CONTINUE = 340,
     T_FUNCTION = 341,
     T_CONST = 342,
     T_RETURN = 343,
     T_TRY = 344,
     T_CATCH = 345,
     T_THROW = 346,
     T_USE = 347,
     T_GLOBAL = 348,
     T_PUBLIC = 349,
     T_PROTECTED = 350,
     T_PRIVATE = 351,
     T_FINAL = 352,
     T_ABSTRACT = 353,
     T_STATIC = 354,
     T_VAR = 355,
     T_UNSET = 356,
     T_ISSET = 357,
     T_EMPTY = 358,
     T_HALT_COMPILER = 359,
     T_CLASS = 360,
     T_INTERFACE = 361,
     T_EXTENDS = 362,
     T_IMPLEMENTS = 363,
     T_OBJECT_OPERATOR = 364,
     T_NULLSAFE_OBJECT_OPERATOR = 365,
     T_DOUBLE_ARROW = 366,
     T_LIST = 367,
     T_ARRAY = 368,
     T_CALLABLE = 369,
     T_CLASS_C = 370,
     T_METHOD_C = 371,
     T_FUNC_C = 372,
     T_LINE = 373,
     T_FILE = 374,
     T_COMMENT = 375,
     T_DOC_COMMENT = 376,
     T_OPEN_TAG = 377,
     T_OPEN_TAG_WITH_ECHO = 378,
     T_CLOSE_TAG = 379,
     T_WHITESPACE = 380,
     T_START_HEREDOC = 381,
     T_END_HEREDOC = 382,
     T_DOLLAR_OPEN_CURLY_BRACES = 383,
     T_CURLY_OPEN = 384,
     T_DOUBLE_COLON = 385,
     T_NAMESPACE = 386,
     T_NS_C = 387,
     T_DIR = 388,
     T_NS_SEPARATOR = 389,
     T_XHP_LABEL = 390,
     T_XHP_TEXT = 391,
     T_XHP_ATTRIBUTE = 392,
     T_XHP_CATEGORY = 393,
     T_XHP_CATEGORY_LABEL = 394,
     T_XHP_CHILDREN = 395,
     T_ENUM = 396,
     T_XHP_REQUIRED = 397,
     T_TRAIT = 398,
     T_ELLIPSIS = 399,
     T_INSTEADOF = 400,
     T_TRAIT_C = 401,
     T_HH_ERROR = 402,
     T_FINALLY = 403,
     T_XHP_TAG_LT = 404,
     T_XHP_TAG_GT = 405,
     T_TYPELIST_LT = 406,
     T_TYPELIST_GT = 407,
     T_UNRESOLVED_LT = 408,
     T_COLLECTION = 409,
     T_SHAPE = 410,
     T_VARRAY = 411,
     T_MIARRAY = 412,
     T_MSARRAY = 413,
     T_TYPE = 414,
     T_UNRESOLVED_TYPE = 415,
     T_NEWTYPE = 416,
     T_UNRESOLVED_NEWTYPE = 417,
     T_COMPILER_HALT_OFFSET = 418,
     T_ASYNC = 419,
     T_FROM = 420,
     T_WHERE = 421,
     T_JOIN = 422,
     T_IN = 423,
     T_ON = 424,
     T_EQUALS = 425,
     T_INTO = 426,
     T_LET = 427,
     T_ORDERBY = 428,
     T_ASCENDING = 429,
     T_DESCENDING = 430,
     T_SELECT = 431,
     T_GROUP = 432,
     T_BY = 433,
     T_LAMBDA_OP = 434,
     T_LAMBDA_CP = 435,
     T_UNRESOLVED_OP = 436
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int line0;
  int char0;
  int line1;
  int char1;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 882 "hphp.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
struct yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (struct yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16688

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  211
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  279
/* YYNRULES -- Number of rules.  */
#define YYNRULES  942
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1766

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   436

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,   209,     2,   206,    51,    35,   210,
     201,   202,    49,    46,     9,    47,    48,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   203,
      40,    14,    41,    29,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,   208,    34,     2,   207,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   204,    33,   205,    54,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,    10,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    31,    32,    36,    37,    38,    39,    42,    43,
      44,    45,    53,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    11,    13,    15,    17,
      19,    21,    23,    28,    32,    33,    40,    41,    47,    51,
      56,    61,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   106,   108,   112,   114,   118,   120,   122,   125,
     129,   134,   136,   139,   143,   148,   150,   153,   157,   162,
     164,   168,   170,   174,   177,   179,   182,   185,   191,   196,
     199,   200,   202,   204,   206,   208,   212,   218,   227,   228,
     233,   234,   241,   242,   253,   254,   259,   262,   266,   269,
     273,   276,   280,   284,   288,   292,   296,   302,   304,   306,
     308,   309,   319,   320,   331,   337,   338,   352,   353,   359,
     363,   367,   370,   373,   376,   379,   382,   385,   389,   392,
     395,   399,   402,   403,   408,   418,   419,   420,   425,   428,
     429,   431,   432,   434,   435,   445,   446,   457,   458,   470,
     471,   481,   482,   493,   494,   503,   504,   514,   515,   523,
     524,   533,   534,   542,   543,   552,   554,   556,   558,   560,
     562,   565,   569,   573,   576,   579,   580,   583,   584,   587,
     588,   590,   594,   596,   600,   603,   604,   606,   609,   614,
     616,   621,   623,   628,   630,   635,   637,   642,   646,   652,
     656,   661,   666,   672,   678,   683,   684,   686,   688,   693,
     694,   700,   701,   704,   705,   709,   710,   718,   727,   734,
     737,   743,   750,   755,   756,   761,   767,   775,   782,   789,
     797,   807,   816,   823,   831,   837,   840,   845,   851,   855,
     856,   860,   865,   872,   878,   884,   891,   900,   908,   911,
     912,   914,   917,   920,   924,   929,   934,   938,   940,   942,
     945,   950,   954,   960,   962,   966,   969,   970,   973,   977,
     980,   981,   982,   987,   988,   994,   997,   998,  1009,  1010,
    1022,  1026,  1030,  1034,  1039,  1044,  1048,  1054,  1057,  1060,
    1061,  1068,  1074,  1079,  1083,  1085,  1087,  1091,  1096,  1098,
    1100,  1102,  1104,  1109,  1111,  1113,  1117,  1120,  1121,  1124,
    1125,  1127,  1131,  1133,  1135,  1137,  1139,  1143,  1148,  1153,
    1158,  1160,  1162,  1165,  1168,  1171,  1175,  1179,  1181,  1183,
    1185,  1187,  1191,  1193,  1197,  1199,  1201,  1203,  1204,  1206,
    1209,  1211,  1213,  1215,  1217,  1219,  1221,  1223,  1225,  1226,
    1228,  1230,  1232,  1236,  1242,  1244,  1248,  1254,  1259,  1263,
    1267,  1270,  1272,  1274,  1278,  1282,  1284,  1286,  1287,  1289,
    1292,  1297,  1301,  1308,  1311,  1315,  1322,  1324,  1326,  1328,
    1330,  1332,  1339,  1343,  1348,  1355,  1359,  1363,  1367,  1371,
    1375,  1379,  1383,  1387,  1391,  1395,  1399,  1403,  1406,  1409,
    1412,  1415,  1419,  1423,  1427,  1431,  1435,  1439,  1443,  1447,
    1451,  1455,  1459,  1463,  1467,  1471,  1475,  1479,  1483,  1486,
    1489,  1492,  1495,  1499,  1503,  1507,  1511,  1515,  1519,  1523,
    1527,  1531,  1535,  1541,  1546,  1548,  1551,  1554,  1557,  1560,
    1563,  1566,  1569,  1572,  1575,  1577,  1579,  1581,  1583,  1585,
    1589,  1592,  1594,  1600,  1601,  1602,  1614,  1615,  1628,  1629,
    1633,  1634,  1639,  1640,  1647,  1648,  1656,  1657,  1663,  1666,
    1669,  1674,  1676,  1678,  1684,  1688,  1694,  1698,  1701,  1702,
    1705,  1706,  1711,  1716,  1720,  1725,  1730,  1735,  1740,  1745,
    1750,  1755,  1760,  1765,  1770,  1772,  1774,  1776,  1778,  1782,
    1785,  1789,  1794,  1797,  1801,  1803,  1806,  1808,  1811,  1813,
    1815,  1817,  1819,  1821,  1823,  1828,  1833,  1836,  1845,  1856,
    1859,  1861,  1865,  1867,  1870,  1872,  1874,  1876,  1878,  1881,
    1886,  1890,  1894,  1899,  1901,  1904,  1909,  1912,  1919,  1920,
    1922,  1927,  1928,  1931,  1932,  1934,  1936,  1940,  1942,  1946,
    1948,  1950,  1954,  1958,  1960,  1962,  1964,  1966,  1968,  1970,
    1972,  1974,  1976,  1978,  1980,  1982,  1984,  1986,  1988,  1990,
    1992,  1994,  1996,  1998,  2000,  2002,  2004,  2006,  2008,  2010,
    2012,  2014,  2016,  2018,  2020,  2022,  2024,  2026,  2028,  2030,
    2032,  2034,  2036,  2038,  2040,  2042,  2044,  2046,  2048,  2050,
    2052,  2054,  2056,  2058,  2060,  2062,  2064,  2066,  2068,  2070,
    2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,  2088,  2090,
    2092,  2094,  2096,  2098,  2100,  2102,  2104,  2106,  2108,  2110,
    2112,  2114,  2116,  2118,  2123,  2125,  2127,  2129,  2131,  2133,
    2135,  2137,  2139,  2142,  2144,  2145,  2146,  2148,  2150,  2154,
    2155,  2157,  2159,  2161,  2163,  2165,  2167,  2169,  2171,  2173,
    2175,  2177,  2179,  2181,  2185,  2188,  2190,  2192,  2197,  2201,
    2206,  2208,  2210,  2212,  2214,  2218,  2222,  2226,  2230,  2234,
    2238,  2242,  2246,  2250,  2254,  2258,  2262,  2266,  2270,  2274,
    2278,  2282,  2286,  2289,  2292,  2295,  2298,  2302,  2306,  2310,
    2314,  2318,  2322,  2326,  2330,  2336,  2341,  2345,  2349,  2353,
    2355,  2357,  2359,  2361,  2365,  2369,  2373,  2376,  2377,  2379,
    2380,  2382,  2383,  2389,  2393,  2397,  2399,  2401,  2403,  2405,
    2407,  2411,  2414,  2416,  2418,  2420,  2422,  2424,  2426,  2429,
    2432,  2437,  2441,  2446,  2449,  2450,  2456,  2460,  2464,  2466,
    2470,  2472,  2475,  2476,  2482,  2486,  2489,  2490,  2494,  2495,
    2500,  2503,  2504,  2508,  2512,  2514,  2515,  2517,  2519,  2521,
    2523,  2527,  2529,  2531,  2533,  2537,  2539,  2541,  2545,  2549,
    2552,  2557,  2560,  2565,  2567,  2569,  2571,  2573,  2575,  2579,
    2585,  2589,  2594,  2599,  2603,  2605,  2607,  2609,  2611,  2615,
    2621,  2626,  2630,  2632,  2634,  2638,  2642,  2644,  2646,  2654,
    2664,  2672,  2679,  2688,  2690,  2693,  2698,  2703,  2705,  2707,
    2712,  2714,  2715,  2717,  2720,  2722,  2724,  2728,  2734,  2738,
    2742,  2743,  2745,  2749,  2755,  2759,  2762,  2766,  2773,  2774,
    2776,  2781,  2784,  2785,  2791,  2795,  2799,  2801,  2808,  2813,
    2818,  2821,  2824,  2825,  2831,  2835,  2839,  2841,  2844,  2845,
    2851,  2855,  2859,  2861,  2864,  2865,  2868,  2869,  2875,  2879,
    2883,  2885,  2888,  2889,  2892,  2893,  2899,  2903,  2907,  2909,
    2912,  2915,  2917,  2920,  2922,  2927,  2931,  2935,  2942,  2946,
    2948,  2950,  2952,  2957,  2962,  2967,  2972,  2977,  2982,  2985,
    2988,  2993,  2996,  2999,  3001,  3005,  3009,  3013,  3014,  3017,
    3023,  3030,  3032,  3035,  3037,  3042,  3046,  3047,  3049,  3053,
    3056,  3060,  3062,  3064,  3065,  3066,  3069,  3074,  3077,  3084,
    3089,  3091,  3093,  3094,  3098,  3104,  3108,  3110,  3113,  3114,
    3119,  3122,  3125,  3127,  3129,  3131,  3133,  3138,  3145,  3147,
    3156,  3163,  3165
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     212,     0,    -1,    -1,   213,   214,    -1,   214,   215,    -1,
      -1,   233,    -1,   250,    -1,   257,    -1,   254,    -1,   262,
      -1,   474,    -1,   123,   201,   202,   203,    -1,   150,   225,
     203,    -1,    -1,   150,   225,   204,   216,   214,   205,    -1,
      -1,   150,   204,   217,   214,   205,    -1,   111,   219,   203,
      -1,   111,   105,   220,   203,    -1,   111,   106,   221,   203,
      -1,   230,   203,    -1,    77,    -1,   156,    -1,   157,    -1,
     159,    -1,   161,    -1,   160,    -1,   185,    -1,   186,    -1,
     188,    -1,   187,    -1,   189,    -1,   190,    -1,   191,    -1,
     192,    -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,
     197,    -1,   219,     9,   222,    -1,   222,    -1,   223,     9,
     223,    -1,   223,    -1,   224,     9,   224,    -1,   224,    -1,
     225,    -1,   153,   225,    -1,   225,    97,   218,    -1,   153,
     225,    97,   218,    -1,   225,    -1,   153,   225,    -1,   225,
      97,   218,    -1,   153,   225,    97,   218,    -1,   225,    -1,
     153,   225,    -1,   225,    97,   218,    -1,   153,   225,    97,
     218,    -1,   218,    -1,   225,   153,   218,    -1,   225,    -1,
     150,   153,   225,    -1,   153,   225,    -1,   226,    -1,   226,
     477,    -1,   226,   477,    -1,   230,     9,   475,    14,   408,
      -1,   106,   475,    14,   408,    -1,   231,   232,    -1,    -1,
     233,    -1,   250,    -1,   257,    -1,   262,    -1,   204,   231,
     205,    -1,    70,   333,   233,   284,   286,    -1,    70,   333,
      30,   231,   285,   287,    73,   203,    -1,    -1,    89,   333,
     234,   278,    -1,    -1,    88,   235,   233,    89,   333,   203,
      -1,    -1,    91,   201,   335,   203,   335,   203,   335,   202,
     236,   276,    -1,    -1,    98,   333,   237,   281,    -1,   102,
     203,    -1,   102,   342,   203,    -1,   104,   203,    -1,   104,
     342,   203,    -1,   107,   203,    -1,   107,   342,   203,    -1,
      27,   102,   203,    -1,   112,   294,   203,    -1,   118,   296,
     203,    -1,    87,   334,   203,    -1,   120,   201,   471,   202,
     203,    -1,   203,    -1,    81,    -1,    82,    -1,    -1,    93,
     201,   342,    97,   275,   274,   202,   238,   277,    -1,    -1,
      93,   201,   342,    28,    97,   275,   274,   202,   239,   277,
      -1,    95,   201,   280,   202,   279,    -1,    -1,   108,   242,
     109,   201,   401,    79,   202,   204,   231,   205,   244,   240,
     247,    -1,    -1,   108,   242,   167,   241,   245,    -1,   110,
     342,   203,    -1,   103,   218,   203,    -1,   342,   203,    -1,
     336,   203,    -1,   337,   203,    -1,   338,   203,    -1,   339,
     203,    -1,   340,   203,    -1,   107,   339,   203,    -1,   341,
     203,    -1,   371,   203,    -1,   107,   370,   203,    -1,   218,
      30,    -1,    -1,   204,   243,   231,   205,    -1,   244,   109,
     201,   401,    79,   202,   204,   231,   205,    -1,    -1,    -1,
     204,   246,   231,   205,    -1,   167,   245,    -1,    -1,    35,
      -1,    -1,   105,    -1,    -1,   249,   248,   476,   251,   201,
     290,   202,   481,   322,    -1,    -1,   326,   249,   248,   476,
     252,   201,   290,   202,   481,   322,    -1,    -1,   428,   325,
     249,   248,   476,   253,   201,   290,   202,   481,   322,    -1,
      -1,   160,   218,   255,    30,   488,   473,   204,   297,   205,
      -1,    -1,   428,   160,   218,   256,    30,   488,   473,   204,
     297,   205,    -1,    -1,   268,   265,   258,   269,   270,   204,
     300,   205,    -1,    -1,   428,   268,   265,   259,   269,   270,
     204,   300,   205,    -1,    -1,   125,   266,   260,   271,   204,
     300,   205,    -1,    -1,   428,   125,   266,   261,   271,   204,
     300,   205,    -1,    -1,   162,   267,   263,   270,   204,   300,
     205,    -1,    -1,   428,   162,   267,   264,   270,   204,   300,
     205,    -1,   476,    -1,   154,    -1,   476,    -1,   476,    -1,
     124,    -1,   117,   124,    -1,   117,   116,   124,    -1,   116,
     117,   124,    -1,   116,   124,    -1,   126,   401,    -1,    -1,
     127,   272,    -1,    -1,   126,   272,    -1,    -1,   401,    -1,
     272,     9,   401,    -1,   401,    -1,   273,     9,   401,    -1,
     130,   275,    -1,    -1,   438,    -1,    35,   438,    -1,   131,
     201,   452,   202,    -1,   233,    -1,    30,   231,    92,   203,
      -1,   233,    -1,    30,   231,    94,   203,    -1,   233,    -1,
      30,   231,    90,   203,    -1,   233,    -1,    30,   231,    96,
     203,    -1,   218,    14,   408,    -1,   280,     9,   218,    14,
     408,    -1,   204,   282,   205,    -1,   204,   203,   282,   205,
      -1,    30,   282,    99,   203,    -1,    30,   203,   282,    99,
     203,    -1,   282,   100,   342,   283,   231,    -1,   282,   101,
     283,   231,    -1,    -1,    30,    -1,   203,    -1,   284,    71,
     333,   233,    -1,    -1,   285,    71,   333,    30,   231,    -1,
      -1,    72,   233,    -1,    -1,    72,    30,   231,    -1,    -1,
     289,     9,   429,   328,   489,   163,    79,    -1,   289,     9,
     429,   328,   489,    35,   163,    79,    -1,   289,     9,   429,
     328,   489,   163,    -1,   289,   413,    -1,   429,   328,   489,
     163,    79,    -1,   429,   328,   489,    35,   163,    79,    -1,
     429,   328,   489,   163,    -1,    -1,   429,   328,   489,    79,
      -1,   429,   328,   489,    35,    79,    -1,   429,   328,   489,
      35,    79,    14,   408,    -1,   429,   328,   489,    79,    14,
     408,    -1,   289,     9,   429,   328,   489,    79,    -1,   289,
       9,   429,   328,   489,    35,    79,    -1,   289,     9,   429,
     328,   489,    35,    79,    14,   408,    -1,   289,     9,   429,
     328,   489,    79,    14,   408,    -1,   291,     9,   429,   489,
     163,    79,    -1,   291,     9,   429,   489,    35,   163,    79,
      -1,   291,     9,   429,   489,   163,    -1,   291,   413,    -1,
     429,   489,   163,    79,    -1,   429,   489,    35,   163,    79,
      -1,   429,   489,   163,    -1,    -1,   429,   489,    79,    -1,
     429,   489,    35,    79,    -1,   429,   489,    35,    79,    14,
     408,    -1,   429,   489,    79,    14,   408,    -1,   291,     9,
     429,   489,    79,    -1,   291,     9,   429,   489,    35,    79,
      -1,   291,     9,   429,   489,    35,    79,    14,   408,    -1,
     291,     9,   429,   489,    79,    14,   408,    -1,   293,   413,
      -1,    -1,   342,    -1,    35,   438,    -1,   163,   342,    -1,
     293,     9,   342,    -1,   293,     9,   163,   342,    -1,   293,
       9,    35,   438,    -1,   294,     9,   295,    -1,   295,    -1,
      79,    -1,   206,   438,    -1,   206,   204,   342,   205,    -1,
     296,     9,    79,    -1,   296,     9,    79,    14,   408,    -1,
      79,    -1,    79,    14,   408,    -1,   297,   298,    -1,    -1,
     299,   203,    -1,   475,    14,   408,    -1,   300,   301,    -1,
      -1,    -1,   324,   302,   330,   203,    -1,    -1,   326,   488,
     303,   330,   203,    -1,   331,   203,    -1,    -1,   325,   249,
     248,   476,   201,   304,   288,   202,   481,   323,    -1,    -1,
     428,   325,   249,   248,   476,   201,   305,   288,   202,   481,
     323,    -1,   156,   310,   203,    -1,   157,   316,   203,    -1,
     159,   318,   203,    -1,     4,   126,   401,   203,    -1,     4,
     127,   401,   203,    -1,   111,   273,   203,    -1,   111,   273,
     204,   306,   205,    -1,   306,   307,    -1,   306,   308,    -1,
      -1,   229,   149,   218,   164,   273,   203,    -1,   309,    97,
     325,   218,   203,    -1,   309,    97,   326,   203,    -1,   229,
     149,   218,    -1,   218,    -1,   311,    -1,   310,     9,   311,
      -1,   312,   398,   314,   315,    -1,   154,    -1,   132,    -1,
     401,    -1,   119,    -1,   160,   204,   313,   205,    -1,   133,
      -1,   407,    -1,   313,     9,   407,    -1,    14,   408,    -1,
      -1,    55,   161,    -1,    -1,   317,    -1,   316,     9,   317,
      -1,   158,    -1,   319,    -1,   218,    -1,   122,    -1,   201,
     320,   202,    -1,   201,   320,   202,    49,    -1,   201,   320,
     202,    29,    -1,   201,   320,   202,    46,    -1,   319,    -1,
     321,    -1,   321,    49,    -1,   321,    29,    -1,   321,    46,
      -1,   320,     9,   320,    -1,   320,    33,   320,    -1,   218,
      -1,   154,    -1,   158,    -1,   203,    -1,   204,   231,   205,
      -1,   203,    -1,   204,   231,   205,    -1,   326,    -1,   119,
      -1,   326,    -1,    -1,   327,    -1,   326,   327,    -1,   113,
      -1,   114,    -1,   115,    -1,   118,    -1,   117,    -1,   116,
      -1,   183,    -1,   329,    -1,    -1,   113,    -1,   114,    -1,
     115,    -1,   330,     9,    79,    -1,   330,     9,    79,    14,
     408,    -1,    79,    -1,    79,    14,   408,    -1,   331,     9,
     475,    14,   408,    -1,   106,   475,    14,   408,    -1,   201,
     332,   202,    -1,    68,   403,   406,    -1,    67,   342,    -1,
     390,    -1,   362,    -1,   201,   342,   202,    -1,   334,     9,
     342,    -1,   342,    -1,   334,    -1,    -1,    27,    -1,    27,
     342,    -1,    27,   342,   130,   342,    -1,   438,    14,   336,
      -1,   131,   201,   452,   202,    14,   336,    -1,    28,   342,
      -1,   438,    14,   339,    -1,   131,   201,   452,   202,    14,
     339,    -1,   343,    -1,   438,    -1,   332,    -1,   442,    -1,
     441,    -1,   131,   201,   452,   202,    14,   342,    -1,   438,
      14,   342,    -1,   438,    14,    35,   438,    -1,   438,    14,
      35,    68,   403,   406,    -1,   438,    26,   342,    -1,   438,
      25,   342,    -1,   438,    24,   342,    -1,   438,    23,   342,
      -1,   438,    22,   342,    -1,   438,    21,   342,    -1,   438,
      20,   342,    -1,   438,    19,   342,    -1,   438,    18,   342,
      -1,   438,    17,   342,    -1,   438,    16,   342,    -1,   438,
      15,   342,    -1,   438,    64,    -1,    64,   438,    -1,   438,
      63,    -1,    63,   438,    -1,   342,    31,   342,    -1,   342,
      32,   342,    -1,   342,    10,   342,    -1,   342,    12,   342,
      -1,   342,    11,   342,    -1,   342,    33,   342,    -1,   342,
      35,   342,    -1,   342,    34,   342,    -1,   342,    48,   342,
      -1,   342,    46,   342,    -1,   342,    47,   342,    -1,   342,
      49,   342,    -1,   342,    50,   342,    -1,   342,    65,   342,
      -1,   342,    51,   342,    -1,   342,    45,   342,    -1,   342,
      44,   342,    -1,    46,   342,    -1,    47,   342,    -1,    52,
     342,    -1,    54,   342,    -1,   342,    37,   342,    -1,   342,
      36,   342,    -1,   342,    39,   342,    -1,   342,    38,   342,
      -1,   342,    40,   342,    -1,   342,    43,   342,    -1,   342,
      41,   342,    -1,   342,    42,   342,    -1,   342,    53,   403,
      -1,   201,   343,   202,    -1,   342,    29,   342,    30,   342,
      -1,   342,    29,    30,   342,    -1,   470,    -1,    62,   342,
      -1,    61,   342,    -1,    60,   342,    -1,    59,   342,    -1,
      58,   342,    -1,    57,   342,    -1,    56,   342,    -1,    69,
     404,    -1,    55,   342,    -1,   410,    -1,   361,    -1,   360,
      -1,   363,    -1,   364,    -1,   207,   405,   207,    -1,    13,
     342,    -1,   368,    -1,   111,   201,   389,   413,   202,    -1,
      -1,    -1,   249,   248,   201,   346,   290,   202,   481,   344,
     204,   231,   205,    -1,    -1,   326,   249,   248,   201,   347,
     290,   202,   481,   344,   204,   231,   205,    -1,    -1,    79,
     349,   354,    -1,    -1,   183,    79,   350,   354,    -1,    -1,
     198,   351,   290,   199,   481,   354,    -1,    -1,   183,   198,
     352,   290,   199,   481,   354,    -1,    -1,   183,   204,   353,
     231,   205,    -1,     8,   342,    -1,     8,   339,    -1,     8,
     204,   231,   205,    -1,    86,    -1,   472,    -1,   356,     9,
     355,   130,   342,    -1,   355,   130,   342,    -1,   357,     9,
     355,   130,   408,    -1,   355,   130,   408,    -1,   356,   412,
      -1,    -1,   357,   412,    -1,    -1,   174,   201,   358,   202,
      -1,   132,   201,   453,   202,    -1,    66,   453,   208,    -1,
     401,   204,   455,   205,    -1,   176,   201,   459,   202,    -1,
     177,   201,   459,   202,    -1,   175,   201,   460,   202,    -1,
     176,   201,   463,   202,    -1,   177,   201,   463,   202,    -1,
     175,   201,   464,   202,    -1,   401,   204,   457,   205,    -1,
     368,    66,   448,   208,    -1,   369,    66,   448,   208,    -1,
     361,    -1,   472,    -1,   441,    -1,    86,    -1,   201,   343,
     202,    -1,   372,   373,    -1,   438,    14,   370,    -1,   184,
      79,   187,   342,    -1,   374,   385,    -1,   374,   385,   388,
      -1,   385,    -1,   385,   388,    -1,   375,    -1,   374,   375,
      -1,   376,    -1,   377,    -1,   378,    -1,   379,    -1,   380,
      -1,   381,    -1,   184,    79,   187,   342,    -1,   191,    79,
      14,   342,    -1,   185,   342,    -1,   186,    79,   187,   342,
     188,   342,   189,   342,    -1,   186,    79,   187,   342,   188,
     342,   189,   342,   190,    79,    -1,   192,   382,    -1,   383,
      -1,   382,     9,   383,    -1,   342,    -1,   342,   384,    -1,
     193,    -1,   194,    -1,   386,    -1,   387,    -1,   195,   342,
      -1,   196,   342,   197,   342,    -1,   190,    79,   373,    -1,
     389,     9,    79,    -1,   389,     9,    35,    79,    -1,    79,
      -1,    35,    79,    -1,   168,   154,   391,   169,    -1,   393,
      50,    -1,   393,   169,   394,   168,    50,   392,    -1,    -1,
     154,    -1,   393,   395,    14,   396,    -1,    -1,   394,   397,
      -1,    -1,   154,    -1,   155,    -1,   204,   342,   205,    -1,
     155,    -1,   204,   342,   205,    -1,   390,    -1,   399,    -1,
     398,    30,   399,    -1,   398,    47,   399,    -1,   218,    -1,
      69,    -1,   105,    -1,   106,    -1,   107,    -1,    27,    -1,
      28,    -1,   108,    -1,   109,    -1,   167,    -1,   110,    -1,
      70,    -1,    71,    -1,    73,    -1,    72,    -1,    89,    -1,
      90,    -1,    88,    -1,    91,    -1,    92,    -1,    93,    -1,
      94,    -1,    95,    -1,    96,    -1,    53,    -1,    97,    -1,
      98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
     104,    -1,   103,    -1,    87,    -1,    13,    -1,   124,    -1,
     125,    -1,   126,    -1,   127,    -1,    68,    -1,    67,    -1,
     119,    -1,     5,    -1,     7,    -1,     6,    -1,     4,    -1,
       3,    -1,   150,    -1,   111,    -1,   112,    -1,   121,    -1,
     122,    -1,   123,    -1,   118,    -1,   117,    -1,   116,    -1,
     115,    -1,   114,    -1,   113,    -1,   183,    -1,   120,    -1,
     131,    -1,   132,    -1,    10,    -1,    12,    -1,    11,    -1,
     134,    -1,   136,    -1,   135,    -1,   137,    -1,   138,    -1,
     152,    -1,   151,    -1,   182,    -1,   162,    -1,   165,    -1,
     164,    -1,   178,    -1,   180,    -1,   174,    -1,   228,   201,
     292,   202,    -1,   229,    -1,   154,    -1,   401,    -1,   118,
      -1,   446,    -1,   401,    -1,   118,    -1,   450,    -1,   201,
     202,    -1,   333,    -1,    -1,    -1,    85,    -1,   467,    -1,
     201,   292,   202,    -1,    -1,    74,    -1,    75,    -1,    76,
      -1,    86,    -1,   137,    -1,   138,    -1,   152,    -1,   134,
      -1,   165,    -1,   135,    -1,   136,    -1,   151,    -1,   182,
      -1,   145,    85,   146,    -1,   145,   146,    -1,   407,    -1,
     227,    -1,   132,   201,   411,   202,    -1,    66,   411,   208,
      -1,   174,   201,   359,   202,    -1,   409,    -1,   367,    -1,
     365,    -1,   366,    -1,   201,   408,   202,    -1,   408,    31,
     408,    -1,   408,    32,   408,    -1,   408,    10,   408,    -1,
     408,    12,   408,    -1,   408,    11,   408,    -1,   408,    33,
     408,    -1,   408,    35,   408,    -1,   408,    34,   408,    -1,
     408,    48,   408,    -1,   408,    46,   408,    -1,   408,    47,
     408,    -1,   408,    49,   408,    -1,   408,    50,   408,    -1,
     408,    51,   408,    -1,   408,    45,   408,    -1,   408,    44,
     408,    -1,   408,    65,   408,    -1,    52,   408,    -1,    54,
     408,    -1,    46,   408,    -1,    47,   408,    -1,   408,    37,
     408,    -1,   408,    36,   408,    -1,   408,    39,   408,    -1,
     408,    38,   408,    -1,   408,    40,   408,    -1,   408,    43,
     408,    -1,   408,    41,   408,    -1,   408,    42,   408,    -1,
     408,    29,   408,    30,   408,    -1,   408,    29,    30,   408,
      -1,   229,   149,   218,    -1,   154,   149,   218,    -1,   229,
     149,   124,    -1,   227,    -1,    78,    -1,   472,    -1,   407,
      -1,   209,   467,   209,    -1,   210,   467,   210,    -1,   145,
     467,   146,    -1,   414,   412,    -1,    -1,     9,    -1,    -1,
       9,    -1,    -1,   414,     9,   408,   130,   408,    -1,   414,
       9,   408,    -1,   408,   130,   408,    -1,   408,    -1,    74,
      -1,    75,    -1,    76,    -1,    86,    -1,   145,    85,   146,
      -1,   145,   146,    -1,    74,    -1,    75,    -1,    76,    -1,
     218,    -1,   415,    -1,   218,    -1,    46,   416,    -1,    47,
     416,    -1,   132,   201,   418,   202,    -1,    66,   418,   208,
      -1,   174,   201,   421,   202,    -1,   419,   412,    -1,    -1,
     419,     9,   417,   130,   417,    -1,   419,     9,   417,    -1,
     417,   130,   417,    -1,   417,    -1,   420,     9,   417,    -1,
     417,    -1,   422,   412,    -1,    -1,   422,     9,   355,   130,
     417,    -1,   355,   130,   417,    -1,   420,   412,    -1,    -1,
     201,   423,   202,    -1,    -1,   425,     9,   218,   424,    -1,
     218,   424,    -1,    -1,   427,   425,   412,    -1,    45,   426,
      44,    -1,   428,    -1,    -1,   128,    -1,   129,    -1,   218,
      -1,   154,    -1,   204,   342,   205,    -1,   431,    -1,   445,
      -1,   218,    -1,   204,   342,   205,    -1,   433,    -1,   445,
      -1,    66,   448,   208,    -1,   204,   342,   205,    -1,   439,
     435,    -1,   201,   332,   202,   435,    -1,   451,   435,    -1,
     201,   332,   202,   435,    -1,   445,    -1,   400,    -1,   443,
      -1,   444,    -1,   436,    -1,   438,   430,   432,    -1,   201,
     332,   202,   430,   432,    -1,   402,   149,   445,    -1,   440,
     201,   292,   202,    -1,   441,   201,   292,   202,    -1,   201,
     438,   202,    -1,   400,    -1,   443,    -1,   444,    -1,   436,
      -1,   438,   430,   431,    -1,   201,   332,   202,   430,   431,
      -1,   440,   201,   292,   202,    -1,   201,   438,   202,    -1,
     445,    -1,   436,    -1,   201,   438,   202,    -1,   201,   442,
     202,    -1,   345,    -1,   348,    -1,   438,   430,   434,   477,
     201,   292,   202,    -1,   201,   332,   202,   430,   434,   477,
     201,   292,   202,    -1,   402,   149,   218,   477,   201,   292,
     202,    -1,   402,   149,   445,   201,   292,   202,    -1,   402,
     149,   204,   342,   205,   201,   292,   202,    -1,   446,    -1,
     449,   446,    -1,   446,    66,   448,   208,    -1,   446,   204,
     342,   205,    -1,   447,    -1,    79,    -1,   206,   204,   342,
     205,    -1,   342,    -1,    -1,   206,    -1,   449,   206,    -1,
     445,    -1,   437,    -1,   450,   430,   432,    -1,   201,   332,
     202,   430,   432,    -1,   402,   149,   445,    -1,   201,   438,
     202,    -1,    -1,   437,    -1,   450,   430,   431,    -1,   201,
     332,   202,   430,   431,    -1,   201,   438,   202,    -1,   452,
       9,    -1,   452,     9,   438,    -1,   452,     9,   131,   201,
     452,   202,    -1,    -1,   438,    -1,   131,   201,   452,   202,
      -1,   454,   412,    -1,    -1,   454,     9,   342,   130,   342,
      -1,   454,     9,   342,    -1,   342,   130,   342,    -1,   342,
      -1,   454,     9,   342,   130,    35,   438,    -1,   454,     9,
      35,   438,    -1,   342,   130,    35,   438,    -1,    35,   438,
      -1,   456,   412,    -1,    -1,   456,     9,   342,   130,   342,
      -1,   456,     9,   342,    -1,   342,   130,   342,    -1,   342,
      -1,   458,   412,    -1,    -1,   458,     9,   408,   130,   408,
      -1,   458,     9,   408,    -1,   408,   130,   408,    -1,   408,
      -1,   461,   412,    -1,    -1,   462,   412,    -1,    -1,   461,
       9,   342,   130,   342,    -1,   342,   130,   342,    -1,   462,
       9,   342,    -1,   342,    -1,   465,   412,    -1,    -1,   466,
     412,    -1,    -1,   465,     9,   408,   130,   408,    -1,   408,
     130,   408,    -1,   466,     9,   408,    -1,   408,    -1,   467,
     468,    -1,   467,    85,    -1,   468,    -1,    85,   468,    -1,
      79,    -1,    79,    66,   469,   208,    -1,    79,   430,   218,
      -1,   147,   342,   205,    -1,   147,    78,    66,   342,   208,
     205,    -1,   148,   438,   205,    -1,   218,    -1,    80,    -1,
      79,    -1,   121,   201,   471,   202,    -1,   122,   201,   438,
     202,    -1,   122,   201,   343,   202,    -1,   122,   201,   442,
     202,    -1,   122,   201,   441,   202,    -1,   122,   201,   332,
     202,    -1,     7,   342,    -1,     6,   342,    -1,     5,   201,
     342,   202,    -1,     4,   342,    -1,     3,   342,    -1,   438,
      -1,   471,     9,   438,    -1,   402,   149,   218,    -1,   402,
     149,   124,    -1,    -1,    97,   488,    -1,   178,   476,    14,
     488,   203,    -1,   180,   476,   473,    14,   488,   203,    -1,
     218,    -1,   488,   218,    -1,   218,    -1,   218,   170,   482,
     171,    -1,   170,   479,   171,    -1,    -1,   488,    -1,   478,
       9,   488,    -1,   478,   412,    -1,   478,     9,   163,    -1,
     479,    -1,   163,    -1,    -1,    -1,    30,   488,    -1,   482,
       9,   483,   218,    -1,   483,   218,    -1,   482,     9,   483,
     218,    97,   488,    -1,   483,   218,    97,   488,    -1,    46,
      -1,    47,    -1,    -1,    86,   130,   488,    -1,   229,   149,
     218,   130,   488,    -1,   485,     9,   484,    -1,   484,    -1,
     485,   412,    -1,    -1,   174,   201,   486,   202,    -1,    29,
     488,    -1,    55,   488,    -1,   229,    -1,   132,    -1,   133,
      -1,   487,    -1,   132,   170,   488,   171,    -1,   132,   170,
     488,     9,   488,   171,    -1,   154,    -1,   201,   105,   201,
     480,   202,    30,   488,   202,    -1,   201,   488,     9,   478,
     412,   202,    -1,   488,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   737,   737,   737,   746,   748,   751,   752,   753,   754,
     755,   756,   757,   760,   762,   762,   764,   764,   766,   767,
     769,   771,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   798,   800,   804,   806,   810,   812,   816,   817,   818,
     819,   824,   825,   826,   827,   832,   833,   834,   835,   840,
     841,   845,   846,   848,   851,   857,   864,   871,   875,   881,
     883,   886,   887,   888,   889,   892,   893,   897,   902,   902,
     908,   908,   915,   914,   920,   920,   925,   926,   927,   928,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     942,   940,   949,   947,   954,   962,   956,   966,   964,   968,
     969,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     982,   983,   991,   991,   996,  1002,  1006,  1006,  1014,  1015,
    1019,  1020,  1024,  1029,  1028,  1041,  1039,  1053,  1051,  1067,
    1066,  1075,  1073,  1085,  1084,  1103,  1101,  1120,  1119,  1128,
    1126,  1138,  1137,  1149,  1147,  1160,  1161,  1165,  1168,  1171,
    1172,  1173,  1176,  1177,  1180,  1182,  1185,  1186,  1189,  1190,
    1193,  1194,  1198,  1199,  1204,  1205,  1208,  1209,  1210,  1214,
    1215,  1219,  1220,  1224,  1225,  1229,  1230,  1235,  1236,  1241,
    1242,  1243,  1244,  1247,  1250,  1252,  1255,  1256,  1260,  1262,
    1265,  1268,  1271,  1272,  1275,  1276,  1280,  1286,  1292,  1299,
    1301,  1306,  1311,  1317,  1321,  1325,  1329,  1334,  1339,  1344,
    1349,  1355,  1364,  1369,  1374,  1380,  1382,  1386,  1390,  1395,
    1399,  1402,  1405,  1409,  1413,  1417,  1421,  1426,  1434,  1436,
    1439,  1440,  1441,  1442,  1444,  1446,  1451,  1452,  1455,  1456,
    1457,  1461,  1462,  1464,  1465,  1469,  1471,  1474,  1478,  1484,
    1486,  1489,  1489,  1493,  1492,  1496,  1500,  1498,  1513,  1510,
    1523,  1525,  1527,  1529,  1531,  1533,  1535,  1539,  1540,  1541,
    1544,  1550,  1553,  1559,  1562,  1567,  1569,  1574,  1579,  1583,
    1584,  1590,  1591,  1593,  1597,  1598,  1603,  1604,  1608,  1609,
    1613,  1615,  1621,  1626,  1627,  1629,  1633,  1634,  1635,  1636,
    1640,  1641,  1642,  1643,  1644,  1645,  1647,  1652,  1655,  1656,
    1660,  1661,  1665,  1666,  1669,  1670,  1673,  1674,  1677,  1678,
    1682,  1683,  1684,  1685,  1686,  1687,  1688,  1692,  1693,  1696,
    1697,  1698,  1701,  1703,  1705,  1706,  1709,  1711,  1716,  1717,
    1719,  1720,  1721,  1724,  1728,  1729,  1733,  1734,  1738,  1739,
    1740,  1744,  1748,  1753,  1757,  1761,  1766,  1767,  1768,  1769,
    1770,  1774,  1776,  1777,  1778,  1781,  1782,  1783,  1784,  1785,
    1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,
    1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,  1805,
    1806,  1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,
    1816,  1817,  1818,  1819,  1820,  1821,  1822,  1823,  1825,  1826,
    1828,  1830,  1831,  1832,  1833,  1834,  1835,  1836,  1837,  1838,
    1839,  1840,  1841,  1842,  1843,  1844,  1845,  1846,  1847,  1848,
    1849,  1850,  1854,  1858,  1863,  1862,  1877,  1875,  1892,  1892,
    1908,  1907,  1925,  1925,  1941,  1940,  1959,  1958,  1979,  1980,
    1981,  1986,  1988,  1992,  1996,  2002,  2006,  2012,  2014,  2018,
    2020,  2024,  2028,  2029,  2033,  2040,  2041,  2045,  2049,  2051,
    2056,  2061,  2068,  2070,  2075,  2076,  2077,  2078,  2080,  2084,
    2088,  2092,  2096,  2098,  2100,  2102,  2107,  2108,  2113,  2114,
    2115,  2116,  2117,  2118,  2122,  2126,  2130,  2134,  2139,  2144,
    2148,  2149,  2153,  2154,  2158,  2159,  2163,  2164,  2168,  2172,
    2176,  2180,  2181,  2182,  2183,  2187,  2193,  2202,  2215,  2216,
    2219,  2222,  2225,  2226,  2229,  2233,  2236,  2239,  2246,  2247,
    2251,  2252,  2254,  2258,  2259,  2260,  2261,  2262,  2263,  2264,
    2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,  2273,  2274,
    2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,  2284,
    2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,  2294,
    2295,  2296,  2297,  2298,  2299,  2300,  2301,  2302,  2303,  2304,
    2305,  2306,  2307,  2308,  2309,  2310,  2311,  2312,  2313,  2314,
    2315,  2316,  2317,  2318,  2319,  2320,  2321,  2322,  2323,  2324,
    2325,  2326,  2327,  2328,  2329,  2330,  2331,  2332,  2333,  2334,
    2335,  2336,  2337,  2341,  2346,  2347,  2350,  2351,  2352,  2356,
    2357,  2358,  2362,  2363,  2364,  2368,  2369,  2370,  2373,  2375,
    2379,  2380,  2381,  2382,  2384,  2385,  2386,  2387,  2388,  2389,
    2390,  2391,  2392,  2393,  2396,  2401,  2402,  2403,  2405,  2406,
    2408,  2409,  2410,  2411,  2412,  2413,  2415,  2417,  2419,  2421,
    2423,  2424,  2425,  2426,  2427,  2428,  2429,  2430,  2431,  2432,
    2433,  2434,  2435,  2436,  2437,  2438,  2439,  2441,  2443,  2445,
    2447,  2448,  2451,  2452,  2456,  2458,  2462,  2465,  2468,  2474,
    2475,  2476,  2477,  2478,  2479,  2480,  2485,  2487,  2491,  2492,
    2495,  2496,  2500,  2503,  2505,  2507,  2511,  2512,  2513,  2514,
    2516,  2519,  2523,  2524,  2525,  2526,  2529,  2530,  2531,  2532,
    2533,  2535,  2536,  2541,  2543,  2546,  2549,  2551,  2553,  2556,
    2558,  2562,  2564,  2567,  2570,  2576,  2578,  2581,  2582,  2587,
    2590,  2594,  2594,  2599,  2602,  2603,  2607,  2608,  2612,  2613,
    2614,  2618,  2619,  2623,  2624,  2628,  2629,  2633,  2634,  2638,
    2639,  2644,  2646,  2651,  2652,  2653,  2654,  2655,  2656,  2658,
    2661,  2664,  2666,  2668,  2672,  2673,  2674,  2675,  2676,  2679,
    2683,  2685,  2689,  2690,  2691,  2695,  2699,  2700,  2704,  2707,
    2714,  2718,  2722,  2729,  2730,  2735,  2737,  2738,  2741,  2742,
    2745,  2746,  2750,  2751,  2755,  2756,  2757,  2760,  2763,  2766,
    2769,  2770,  2771,  2774,  2778,  2782,  2783,  2784,  2786,  2787,
    2788,  2792,  2794,  2797,  2799,  2800,  2801,  2802,  2805,  2807,
    2808,  2812,  2814,  2817,  2819,  2820,  2821,  2825,  2827,  2830,
    2833,  2835,  2837,  2841,  2843,  2846,  2848,  2851,  2853,  2856,
    2857,  2861,  2863,  2866,  2868,  2871,  2874,  2878,  2880,  2884,
    2885,  2887,  2888,  2894,  2895,  2897,  2899,  2901,  2903,  2906,
    2907,  2908,  2912,  2913,  2914,  2915,  2916,  2917,  2918,  2919,
    2920,  2921,  2922,  2926,  2927,  2931,  2933,  2941,  2943,  2947,
    2951,  2958,  2959,  2965,  2966,  2973,  2976,  2980,  2983,  2988,
    2993,  2995,  2996,  2997,  3001,  3002,  3006,  3008,  3009,  3012,
    3017,  3018,  3019,  3023,  3026,  3035,  3037,  3041,  3044,  3047,
    3055,  3058,  3061,  3062,  3065,  3068,  3069,  3072,  3076,  3080,
    3086,  3096,  3097
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "T_LAMBDA_ARROW", "','", "T_LOGICAL_OR",
  "T_LOGICAL_XOR", "T_LOGICAL_AND", "T_PRINT", "'='", "T_POW_EQUAL",
  "T_SR_EQUAL", "T_SL_EQUAL", "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL",
  "T_MOD_EQUAL", "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL",
  "T_MINUS_EQUAL", "T_PLUS_EQUAL", "T_YIELD", "T_AWAIT", "'?'", "':'",
  "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'", "'^'", "'&'",
  "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL", "T_IS_EQUAL",
  "'<'", "'>'", "T_IS_GREATER_OR_EQUAL", "T_IS_SMALLER_OR_EQUAL", "T_SR",
  "T_SL", "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'", "T_INSTANCEOF",
  "'~'", "'@'", "T_UNSET_CAST", "T_BOOL_CAST", "T_OBJECT_CAST",
  "T_ARRAY_CAST", "T_STRING_CAST", "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC",
  "T_INC", "T_POW", "'['", "T_CLONE", "T_NEW", "T_EXIT", "T_IF",
  "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER", "T_DNUMBER", "T_ONUMBER",
  "T_STRING", "T_STRING_VARNAME", "T_VARIABLE", "T_NUM_STRING",
  "T_INLINE_HTML", "T_HASHBANG", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_GOTO", "T_CONTINUE",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_NULLSAFE_OBJECT_OPERATOR", "T_DOUBLE_ARROW",
  "T_LIST", "T_ARRAY", "T_CALLABLE", "T_CLASS_C", "T_METHOD_C", "T_FUNC_C",
  "T_LINE", "T_FILE", "T_COMMENT", "T_DOC_COMMENT", "T_OPEN_TAG",
  "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG", "T_WHITESPACE", "T_START_HEREDOC",
  "T_END_HEREDOC", "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN",
  "T_DOUBLE_COLON", "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR",
  "T_XHP_LABEL", "T_XHP_TEXT", "T_XHP_ATTRIBUTE", "T_XHP_CATEGORY",
  "T_XHP_CATEGORY_LABEL", "T_XHP_CHILDREN", "T_ENUM", "T_XHP_REQUIRED",
  "T_TRAIT", "\"...\"", "T_INSTEADOF", "T_TRAIT_C", "T_HH_ERROR",
  "T_FINALLY", "T_XHP_TAG_LT", "T_XHP_TAG_GT", "T_TYPELIST_LT",
  "T_TYPELIST_GT", "T_UNRESOLVED_LT", "T_COLLECTION", "T_SHAPE",
  "T_VARRAY", "T_MIARRAY", "T_MSARRAY", "T_TYPE", "T_UNRESOLVED_TYPE",
  "T_NEWTYPE", "T_UNRESOLVED_NEWTYPE", "T_COMPILER_HALT_OFFSET", "T_ASYNC",
  "T_FROM", "T_WHERE", "T_JOIN", "T_IN", "T_ON", "T_EQUALS", "T_INTO",
  "T_LET", "T_ORDERBY", "T_ASCENDING", "T_DESCENDING", "T_SELECT",
  "T_GROUP", "T_BY", "T_LAMBDA_OP", "T_LAMBDA_CP", "T_UNRESOLVED_OP",
  "'('", "')'", "';'", "'{'", "'}'", "'$'", "'`'", "']'", "'\"'", "'\\''",
  "$accept", "start", "$@1", "top_statement_list", "top_statement", "$@2",
  "$@3", "ident", "use_declarations", "use_fn_declarations",
  "use_const_declarations", "use_declaration", "use_fn_declaration",
  "use_const_declaration", "namespace_name", "namespace_string_base",
  "namespace_string", "namespace_string_typeargs",
  "class_namespace_string_typeargs", "constant_declaration",
  "inner_statement_list", "inner_statement", "statement", "$@4", "$@5",
  "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "try_statement_list", "$@12",
  "additional_catches", "finally_statement_list", "$@13",
  "optional_finally", "is_reference", "function_loc",
  "function_declaration_statement", "$@14", "$@15", "$@16",
  "enum_declaration_statement", "$@17", "$@18",
  "class_declaration_statement", "$@19", "$@20", "$@21", "$@22",
  "trait_declaration_statement", "$@23", "$@24", "class_decl_name",
  "interface_decl_name", "trait_decl_name", "class_entry_type",
  "extends_from", "implements_list", "interface_extends_list",
  "interface_list", "trait_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "while_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "case_separator", "elseif_list",
  "new_elseif_list", "else_single", "new_else_single",
  "method_parameter_list", "non_empty_method_parameter_list",
  "parameter_list", "non_empty_parameter_list",
  "function_call_parameter_list", "non_empty_fcall_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "enum_statement_list", "enum_statement", "enum_constant_declaration",
  "class_statement_list", "class_statement", "$@25", "$@26", "$@27",
  "$@28", "trait_rules", "trait_precedence_rule", "trait_alias_rule",
  "trait_alias_rule_method", "xhp_attribute_stmt", "xhp_attribute_decl",
  "xhp_attribute_decl_type", "xhp_attribute_enum", "xhp_attribute_default",
  "xhp_attribute_is_required", "xhp_category_stmt", "xhp_category_decl",
  "xhp_children_stmt", "xhp_children_paren_expr", "xhp_children_decl_expr",
  "xhp_children_decl_tag", "function_body", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "parameter_modifiers", "parameter_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "expr_with_parens", "parenthesis_expr", "expr_list", "for_expr",
  "yield_expr", "yield_assign_expr", "yield_list_assign_expr",
  "await_expr", "await_assign_expr", "await_list_assign_expr", "expr",
  "expr_no_variable", "lambda_use_vars", "closure_expression", "$@29",
  "$@30", "lambda_expression", "$@31", "$@32", "$@33", "$@34", "$@35",
  "lambda_body", "shape_keyname", "non_empty_shape_pair_list",
  "non_empty_static_shape_pair_list", "shape_pair_list",
  "static_shape_pair_list", "shape_literal", "array_literal",
  "collection_literal", "map_array_literal", "varray_literal",
  "static_map_array_literal", "static_varray_literal",
  "static_collection_literal", "dim_expr", "dim_expr_base", "query_expr",
  "query_assign_expr", "query_head", "query_body", "query_body_clauses",
  "query_body_clause", "from_clause", "let_clause", "where_clause",
  "join_clause", "join_into_clause", "orderby_clause", "orderings",
  "ordering", "ordering_direction", "select_or_group_clause",
  "select_clause", "group_clause", "query_continuation",
  "lexical_var_list", "xhp_tag", "xhp_tag_body", "xhp_opt_end_label",
  "xhp_attributes", "xhp_children", "xhp_attribute_name",
  "xhp_attribute_value", "xhp_child", "xhp_label_ws", "xhp_bareword",
  "simple_function_call", "fully_qualified_class_name",
  "static_class_name", "class_name_reference", "exit_expr",
  "backticks_expr", "ctor_arguments", "common_scalar", "static_expr",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "hh_possible_comma",
  "non_empty_static_array_pair_list", "common_scalar_ae",
  "static_numeric_scalar_ae", "static_scalar_ae",
  "static_array_pair_list_ae", "non_empty_static_array_pair_list_ae",
  "non_empty_static_scalar_list_ae", "static_shape_pair_list_ae",
  "non_empty_static_shape_pair_list_ae", "static_scalar_list_ae",
  "attribute_static_scalar_list", "non_empty_user_attribute_list",
  "user_attribute_list", "$@36", "non_empty_user_attributes",
  "optional_user_attributes", "object_operator",
  "object_property_name_no_variables", "object_property_name",
  "object_method_name_no_variables", "object_method_name", "array_access",
  "dimmable_variable_access", "dimmable_variable_no_calls_access",
  "variable", "dimmable_variable", "callable_variable",
  "lambda_or_closure_with_parens", "lambda_or_closure",
  "object_method_call", "class_method_call", "variable_no_objects",
  "reference_variable", "compound_variable", "dim_offset",
  "simple_indirect_reference", "variable_no_calls",
  "dimmable_variable_no_calls", "assignment_list", "array_pair_list",
  "non_empty_array_pair_list", "collection_init",
  "non_empty_collection_init", "static_collection_init",
  "non_empty_static_collection_init", "map_array_init", "varray_init",
  "non_empty_map_array_init", "non_empty_varray_init",
  "static_map_array_init", "static_varray_init",
  "non_empty_static_map_array_init", "non_empty_static_varray_init",
  "encaps_list", "encaps_var", "encaps_var_offset", "internal_functions",
  "variable_list", "class_constant", "hh_opt_constraint",
  "hh_type_alias_statement", "hh_name_with_type", "hh_name_with_typevar",
  "hh_typeargs_opt", "hh_non_empty_type_list", "hh_type_list",
  "hh_func_type_list", "hh_opt_return_type", "hh_typevar_list",
  "hh_typevar_variance", "hh_shape_member_type",
  "hh_non_empty_shape_member_list", "hh_shape_member_list",
  "hh_shape_type", "hh_type", "hh_type_opt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    44,
     264,   265,   266,   267,    61,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    63,
      58,   282,   283,   124,    94,    38,   284,   285,   286,   287,
      60,    62,   288,   289,   290,   291,    43,    45,    46,    42,
      47,    37,    33,   292,   126,    64,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,    91,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,    40,    41,    59,   123,   125,    36,    96,    93,    34,
      39
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   211,   213,   212,   214,   214,   215,   215,   215,   215,
     215,   215,   215,   215,   216,   215,   217,   215,   215,   215,
     215,   215,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   219,   219,   220,   220,   221,   221,   222,   222,   222,
     222,   223,   223,   223,   223,   224,   224,   224,   224,   225,
     225,   226,   226,   226,   227,   228,   229,   230,   230,   231,
     231,   232,   232,   232,   232,   233,   233,   233,   234,   233,
     235,   233,   236,   233,   237,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     238,   233,   239,   233,   233,   240,   233,   241,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   243,   242,   244,   244,   246,   245,   247,   247,
     248,   248,   249,   251,   250,   252,   250,   253,   250,   255,
     254,   256,   254,   258,   257,   259,   257,   260,   257,   261,
     257,   263,   262,   264,   262,   265,   265,   266,   267,   268,
     268,   268,   268,   268,   269,   269,   270,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   275,   275,   275,   276,
     276,   277,   277,   278,   278,   279,   279,   280,   280,   281,
     281,   281,   281,   282,   282,   282,   283,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   288,   288,   288,
     288,   288,   288,   288,   289,   289,   289,   289,   289,   289,
     289,   289,   290,   290,   290,   290,   290,   290,   290,   290,
     291,   291,   291,   291,   291,   291,   291,   291,   292,   292,
     293,   293,   293,   293,   293,   293,   294,   294,   295,   295,
     295,   296,   296,   296,   296,   297,   297,   298,   299,   300,
     300,   302,   301,   303,   301,   301,   304,   301,   305,   301,
     301,   301,   301,   301,   301,   301,   301,   306,   306,   306,
     307,   308,   308,   309,   309,   310,   310,   311,   311,   312,
     312,   312,   312,   312,   313,   313,   314,   314,   315,   315,
     316,   316,   317,   318,   318,   318,   319,   319,   319,   319,
     320,   320,   320,   320,   320,   320,   320,   321,   321,   321,
     322,   322,   323,   323,   324,   324,   325,   325,   326,   326,
     327,   327,   327,   327,   327,   327,   327,   328,   328,   329,
     329,   329,   330,   330,   330,   330,   331,   331,   332,   332,
     332,   332,   332,   333,   334,   334,   335,   335,   336,   336,
     336,   337,   338,   339,   340,   341,   342,   342,   342,   342,
     342,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   344,   344,   346,   345,   347,   345,   349,   348,
     350,   348,   351,   348,   352,   348,   353,   348,   354,   354,
     354,   355,   355,   356,   356,   357,   357,   358,   358,   359,
     359,   360,   361,   361,   362,   363,   363,   364,   365,   365,
     366,   367,   368,   368,   369,   369,   369,   369,   369,   370,
     371,   372,   373,   373,   373,   373,   374,   374,   375,   375,
     375,   375,   375,   375,   376,   377,   378,   379,   380,   381,
     382,   382,   383,   383,   384,   384,   385,   385,   386,   387,
     388,   389,   389,   389,   389,   390,   391,   391,   392,   392,
     393,   393,   394,   394,   395,   396,   396,   397,   397,   397,
     398,   398,   398,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   400,   401,   401,   402,   402,   402,   403,
     403,   403,   404,   404,   404,   405,   405,   405,   406,   406,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   409,   409,   409,   410,
     410,   410,   410,   410,   410,   410,   411,   411,   412,   412,
     413,   413,   414,   414,   414,   414,   415,   415,   415,   415,
     415,   415,   416,   416,   416,   416,   417,   417,   417,   417,
     417,   417,   417,   418,   418,   419,   419,   419,   419,   420,
     420,   421,   421,   422,   422,   423,   423,   424,   424,   425,
     425,   427,   426,   428,   429,   429,   430,   430,   431,   431,
     431,   432,   432,   433,   433,   434,   434,   435,   435,   436,
     436,   437,   437,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   439,   439,   439,   439,   439,   439,
     439,   439,   440,   440,   440,   441,   442,   442,   443,   443,
     444,   444,   444,   445,   445,   446,   446,   446,   447,   447,
     448,   448,   449,   449,   450,   450,   450,   450,   450,   450,
     451,   451,   451,   451,   451,   452,   452,   452,   452,   452,
     452,   453,   453,   454,   454,   454,   454,   454,   454,   454,
     454,   455,   455,   456,   456,   456,   456,   457,   457,   458,
     458,   458,   458,   459,   459,   460,   460,   461,   461,   462,
     462,   463,   463,   464,   464,   465,   465,   466,   466,   467,
     467,   467,   467,   468,   468,   468,   468,   468,   468,   469,
     469,   469,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   471,   471,   472,   472,   473,   473,   474,
     474,   475,   475,   476,   476,   477,   477,   478,   478,   479,
     480,   480,   480,   480,   481,   481,   482,   482,   482,   482,
     483,   483,   483,   484,   484,   485,   485,   486,   486,   487,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   489,   489
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     4,     3,     0,     6,     0,     5,     3,     4,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     1,     2,     3,
       4,     1,     2,     3,     4,     1,     2,     3,     4,     1,
       3,     1,     3,     2,     1,     2,     2,     5,     4,     2,
       0,     1,     1,     1,     1,     3,     5,     8,     0,     4,
       0,     6,     0,    10,     0,     4,     2,     3,     2,     3,
       2,     3,     3,     3,     3,     3,     5,     1,     1,     1,
       0,     9,     0,    10,     5,     0,    13,     0,     5,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     2,     0,     4,     9,     0,     0,     4,     2,     0,
       1,     0,     1,     0,     9,     0,    10,     0,    11,     0,
       9,     0,    10,     0,     8,     0,     9,     0,     7,     0,
       8,     0,     7,     0,     8,     1,     1,     1,     1,     1,
       2,     3,     3,     2,     2,     0,     2,     0,     2,     0,
       1,     3,     1,     3,     2,     0,     1,     2,     4,     1,
       4,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     5,     4,     0,     1,     1,     4,     0,
       5,     0,     2,     0,     3,     0,     7,     8,     6,     2,
       5,     6,     4,     0,     4,     5,     7,     6,     6,     7,
       9,     8,     6,     7,     5,     2,     4,     5,     3,     0,
       3,     4,     6,     5,     5,     6,     8,     7,     2,     0,
       1,     2,     2,     3,     4,     4,     3,     1,     1,     2,
       4,     3,     5,     1,     3,     2,     0,     2,     3,     2,
       0,     0,     4,     0,     5,     2,     0,    10,     0,    11,
       3,     3,     3,     4,     4,     3,     5,     2,     2,     0,
       6,     5,     4,     3,     1,     1,     3,     4,     1,     1,
       1,     1,     4,     1,     1,     3,     2,     0,     2,     0,
       1,     3,     1,     1,     1,     1,     3,     4,     4,     4,
       1,     1,     2,     2,     2,     3,     3,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     3,     3,
       2,     1,     1,     3,     3,     1,     1,     0,     1,     2,
       4,     3,     6,     2,     3,     6,     1,     1,     1,     1,
       1,     6,     3,     4,     6,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       2,     1,     5,     0,     0,    11,     0,    12,     0,     3,
       0,     4,     0,     6,     0,     7,     0,     5,     2,     2,
       4,     1,     1,     5,     3,     5,     3,     2,     0,     2,
       0,     4,     4,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     1,     1,     1,     1,     3,     2,
       3,     4,     2,     3,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     4,     4,     2,     8,    10,     2,
       1,     3,     1,     2,     1,     1,     1,     1,     2,     4,
       3,     3,     4,     1,     2,     4,     2,     6,     0,     1,
       4,     0,     2,     0,     1,     1,     3,     1,     3,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     0,     0,     1,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     4,     3,     4,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     4,     3,     3,     3,     1,
       1,     1,     1,     3,     3,     3,     2,     0,     1,     0,
       1,     0,     5,     3,     3,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     3,     4,     2,     0,     5,     3,     3,     1,     3,
       1,     2,     0,     5,     3,     2,     0,     3,     0,     4,
       2,     0,     3,     3,     1,     0,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     3,     3,     2,
       4,     2,     4,     1,     1,     1,     1,     1,     3,     5,
       3,     4,     4,     3,     1,     1,     1,     1,     3,     5,
       4,     3,     1,     1,     3,     3,     1,     1,     7,     9,
       7,     6,     8,     1,     2,     4,     4,     1,     1,     4,
       1,     0,     1,     2,     1,     1,     3,     5,     3,     3,
       0,     1,     3,     5,     3,     2,     3,     6,     0,     1,
       4,     2,     0,     5,     3,     3,     1,     6,     4,     4,
       2,     2,     0,     5,     3,     3,     1,     2,     0,     5,
       3,     3,     1,     2,     0,     2,     0,     5,     3,     3,
       1,     2,     0,     2,     0,     5,     3,     3,     1,     2,
       2,     1,     2,     1,     4,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     2,     2,
       4,     2,     2,     1,     3,     3,     3,     0,     2,     5,
       6,     1,     2,     1,     4,     3,     0,     1,     3,     2,
       3,     1,     1,     0,     0,     2,     4,     2,     6,     4,
       1,     1,     0,     3,     5,     3,     1,     2,     0,     4,
       2,     2,     1,     1,     1,     1,     4,     6,     1,     8,
       6,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     5,     1,     3,     0,     0,     0,     0,     0,
       0,   358,     0,   751,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   832,     0,
     820,   634,     0,   640,   641,   642,    22,   700,   808,    98,
      99,   643,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,   330,
     331,   332,   335,   334,   333,     0,     0,     0,     0,   159,
       0,     0,     0,   647,   649,   650,   644,   645,     0,     0,
     651,   646,     0,   625,    23,    24,    25,    27,    26,     0,
     648,     0,     0,     0,     0,     0,     0,     0,   652,   336,
      28,    29,    31,    30,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   452,     0,    97,    70,   812,   635,     0,
       0,     4,    59,    61,    64,   699,     0,   624,     0,     6,
     131,     7,     9,     8,    10,     0,     0,   328,   368,     0,
       0,     0,     0,     0,     0,     0,   366,   796,   797,   436,
     435,   352,   437,   438,   441,     0,     0,   351,   774,   626,
       0,   702,   434,   327,   777,   367,     0,     0,   370,   369,
     775,   776,   773,   803,   807,     0,   424,   701,    11,   335,
     334,   333,     0,     0,    27,    59,   131,     0,   892,   367,
     891,     0,   889,   888,   440,     0,   359,   363,     0,     0,
     408,   409,   410,   411,   433,   431,   430,   429,   428,   427,
     426,   425,   808,   627,     0,   906,   626,     0,   390,     0,
     388,     0,   836,     0,   709,   350,   630,     0,   906,   629,
       0,   639,   815,   814,   631,     0,     0,   633,   432,     0,
       0,     0,     0,   355,     0,    78,   357,     0,     0,    84,
      86,     0,     0,    88,     0,     0,     0,   933,   934,   938,
       0,     0,    59,   932,     0,   935,     0,     0,    90,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,     0,
      42,    47,   248,     0,     0,   247,     0,   163,     0,   160,
     253,     0,     0,     0,     0,     0,   903,   147,   157,   828,
     832,   873,     0,   654,     0,     0,     0,   871,     0,    16,
       0,    63,   139,   151,   158,   531,   468,   856,   854,   854,
       0,   897,   450,   454,   456,   755,   368,     0,   366,   367,
     369,     0,     0,   636,     0,   637,     0,     0,     0,   121,
       0,     0,    66,   239,     0,    21,   130,     0,   156,   143,
     155,   333,   336,   131,   329,   112,   113,   114,   115,   116,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   820,     0,   111,   811,
     811,   119,   842,     0,     0,     0,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   389,   387,   756,   757,     0,   811,     0,
     769,   239,   239,   811,     0,   813,   804,   828,     0,   131,
       0,     0,    92,     0,   753,   748,   709,     0,     0,     0,
       0,     0,   840,     0,   473,   708,   831,     0,     0,    66,
       0,   239,   349,     0,   771,   632,     0,    70,   199,     0,
     449,     0,    95,     0,     0,   356,     0,     0,     0,     0,
       0,    87,   110,    89,   930,   931,     0,   928,     0,     0,
       0,   902,     0,   117,    91,   120,     0,     0,     0,     0,
       0,     0,     0,   489,     0,   496,   498,   499,   500,   501,
     502,   503,   494,   516,   517,    70,     0,   107,   109,     0,
       0,    44,    51,     0,     0,    46,    55,    48,     0,    18,
       0,     0,   249,     0,    93,   162,   161,     0,     0,    94,
     893,     0,     0,   368,   366,   367,   370,   369,     0,   922,
     169,     0,   829,     0,     0,     0,     0,   653,   872,   700,
       0,     0,   870,   705,   869,    62,     5,    13,    14,     0,
     167,     0,     0,   461,     0,     0,   709,     0,     0,   628,
     462,   860,     0,   709,     0,     0,   709,     0,     0,     0,
       0,     0,   755,    70,     0,   711,   754,   942,   348,   421,
     783,   795,    75,    69,    71,    72,    73,    74,   327,     0,
     439,   703,   704,    60,   709,     0,   907,     0,     0,     0,
     711,   240,     0,   444,   133,   165,     0,   393,   395,   394,
       0,     0,   391,   392,   396,   398,   397,   413,   412,   415,
     414,   416,   418,   419,   417,   407,   406,   400,   401,   399,
     402,   403,   405,   420,   404,   810,     0,     0,   846,     0,
     709,   896,     0,   895,   780,   803,   149,   141,   153,   145,
     131,   358,     0,   361,   364,   372,   490,   386,   385,   384,
     383,   382,   381,   380,   379,   378,   377,   376,   375,   759,
       0,   758,   761,   778,   765,   906,   762,     0,     0,     0,
       0,     0,     0,     0,     0,   890,   360,   746,   750,   708,
     752,     0,     0,   906,     0,   835,     0,   834,     0,   819,
     818,     0,     0,   758,   761,   816,   762,   353,   201,   203,
      70,   459,   458,   354,     0,    70,   183,    79,   357,     0,
       0,     0,     0,     0,   195,   195,    85,     0,     0,     0,
     926,   709,     0,   913,     0,     0,     0,     0,     0,   707,
     643,     0,     0,   625,     0,     0,     0,     0,     0,    64,
     656,   624,   662,   663,   661,     0,   655,    68,   660,     0,
       0,   506,     0,     0,   512,   509,   510,   518,     0,   497,
     492,     0,   495,     0,     0,     0,    52,    19,     0,     0,
      56,    20,     0,     0,     0,    41,    49,     0,   246,   254,
     251,     0,     0,   882,   887,   884,   883,   886,   885,    12,
     920,   921,     0,     0,     0,     0,   828,   825,     0,   472,
     881,   880,   879,     0,   875,     0,   876,   878,     0,     5,
       0,     0,     0,   525,   526,   534,   533,     0,     0,   708,
     467,   471,     0,   477,   708,   855,     0,   475,   708,   853,
     476,     0,   898,     0,   451,     0,     0,   914,   755,   225,
     941,     0,     0,   770,   809,   708,   909,   905,   241,   242,
     623,   710,   238,     0,   755,     0,     0,   167,   446,   135,
     423,     0,   482,   483,     0,   474,   708,   841,     0,     0,
     239,   169,     0,   167,   165,     0,   820,   373,     0,     0,
     767,   768,   781,   782,   805,   806,     0,     0,     0,   734,
     716,   717,   718,   719,     0,     0,     0,   727,   726,   740,
     709,     0,   748,   839,   838,     0,     0,   772,   638,     0,
     205,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,   175,   176,   187,     0,    70,   185,   104,   195,     0,
     195,     0,     0,   936,     0,     0,   708,   927,   929,   912,
     709,   911,     0,   709,   684,   685,   682,   683,   715,     0,
     709,   707,     0,     0,   470,   864,   862,   862,     0,     0,
     848,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   491,     0,     0,
       0,   514,   515,   513,     0,     0,   493,     0,   123,     0,
     126,   108,     0,    43,    53,     0,    45,    57,    50,   250,
       0,   894,    96,   922,   904,   917,   168,   170,   260,     0,
       0,   826,     0,   874,     0,    17,     0,   897,   166,   260,
       0,     0,   464,     0,   895,   859,   858,     0,   899,     0,
     914,   457,     0,     0,   942,     0,   230,   228,   761,   779,
     906,   908,     0,     0,   243,    67,     0,   755,   164,     0,
     755,     0,   422,   845,   844,     0,   239,     0,     0,     0,
       0,   167,   137,   639,   760,   239,     0,   722,   723,   724,
     725,   728,   729,   738,     0,   709,   734,     0,   721,   742,
     708,   745,   747,   749,     0,   833,   761,   817,   760,     0,
       0,     0,     0,   202,   460,    81,     0,   357,   175,   177,
     828,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,     0,   923,     0,   925,   708,     0,     0,     0,   658,
     708,   706,     0,   697,     0,   709,     0,   868,     0,   709,
       0,     0,   709,     0,   664,   698,   696,   852,     0,   709,
     667,   669,   668,     0,     0,   665,   666,   670,   672,   671,
     687,   686,   689,   688,   690,   692,   693,   691,   680,   679,
     674,   675,   673,   676,   677,   678,   681,   504,     0,   505,
     511,   519,   520,     0,    70,    54,    58,   252,     0,     0,
       0,   327,   830,   828,   362,   365,   371,     0,    15,     0,
     327,   537,     0,     0,   539,   532,   535,     0,   530,     0,
       0,   900,     0,   915,   453,     0,   231,     0,     0,   226,
       0,   245,   244,   914,     0,   260,     0,   755,     0,   239,
       0,   801,   260,   897,   260,     0,     0,   374,     0,     0,
     731,   708,   733,     0,   720,     0,     0,   709,   739,   837,
       0,    70,     0,   198,   184,     0,     0,     0,   174,   100,
     188,     0,     0,   191,     0,   196,   197,    70,   190,   937,
       0,   910,     0,   940,   714,   713,   657,     0,   708,   469,
     659,   480,   708,   863,     0,   478,   708,   861,   479,     0,
     481,   708,   847,   695,     0,     0,     0,     0,   916,   919,
     171,     0,     0,     0,   325,     0,     0,     0,   148,   259,
     261,     0,   324,     0,   327,     0,   877,   256,   152,   528,
       0,     0,   463,   857,   455,     0,   234,   224,     0,   227,
     233,   239,   443,   914,   327,   914,     0,   843,     0,   800,
     327,     0,   327,   260,   755,   798,   737,   736,   730,     0,
     732,   708,   741,    70,   204,    77,    82,   102,   178,     0,
     186,   192,    70,   194,   924,     0,     0,   466,     0,   867,
     866,     0,   851,   850,   694,     0,    70,   127,     0,     0,
       0,     0,     0,   172,   291,   289,   293,   625,    27,     0,
     285,     0,   290,   302,     0,   300,   305,     0,   304,     0,
     303,     0,   131,   263,     0,   265,     0,   827,     0,   529,
     527,   538,   536,   235,     0,     0,   222,   232,     0,     0,
       0,     0,   144,   443,   914,   802,   150,   256,   154,   327,
       0,     0,   744,     0,   200,     0,     0,    70,   181,   101,
     193,   939,   712,     0,     0,     0,     0,     0,   918,     0,
       0,     0,     0,   275,   279,     0,     0,   270,   589,   588,
     585,   587,   586,   606,   608,   607,   577,   548,   549,   567,
     583,   582,   544,   554,   555,   557,   556,   576,   560,   558,
     559,   561,   562,   563,   564,   565,   566,   568,   569,   570,
     571,   572,   573,   575,   574,   545,   546,   547,   550,   551,
     553,   591,   592,   601,   600,   599,   598,   597,   596,   584,
     603,   593,   594,   595,   578,   579,   580,   581,   604,   605,
     609,   611,   610,   612,   613,   590,   615,   614,   617,   619,
     618,   552,   622,   620,   621,   616,   602,   543,   297,   540,
       0,   271,   318,   319,   317,   310,     0,   311,   272,   344,
       0,     0,     0,     0,   131,   140,   255,     0,     0,     0,
     223,   237,   799,     0,    70,   320,    70,   134,     0,     0,
       0,   146,   914,   735,     0,    70,   179,    83,   103,     0,
     465,   865,   849,   507,   125,   273,   274,   347,   173,     0,
       0,   294,   286,     0,     0,     0,   299,   301,     0,     0,
     306,   313,   314,   312,     0,     0,   262,     0,     0,     0,
       0,   257,     0,   236,     0,   523,   711,     0,     0,    70,
     136,   142,     0,   743,     0,     0,     0,   105,   276,    59,
       0,   277,   278,     0,     0,   292,   296,   541,   542,     0,
     287,   315,   316,   308,   309,   307,   345,   342,   266,   264,
     346,     0,   258,   524,   710,     0,   445,   321,     0,   138,
       0,   182,   508,     0,   129,     0,   327,   295,   298,     0,
     755,   268,     0,   521,   442,   447,   180,     0,     0,   106,
     283,     0,   326,   343,     0,   711,   338,   755,   522,     0,
     128,     0,     0,   282,   914,   755,   209,   339,   340,   341,
     942,   337,     0,     0,     0,   281,     0,   338,     0,   914,
       0,   280,   322,    70,   267,   942,     0,   214,   212,     0,
      70,     0,     0,   215,     0,     0,   210,   269,     0,   323,
       0,   218,   208,     0,   211,   217,   124,   219,     0,     0,
     206,   216,     0,   207,   221,   220
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,   121,   829,   556,   185,   279,   510,
     514,   280,   511,   515,   123,   124,   125,   126,   127,   128,
     331,   593,   594,   464,   244,  1455,   470,  1379,  1456,  1684,
     785,   274,   505,  1647,  1021,  1204,  1699,   347,   186,   595,
     875,  1081,  1256,   132,   559,   892,   596,   615,   894,   540,
     891,   597,   560,   893,   349,   297,   313,   135,   877,   832,
     815,  1036,  1402,  1132,   941,  1597,  1459,   727,   947,   469,
     736,   949,  1287,   719,   930,   933,  1121,  1704,  1705,   584,
     585,   609,   610,   284,   285,   291,  1428,  1576,  1577,  1211,
    1329,  1421,  1572,  1690,  1707,  1609,  1651,  1652,  1653,  1409,
    1410,  1411,  1610,  1616,  1660,  1414,  1415,  1419,  1565,  1566,
    1567,  1587,  1734,  1330,  1331,   187,   137,  1720,  1721,  1570,
    1333,   138,   237,   465,   466,   139,   140,   141,   142,   143,
     144,   145,   146,  1440,   147,   874,  1080,   148,   241,   581,
     325,   582,   583,   460,   565,   566,  1155,   567,  1156,   149,
     150,   151,   152,   153,   762,   763,   764,   154,   155,   271,
     156,   272,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   775,   776,  1013,   502,   503,   504,   782,  1636,   157,
     561,  1430,   562,  1050,   837,  1228,  1225,  1558,  1559,   158,
     159,   160,   231,   238,   334,   452,   161,   968,   768,   162,
     969,   866,   859,   970,   918,  1101,  1103,  1104,  1105,   920,
    1266,  1267,   921,   698,   436,   198,   199,   598,   587,   417,
     682,   683,   684,   685,   863,   164,   232,   189,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   646,   175,   234,
     235,   543,   223,   224,   649,   650,  1168,  1169,   575,   572,
     576,   573,  1161,  1158,  1162,  1159,   306,   307,   823,   176,
     531,   177,   580,   178,  1578,   298,   342,   604,   605,   962,
    1063,   812,   813,   740,   741,   742,   265,   266,   861
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1484
static const yytype_int16 yypact[] =
{
   -1484,   134, -1484, -1484,  5638, 13332, 13332,   -62, 13332, 13332,
   13332, 11420, 13332, -1484, 13332, 13332, 13332, 13332, 13332, 13332,
   13332, 13332, 13332, 13332, 13332, 13332, 15340, 15340, 11628, 13332,
   15406,   -60,   -56, -1484, -1484, -1484, -1484, -1484,   141, -1484,
   -1484,    88, 13332, -1484,   -56,   -41,   132,   181,   -56, 11794,
   13001, 11960, -1484, 14472, 10422,   183, 13332, 14730,   103, -1484,
   -1484, -1484,   349,    20,    24,   208,   214,   218,   225, -1484,
   13001,   246,   254, -1484, -1484, -1484, -1484, -1484,   410,  1695,
   -1484, -1484, 13001, -1484, -1484, -1484, -1484, 13001, -1484, 13001,
   -1484,   164,   276,   278,   290,   295, 13001, 13001, -1484,   170,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, 13332, -1484, -1484,   266,    36,   365,
     365, -1484,   201,   402,   229, -1484,   361, -1484,    30, -1484,
     529, -1484, -1484, -1484, -1484, 16044,   370, -1484, -1484,   372,
     383,   385,   387,   390,   441,  2169, -1484, -1484, -1484, -1484,
     502, -1484, -1484, -1484,   579,   608,   474, -1484,   101,   465,
     532, -1484, -1484,   621,   121,  2018,   112,   477,    23, -1484,
     119,   120,   482,    39, -1484,   140, -1484,   618, -1484, -1484,
   -1484,   536,   488,   538, -1484, -1484,   529,   370, 16426,  2297,
   16426, 13332, 16426, 16426, 10613,   489, 15026, 10613,   653, 13001,
     633,   633,   359,   633,   633,   633,   633,   633,   633,   633,
     633,   633, -1484, -1484, 14535,   534, -1484,   557,    -2,   506,
      -2, 15340, 15617,   504,   704, -1484,   536, 14974,   534,   570,
     574,   523,   124, -1484,    -2,   112, 12126, -1484, -1484, 13332,
    9174,   717,    56, 16426, 10214, -1484, 13332, 13332, 13001, -1484,
   -1484, 13929,   530, -1484, 13973, 14472, 14472,   556, -1484, -1484,
     539,  4729,   727, -1484,   729, -1484, 13001,   663, -1484,   547,
   14017,   548,   728, -1484,   -14, 14061, 16109, 16122, 13001,    60,
   -1484,    17, -1484, 15115,    61, -1484,   628, -1484,   630, -1484,
     748,    67, 15340, 15340, 13332,   563,   593, -1484, -1484, 15200,
   11628,   391,   382, -1484, 13498, 15340,   492, -1484, 13001, -1484,
     346,   402, -1484, -1484, -1484, -1484, 15429, 13332, 13332, 13332,
     752,   670, -1484, -1484, -1484,    26,   568, 16426,   571,  2097,
     572,  5846, 13332,   292,   565,   448,   292,   284,   253, -1484,
   13001, 14472,   575, 10630, 14472, -1484, -1484, 11463, -1484, -1484,
   -1484, -1484, -1484,   529, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, 13332, 13332, 13332, 12334, 13332, 13332, 13332, 13332, 13332,
   13332, 13332, 13332, 13332, 13332, 13332, 13332, 13332, 13332, 13332,
   13332, 13332, 13332, 13332, 13332, 13332, 15406, 13332, -1484, 13332,
   13332, -1484, 13332,  3536, 13001, 13001, 13001, 16044,   673,   466,
    4996, 13332, 13332, 13332, 13332, 13332, 13332, 13332, 13332, 13332,
   13332, 13332, 13332, -1484, -1484, -1484, -1484,  2889, 13332, 13332,
   -1484, 10630, 10630, 13332, 13332,   266,   154, 15200,   583,   529,
   12542, 14105, -1484, 13332, -1484,   585,   771, 14535,   589,   -10,
     572,  4801,    -2, 12750, -1484, 12958, -1484,   590,   256, -1484,
     250, 10630, -1484,  3959, -1484, -1484, 14149, -1484, -1484, 10838,
   -1484, 13332, -1484,   705,  9382,   784,   592, 16337,   782,    55,
      22, -1484, -1484, -1484, -1484, -1484, 14472,  4212,   599,   794,
   14826, -1484,   619, -1484, -1484, -1484,   726, 13332,   732,   733,
   13332, 13332, 13332, -1484,   728, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484,   626, -1484, -1484, -1484,   607, -1484, -1484, 13001,
     614,   809,    27, 13001,   617,   812,   269,   275, 16167, -1484,
   13001, 13332,    -2,   103, -1484, -1484, -1484, 14826,   749, -1484,
      -2,    58,    77,   627,   631,  2851,   113,   632,   634,   456,
     714,   640,    -2,    81,   643,  1997, 13001, -1484, -1484,   778,
    1959,   224, -1484, -1484, -1484,   402, -1484, -1484, -1484,   816,
     721,   681,   299, -1484,   266,   724,   842,   654,   708,   154,
   -1484, 16426,   659,   853, 15661,   662,   859,   667, 14472, 14472,
     857,   717,    26, -1484,   674,   866, -1484, 14472,    43,   810,
     155, -1484, -1484, -1484, -1484, -1484, -1484, -1484,   511,  2898,
   -1484, -1484, -1484, -1484,   869,   711, -1484, 15340, 13332,   682,
     876, 16426,   872, -1484, -1484,   761, 12377, 11029, 16552, 10613,
   13332, 16382,  2789,  2401,  3092, 16623,  3268, 12312, 12312, 12312,
   12312,  2484,  2484,  2484,  2484,   917,   917,   603,   603,   603,
     359,   359,   359, -1484,   633, 16426,   680,   684, 15717,   685,
     880, -1484, 13332,   -58,   694,   154, -1484, -1484, -1484, -1484,
     529, 13332, 15061, -1484, -1484, 10613, -1484, 10613, 10613, 10613,
   10613, 10613, 10613, 10613, 10613, 10613, 10613, 10613, 10613, -1484,
   13332,   -53,   157, -1484, -1484,   534,   -45,   692,  3238,   699,
     700,   707,  3348,    87,   706, -1484, 16426, 14958, -1484, 13001,
   -1484,   568,    43,   534, 15340, 16426, 15340, 15761,    43,   163,
   -1484,   716, 13332, -1484,   166, -1484, -1484, -1484,  8966,   334,
   -1484, -1484, 16426, 16426,   -56, -1484, -1484, -1484, 13332,   811,
   14673, 14826, 13001,  9590,   713,   718, -1484,    68,   795,   780,
   -1484,   918,   734, 14349, 14472, 14826, 14826, 14826, 14826, 14826,
   -1484,   730,    15,   785,   736,   738,   740,   741, 14826,   327,
   -1484,   796, -1484, -1484, -1484,   739, -1484, 16512, -1484, 13332,
     757, 16426,   767,   941, 14237,   947, -1484, 16426, 14193, -1484,
     626,   878, -1484,  6054, 15182,   755,   306, -1484, 16109, 13001,
     311, -1484, 16122, 13001, 13001, -1484, -1484,  3495, -1484, 16512,
     958, 15340,   768, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484,   114, 13001, 15182,   769, 15200, 15285,   960, -1484,
   -1484, -1484, -1484,   770, -1484, 13332, -1484, -1484,  5222, -1484,
   14472, 15182,   773, -1484, -1484, -1484, -1484,   966, 13332, 15429,
   -1484, -1484, 12585, -1484, 13332, -1484, 13332, -1484, 13332, -1484,
   -1484,   783, -1484, 14472, -1484,   786,  6262,   951,   102, -1484,
   -1484,   302,  2889, -1484, -1484, 14472, -1484, -1484,    -2, 16426,
   -1484, 11046, -1484, 14826,    84,   788, 15182,   721, -1484, -1484,
    1685, 13332, -1484, -1484, 13332, -1484, 13332, -1484,  3546,   789,
   10630,   714,   968,   721,   761, 13001, 15406,    -2,  4013,   799,
   -1484, -1484,   171, -1484, -1484, -1484,   991,  3912,  3912, 14958,
   -1484, -1484, -1484, -1484,   806,    47,   807, -1484, -1484, -1484,
    1000,   813,   585,    -2,    -2, 13166,  3959, -1484, -1484,  4449,
     443,   -56, 10214, -1484,  6470,   814,  6678,   817, 14673, 15340,
     815,   882,    -2, 16512,  1005, -1484, -1484, -1484, -1484,   406,
   -1484,    51, 14472, -1484, 14472, 13001,  4212, -1484, -1484, -1484,
    1013, -1484,   822,   869,   615,   615,   949,   949,  4280,   819,
    1016, 14826,   883, 13001, 15429, 14826, 14826, 14826,  4383, 12793,
   14826, 14826, 14826, 14826, 14624, 14826, 14826, 14826, 14826, 14826,
   14826, 14826, 14826, 14826, 14826, 14826, 14826, 14826, 14826, 14826,
   14826, 14826, 14826, 14826, 14826, 14826, 14826, 16426, 13332, 13332,
   13332, -1484, -1484, -1484, 13332, 13332, -1484,   728, -1484,   952,
   -1484, -1484, 13001, -1484, -1484, 13001, -1484, -1484, -1484, -1484,
   14826,    -2, -1484,   456, -1484,   931,  1023, -1484, -1484,    89,
     832,    -2, 11254, -1484,   165, -1484,  5430,   670,  1023, -1484,
     -35,   -47, 16426,   904, -1484, 16426, 16426, 15817, -1484,   833,
     951, -1484, 14472,   717, 14472,    18,  1021,   959,   172, -1484,
     534, -1484, 15340, 13332, 16426, 16512,   835,    84, -1484,   836,
      84,   838,  1685, 16426, 15861,   840, 10630,   841,   843, 14472,
     844,   721, -1484,   523,   210, 10630, 13332, -1484, -1484, -1484,
   -1484, -1484, -1484,   914,   847,  1037, 14958,   903, -1484, 15429,
   14958, -1484, -1484, -1484, 15340, 16426,   182, -1484, -1484,   -56,
    1022,   978, 10214, -1484, -1484, -1484,   855, 13332,   882,    -2,
   15200, 14673,   854, 14826,  6886,   435,   856, 13332,    74,   247,
   -1484,   890, -1484,   935, -1484, 14398,  1036,   874, 14826, -1484,
   14826, -1484,   875, -1484,   938,  1070,   879, 16512,   881,  1071,
   15917,   885,  1073,   886, -1484, -1484, -1484, 15961,   884,  1075,
   14902, 16592, 13742, 14826, 16470, 14806, 15248,  3587,  4809,  4234,
   15159, 15159, 15159, 15159,  1529,  1529,  1529,  1529,   946,   946,
     615,   615,   615,   949,   949,   949,   949, 16426,  3634, 16426,
   -1484, 16426, -1484,   892, -1484, -1484, -1484, 16512, 13001, 14472,
   15182,   544, -1484, 15200, -1484, -1484, 10613,   891, -1484,   896,
     642, -1484,    10, 13332, -1484, -1484, -1484, 13332, -1484, 13332,
   13332, -1484,   717, -1484, -1484,   304,  1081,  1006, 14826, -1484,
     900,    -2, 16426,   951,   902, -1484,   906,    84, 13332, 10630,
     908, -1484, -1484,   670, -1484,   901,   913, -1484,   915, 14958,
   -1484, 14958, -1484,   919, -1484,   986,   921,  1110, -1484,    -2,
    1094, -1484,   922, -1484, -1484,   924,   925,    92, -1484, -1484,
   16512,   928,   932, -1484,  2365, -1484, -1484, -1484, -1484, -1484,
   14472, -1484, 14472, -1484, 16512, 16017, -1484, 14826, 15429, -1484,
   -1484, -1484, 14826, -1484, 14826, -1484, 14826, -1484, -1484, 14826,
   -1484, 14826, -1484, 14401, 14826, 13332,   930,  7094,  1040, -1484,
   -1484,   411, 14472, 15182, -1484, 16064,   982,  4607, -1484, -1484,
   -1484,   673,  3743,    70,   466,    93, -1484, -1484, -1484,   987,
    4704, 13690, 16426, 16426, -1484,   255,  1128,  1064, 14826, -1484,
   16512, 10630,  1039,   951,   956,   951,   954, 16426,   955, -1484,
    1169,   961,  1399, -1484,    84, -1484, -1484,  1028, -1484, 14958,
   -1484, 15429, -1484, -1484,  8966, -1484, -1484, -1484, -1484,  9798,
   -1484, -1484, -1484,  8966, -1484,   962, 14826, 16512,  1029, 16512,
   16512, 16061, 16512, 16117, 14401, 14326, -1484, -1484, 14472, 15182,
   15182,  1146,    48, -1484, -1484, -1484, -1484,    71,   963,    72,
   -1484, 13741, -1484, -1484,    73, -1484, -1484, 14227, -1484,   967,
   -1484,  1084,   529, -1484, 14472, -1484,   673, -1484,  2561, -1484,
   -1484, -1484, -1484,  1160,  1096, 14826, -1484, 16512,   974,   976,
     975,   419, -1484,  1039,   951, -1484, -1484, -1484, -1484,  1664,
     979, 14958, -1484,  1050,  8966, 10006,  9798, -1484, -1484, -1484,
    8966, -1484, 16512, 14826, 14826, 14826, 13332,  7302, -1484,   980,
     983, 14826, 15182, -1484, -1484,  1017, 16064, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,   108, -1484,
     982, -1484, -1484, -1484, -1484, -1484,    66,   117, -1484,  1171,
      75, 13001,  1084,  1173,   529, -1484, -1484,   985,  1175, 14826,
   -1484, 16512, -1484,   315, -1484, -1484, -1484, -1484,   989,   419,
    3035, -1484,   951, -1484, 14958, -1484, -1484, -1484, -1484,  7510,
   16512, 16512, 16512, 14281, -1484, -1484, -1484, 16512, -1484,   413,
      29, -1484, -1484, 14826, 13741, 13741,  1136, -1484, 14227, 14227,
     602, -1484, -1484, -1484, 14826,  1115, -1484,   994,    78, 14826,
   13001, -1484, 14826, 16512,  1117, -1484,  1188,  7718,  7926, -1484,
   -1484, -1484,   419, -1484,  8134,   997,  1123,  1097, -1484,  1106,
    1056, -1484, -1484,  1111,  1017, -1484, 16512, -1484, -1484,  1046,
   -1484,  1176, -1484, -1484, -1484, -1484, 16512,  1197, -1484, -1484,
   16512,  1015, 16512, -1484,   344,  1019, -1484, -1484,  8342, -1484,
    1020, -1484, -1484,  1024,  1055, 13001,   466, -1484, -1484, 14826,
      85, -1484,  1145, -1484, -1484, -1484, -1484, 15182,   755, -1484,
    1062, 13001,   408, 16512,  1026,  1220,   431,    85, -1484,  1151,
   -1484, 15182,  1031, -1484,   951,    90, -1484, -1484, -1484, -1484,
   14472, -1484,  1033,  1034,    79, -1484,   429,   431,   309,   951,
    1027, -1484, -1484, -1484, -1484, 14472,   262,  1223,  1159,   429,
   -1484,  8550,   319,  1225,  1162, 14826, -1484, -1484,  8758, -1484,
     272,  1228,  1165, 14826, -1484, 16512, -1484,  1232,  1168, 14826,
   -1484, 16512, 14826, -1484, 16512, 16512
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1484, -1484, -1484,  -512, -1484, -1484, -1484,    -4, -1484, -1484,
   -1484,   735,   460,   459,    34,   957,  3263, -1484,  2030, -1484,
    -394, -1484,    44, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484,  -446, -1484, -1484,  -179,     4,     7,
   -1484, -1484, -1484, -1484, -1484, -1484,     8, -1484, -1484, -1484,
   -1484,    11, -1484, -1484,   861,   860,   863,  -129,   366,  -819,
     373,   430,  -445,   137,  -831, -1484,  -189, -1484, -1484, -1484,
   -1484,  -681,   -16, -1484, -1484, -1484, -1484,  -438, -1484,  -576,
   -1484,  -390, -1484, -1484,   747, -1484,  -176, -1484, -1484,  -999,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,
    -200, -1484, -1484, -1484, -1484, -1484,  -283, -1484,   -49, -1002,
   -1484, -1483,  -460, -1484,  -162,    -1,  -134,  -437, -1484,  -291,
   -1484,   -77,   -22,  1247,  -693,  -370, -1484, -1484,   -38, -1484,
   -1484,  3462,   -67,  -152, -1484, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484,  -553,  -806, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,   893,
   -1484, -1484,   277, -1484,   798, -1484, -1484, -1484, -1484, -1484,
   -1484, -1484,   281, -1484,   802, -1484, -1484,   517, -1484,   252,
   -1484, -1484, -1484, -1484, -1484, -1484, -1484, -1484,  -995, -1484,
    1493,  1846,  -357, -1484, -1484,   207,  3211,  3632, -1484, -1484,
     332,  -156,  -606, -1484, -1484,   396,  -683,   199, -1484, -1484,
   -1484, -1484, -1484,   384, -1484, -1484, -1484,    52,  -841,  -191,
    -417,  -408, -1484,   445,  -141, -1484, -1484,    14, -1484, -1484,
     416,   -72, -1484, -1484,    21,  -151, -1484,   169, -1484, -1484,
   -1484,  -400,  1008, -1484, -1484, -1484, -1484, -1484,   990, -1484,
   -1484, -1484,   333, -1484, -1484, -1484,   495,   561, -1484, -1484,
    1018,  -307,  -992, -1484,   -48,   -76,  -205,  -102,   569, -1484,
    -998, -1484,   282,   358, -1484, -1484, -1484,  -183, -1045
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -907
static const yytype_int16 yytable[] =
{
     122,   398,   354,   136,   872,   264,   855,   428,   130,   570,
     240,   131,   133,   314,   919,   134,   269,  1064,   165,  1235,
     320,   321,   245,   449,   426,   420,   249,   693,   854,   643,
     663,   689,   690,  1053,   397,   937,   714,   326,  1654,   344,
     218,   220,   330,   453,   828,   715,   252,   328,   129,   262,
    1220,   233,   734,   354,   951,  1219,   163,  1472,  1079,   350,
    1339,   711,  1232,   718,   732,   461,   296,   801,   446,   518,
     523,    13,   474,   475,  1090,  1618,   528,   952,   479,  1424,
    -288,  1476,  1560,   312,  1625,   296,   801,  1625,  1472,  -486,
     817,   281,   296,   296,   454,   506,   817,  1236,   817,  1619,
     972,   817,   817,   290,  1285,   423,  1640,  1128,  1226,   418,
     546,   783,   341,   310,   520,   301,   311,  -763,   415,   416,
    1221,   333,  1613,  1033,   789,  -766,   415,   416,   329,    13,
      13,   296,  1107,  1222,     3,    13,   288,   438,  1614,   191,
     353,   236,   440,  -906,   289,   239,  1621,    13,  -763,  -448,
     447,  1137,  1138,   507,  -487,  1615,  -766,  1227,   606,  1679,
     246,   303,   399,  1622,   315,   569,  1623,  -784,  1154,  1223,
     340,   415,   416,  -627,   616,   361,   362,   363,   418,  -486,
     340,  1237,   282,   304,   305,  -785,  -786,  -787,  -628,   856,
    -821,   429,   590,  1108,   364,   435,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   533,   386,   212,
     423,  -791,   537,  -788,   422,  -229,   735,   534,   439,  -824,
     387,   339,  -822,   345,  1655,   442,   122,  -790,  -789,   953,
     122,   448,   655,   424,   468,  1352,  1354,   419,  -823,   322,
     694,  1473,  1474,  1360,   165,  1362,  1140,   733,   165,   462,
     802,  1361,   481,   519,   524,   354,   655,  1135,  1620,  1139,
     529,   614,  1255,  1425,  -288,  1477,  1561,  1286,  1626,   803,
     700,  1669,  1731,   818,   458,  1034,  -229,  -213,   463,   906,
     655,  1212,  -710,   737,  1378,  1427,   612,   522,  1076,   655,
    1278,  -710,   655,  1265,  -710,  -784,   530,   530,   535,   283,
     512,   516,   517,   542,   422,   807,   419,  1046,   315,   551,
     314,   350,  -793,  -785,  -786,  -787,   934,   122,  -821,   212,
     136,   936,   301,   247,  1433,   130,   603,  1065,   552,  1345,
     262,  1743,   555,   296,  1736,   165,   425,  1137,  1138,   834,
    1634,  1757,   415,   416,  1750,  1441,  -794,  1443,   424,  -791,
     701,  -788,   664,   301,  1449,   440,   793,  -824,   323,   552,
    -822,   301,   794,  1217,   324,  -790,  -789,   586,  -906,  1692,
    -764,  1066,   248,  1346,   415,   416,  -823,   273,  1737,   653,
     296,   657,   296,   296,  1635,   851,   852,   862,  1751,   341,
     304,   305,   660,  1022,   860,   931,   932,   233,  1025,   292,
     840,  -764,   386,   681,   654,   293,  1039,   845,  1434,   294,
     849,   721,   340,  1693,   387,  1744,   295,  1268,   340,   827,
    -906,   304,   305,  -906,  1275,  1758,   398,   703,   686,   304,
     305,   542,   219,   219,   301,  1068,  1589,   299,   889,   713,
     336,   439,  1288,   835,  1069,   300,   117,   545,   709,   340,
     122,   301,   654,   602,   340,  1067,   286,  1347,   836,   397,
     332,   710,  1738,   287,   716,    52,  -906,   316,   165,   317,
     899,   895,  1752,    59,    60,    61,   179,   180,   351,   301,
      36,   318,  1388,   601,   887,   302,   319,   341,   889,   340,
    1087,  1244,   810,   811,  1246,  1136,  1137,  1138,   726,  1116,
    1234,   862,   304,   305,  1119,  1120,   796,   926,  1117,   415,
     416,    59,    60,    61,   179,   180,   351,   301,   547,   304,
     305,  -906,   570,   552,  1282,  1137,  1138,  1399,  1400,  1093,
     879,   822,   824,   786,  1717,  1718,  1719,   790,  1321,   557,
     558,  1134,   281,   352,   449,   340,   303,   304,   305,   647,
     606,   606,   343,   183,   346,  1453,    82,   927,  -484,    84,
      85,   301,    86,   184,    88,   355,  1366,   552,  1367,    59,
      60,    61,   179,   180,   351,   957,   356,   687,   357,    13,
     358,   352,   691,   359,  1642,   304,   305,   399,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,  1713,   296,   335,   337,   338,  1661,  1662,  1648,  1657,
    1658,   868,  1585,  1586,    59,    60,    61,    62,    63,   351,
     219,  1663,  1732,  1733,   586,    69,   394,   219,   553,   304,
     305,   960,   963,   219,   360,   389,  1321,  1047,  1664,   352,
    1322,  1665,   383,   384,   385,  1323,   386,    59,    60,    61,
     179,   180,   351,  1324,  1003,  1004,  1005,   570,   387,   392,
    1059,  1356,  1214,   396,   390,  1728,   897,   391,   421,  1344,
    1006,   393,  1071,  -792,  -485,  -627,  1452,    13,   569,   427,
    1742,   308,   432,   917,   352,   922,  1250,   434,   387,   219,
    1325,  1326,   935,  1327,   341,  1258,   441,   422,   219,   219,
     536,   655,   444,   445,   122,   219,  1726,   136,   923,  -626,
     924,   219,   130,   450,   451,   459,   476,   352,   944,   122,
    1277,  1739,   165,   472,    59,    60,    61,    62,    63,   351,
     477,  -901,   482,   480,   942,    69,   394,   165,  1322,  1328,
     483,   485,   525,  1323,   526,    59,    60,    61,   179,   180,
     351,  1324,   527,   539,  1111,   538,   578,   579,  1593,  1141,
     588,  1142,   600,   589,   591,   655,   -65,   946,    52,   122,
     699,   395,   136,   396,   613,  1024,   697,   130,  1450,  1027,
    1028,   702,   708,   461,   724,   728,   731,   165,  1325,  1326,
     743,  1327,   570,   744,   352,   770,   769,  1147,   784,  1035,
    1317,   772,   773,  1335,  1151,  1031,   781,   787,   788,  1092,
     791,   792,   512,   569,   122,   352,   516,   136,   800,   804,
     542,  1041,   130,   805,   808,   131,   133,   809,  1054,   134,
     814,   816,   165,   219,   825,   819,   830,  1338,   831,  1706,
     833,   839,   122,   219,   838,   136,   841,   842,   681,  1358,
     130,   843,   844,   548,   847,  1240,  1706,   554,   848,   850,
     165,   853,   129,   857,  1727,   858,  -488,  1374,   865,  1233,
     163,   860,   867,   686,   870,   871,   873,   876,   882,   886,
     885,   296,   883,  1383,   548,   890,   554,   548,   554,   554,
     900,   902,   903,  1100,  1100,   917,  1253,   878,   938,  1122,
     586,  1643,   486,   487,   488,   904,   948,   233,   928,   489,
     490,   950,   713,   491,   492,   954,   586,   956,   122,   955,
     122,   971,   122,   136,   973,   136,   958,   974,   130,   975,
     130,   976,   977,   980,  1008,   979,   165,   716,   165,  1262,
     165,  1143,   942,  1129,  1009,  1010,  1014,  1017,   569,  1020,
    1321,  1438,  1071,   380,   381,   382,   383,   384,   385,  1153,
     386,  1032,  1030,  1038,  1042,  1166,  1123,  1049,  1043,  1454,
    1051,  1062,   387,   215,   215,  1060,  1058,   228,  1460,  1077,
    1086,   570,  1000,  1001,  1002,  1003,  1004,  1005,  1089,  1299,
    1095,    13,  1467,  1303,  1215,  1096,  1307,  1106,  1109,  1110,
     228,  1006,  1131,  1312,  1006,  1112,  1130,  1125,  1205,  1133,
    1127,  1206,  1145,   219,  1146,  1150,  1319,  1149,  1209,   547,
    1675,  1203,  1210,  1213,  1229,  1238,  1231,  1243,  1239,  1247,
    1245,  1249,   122,  1251,  1259,   136,  1261,  1252,  1254,  1264,
     130,  1272,  1271,   131,   133,  1260,  1279,   134,  1274,  1283,
     165,  1289,  1322,  1599,   570,  1290,  1292,  1323,  1297,    59,
      60,    61,   179,   180,   351,  1324,  1293,  1296,   219,  1298,
    1302,  1300,  1306,  1301,  1311,  1349,  1241,  1305,  1308,  1310,
     129,    33,    34,    35,  1316,  1348,  1336,  1270,   163,  1716,
    1337,  1351,   917,   750,  1353,  1363,   917,  1384,  1355,  1385,
    1359,  1372,  1325,  1326,  1364,  1327,  1369,  1365,   122,  1371,
     219,  1368,   219,  1370,  1373,  1375,  1376,  1377,  1269,   586,
     122,  1380,   586,   136,  1396,  1381,   165,  1398,   130,   352,
    1413,  1429,  1435,  1436,   542,   942,   219,   569,   165,  1423,
    1439,    73,    74,    75,    76,    77,  1444,  1445,  1451,  1463,
    1471,  1442,   752,  1569,  1461,  1447,  1273,  1475,    80,    81,
    1568,   215,  1426,  1321,  1579,  1580,  1582,  1583,   215,  1584,
    1594,  1592,    90,  1605,   215,  1624,  1606,  1629,  1631,  1632,
    1637,  1659,  1638,  1639,  1667,  1668,  1673,  1674,   354,    98,
    1681,  1644,  1682,  -284,  1318,  1685,  1683,  1688,  1686,  1619,
    1332,  1689,   228,   228,    13,  1468,  1691,   219,   228,  1332,
     569,  1694,  1698,  1696,  1708,  1697,  1711,   542,  1714,  1715,
    1723,  1740,   219,   219,  1725,  1729,  1730,  1745,  1746,  1753,
     215,  1754,  1759,  1571,  1760,  1678,  1762,  1763,  1023,   215,
     215,  1026,  1710,   795,   656,   917,   215,   917,   659,   658,
    1091,  1048,   215,  1334,  1088,  1276,  1724,  1598,  1382,  1722,
     798,  1590,  1334,   228,  1401,  1322,  1612,  1617,  1420,  1747,
    1323,  1628,    59,    60,    61,   179,   180,   351,  1324,   242,
    1735,  1588,   779,   666,  1202,  1200,   780,  1016,   228,   586,
    1257,   228,  1224,  1152,  1102,  1263,  1113,  1070,   544,   577,
    1163,   532,   961,   122,  1144,  1208,   136,     0,   262,     0,
       0,   130,     0,  1418,     0,  1325,  1326,     0,  1327,     0,
       0,   165,     0,   399,     0,  1422,     0,     0,     0,  1741,
       0,     0,     0,   228,     0,     0,  1748,     0,     0,     0,
       0,     0,   352,  1332,   219,   219,     0,     0,     0,  1332,
       0,  1332,     0,     0,     0,   917,     0,     0,     0,     0,
     122,     0,     0,   136,  1446,   122,  1573,     0,   130,   122,
       0,     0,   136,     0,   215,     0,     0,   130,   165,     0,
       0,     0,     0,   165,   215,  1630,     0,   165,     0,     0,
       0,     0,     0,  1321,     0,     0,  1334,  1557,     0,     0,
       0,     0,  1334,  1564,  1334,     0,   586,     0,     0,     0,
     262,     0,     0,  1458,   262,     0,     0,     0,     0,     0,
    1574,     0,     0,   228,   228,     0,     0,   759,     0,     0,
       0,     0,     0,     0,    13,     0,     0,   917,  1332,     0,
     122,   122,   122,   136,     0,     0,   122,     0,   130,   136,
       0,     0,     0,   122,   130,     0,   136,     0,   165,   165,
     165,   130,     0,     0,   165,     0,     0,     0,     0,     0,
       0,   165,     0,     0,   759,     0,     0,     0,   219,     0,
       0,     0,     0,     0,     0,  1627,     0,     0,     0,  1596,
    1458,  1334,     0,     0,     0,  1322,     0,     0,     0,     0,
    1323,     0,    59,    60,    61,   179,   180,   351,  1324,   216,
     216,     0,     0,   229,  1701,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,   228,   228,   860,     0,     0,
       0,     0,     0,     0,   228,     0,   219,   219,     0,     0,
       0,     0,   860,     0,  1671,  1325,  1326,     0,  1327,     0,
       0,     0,     0,     0,   215,     0,     0,   296,   354,  -907,
    -907,  -907,  -907,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,     0,   352,     0,     0,     0,   262,     0,     0,     0,
     917,     0,     0,     0,  1006,   122,     0,     0,   136,     0,
       0,     0,     0,   130,  1448,  1649,     0,     0,     0,     0,
    1557,  1557,     0,   165,  1564,  1564,     0,     0,     0,   215,
       0,     0,     0,     0,     0,     0,   296,     0,     0,   219,
       0,     0,     0,   122,   122,     0,   136,   136,     0,     0,
     122,   130,   130,   136,     0,     0,     0,     0,   130,     0,
       0,   165,   165,     0,     0,     0,     0,     0,   165,     0,
       0,   215,     0,   215,     0,     0,     0,     0,  1321,     0,
       0,     0,     0,     0,   122,     0,     0,   136,     0,     0,
       0,  1700,   130,     0,     0,  1702,     0,   215,   759,     0,
       0,     0,   165,     0,     0,     0,     0,  1712,     0,     0,
     228,   228,   759,   759,   759,   759,   759,     0,     0,    13,
       0,     0,     0,     0,   216,   759,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   122,   386,     0,
     136,   228,   586,     0,   122,   130,     0,   136,     0,     0,
     387,     0,   130,     0,     0,   165,     0,     0,   215,   586,
       0,     0,   165,     0,     0,     0,     0,   586,     0,     0,
    1322,   228,    36,   215,   215,  1323,   216,    59,    60,    61,
     179,   180,   351,  1324,     0,   216,   216,   228,   228,     0,
       0,     0,   216,     0,     0,     0,   228,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1325,  1326,   228,  1327,     0,     0,     0,     0,     0,     0,
     759,     0,     0,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,   308,     0,
       0,    84,    85,   228,    86,   184,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1591,
       0,     0,   217,   217,     0,     0,   230,     0,     0,   229,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,   215,   215,     0,     0,   309,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
       0,   228,     0,   228,     0,     0,     0,     0,     0,     0,
     216,     0,     0,     0,     0,     0,     0,     0,   759,     0,
       0,   228,   759,   759,   759,     0,     0,   759,   759,   759,
     759,   759,   759,   759,   759,   759,   759,   759,   759,   759,
     759,   759,   759,   759,   759,   759,   759,   759,   759,   759,
     759,   759,   759,   759,     0,     0,     0,     0,     0,   361,
     362,   363,     0,   765,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   759,   364,     0,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,     0,   386,     0,     0,     0,     0,     0,     0,   228,
     765,   228,     0,     0,   387,     0,     0,     0,     0,   215,
       0,     0,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,     0,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,   228,   217,     0,     0,
       0,   215,     0,   217,    36,     0,   820,   821,     0,     0,
       0,   413,   414,   263,     0,     0,     0,   215,   215,     0,
     759,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,   228,     0,     0,   759,     0,   759,     0,     0,
       0,   430,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,     0,     0,     0,     0,     0,   217,
     759,     0,     0,     0,     0,     0,     0,     0,   217,   217,
       0,     0,     0,     0,     0,   217,   415,   416,     0,     0,
       0,   217,     0,    84,    85,   216,    86,   184,    88,     0,
     413,   414,   568,     0,   826,     0,   228,   228,     0,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     362,   363,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   759,     0,   216,   364,   216,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,     0,   386,   216,   765,   415,   416,     0,     0,     0,
       0,     0,   230,     0,   387,     0,     0,     0,   765,   765,
     765,   765,   765,     0,     0,     0,     0,   228,     0,   228,
       0,   765,     0,     0,   759,   228,     0,     0,     0,   759,
       0,   759,     0,   759,     0,     0,   759,     0,   759,     0,
       0,   759,     0,   217,     0,     0,     0,  1019,     0,   228,
     228,     0,   228,   217,     0,   263,   263,     0,     0,   228,
       0,   263,     0,     0,   216,     0,     0,     0,     0,   590,
       0,     0,     0,     0,     0,   759,     0,  1037,     0,   216,
     216,   430,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,  1037,     0,     0,     0,   228,     0,
       0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   759,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   228,   228,     0,     0,
     413,   414,     0,     0,     0,     0,   765,     0,     0,  1078,
       0,   263,   388,     0,   263,   361,   362,   363,     0,     0,
       0,   228,     0,     0,     0,   228,     0,     0,     0,   229,
       0,     0,   759,     0,   364,  1285,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,     0,   386,     0,
     759,   759,   759,     0,     0,   415,   416,     0,   759,   228,
     387,   216,   216,   228,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   217,   386,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   765,     0,   387,   216,   765,   765,
     765,     0,     0,   765,   765,   765,   765,   765,   765,   765,
     765,   765,   765,   765,   765,   765,   765,   765,   765,   765,
     765,   765,   765,   765,   765,   765,   765,   765,   765,   765,
       0,     0,     0,     0,     0,     0,   263,   739,   217,     0,
     761,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   765,  -907,  -907,  -907,  -907,   378,   379,
     380,   381,   382,   383,   384,   385,   759,   386,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   228,     0,   387,
     217,     0,   217,     0,     0,     0,     0,   761,     0,     0,
       0,     0,     0,     0,     0,   216,   228,     0,  1286,     0,
     759,     0,     0,     0,     0,     0,   217,     0,     0,     0,
       0,   759,     0,     0,     0,     0,   759,     0,     0,   759,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,     0,     0,     0,     0,   216,   263,   263,
       0,     0,     0,     0,     0,     0,   256,   263,     0,     0,
       0,     0,     0,   216,   216,     0,   765,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,   765,     0,   765,     0,     0,   759,   217,     0,     0,
       0,     0,     0,     0,   228,     0,     0,     0,     0,     0,
       0,     0,   217,   217,     0,     0,   765,     0,   228,     0,
       0,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,   568,     0,     0,     0,     0,
       0,     0,   228,   257,   258,     0,     0,     0,     0,     0,
       0,     0,   759,  1320,     0,     0,   216,     0,     0,     0,
     759,   183,     0,     0,    82,   259,   759,    84,    85,   759,
      86,   184,    88,     0,     0,     0,     0,     0,     0,     0,
       0,   765,     0,     0,     0,   260,     0,     0,     0,     0,
       0,     0,   230,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,   761,   261,     0,     0,     0,  1575,     0,     0,     0,
       0,     0,     0,   263,   263,   761,   761,   761,   761,   761,
       0,     0,     0,     0,   217,   217,     0,     0,   761,     0,
     765,   216,     0,     0,     0,   765,     0,   765,     0,   765,
       0,     0,   765,     0,   765,     0,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,  1403,     0,  1412,     0,
     568,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   765,   386,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   387,     0,     0,     0,     0,     0,
     263,     0,     0,     0,   216,   430,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,     0,   765,
       0,     0,     0,   263,     0,     0,     0,     0,     0,     0,
       0,     0,  1469,  1470,     0,   263,     0,     0,     0,     0,
       0,     0,     0,   761,     0,     0,     0,     0,   361,   362,
     363,     0,     0,     0,   413,   414,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,   364,   765,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
       0,   386,     0,     0,     0,   568,   765,   765,   765,     0,
     217,     0,     0,   387,   765,  1608,    36,     0,   212,  1412,
       0,     0,     0,     0,     0,     0,   217,   217,     0,   415,
     416,     0,   263,     0,   263,     0,   739,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   761,     0,     0,     0,   761,   761,   761,     0,     0,
     761,   761,   761,   761,   761,   761,   761,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,     0,     0,     0,
       0,     0,     0,   679,     0,    84,    85,     0,    86,   184,
      88,     0,     0,   806,     0,     0,     0,     0,     0,   217,
     761,     0,     0,     0,   255,     0,     0,     0,     0,     0,
       0,     0,   765,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     256,     0,   263,   680,   263,   117,     0,     0,     0,     0,
       0,     0,     0,   864,     0,     0,   765,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,   765,     0,   263,
       0,     0,   765,     0,     0,   765,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   568,   386,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   387,     0,     0,
       0,     0,     0,   761,     0,     0,     0,   257,   258,     0,
       0,     0,     0,     0,     0,   263,     0,     0,   761,     0,
     761,     0,   765,     0,     0,   183,     0,     0,    82,   259,
    1709,    84,    85,     0,    86,   184,    88,     0,     0,     0,
       0,     0,     0,   761,  1403,     0,     0,     0,     0,   260,
       0,     0,     0,     0,     0,     0,     0,   568,     0,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,   261,     0,   765,   263,
    1641,     0,     0,     0,     0,     0,   765,     0,   361,   362,
     363,     0,   765,     0,     0,   765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   364,   761,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
       0,   386,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   387,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     263,   386,   263,     0,     0,     0,     0,   761,     0,     0,
       0,     0,   761,   387,   761,     0,   761,     0,     0,   761,
       0,   761,     0,     0,   761,     0,     0,     0,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,   361,   362,
     363,     0,   263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   364,   761,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
       0,   386,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   387,     0,     0,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   901,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,     0,   263,     0,
       0,     0,     0,     0,     0,   761,     0,   188,   190,     0,
     192,   193,   194,   196,   197,     0,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,     0,     0,
     222,   225,     0,   761,   761,   761,     0,     0,     0,     0,
       0,   761,     0,     0,   243,   361,   362,   363,     0,     0,
       0,   251,     0,   254,     0,     0,   270,     0,   275,     0,
       0,     0,     0,     0,   364,     0,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,     0,   386,     0,
       0,     0,     0,   905,     0,     0,   361,   362,   363,     0,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   327,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,     0,   386,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   761,
       0,   387,     0,    36,     0,   212,     0,     0,     0,     0,
     263,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1650,
       0,     0,     0,   761,   361,   362,   363,     0,     0,     0,
       0,     0,  1006,   431,   761,     0,     0,     0,     0,   761,
     651,     0,   761,   364,     0,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,     0,   386,     0,     0,
       0,   766,    84,    85,     0,    86,   184,    88,   456,   387,
    1029,   456,     0,     0,     0,     0,     0,     0,   243,   467,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   761,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,   766,     0,
     652,     0,   117,   760,     0,     0,     0,     0,     0,     0,
     263,  1085,     0,     0,     0,     0,   327,     0,     0,     0,
       0,     0,   222,     0,     0,   263,   550,     0,     0,     0,
       0,     0,   255,     0,     0,   761,     0,     0,     0,   571,
     574,   574,     0,   761,     0,     0,     0,     0,     0,   761,
     760,     0,   761,     0,   599,     0,     0,     0,   256,     0,
       0,     0,     0,     0,     0,   611,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,  1315,   617,   618,   619,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,  -326,   644,
       0,   645,   645,     0,   648,     0,    59,    60,    61,   179,
     180,   351,   665,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   257,   258,     0,     0,     0,
     645,   688,     0,   611,   611,   645,   692,     0,     0,     0,
       0,     0,   665,   183,     0,   696,    82,   259,     0,    84,
      85,     0,    86,   184,    88,   705,     0,   707,     0,     0,
       0,     0,     0,   611,     0,     0,     0,   260,     0,     0,
       0,   722,     0,   723,     0,     0,   352,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   766,     0,   261,     0,     0,     0,     0,   771,
       0,     0,   774,   777,   778,     0,   766,   766,   766,   766,
     766,     0,     0,     0,     0,     0,     0,     0,     0,   766,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   797,     0,     0,  1097,  1098,  1099,    36,
       0,     0,     0,     0,   760,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   760,   760,
     760,   760,   760,     0,     0,     0,     0,     0,     0,     0,
       0,   760,     0,   361,   362,   363,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,   212,     0,
       0,     0,   364,     0,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,     0,   386,     0,    84,    85,
     869,    86,   184,    88,     0,     0,     0,     0,   387,     0,
       0,     0,   880,     0,   766,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,   767,   679,   888,    84,    85,     0,    86,   184,
      88,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   760,     0,     0,     0,
       0,     0,   898,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,   799,
       0,     0,     0,   712,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,   929,     0,     0,     0,     0,     0,
       0,     0,   766,     0,     0,     0,   766,   766,   766,     0,
     243,   766,   766,   766,   766,   766,   766,   766,   766,   766,
     766,   766,   766,   766,   766,   766,   766,   766,   766,   766,
     766,   766,   766,   766,   766,   766,   766,   766,  1094,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1007,     0,     0,   760,     0,     0,     0,   760,   760,
     760,   766,     0,   760,   760,   760,   760,   760,   760,   760,
     760,   760,   760,   760,   760,   760,   760,   760,   760,   760,
     760,   760,   760,   760,   760,   760,   760,   760,   760,   760,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,     0,  1044,     0,    36,
     981,   982,   983,   760,     0,     0,     0,     0,   738,  1006,
    1052,     0,     0,     0,     0,     0,  1055,     0,  1056,   984,
    1057,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1005,     0,  1074,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1082,   766,  1006,  1083,     0,  1084,     0,
       0,     0,   611,     0,     0,     0,     0,     0,     0,   766,
       0,   766,   183,   943,     0,    82,     0,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,   964,   965,   966,
     967,     0,     0,     0,   766,     0,     0,  1115,     0,     0,
     978,     0,     0,   981,   982,   983,   760,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
    1148,   760,   984,   760,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,     0,   760,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1006,   766,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     362,   363,     0,     0,     0,     0,     0,     0,     0,     0,
    1197,  1198,  1199,     0,     0,     0,   774,  1201,   364,     0,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   760,   386,     0,  1216,  1075,     0,     0,   766,     0,
       0,     0,     0,   766,   387,   766,     0,   766,     0,     0,
     766,     0,   766,     0,     0,   766,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   611,     0,
       0,     0,     0,     0,     0,     0,     0,   611,  1216,   766,
     760,     0,     0,     0,     0,   760,     0,   760,     0,   760,
       0,     0,   760,     0,   760,     0,     0,   760,     0,     0,
       0,     0,     0,     0,     0,  1164,     0,     0,     0,   243,
       0,     0,     0,     0,     0,     0,     0,   766,     0,  1284,
       0,     0,     0,     0,     0,     0,     0,  1157,  1160,  1160,
       0,   760,  1167,  1170,  1171,  1172,  1174,  1175,  1176,  1177,
    1178,  1179,  1180,  1181,  1182,  1183,  1184,  1185,  1186,  1187,
    1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,     0,
       0,     0,     0,     0,     0,     0,   766,     0,     0,   760,
       0,     0,     0,     0,  1118,     0,     0,     0,     0,     0,
       0,     0,  1207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   766,   766,   766,     0,     0,     0,
       0,     0,   766,     0,    36,  1340,  1611,     0,     0,  1341,
       0,  1342,  1343,     0,     0,     0,     0,     0,   760,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1357,   611,     0,     0,   361,   362,   363,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   760,   760,   760,  1416,
       0,     0,     0,   364,   760,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,     0,   386,   255,     0,
       0,     0,     0,    84,    85,  1280,    86,   184,    88,   387,
       0,     0,     0,     0,     0,     0,     0,  1395,     0,     0,
    1294,     0,  1295,     0,   256,     0,     0,     0,     0,     0,
     766,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,  1313,    36,     0,  1417,     0,
       0,     0,     0,   611,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   766,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   478,   766,     0,     0,     0,     0,
     766,     0,   760,   766,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,   257,   258,     0,     0,  1687,     0,     0,     0,     0,
    1350,     0,     0,     0,  1006,     0,   760,     0,    36,   183,
     212,     0,    82,   259,     0,    84,    85,   760,    86,   184,
      88,     0,   760,     0,     0,   760,     0,     0,     0,     0,
     766,     0,     0,   260,     0,     0,     0,     0,     0,  1431,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,  1603,  1387,
     261,     0,     0,     0,  1389,     0,  1390,     0,  1391,     0,
       0,  1392,     0,  1393,     0,     0,  1394,     0,     0,     0,
       0,     0,   760,     0,     0,     0,   766,    84,    85,     0,
      86,   184,    88,     0,   766,     0,     0,     0,     0,     0,
     766,     0,     0,   766,     0,     0,     0,     0,     0,     0,
    1437,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     5,
       6,     7,     8,     9,     0,   652,     0,   117,   760,    10,
       0,     0,     0,     0,     0,     0,   760,     0,  1462,     0,
       0,     0,   760,   661,    12,   760,     0,     0,     0,     0,
       0,   662,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,  1581,     0,     0,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1600,  1601,  1602,     0,     0,
       0,    52,     0,  1607,     0,     0,     0,     0,     0,    59,
      60,    61,   179,   180,   181,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,   182,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,     0,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
     267,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,     0,
       0,     0,   117,   118,     0,   119,   120,     0,     0,     0,
       0,  1633,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1656,     0,     0,     0,    11,
      12,     0,     0,     0,     0,     0,  1666,     0,     0,     0,
       0,  1670,     0,     0,  1672,     0,     0,    13,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,    41,    42,
      43,    44,     0,    45,     0,    46,     0,    47,     0,     0,
      48,  1703,     0,     0,    49,    50,    51,    52,    53,    54,
      55,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    79,    80,    81,    82,    83,  1755,    84,    85,
       0,    86,    87,    88,    89,  1761,     0,    90,     0,     0,
      91,  1764,     0,     0,  1765,     0,    92,    93,    94,    95,
      96,     0,    97,     0,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,   115,   116,  1045,   117,   118,
       0,   119,   120,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,     0,     0,     0,    41,    42,    43,    44,
       0,    45,     0,    46,     0,    47,     0,     0,    48,     0,
       0,     0,    49,    50,    51,    52,    53,    54,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
      65,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,    82,    83,     0,    84,    85,     0,    86,
      87,    88,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
      97,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,     0,   115,   116,  1218,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,     0,     0,     0,    41,    42,    43,    44,     0,    45,
       0,    46,     0,    47,     0,     0,    48,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,    79,    80,
      81,    82,    83,     0,    84,    85,     0,    86,    87,    88,
      89,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,    97,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
       0,   115,   116,     0,   117,   118,     0,   119,   120,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,    41,    42,    43,    44,     0,    45,     0,    46,
       0,    47,     0,     0,    48,     0,     0,     0,    49,    50,
      51,    52,     0,    54,    55,     0,    56,     0,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,     0,
      69,    70,     0,     0,     0,     0,     0,    71,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,    89,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,   115,
     116,   592,   117,   118,     0,   119,   120,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,     0,
      41,    42,    43,    44,     0,    45,     0,    46,     0,    47,
       0,     0,    48,     0,     0,     0,    49,    50,    51,    52,
       0,    54,    55,     0,    56,     0,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,    67,     0,    69,    70,
       0,     0,     0,     0,     0,    71,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,    89,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,     0,   115,   116,  1018,
     117,   118,     0,   119,   120,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,    41,    42,
      43,    44,     0,    45,     0,    46,     0,    47,     0,     0,
      48,     0,     0,     0,    49,    50,    51,    52,     0,    54,
      55,     0,    56,     0,    58,    59,    60,    61,    62,    63,
      64,     0,    65,    66,    67,     0,    69,    70,     0,     0,
       0,     0,     0,    71,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,   183,    80,    81,    82,    83,     0,    84,    85,
       0,    86,   184,    88,    89,     0,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,   115,   116,  1061,   117,   118,
       0,   119,   120,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,     0,     0,     0,    41,    42,    43,    44,
       0,    45,     0,    46,     0,    47,     0,     0,    48,     0,
       0,     0,    49,    50,    51,    52,     0,    54,    55,     0,
      56,     0,    58,    59,    60,    61,    62,    63,    64,     0,
      65,    66,    67,     0,    69,    70,     0,     0,     0,     0,
       0,    71,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,     0,   115,   116,  1124,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,     0,     0,     0,    41,    42,    43,    44,  1126,    45,
       0,    46,     0,    47,     0,     0,    48,     0,     0,     0,
      49,    50,    51,    52,     0,    54,    55,     0,    56,     0,
      58,    59,    60,    61,    62,    63,    64,     0,    65,    66,
      67,     0,    69,    70,     0,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
      89,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
       0,   115,   116,     0,   117,   118,     0,   119,   120,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,    41,    42,    43,    44,     0,    45,     0,    46,
       0,    47,  1281,     0,    48,     0,     0,     0,    49,    50,
      51,    52,     0,    54,    55,     0,    56,     0,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,     0,
      69,    70,     0,     0,     0,     0,     0,    71,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,    89,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,   115,
     116,     0,   117,   118,     0,   119,   120,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,     0,
      41,    42,    43,    44,     0,    45,     0,    46,     0,    47,
       0,     0,    48,     0,     0,     0,    49,    50,    51,    52,
       0,    54,    55,     0,    56,     0,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,    67,     0,    69,    70,
       0,     0,     0,     0,     0,    71,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,    89,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,     0,   115,   116,  1397,
     117,   118,     0,   119,   120,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,    41,    42,
      43,    44,     0,    45,     0,    46,     0,    47,     0,     0,
      48,     0,     0,     0,    49,    50,    51,    52,     0,    54,
      55,     0,    56,     0,    58,    59,    60,    61,    62,    63,
      64,     0,    65,    66,    67,     0,    69,    70,     0,     0,
       0,     0,     0,    71,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,   183,    80,    81,    82,    83,     0,    84,    85,
       0,    86,   184,    88,    89,     0,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,   115,   116,  1604,   117,   118,
       0,   119,   120,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,     0,     0,     0,    41,    42,    43,    44,
       0,    45,     0,    46,  1645,    47,     0,     0,    48,     0,
       0,     0,    49,    50,    51,    52,     0,    54,    55,     0,
      56,     0,    58,    59,    60,    61,    62,    63,    64,     0,
      65,    66,    67,     0,    69,    70,     0,     0,     0,     0,
       0,    71,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,     0,   115,   116,     0,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,     0,     0,     0,    41,    42,    43,    44,     0,    45,
       0,    46,     0,    47,     0,     0,    48,     0,     0,     0,
      49,    50,    51,    52,     0,    54,    55,     0,    56,     0,
      58,    59,    60,    61,    62,    63,    64,     0,    65,    66,
      67,     0,    69,    70,     0,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
      89,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
       0,   115,   116,  1676,   117,   118,     0,   119,   120,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,    41,    42,    43,    44,     0,    45,     0,    46,
       0,    47,     0,     0,    48,     0,     0,     0,    49,    50,
      51,    52,     0,    54,    55,     0,    56,     0,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,     0,
      69,    70,     0,     0,     0,     0,     0,    71,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,    89,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,   115,
     116,  1677,   117,   118,     0,   119,   120,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,     0,
      41,    42,    43,    44,     0,    45,  1680,    46,     0,    47,
       0,     0,    48,     0,     0,     0,    49,    50,    51,    52,
       0,    54,    55,     0,    56,     0,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,    67,     0,    69,    70,
       0,     0,     0,     0,     0,    71,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,    89,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,     0,   115,   116,     0,
     117,   118,     0,   119,   120,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,    41,    42,
      43,    44,     0,    45,     0,    46,     0,    47,     0,     0,
      48,     0,     0,     0,    49,    50,    51,    52,     0,    54,
      55,     0,    56,     0,    58,    59,    60,    61,    62,    63,
      64,     0,    65,    66,    67,     0,    69,    70,     0,     0,
       0,     0,     0,    71,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,   183,    80,    81,    82,    83,     0,    84,    85,
       0,    86,   184,    88,    89,     0,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,   115,   116,  1695,   117,   118,
       0,   119,   120,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,     0,     0,     0,    41,    42,    43,    44,
       0,    45,     0,    46,     0,    47,     0,     0,    48,     0,
       0,     0,    49,    50,    51,    52,     0,    54,    55,     0,
      56,     0,    58,    59,    60,    61,    62,    63,    64,     0,
      65,    66,    67,     0,    69,    70,     0,     0,     0,     0,
       0,    71,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,     0,   115,   116,  1749,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,     0,     0,     0,    41,    42,    43,    44,     0,    45,
       0,    46,     0,    47,     0,     0,    48,     0,     0,     0,
      49,    50,    51,    52,     0,    54,    55,     0,    56,     0,
      58,    59,    60,    61,    62,    63,    64,     0,    65,    66,
      67,     0,    69,    70,     0,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
      89,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
       0,   115,   116,  1756,   117,   118,     0,   119,   120,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,    41,    42,    43,    44,     0,    45,     0,    46,
       0,    47,     0,     0,    48,     0,     0,     0,    49,    50,
      51,    52,     0,    54,    55,     0,    56,     0,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,     0,
      69,    70,     0,     0,     0,     0,     0,    71,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,    89,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,   115,
     116,     0,   117,   118,     0,   119,   120,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,   457,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,     0,
      41,    42,    43,    44,     0,    45,     0,    46,     0,    47,
       0,     0,    48,     0,     0,     0,    49,    50,    51,    52,
       0,    54,    55,     0,    56,     0,    58,    59,    60,    61,
     179,   180,    64,     0,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,     0,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,     0,   115,   116,     0,
     117,   118,     0,   119,   120,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,   725,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,    41,    42,
      43,    44,     0,    45,     0,    46,     0,    47,     0,     0,
      48,     0,     0,     0,    49,    50,    51,    52,     0,    54,
      55,     0,    56,     0,    58,    59,    60,    61,   179,   180,
      64,     0,    65,    66,    67,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,   183,    80,    81,    82,    83,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,   115,   116,     0,   117,   118,
       0,   119,   120,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
     945,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,    39,    40,     0,     0,     0,    41,    42,    43,    44,
       0,    45,     0,    46,     0,    47,     0,     0,    48,     0,
       0,     0,    49,    50,    51,    52,     0,    54,    55,     0,
      56,     0,    58,    59,    60,    61,   179,   180,    64,     0,
      65,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,     0,   115,   116,     0,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,  1457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      40,     0,     0,     0,    41,    42,    43,    44,     0,    45,
       0,    46,     0,    47,     0,     0,    48,     0,     0,     0,
      49,    50,    51,    52,     0,    54,    55,     0,    56,     0,
      58,    59,    60,    61,   179,   180,    64,     0,    65,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
       0,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
       0,   115,   116,     0,   117,   118,     0,   119,   120,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,  1595,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,    41,    42,    43,    44,     0,    45,     0,    46,
       0,    47,     0,     0,    48,     0,     0,     0,    49,    50,
      51,    52,     0,    54,    55,     0,    56,     0,    58,    59,
      60,    61,   179,   180,    64,     0,    65,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,     0,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,   115,
     116,     0,   117,   118,     0,   119,   120,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,     0,
      41,    42,    43,    44,     0,    45,     0,    46,     0,    47,
       0,     0,    48,     0,     0,     0,    49,    50,    51,    52,
       0,    54,    55,     0,    56,     0,    58,    59,    60,    61,
     179,   180,    64,     0,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,     0,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,     0,   115,   116,     0,
     117,   118,     0,   119,   120,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,   179,   180,
     181,     0,     0,    66,    67,     0,     0,     0,     0,     0,
       0,     0,     0,   182,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,   183,    80,    81,    82,    83,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,    98,    99,   267,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,   268,     0,     0,   117,   118,
       0,   119,   120,     5,     6,     7,     8,     9,     0,     0,
       0,     0,   364,    10,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   607,   386,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,   387,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,   179,   180,   181,     0,
       0,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,   182,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,     0,   608,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,     0,     0,     0,     0,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,   179,   180,   181,     0,     0,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,   182,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
       0,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
     362,   363,   720,     0,   117,   118,     0,   119,   120,     5,
       6,     7,     8,     9,     0,     0,     0,     0,   364,    10,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,  1072,   386,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,   387,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,   179,   180,   181,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,   182,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,     0,  1073,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,     0,
       0,     0,   117,   118,     0,   119,   120,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   661,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
     179,   180,   181,     0,     0,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,   182,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,     0,     0,     0,    90,
       0,     0,    91,     5,     6,     7,     8,     9,    92,    93,
      94,    95,     0,    10,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,     0,     0,     0,     0,
     117,   118,     0,   119,   120,     0,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   195,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,   179,   180,   181,     0,
      36,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,   182,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,     0,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    84,
      85,   114,    86,   184,    88,     0,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,   221,   613,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,   179,   180,   181,     0,     0,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,   182,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
       0,     0,     0,    90,     0,     0,    91,     5,     6,     7,
       8,     9,    92,    93,    94,    95,     0,    10,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
       0,     0,     0,     0,   117,   118,     0,   119,   120,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
     179,   180,   181,     0,     0,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,   182,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,     0,     0,     0,    90,
       0,     0,    91,     5,     6,     7,     8,     9,    92,    93,
      94,    95,     0,    10,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,   114,     0,   250,     0,     0,
     117,   118,     0,   119,   120,     0,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,   179,   180,   181,     0,
       0,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,   182,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,     0,     0,     0,    90,     0,     0,    91,     5,
       6,     7,     8,     9,    92,    93,    94,    95,     0,    10,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   114,     0,   253,     0,     0,   117,   118,     0,   119,
     120,     0,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,   179,   180,   181,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,   182,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,     0,     0,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,   455,     0,
       0,     0,   117,   118,     0,   119,   120,     5,     6,     7,
       8,     9,     0,     0,     0,     0,     0,    10,  -907,  -907,
    -907,  -907,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   620,   386,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   387,     0,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
     179,   180,   181,     0,    36,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,   182,    72,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   183,    80,    81,    82,    83,     0,
      84,    85,     0,    86,   184,    88,     0,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,     0,     0,    98,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    84,    85,   114,    86,   184,    88,     0,
     117,   118,     0,   119,   120,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,   662,   878,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,   179,   180,
     181,     0,    36,    66,    67,     0,     0,     0,     0,     0,
       0,     0,     0,   182,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,   183,    80,    81,    82,    83,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,    90,     0,   651,
      91,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    84,    85,   114,    86,   184,    88,     0,   117,   118,
       0,   119,   120,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,   704,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,   179,   180,   181,     0,
      36,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,   182,    72,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     183,    80,    81,    82,    83,     0,    84,    85,     0,    86,
     184,    88,     0,     0,     0,    90,     0,  1165,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    84,
      85,   114,    86,   184,    88,     0,   117,   118,     0,   119,
     120,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,   706,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,   179,   180,   181,     0,    36,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,   182,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
       0,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    84,    85,   114,
      86,   184,    88,     0,   117,   118,     0,   119,   120,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,  1114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,   179,   180,   181,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,   182,    72,     0,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,   183,    80,    81,    82,
      83,     0,    84,    85,     0,    86,   184,    88,     0,     0,
       0,    90,     0,     0,    91,     5,     6,     7,     8,     9,
      92,    93,    94,    95,     0,    10,     0,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,   114,     0,     0,
       0,     0,   117,   118,     0,   119,   120,     0,    14,    15,
       0,     0,     0,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,   179,   180,
     181,     0,     0,    66,    67,     0,     0,     0,     0,     0,
       0,     0,     0,   182,    72,     0,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,   183,    80,    81,    82,    83,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,    90,     0,     0,
      91,     5,     6,     7,     8,     9,    92,    93,    94,    95,
       0,    10,     0,     0,    98,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,     0,     0,     0,   117,   118,
       0,   119,   120,     0,    14,    15,     0,     0,     0,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,    33,    34,    35,    36,   549,    38,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,   179,   180,   181,     0,     0,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,   182,
      72,     0,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,   183,    80,
      81,    82,    83,     0,    84,    85,     0,    86,   184,    88,
       0,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,   114,
     361,   362,   363,     0,   117,   118,     0,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   364,
       0,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,     0,   386,  1478,  1479,  1480,  1481,  1482,     0,
       0,  1483,  1484,  1485,  1486,   387,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1487,  1488,
       0,   984,     0,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1489,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1006,  1490,  1491,
    1492,  1493,  1494,  1495,  1496,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1497,  1498,
    1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,  1508,
    1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,
    1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,
    1529,  1530,  1531,  1532,  1533,  1534,  1535,  1536,  1537,     0,
       0,     0,  1538,  1539,     0,  1540,  1541,  1542,  1543,  1544,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1545,  1546,  1547,     0,  1432,     0,    84,    85,     0,
      86,   184,    88,  1548,     0,  1549,  1550,     0,  1551,     0,
       0,     0,     0,     0,     0,  1552,     0,     0,     0,  1553,
       0,  1554,     0,  1555,  1556,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   361,
     362,   363,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   364,     0,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,     0,   386,   361,   362,   363,     0,     0,     0,     0,
       0,     0,     0,     0,   387,     0,     0,     0,     0,     0,
       0,     0,   364,     0,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,     0,   386,   361,   362,   363,
       0,     0,     0,     0,     0,     0,     0,     0,   387,     0,
       0,     0,     0,     0,     0,     0,   364,     0,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,     0,
     386,   361,   362,   363,     0,     0,     0,     0,     0,     0,
       0,     0,   387,     0,     0,     0,     0,     0,     0,     0,
     364,     0,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,     0,   386,   361,   362,   363,     0,     0,
       0,     0,     0,     0,     0,     0,   387,     0,     0,     0,
       0,     0,   471,     0,   364,     0,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,     0,   386,   361,
     362,   363,     0,     0,     0,     0,     0,     0,     0,     0,
     387,     0,     0,     0,     0,     0,   473,     0,   364,     0,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,     0,   386,   361,   362,   363,     0,     0,     0,     0,
       0,     0,     0,     0,   387,     0,     0,     0,     0,     0,
     484,     0,   364,     0,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,     0,   386,   361,   362,   363,
       0,     0,     0,     0,     0,     0,     0,     0,   387,     0,
       0,     0,     0,     0,   508,     0,   364,     0,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,     0,
     386,   361,   362,   363,     0,     0,     0,     0,     0,     0,
       0,     0,   387,     0,    36,     0,     0,   695,     0,     0,
     364,     0,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,     0,   386,     0,   361,   362,   363,     0,
       0,     0,     0,     0,     0,     0,   387,     0,     0,     0,
       0,   717,     0,     0,     0,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   255,   386,
       0,  1562,     0,    84,    85,  1563,    86,   184,    88,     0,
    1015,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,    36,   255,  1417,     0,
    1011,  1012,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,     0,     0,     0,
       0,  1646,     0,     0,     0,    36,     0,     0,     0,     0,
       0,   257,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
       0,   255,    82,   259,     0,    84,    85,     0,    86,   184,
      88,     0,   959,     0,     0,  1466,     0,     0,     0,     0,
       0,     0,     0,   260,     0,     0,     0,   256,     0,     0,
     257,   258,     0,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,   183,    36,
     261,    82,   259,     0,    84,    85,     0,    86,   184,    88,
       0,  1291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,     0,     0,   261,
       0,     0,    29,    30,   257,   258,     0,     0,     0,     0,
       0,     0,    36,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   183,     0,     0,    82,   259,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,   260,     0,    59,    60,
      61,   179,   180,   181,  1173,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     745,   746,     0,   261,     0,     0,   747,     0,   748,     0,
       0,     0,     0,     0,     0,   183,     0,     0,    82,    83,
     749,    84,    85,     0,    86,   184,    88,     0,    33,    34,
      35,    36,     0,    91,     0,     0,     0,     0,   939,     0,
     750,     0,     0,     0,     0,     0,     0,     0,    99,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,     0,   437,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,   212,     0,     0,     0,   751,     0,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,   752,
       0,     0,     0,     0,   183,    80,    81,    82,   753,     0,
      84,    85,     0,    86,   184,    88,     0,     0,     0,    90,
       0,   213,     0,     0,     0,     0,     0,     0,   754,   755,
     756,   757,     0,     0,   940,     0,    98,    36,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,   183,     0,   758,    82,    83,     0,    84,
      85,     0,    86,   184,    88,   276,   277,     0,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,  1006,   745,   746,   214,     0,     0,     0,   747,   117,
     748,     0,     0,   278,     0,     0,    84,    85,     0,    86,
     184,    88,   749,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,   750,   982,   983,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,     0,
       0,   984,     0,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,     0,     0,     0,     0,   751,     0,
      73,    74,    75,    76,    77,     0,     0,  1006,     0,     0,
       0,   752,     0,     0,     0,     0,   183,    80,    81,    82,
     753,     0,    84,    85,     0,    86,   184,    88,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
     754,   755,   756,   757,   907,   908,     0,     0,    98,     0,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   909,     0,     0,   758,     0,     0,
       0,     0,   910,   911,   912,    36,   361,   362,   363,     0,
       0,    29,    30,     0,   913,     0,     0,     0,     0,     0,
       0,    36,     0,   212,     0,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,     0,   386,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     914,   387,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   915,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,     0,    86,   184,    88,
       0,     0,     0,     0,   183,     0,     0,    82,    83,   896,
      84,    85,   916,    86,   184,    88,     0,     0,    36,     0,
     212,     0,    91,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   433,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,     0,     0,   437,     0,     0,     0,   213,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,   212,  -907,  -907,  -907,  -907,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,   183,     0,     0,    82,    83,     0,    84,    85,     0,
      86,   184,    88,     0,  1006,     0,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    36,
       0,     0,   214,     0,     0,   183,     0,   117,    82,    83,
       0,    84,    85,     0,    86,   184,    88,    36,     0,   212,
       0,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,  1006,     0,     0,   214,     0,   213,   521,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   541,   183,     0,     0,    82,    83,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,     0,     0,     0,
     183,     0,     0,    82,    83,     0,    84,    85,     0,    86,
     184,    88,    36,     0,   212,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,     0,
       0,   214,     0,   213,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1040,    36,     0,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,    82,    83,
       0,    84,    85,     0,    86,   184,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    36,     0,   212,   214,     0,     0,     0,
     183,   117,     0,    82,    83,     0,    84,    85,     0,    86,
     184,    88,     0,     0,     0,     0,    36,     0,   212,     0,
       0,     0,     0,     0,     0,   563,     0,     0,     0,     0,
       0,     0,     0,     0,   226,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,     0,
       0,   214,     0,     0,     0,     0,   117,   213,     0,     0,
       0,     0,     0,     0,     0,     0,   183,     0,     0,    82,
      83,     0,    84,    85,     0,    86,   184,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
       0,     0,    82,    83,     0,    84,    85,     0,    86,   184,
      88,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,   227,     0,     0,
       0,     0,   117,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   361,   362,   363,
       0,     0,     0,     0,     0,   564,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,     0,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,     0,
     386,   361,   362,   363,     0,     0,     0,     0,     0,     0,
       0,     0,   387,     0,     0,     0,     0,     0,     0,     0,
     364,     0,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,     0,   386,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   387,   361,   362,   363,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,   443,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,     0,
     386,   361,   362,   363,     0,     0,     0,     0,     0,     0,
       0,     0,   387,     0,     0,     0,     0,     0,     0,     0,
     364,   846,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,     0,   386,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   387,   361,   362,   363,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,   884,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,     0,
     386,   361,   362,   363,     0,     0,     0,     0,     0,     0,
       0,     0,   387,     0,     0,     0,     0,     0,     0,     0,
     364,   925,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,     0,   386,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   387,   981,   982,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   984,  1230,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,     0,
       0,   981,   982,   983,     0,     0,     0,     0,     0,     0,
       0,     0,  1006,     0,     0,     0,     0,     0,     0,     0,
     984,  1248,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,   981,   982,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   984,  1304,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,     0,
       0,   981,   982,   983,     0,     0,     0,     0,     0,     0,
       0,     0,  1006,     0,     0,     0,     0,     0,     0,     0,
     984,  1309,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,  1006,   981,   982,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,   984,  1386,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1006,  1404,     0,     0,    36,     0,     0,     0,
       0,  1464,     0,     0,     0,     0,  1405,  1406,   348,    36,
      84,    85,     0,    86,   184,    88,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,    82,  1407,     0,
      84,    85,     0,    86,  1408,    88,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,     0,    36,     0,     0,  1465,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   509,     0,     0,    84,    85,     0,    86,   184,
      88,     0,     0,     0,     0,   513,     0,     0,    84,    85,
       0,    86,   184,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     278,     0,     0,    84,    85,     0,    86,   184,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   361,   362,   363,
       0,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   729,   364,     0,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,     0,
     386,     0,   361,   362,   363,     0,     0,     0,     0,     0,
       0,     0,   387,     0,     0,     0,     0,     0,     0,     0,
       0,   364,   881,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   730,   386,   361,   362,   363,     0,
       0,     0,     0,     0,     0,     0,     0,   387,     0,     0,
       0,     0,     0,     0,     0,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,     0,   386,
     981,   982,   983,     0,     0,     0,     0,     0,     0,     0,
       0,   387,     0,     0,     0,     0,     0,     0,     0,   984,
    1314,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1005,   981,   982,   983,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1006,     0,     0,     0,     0,
       0,   984,     0,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,   363,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1006,     0,     0,
       0,   364,     0,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   983,   386,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   387,     0,     0,
       0,   984,     0,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1006,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,     0,   386,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   387
};

static const yytype_int16 yycheck[] =
{
       4,   163,   136,     4,   610,    53,   582,   186,     4,   316,
      32,     4,     4,    89,   697,     4,    54,   858,     4,  1064,
      96,    97,    44,   228,   175,   166,    48,   427,   581,   386,
     400,   421,   422,   839,   163,   728,   453,   114,     9,     9,
      26,    27,   114,   234,   556,   453,    50,   114,     4,    53,
    1049,    30,    30,   187,   735,  1047,     4,     9,   877,   135,
      50,   451,  1060,   457,     9,     9,    70,     9,   224,     9,
       9,    45,   255,   256,   893,     9,     9,     9,   261,     9,
       9,     9,     9,    87,     9,    89,     9,     9,     9,    66,
       9,    57,    96,    97,   235,   109,     9,    79,     9,    33,
      85,     9,     9,    79,    30,    66,  1589,   938,   155,    66,
     301,   505,   170,    79,    97,    79,    82,   170,   128,   129,
     155,    85,    14,     9,    97,   170,   128,   129,   114,    45,
      45,   135,    85,   168,     0,    45,   116,   214,    30,   201,
     136,   201,   214,   201,   124,   201,    29,    45,   201,     8,
     227,   100,   101,   167,    66,    47,   201,   204,   341,  1642,
     201,   146,   163,    46,   154,   316,    49,    66,   974,   204,
     153,   128,   129,   149,   353,    10,    11,    12,    66,    66,
     153,   163,    79,   147,   148,    66,    66,    66,   149,   583,
      66,   187,   202,   146,    29,   199,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   294,    53,    79,
      66,    66,   294,    66,   201,   199,   204,   294,   214,    66,
      65,    30,    66,   203,   205,   221,   240,    66,    66,   171,
     244,   227,   393,   204,   248,  1243,  1245,   204,    66,    79,
     429,   203,   204,  1252,   240,  1254,   205,   202,   244,   203,
     202,  1253,   266,   203,   203,   399,   417,   948,   202,   950,
     203,   347,  1091,   203,   203,   203,   203,   203,   203,   202,
     436,   203,   203,   202,   240,   171,   202,   202,   244,   202,
     441,   202,   202,   476,   202,   202,   344,   283,   874,   450,
    1131,   199,   453,  1109,   202,   204,   292,   293,   294,   206,
     276,   277,   278,   299,   201,   202,   204,   829,   154,   305,
     396,   397,   201,   204,   204,   204,   720,   331,   204,    79,
     331,   725,    79,   201,    79,   331,   340,    35,    85,    35,
     344,    79,   308,   347,    35,   331,   206,   100,   101,    50,
      35,    79,   128,   129,    35,  1353,   201,  1355,   204,   204,
     437,   204,   400,    79,  1363,   437,    97,   204,   198,    85,
     204,    79,    97,   208,   204,   204,   204,   325,   149,    35,
     170,    79,   201,    79,   128,   129,   204,   204,    79,   393,
     394,   395,   396,   397,    79,   578,   579,   588,    79,   170,
     147,   148,   398,    97,   587,    71,    72,   386,    97,   201,
     566,   201,    53,   417,   393,   201,   816,   573,   163,   201,
     576,   459,   153,    79,    65,   163,   201,  1110,   153,   205,
     201,   147,   148,   204,  1127,   163,   598,   441,   417,   147,
     148,   427,    26,    27,    79,   862,  1444,   201,   653,   453,
      85,   437,   205,   154,   862,   201,   206,    66,   202,   153,
     464,    79,   441,   210,   153,   163,   117,   163,   169,   598,
     204,   450,   163,   124,   453,   105,   149,   201,   464,   201,
     685,   660,   163,   113,   114,   115,   116,   117,   118,    79,
      77,   201,  1298,   209,   650,    85,   201,   170,   703,   153,
     890,  1077,    46,    47,  1080,    99,   100,   101,   464,   926,
    1063,   702,   147,   148,    71,    72,   520,   708,   926,   128,
     129,   113,   114,   115,   116,   117,   118,    79,   146,   147,
     148,   204,   839,    85,    99,   100,   101,   126,   127,   896,
     616,   545,   546,   509,   113,   114,   115,   513,     4,   203,
     204,   945,   518,   183,   759,   153,   146,   147,   148,   390,
     743,   744,   201,   150,    35,  1371,   153,   708,    66,   156,
     157,    79,   159,   160,   161,   203,  1259,    85,  1261,   113,
     114,   115,   116,   117,   118,   741,   203,   418,   203,    45,
     203,   183,   423,   203,  1592,   147,   148,   598,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   203,   616,   118,   119,   120,  1618,  1619,   205,  1614,
    1615,   607,   203,   204,   113,   114,   115,   116,   117,   118,
     214,    29,   203,   204,   582,   124,   125,   221,   146,   147,
     148,   743,   744,   227,   203,    66,     4,   830,    46,   183,
     106,    49,    49,    50,    51,   111,    53,   113,   114,   115,
     116,   117,   118,   119,    49,    50,    51,   974,    65,   204,
     853,  1247,  1042,   162,    66,  1720,   662,   203,   201,  1232,
      65,   149,   865,   201,    66,   149,  1369,    45,   839,   201,
    1735,   153,   203,   697,   183,   699,  1086,    44,    65,   283,
     156,   157,   724,   159,   170,  1095,   149,   201,   292,   293,
     294,   862,   208,     9,   718,   299,  1714,   718,   704,   149,
     706,   305,   718,   149,   201,     8,   170,   183,   732,   733,
    1130,  1729,   718,   203,   113,   114,   115,   116,   117,   118,
     201,    14,    79,    14,   730,   124,   125,   733,   106,   205,
     203,   203,   124,   111,   124,   113,   114,   115,   116,   117,
     118,   119,    14,   170,   920,   202,    14,    97,  1451,   952,
     202,   954,   207,   202,   202,   926,   201,   733,   105,   783,
       9,   160,   783,   162,   201,   789,   201,   783,  1364,   793,
     794,   202,   202,     9,    89,   203,    14,   783,   156,   157,
     201,   159,  1109,     9,   183,    79,   187,   963,   201,   813,
    1204,    79,    79,  1213,   970,   801,   190,   203,     9,   895,
     203,     9,   788,   974,   828,   183,   792,   828,    79,   202,
     816,   817,   828,   202,   202,   828,   828,   203,   842,   828,
     126,   201,   828,   427,    66,   202,    30,   205,   127,  1690,
     169,     9,   856,   437,   130,   856,   202,   149,   862,  1249,
     856,   202,     9,   302,   202,  1070,  1707,   306,     9,   202,
     856,    14,   828,   199,  1715,     9,    66,  1271,     9,  1062,
     828,  1064,   171,   862,   202,     9,    14,   126,   208,     9,
     205,   895,   208,  1287,   333,   201,   335,   336,   337,   338,
     208,   202,   202,   907,   908,   909,  1089,   201,    97,   931,
     858,  1594,   184,   185,   186,   208,   203,   896,   202,   191,
     192,   203,   926,   195,   196,   130,   874,     9,   932,   149,
     934,   201,   936,   934,   149,   936,   202,   201,   934,   201,
     936,   201,   201,   204,   187,   149,   932,   926,   934,  1105,
     936,   955,   938,   939,   187,    14,     9,    79,  1109,   204,
       4,  1351,  1145,    46,    47,    48,    49,    50,    51,   973,
      53,   203,    14,   204,    14,   979,   932,   204,   208,  1373,
      14,    30,    65,    26,    27,   199,   203,    30,  1382,   201,
     201,  1298,    46,    47,    48,    49,    50,    51,    30,  1155,
     201,    45,  1396,  1159,  1042,    14,  1162,   201,   201,     9,
      53,    65,   130,  1169,    65,   202,   201,   203,  1022,    14,
     203,  1025,     9,   607,   202,     9,  1209,   208,    97,   146,
    1636,    79,     9,   201,   130,    14,   203,   202,    79,   201,
     204,   201,  1046,   202,   130,  1046,     9,   204,   204,   146,
    1046,    73,    30,  1046,  1046,   208,   202,  1046,   203,   203,
    1046,   171,   106,  1457,  1371,   130,    30,   111,   130,   113,
     114,   115,   116,   117,   118,   119,   202,   202,   662,     9,
       9,   202,     9,   202,     9,    79,  1072,   202,   202,   205,
    1046,    74,    75,    76,   202,    14,   205,  1119,  1046,  1705,
     204,   201,  1106,    86,   202,   204,  1110,  1290,   202,  1292,
     202,  1267,   156,   157,   201,   159,   130,   202,  1122,     9,
     704,   202,   706,   202,    30,   203,   202,   202,  1114,  1077,
    1134,   203,  1080,  1134,   204,   203,  1122,    97,  1134,   183,
     158,   154,    14,    79,  1130,  1131,   730,  1298,  1134,  1332,
     111,   134,   135,   136,   137,   138,   202,   202,   130,   130,
      14,   205,   145,    79,   202,   204,  1122,   204,   151,   152,
     203,   214,  1334,     4,    14,    79,   202,   201,   221,   204,
     130,   202,   165,   203,   227,    14,   203,    14,   203,    14,
    1584,    55,  1586,   204,    79,   201,    79,     9,  1332,   182,
     203,  1595,    79,    97,  1208,   149,   109,   161,    97,    33,
    1211,    14,   255,   256,    45,  1398,   201,   801,   261,  1220,
    1371,   202,   167,   203,    79,   201,   164,  1213,   202,     9,
      79,   204,   816,   817,   203,   202,   202,    14,    79,    14,
     283,    79,    14,  1422,    79,  1639,    14,    79,   788,   292,
     293,   792,  1698,   518,   394,  1259,   299,  1261,   397,   396,
     894,   831,   305,  1211,   891,  1128,  1711,  1456,  1284,  1707,
     523,  1447,  1220,   316,  1322,   106,  1476,  1560,  1327,  1739,
     111,  1572,   113,   114,   115,   116,   117,   118,   119,    42,
    1727,  1443,   494,   400,  1017,  1014,   494,   780,   341,  1247,
    1093,   344,  1050,   971,   908,  1106,   922,   862,   300,   319,
     977,   293,   743,  1317,   956,  1033,  1317,    -1,  1322,    -1,
      -1,  1317,    -1,  1327,    -1,   156,   157,    -1,   159,    -1,
      -1,  1317,    -1,  1334,    -1,  1331,    -1,    -1,    -1,  1733,
      -1,    -1,    -1,   386,    -1,    -1,  1740,    -1,    -1,    -1,
      -1,    -1,   183,  1354,   938,   939,    -1,    -1,    -1,  1360,
      -1,  1362,    -1,    -1,    -1,  1369,    -1,    -1,    -1,    -1,
    1374,    -1,    -1,  1374,   205,  1379,  1424,    -1,  1374,  1383,
      -1,    -1,  1383,    -1,   427,    -1,    -1,  1383,  1374,    -1,
      -1,    -1,    -1,  1379,   437,  1574,    -1,  1383,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,  1354,  1411,    -1,    -1,
      -1,    -1,  1360,  1417,  1362,    -1,  1364,    -1,    -1,    -1,
    1424,    -1,    -1,  1379,  1428,    -1,    -1,    -1,    -1,    -1,
    1426,    -1,    -1,   476,   477,    -1,    -1,   480,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,  1451,  1449,    -1,
    1454,  1455,  1456,  1454,    -1,    -1,  1460,    -1,  1454,  1460,
      -1,    -1,    -1,  1467,  1460,    -1,  1467,    -1,  1454,  1455,
    1456,  1467,    -1,    -1,  1460,    -1,    -1,    -1,    -1,    -1,
      -1,  1467,    -1,    -1,   527,    -1,    -1,    -1,  1072,    -1,
      -1,    -1,    -1,    -1,    -1,  1571,    -1,    -1,    -1,  1455,
    1456,  1449,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,    26,
      27,    -1,    -1,    30,  1686,    -1,    -1,    -1,    -1,    -1,
    1114,    -1,    -1,    -1,    -1,   578,   579,  1720,    -1,    -1,
      -1,    -1,    -1,    -1,   587,    -1,  1130,  1131,    -1,    -1,
      -1,    -1,  1735,    -1,  1630,   156,   157,    -1,   159,    -1,
      -1,    -1,    -1,    -1,   607,    -1,    -1,  1571,  1702,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,   183,    -1,    -1,    -1,  1590,    -1,    -1,    -1,
    1594,    -1,    -1,    -1,    65,  1599,    -1,    -1,  1599,    -1,
      -1,    -1,    -1,  1599,   205,  1609,    -1,    -1,    -1,    -1,
    1614,  1615,    -1,  1599,  1618,  1619,    -1,    -1,    -1,   662,
      -1,    -1,    -1,    -1,    -1,    -1,  1630,    -1,    -1,  1213,
      -1,    -1,    -1,  1637,  1638,    -1,  1637,  1638,    -1,    -1,
    1644,  1637,  1638,  1644,    -1,    -1,    -1,    -1,  1644,    -1,
      -1,  1637,  1638,    -1,    -1,    -1,    -1,    -1,  1644,    -1,
      -1,   704,    -1,   706,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,  1678,    -1,    -1,  1678,    -1,    -1,
      -1,  1685,  1678,    -1,    -1,  1686,    -1,   730,   731,    -1,
      -1,    -1,  1678,    -1,    -1,    -1,    -1,  1701,    -1,    -1,
     743,   744,   745,   746,   747,   748,   749,    -1,    -1,    45,
      -1,    -1,    -1,    -1,   221,   758,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,  1741,    53,    -1,
    1741,   784,  1690,    -1,  1748,  1741,    -1,  1748,    -1,    -1,
      65,    -1,  1748,    -1,    -1,  1741,    -1,    -1,   801,  1707,
      -1,    -1,  1748,    -1,    -1,    -1,    -1,  1715,    -1,    -1,
     106,   814,    77,   816,   817,   111,   283,   113,   114,   115,
     116,   117,   118,   119,    -1,   292,   293,   830,   831,    -1,
      -1,    -1,   299,    -1,    -1,    -1,   839,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     853,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,   157,   865,   159,    -1,    -1,    -1,    -1,    -1,    -1,
     873,    -1,    -1,   876,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   153,    -1,
      -1,   156,   157,   896,   159,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    26,    27,    -1,    -1,    30,    -1,    -1,   386,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,    -1,    -1,   938,   939,    -1,    -1,   204,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   952,
      -1,   954,    -1,   956,    -1,    -1,    -1,    -1,    -1,    -1,
     427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   971,    -1,
      -1,   974,   975,   976,   977,    -1,    -1,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1030,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,  1062,
     527,  1064,    -1,    -1,    65,    -1,    -1,    -1,    -1,  1072,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,  1089,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,  1109,   221,    -1,    -1,
      -1,  1114,    -1,   227,    77,    -1,    79,    80,    -1,    -1,
      -1,    63,    64,    53,    -1,    -1,    -1,  1130,  1131,    -1,
    1133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     607,    -1,  1145,    -1,    -1,  1148,    -1,  1150,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,   283,
    1173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,   293,
      -1,    -1,    -1,    -1,    -1,   299,   128,   129,    -1,    -1,
      -1,   305,    -1,   156,   157,   662,   159,   160,   161,    -1,
      63,    64,   316,    -1,   205,    -1,  1209,  1210,    -1,    -1,
    1213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,  1238,    -1,   704,    29,   706,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,   730,   731,   128,   129,    -1,    -1,    -1,
      -1,    -1,   386,    -1,    65,    -1,    -1,    -1,   745,   746,
     747,   748,   749,    -1,    -1,    -1,    -1,  1290,    -1,  1292,
      -1,   758,    -1,    -1,  1297,  1298,    -1,    -1,    -1,  1302,
      -1,  1304,    -1,  1306,    -1,    -1,  1309,    -1,  1311,    -1,
      -1,  1314,    -1,   427,    -1,    -1,    -1,   784,    -1,  1322,
    1323,    -1,  1325,   437,    -1,   255,   256,    -1,    -1,  1332,
      -1,   261,    -1,    -1,   801,    -1,    -1,    -1,    -1,   202,
      -1,    -1,    -1,    -1,    -1,  1348,    -1,   814,    -1,   816,
     817,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   831,    -1,    -1,    -1,  1371,    -1,
      -1,    -1,   839,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1386,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1398,  1399,  1400,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,   873,    -1,    -1,   876,
      -1,   341,   203,    -1,   344,    10,    11,    12,    -1,    -1,
      -1,  1424,    -1,    -1,    -1,  1428,    -1,    -1,    -1,   896,
      -1,    -1,  1435,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    -1,
    1463,  1464,  1465,    -1,    -1,   128,   129,    -1,  1471,  1472,
      65,   938,   939,  1476,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   607,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   971,    -1,    65,   974,   975,   976,
     977,    -1,    -1,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
      -1,    -1,    -1,    -1,    -1,    -1,   476,   477,   662,    -1,
     480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1030,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,  1579,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1590,    -1,    65,
     704,    -1,   706,    -1,    -1,    -1,    -1,   527,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1072,  1609,    -1,   203,    -1,
    1613,    -1,    -1,    -1,    -1,    -1,   730,    -1,    -1,    -1,
      -1,  1624,    -1,    -1,    -1,    -1,  1629,    -1,    -1,  1632,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1109,    -1,    -1,    -1,    -1,  1114,   578,   579,
      -1,    -1,    -1,    -1,    -1,    -1,    55,   587,    -1,    -1,
      -1,    -1,    -1,  1130,  1131,    -1,  1133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,  1148,    -1,  1150,    -1,    -1,  1689,   801,    -1,    -1,
      -1,    -1,    -1,    -1,  1697,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   816,   817,    -1,    -1,  1173,    -1,  1711,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1720,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   839,    -1,    -1,    -1,    -1,
      -1,    -1,  1735,   132,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1745,  1210,    -1,    -1,  1213,    -1,    -1,    -1,
    1753,   150,    -1,    -1,   153,   154,  1759,   156,   157,  1762,
     159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1238,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,   896,    -1,    -1,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,    -1,
      -1,   731,   201,    -1,    -1,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,   743,   744,   745,   746,   747,   748,   749,
      -1,    -1,    -1,    -1,   938,   939,    -1,    -1,   758,    -1,
    1297,  1298,    -1,    -1,    -1,  1302,    -1,  1304,    -1,  1306,
      -1,    -1,  1309,    -1,  1311,    -1,    -1,  1314,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1323,    -1,  1325,    -1,
     974,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,  1348,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
     830,    -1,    -1,    -1,  1371,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,  1386,
      -1,    -1,    -1,   853,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1399,  1400,    -1,   865,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    -1,    63,    64,    -1,    -1,  1072,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,  1435,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    -1,    -1,    -1,  1109,  1463,  1464,  1465,    -1,
    1114,    -1,    -1,    65,  1471,  1472,    77,    -1,    79,  1476,
      -1,    -1,    -1,    -1,    -1,    -1,  1130,  1131,    -1,   128,
     129,    -1,   952,    -1,   954,    -1,   956,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   971,    -1,    -1,    -1,   975,   976,   977,    -1,    -1,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,   159,   160,
     161,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,  1213,
    1030,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1579,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,    -1,    -1,
      55,    -1,  1062,   204,  1064,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,  1613,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,  1624,    -1,  1089,
      -1,    -1,  1629,    -1,    -1,  1632,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,  1298,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,  1133,    -1,    -1,    -1,   132,   133,    -1,
      -1,    -1,    -1,    -1,    -1,  1145,    -1,    -1,  1148,    -1,
    1150,    -1,  1689,    -1,    -1,   150,    -1,    -1,   153,   154,
    1697,   156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,  1173,  1711,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1371,    -1,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,    -1,    -1,    -1,   201,    -1,  1745,  1209,
     205,    -1,    -1,    -1,    -1,    -1,  1753,    -1,    10,    11,
      12,    -1,  1759,    -1,    -1,  1762,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,  1238,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    1290,    53,  1292,    -1,    -1,    -1,    -1,  1297,    -1,    -1,
      -1,    -1,  1302,    65,  1304,    -1,  1306,    -1,    -1,  1309,
      -1,  1311,    -1,    -1,  1314,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1322,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    -1,  1332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,  1348,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,  1386,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1398,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1424,    -1,    -1,    -1,  1428,    -1,
      -1,    -1,    -1,    -1,    -1,  1435,    -1,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    -1,  1463,  1464,  1465,    -1,    -1,    -1,    -1,
      -1,  1471,    -1,    -1,    42,    10,    11,    12,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,   205,    -1,    -1,    10,    11,    12,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,   114,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1579,
      -1,    65,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
    1590,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,  1609,
      -1,    -1,    -1,  1613,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    65,   191,  1624,    -1,    -1,    -1,    -1,  1629,
     124,    -1,  1632,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    -1,    -1,
      -1,   480,   156,   157,    -1,   159,   160,   161,   236,    65,
     205,   239,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1689,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    -1,    -1,    -1,    -1,   527,    -1,
     204,    -1,   206,   480,    -1,    -1,    -1,    -1,    -1,    -1,
    1720,   205,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,
      -1,    -1,   300,    -1,    -1,  1735,   304,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,  1745,    -1,    -1,    -1,   317,
     318,   319,    -1,  1753,    -1,    -1,    -1,    -1,    -1,  1759,
     527,    -1,  1762,    -1,   332,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,   188,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   105,   387,
      -1,   389,   390,    -1,   392,    -1,   113,   114,   115,   116,
     117,   118,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   132,   133,    -1,    -1,    -1,
     418,   419,    -1,   421,   422,   423,   424,    -1,    -1,    -1,
      -1,    -1,   430,   150,    -1,   433,   153,   154,    -1,   156,
     157,    -1,   159,   160,   161,   443,    -1,   445,    -1,    -1,
      -1,    -1,    -1,   451,    -1,    -1,    -1,   174,    -1,    -1,
      -1,   459,    -1,   461,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    -1,   731,    -1,   201,    -1,    -1,    -1,    -1,   487,
      -1,    -1,   490,   491,   492,    -1,   745,   746,   747,   748,
     749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   758,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   521,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,   731,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   745,   746,
     747,   748,   749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   758,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    -1,   156,   157,
     608,   159,   160,   161,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,   620,    -1,   873,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,    -1,   480,   154,   652,   156,   157,    -1,   159,   160,
     161,    -1,    -1,   661,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,
      -1,    -1,   680,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,    -1,   527,
      -1,    -1,    -1,   204,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   712,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   971,    -1,    -1,    -1,   975,   976,   977,    -1,
     728,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   769,    -1,    -1,   971,    -1,    -1,    -1,   975,   976,
     977,  1030,    -1,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,   825,    -1,    77,
      10,    11,    12,  1030,    -1,    -1,    -1,    -1,    86,    65,
     838,    -1,    -1,    -1,    -1,    -1,   844,    -1,   846,    29,
     848,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,   871,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   881,  1133,    65,   884,    -1,   886,    -1,
      -1,    -1,   890,    -1,    -1,    -1,    -1,    -1,    -1,  1148,
      -1,  1150,   150,   731,    -1,   153,    -1,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,   745,   746,   747,
     748,    -1,    -1,    -1,  1173,    -1,    -1,   925,    -1,    -1,
     758,    -1,    -1,    10,    11,    12,  1133,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     130,  1148,    29,  1150,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,  1173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,  1238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1008,  1009,  1010,    -1,    -1,    -1,  1014,  1015,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,  1238,    53,    -1,  1042,   873,    -1,    -1,  1297,    -1,
      -1,    -1,    -1,  1302,    65,  1304,    -1,  1306,    -1,    -1,
    1309,    -1,  1311,    -1,    -1,  1314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1073,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1086,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1095,  1096,  1348,
    1297,    -1,    -1,    -1,    -1,  1302,    -1,  1304,    -1,  1306,
      -1,    -1,  1309,    -1,  1311,    -1,    -1,  1314,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,  1127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1386,    -1,  1137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   975,   976,   977,
      -1,  1348,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1435,    -1,    -1,  1386,
      -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1030,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1463,  1464,  1465,    -1,    -1,    -1,
      -1,    -1,  1471,    -1,    77,  1223,  1475,    -1,    -1,  1227,
      -1,  1229,  1230,    -1,    -1,    -1,    -1,    -1,  1435,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1248,  1249,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1463,  1464,  1465,   122,
      -1,    -1,    -1,    29,  1471,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    29,    -1,
      -1,    -1,    -1,   156,   157,  1133,   159,   160,   161,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1315,    -1,    -1,
    1148,    -1,  1150,    -1,    55,    -1,    -1,    -1,    -1,    -1,
    1579,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,  1173,    77,    -1,   201,    -1,
      -1,    -1,    -1,  1351,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1613,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,  1624,    -1,    -1,    -1,    -1,
    1629,    -1,  1579,  1632,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   132,   133,    -1,    -1,  1654,    -1,    -1,    -1,    -1,
    1238,    -1,    -1,    -1,    65,    -1,  1613,    -1,    77,   150,
      79,    -1,   153,   154,    -1,   156,   157,  1624,   159,   160,
     161,    -1,  1629,    -1,    -1,  1632,    -1,    -1,    -1,    -1,
    1689,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,  1466,  1297,
     201,    -1,    -1,    -1,  1302,    -1,  1304,    -1,  1306,    -1,
      -1,  1309,    -1,  1311,    -1,    -1,  1314,    -1,    -1,    -1,
      -1,    -1,  1689,    -1,    -1,    -1,  1745,   156,   157,    -1,
     159,   160,   161,    -1,  1753,    -1,    -1,    -1,    -1,    -1,
    1759,    -1,    -1,  1762,    -1,    -1,    -1,    -1,    -1,    -1,
    1348,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,     3,
       4,     5,     6,     7,    -1,   204,    -1,   206,  1745,    13,
      -1,    -1,    -1,    -1,    -1,    -1,  1753,    -1,  1386,    -1,
      -1,    -1,  1759,    27,    28,  1762,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,  1435,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1463,  1464,  1465,    -1,    -1,
      -1,   105,    -1,  1471,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,    -1,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,   207,    -1,   209,   210,    -1,    -1,    -1,
      -1,  1579,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1613,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,  1624,    -1,    -1,    -1,
      -1,  1629,    -1,    -1,  1632,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,
      98,  1689,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,  1745,   156,   157,
      -1,   159,   160,   161,   162,  1753,    -1,   165,    -1,    -1,
     168,  1759,    -1,    -1,  1762,    -1,   174,   175,   176,   177,
     178,    -1,   180,    -1,   182,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,    -1,   203,   204,   205,   206,   207,
      -1,   209,   210,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,   178,    -1,
     180,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,    -1,   203,   204,   205,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    91,
      -1,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,   178,    -1,   180,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      -1,   203,   204,    -1,   206,   207,    -1,   209,   210,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,   103,
     104,   105,    -1,   107,   108,    -1,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,    -1,   120,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,   203,
     204,   205,   206,   207,    -1,   209,   210,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,   102,   103,   104,   105,
      -1,   107,   108,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,    -1,   120,   121,   122,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,    -1,   203,   204,   205,
     206,   207,    -1,   209,   210,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,
      98,    -1,    -1,    -1,   102,   103,   104,   105,    -1,   107,
     108,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,   182,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,    -1,   203,   204,   205,   206,   207,
      -1,   209,   210,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,
      -1,    -1,   102,   103,   104,   105,    -1,   107,   108,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,    -1,   203,   204,   205,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,   103,   104,   105,    -1,   107,   108,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,   120,   121,
     122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      -1,   203,   204,    -1,   206,   207,    -1,   209,   210,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    91,    -1,    93,
      -1,    95,    96,    -1,    98,    -1,    -1,    -1,   102,   103,
     104,   105,    -1,   107,   108,    -1,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,    -1,   120,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,   203,
     204,    -1,   206,   207,    -1,   209,   210,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,   102,   103,   104,   105,
      -1,   107,   108,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,    -1,   120,   121,   122,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,    -1,   203,   204,   205,
     206,   207,    -1,   209,   210,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,
      98,    -1,    -1,    -1,   102,   103,   104,   105,    -1,   107,
     108,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,   182,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,    -1,   203,   204,   205,   206,   207,
      -1,   209,   210,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    91,    -1,    93,    94,    95,    -1,    -1,    98,    -1,
      -1,    -1,   102,   103,   104,   105,    -1,   107,   108,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,    -1,   203,   204,    -1,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    91,
      -1,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,   103,   104,   105,    -1,   107,   108,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,   120,   121,
     122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      -1,   203,   204,   205,   206,   207,    -1,   209,   210,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,   103,
     104,   105,    -1,   107,   108,    -1,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,    -1,   120,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,   203,
     204,   205,   206,   207,    -1,   209,   210,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    91,    92,    93,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,   102,   103,   104,   105,
      -1,   107,   108,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,    -1,   120,   121,   122,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,    -1,   203,   204,    -1,
     206,   207,    -1,   209,   210,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,
      98,    -1,    -1,    -1,   102,   103,   104,   105,    -1,   107,
     108,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,   182,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,    -1,   203,   204,   205,   206,   207,
      -1,   209,   210,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,
      -1,    -1,   102,   103,   104,   105,    -1,   107,   108,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,    -1,   203,   204,   205,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    91,
      -1,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,   103,   104,   105,    -1,   107,   108,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,   120,   121,
     122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      -1,   203,   204,   205,   206,   207,    -1,   209,   210,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,   103,
     104,   105,    -1,   107,   108,    -1,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,    -1,   120,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,   203,
     204,    -1,   206,   207,    -1,   209,   210,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,   102,   103,   104,   105,
      -1,   107,   108,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,    -1,   203,   204,    -1,
     206,   207,    -1,   209,   210,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,
      98,    -1,    -1,    -1,   102,   103,   104,   105,    -1,   107,
     108,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,   182,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,    -1,   203,   204,    -1,   206,   207,
      -1,   209,   210,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,
      -1,    -1,   102,   103,   104,   105,    -1,   107,   108,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,    -1,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,    -1,   203,   204,    -1,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    91,
      -1,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,   103,   104,   105,    -1,   107,   108,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
      -1,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      -1,   203,   204,    -1,   206,   207,    -1,   209,   210,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,   103,
     104,   105,    -1,   107,   108,    -1,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,    -1,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,    -1,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,   203,
     204,    -1,   206,   207,    -1,   209,   210,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    91,    -1,    93,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,   102,   103,   104,   105,
      -1,   107,   108,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,    -1,   203,   204,    -1,
     206,   207,    -1,   209,   210,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,    -1,    -1,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,   165,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,    -1,   203,    -1,    -1,   206,   207,
      -1,   209,   210,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    29,    13,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    35,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    65,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,    -1,   163,    -1,   165,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,    -1,    -1,    -1,    -1,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
      -1,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      11,    12,   204,    -1,   206,   207,    -1,   209,   210,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    29,    13,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    35,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    65,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,   207,    -1,   209,   210,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,    -1,   168,     3,     4,     5,     6,     7,   174,   175,
     176,   177,    -1,    13,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,    -1,    -1,    -1,    -1,
     206,   207,    -1,   209,   210,    -1,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
      77,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,    -1,    -1,    -1,   165,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   156,
     157,   201,   159,   160,   161,    -1,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    -1,    -1,    35,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
      -1,    -1,    -1,   165,    -1,    -1,   168,     3,     4,     5,
       6,     7,   174,   175,   176,   177,    -1,    13,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      -1,    -1,    -1,    -1,   206,   207,    -1,   209,   210,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,    -1,   168,     3,     4,     5,     6,     7,   174,   175,
     176,   177,    -1,    13,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,    -1,   203,    -1,    -1,
     206,   207,    -1,   209,   210,    -1,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,    -1,    -1,    -1,   165,    -1,    -1,   168,     3,
       4,     5,     6,     7,   174,   175,   176,   177,    -1,    13,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,    -1,   203,    -1,    -1,   206,   207,    -1,   209,
     210,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,    -1,    -1,
      -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,   202,    -1,
      -1,    -1,   206,   207,    -1,   209,   210,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    30,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,    77,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,    -1,    -1,   182,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   156,   157,   201,   159,   160,   161,    -1,
     206,   207,    -1,   209,   210,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,    -1,    -1,    35,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,    -1,    77,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,   165,    -1,   124,
     168,    -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,   182,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   156,   157,   201,   159,   160,   161,    -1,   206,   207,
      -1,   209,   210,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
      77,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,    -1,    -1,    -1,   165,    -1,   124,   168,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   156,
     157,   201,   159,   160,   161,    -1,   206,   207,    -1,   209,
     210,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,    -1,    77,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
      -1,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   156,   157,   201,
     159,   160,   161,    -1,   206,   207,    -1,   209,   210,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,    -1,    -1,
      -1,   165,    -1,    -1,   168,     3,     4,     5,     6,     7,
     174,   175,   176,   177,    -1,    13,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,   207,    -1,   209,   210,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,    -1,    -1,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,   165,    -1,    -1,
     168,     3,     4,     5,     6,     7,   174,   175,   176,   177,
      -1,    13,    -1,    -1,   182,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,    -1,    -1,    -1,    -1,   206,   207,
      -1,   209,   210,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
      -1,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      10,    11,    12,    -1,   206,   207,    -1,   209,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    67,    68,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,   151,   152,    -1,   205,    -1,   156,   157,    -1,
     159,   160,   161,   162,    -1,   164,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,   182,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,   203,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    77,    -1,    -1,   202,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,   202,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    29,    53,
      -1,   154,    -1,   156,   157,   158,   159,   160,   161,    -1,
     197,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,    -1,    77,    29,   201,    -1,
     193,   194,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      -1,    29,   153,   154,    -1,   156,   157,    -1,   159,   160,
     161,    -1,   163,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    55,    -1,    -1,
     132,   133,    -1,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,   150,    77,
     201,   153,   154,    -1,   156,   157,    -1,   159,   160,   161,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
      -1,    -1,    67,    68,   132,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   174,    -1,   113,   114,
     115,   116,   117,   118,    30,    -1,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      46,    47,    -1,   201,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,   153,   154,
      66,   156,   157,    -1,   159,   160,   161,    -1,    74,    75,
      76,    77,    -1,   168,    -1,    -1,    -1,    -1,    35,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,    -1,    -1,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,   132,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,   131,    -1,   182,    77,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,   150,    -1,   201,   153,   154,    -1,   156,
     157,    -1,   159,   160,   161,   105,   106,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    65,    46,    47,   201,    -1,    -1,    -1,    52,   206,
      54,    -1,    -1,   153,    -1,    -1,   156,   157,    -1,   159,
     160,   161,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    11,    12,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    65,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,    46,    47,    -1,    -1,   182,    -1,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    66,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    10,    11,    12,    -1,
      -1,    67,    68,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    65,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,   157,    -1,   159,   160,   161,
      -1,    -1,    -1,    -1,   150,    -1,    -1,   153,   154,    68,
     156,   157,   174,   159,   160,   161,    -1,    -1,    77,    -1,
      79,    -1,   168,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   130,    -1,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   118,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   150,    -1,    -1,   153,   154,    -1,   156,   157,    -1,
     159,   160,   161,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,    77,
      -1,    -1,   201,    -1,    -1,   150,    -1,   206,   153,   154,
      -1,   156,   157,    -1,   159,   160,   161,    77,    -1,    79,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,    65,    -1,    -1,   201,    -1,   118,   204,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   150,    -1,    -1,   153,   154,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    -1,    -1,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,    77,    -1,    79,    -1,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
      -1,    -1,    -1,    -1,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,    -1,    -1,
      -1,   201,    -1,   118,    -1,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,   153,   154,
      -1,   156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,    77,    -1,    79,   201,    -1,    -1,    -1,
     150,   206,    -1,   153,   154,    -1,   156,   157,    -1,   159,
     160,   161,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,   206,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,   153,
     154,    -1,   156,   157,    -1,   159,   160,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      -1,    -1,   153,   154,    -1,   156,   157,    -1,   159,   160,
     161,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,   130,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,   130,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,   130,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,   130,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,   130,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,   130,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,   130,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,   130,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    65,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    29,   130,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,   119,    -1,    -1,    77,    -1,    -1,    -1,
      -1,   130,    -1,    -1,    -1,    -1,   132,   133,   154,    77,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    -1,   153,   154,    -1,
     156,   157,    -1,   159,   160,   161,    -1,    -1,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    -1,    -1,    77,    -1,    -1,   130,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   153,    -1,    -1,   156,   157,    -1,   159,   160,
     161,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
      -1,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     153,    -1,    -1,   156,   157,    -1,   159,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      -1,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    97,    53,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   212,   213,     0,   214,     3,     4,     5,     6,     7,
      13,    27,    28,    45,    46,    47,    52,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    66,    67,
      68,    69,    70,    74,    75,    76,    77,    78,    79,    81,
      82,    86,    87,    88,    89,    91,    93,    95,    98,   102,
     103,   104,   105,   106,   107,   108,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   120,   121,   122,   123,   124,
     125,   131,   132,   134,   135,   136,   137,   138,   145,   150,
     151,   152,   153,   154,   156,   157,   159,   160,   161,   162,
     165,   168,   174,   175,   176,   177,   178,   180,   182,   183,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   201,   203,   204,   206,   207,   209,
     210,   215,   218,   225,   226,   227,   228,   229,   230,   233,
     249,   250,   254,   257,   262,   268,   326,   327,   332,   336,
     337,   338,   339,   340,   341,   342,   343,   345,   348,   360,
     361,   362,   363,   364,   368,   369,   371,   390,   400,   401,
     402,   407,   410,   428,   436,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   449,   470,   472,   474,   116,
     117,   118,   131,   150,   160,   218,   249,   326,   342,   438,
     342,   201,   342,   342,   342,   102,   342,   342,   426,   427,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,    79,   118,   201,   226,   401,   402,   438,   441,
     438,    35,   342,   453,   454,   342,   118,   201,   226,   401,
     402,   403,   437,   445,   450,   451,   201,   333,   404,   201,
     333,   349,   334,   342,   235,   333,   201,   201,   201,   333,
     203,   342,   218,   203,   342,    29,    55,   132,   133,   154,
     174,   201,   218,   229,   475,   487,   488,   184,   203,   339,
     342,   370,   372,   204,   242,   342,   105,   106,   153,   219,
     222,   225,    79,   206,   294,   295,   117,   124,   116,   124,
      79,   296,   201,   201,   201,   201,   218,   266,   476,   201,
     201,    79,    85,   146,   147,   148,   467,   468,   153,   204,
     225,   225,   218,   267,   476,   154,   201,   201,   201,   201,
     476,   476,    79,   198,   204,   351,   332,   342,   343,   438,
     442,   231,   204,    85,   405,   467,    85,   467,   467,    30,
     153,   170,   477,   201,     9,   203,    35,   248,   154,   265,
     476,   118,   183,   249,   327,   203,   203,   203,   203,   203,
     203,    10,    11,    12,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    53,    65,   203,    66,
      66,   203,   204,   149,   125,   160,   162,   268,   325,   326,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    63,    64,   128,   129,   430,    66,   204,
     435,   201,   201,    66,   204,   206,   446,   201,   248,   249,
      14,   342,   203,   130,    44,   218,   425,   201,   332,   438,
     442,   149,   438,   130,   208,     9,   412,   332,   438,   477,
     149,   201,   406,   430,   435,   202,   342,    30,   233,     8,
     354,     9,   203,   233,   234,   334,   335,   342,   218,   280,
     237,   203,   203,   203,   488,   488,   170,   201,   105,   488,
      14,   218,    79,   203,   203,   203,   184,   185,   186,   191,
     192,   195,   196,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   385,   386,   387,   243,   109,   167,   203,   153,
     220,   223,   225,   153,   221,   224,   225,   225,     9,   203,
      97,   204,   438,     9,   203,   124,   124,    14,     9,   203,
     438,   471,   471,   332,   343,   438,   441,   442,   202,   170,
     260,   131,   438,   452,   453,    66,   430,   146,   468,    78,
     342,   438,    85,   146,   468,   225,   217,   203,   204,   255,
     263,   391,   393,    86,   206,   355,   356,   358,   402,   446,
     472,   342,   460,   462,   342,   459,   461,   459,    14,    97,
     473,   350,   352,   353,   290,   291,   428,   429,   202,   202,
     202,   202,   205,   232,   233,   250,   257,   262,   428,   342,
     207,   209,   210,   218,   478,   479,   488,    35,   163,   292,
     293,   342,   475,   201,   476,   258,   248,   342,   342,   342,
      30,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   403,   342,   342,   448,   448,   342,   455,
     456,   124,   204,   218,   445,   446,   266,   218,   267,   265,
     249,    27,    35,   336,   339,   342,   370,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   154,
     204,   218,   431,   432,   433,   434,   445,   448,   342,   292,
     292,   448,   342,   452,   248,   202,   342,   201,   424,     9,
     412,   332,   202,   218,    35,   342,    35,   342,   202,   202,
     445,   292,   204,   218,   431,   432,   445,   202,   231,   284,
     204,   339,   342,   342,    89,    30,   233,   278,   203,    28,
      97,    14,     9,   202,    30,   204,   281,   488,    86,   229,
     484,   485,   486,   201,     9,    46,    47,    52,    54,    66,
      86,   132,   145,   154,   174,   175,   176,   177,   201,   226,
     227,   229,   365,   366,   367,   401,   407,   408,   409,   187,
      79,   342,    79,    79,   342,   382,   383,   342,   342,   375,
     385,   190,   388,   231,   201,   241,   225,   203,     9,    97,
     225,   203,     9,    97,    97,   222,   218,   342,   295,   408,
      79,     9,   202,   202,   202,   202,   202,   202,   202,   203,
      46,    47,   482,   483,   126,   271,   201,     9,   202,   202,
      79,    80,   218,   469,   218,    66,   205,   205,   214,   216,
      30,   127,   270,   169,    50,   154,   169,   395,   130,     9,
     412,   202,   149,   202,     9,   412,   130,   202,     9,   412,
     202,   488,   488,    14,   354,   290,   231,   199,     9,   413,
     488,   489,   430,   435,   205,     9,   412,   171,   438,   342,
     202,     9,   413,    14,   346,   251,   126,   269,   201,   476,
     342,    30,   208,   208,   130,   205,     9,   412,   342,   477,
     201,   261,   256,   264,   259,   248,    68,   438,   342,   477,
     208,   205,   202,   202,   208,   205,   202,    46,    47,    66,
      74,    75,    76,    86,   132,   145,   174,   218,   415,   417,
     420,   423,   218,   438,   438,   130,   430,   435,   202,   342,
     285,    71,    72,   286,   231,   333,   231,   335,    97,    35,
     131,   275,   438,   408,   218,    30,   233,   279,   203,   282,
     203,   282,     9,   171,   130,   149,     9,   412,   202,   163,
     478,   479,   480,   478,   408,   408,   408,   408,   408,   411,
     414,   201,    85,   149,   201,   201,   201,   201,   408,   149,
     204,    10,    11,    12,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    65,   342,   187,   187,
      14,   193,   194,   384,     9,   197,   388,    79,   205,   401,
     204,   245,    97,   223,   218,    97,   224,   218,   218,   205,
      14,   438,   203,     9,   171,   218,   272,   401,   204,   452,
     131,   438,    14,   208,   342,   205,   214,   488,   272,   204,
     394,    14,   342,   355,   218,   342,   342,   342,   203,   488,
     199,   205,    30,   481,   429,    35,    79,   163,   431,   432,
     434,   488,    35,   163,   342,   408,   290,   201,   401,   270,
     347,   252,   342,   342,   342,   205,   201,   292,   271,    30,
     270,   269,   476,   403,   205,   201,    14,    74,    75,    76,
     218,   416,   416,   417,   418,   419,   201,    85,   146,   201,
       9,   412,   202,   424,    35,   342,   431,   432,   205,    71,
      72,   287,   333,   233,   205,   203,    90,   203,   275,   438,
     201,   130,   274,    14,   231,   282,    99,   100,   101,   282,
     205,   488,   488,   218,   484,     9,   202,   412,   130,   208,
       9,   412,   411,   218,   355,   357,   359,   408,   464,   466,
     408,   463,   465,   463,   202,   124,   218,   408,   457,   458,
     408,   408,   408,    30,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   342,   342,   342,
     383,   342,   373,    79,   246,   218,   218,   408,   483,    97,
       9,   300,   202,   201,   336,   339,   342,   208,   205,   473,
     300,   155,   168,   204,   390,   397,   155,   204,   396,   130,
     130,   203,   481,   488,   354,   489,    79,   163,    14,    79,
     477,   438,   342,   202,   290,   204,   290,   201,   130,   201,
     292,   202,   204,   488,   204,   270,   253,   406,   292,   130,
     208,     9,   412,   418,   146,   355,   421,   422,   417,   438,
     333,    30,    73,   233,   203,   335,   274,   452,   275,   202,
     408,    96,    99,   203,   342,    30,   203,   283,   205,   171,
     130,   163,    30,   202,   408,   408,   202,   130,     9,   412,
     202,   202,     9,   412,   130,   202,     9,   412,   202,   130,
     205,     9,   412,   408,    30,   188,   202,   231,   218,   488,
     401,     4,   106,   111,   119,   156,   157,   159,   205,   301,
     324,   325,   326,   331,   428,   452,   205,   204,   205,    50,
     342,   342,   342,   342,   354,    35,    79,   163,    14,    79,
     408,   201,   481,   202,   300,   202,   290,   342,   292,   202,
     300,   473,   300,   204,   201,   202,   417,   417,   202,   130,
     202,     9,   412,    30,   231,   203,   202,   202,   202,   238,
     203,   203,   283,   231,   488,   488,   130,   408,   355,   408,
     408,   408,   408,   408,   408,   342,   204,   205,    97,   126,
     127,   475,   273,   401,   119,   132,   133,   154,   160,   310,
     311,   312,   401,   158,   316,   317,   122,   201,   218,   318,
     319,   302,   249,   488,     9,   203,   325,   202,   297,   154,
     392,   205,   205,    79,   163,    14,    79,   408,   292,   111,
     344,   481,   205,   481,   202,   202,   205,   204,   205,   300,
     290,   130,   417,   355,   231,   236,   239,    30,   233,   277,
     231,   202,   408,   130,   130,   130,   189,   231,   488,   401,
     401,    14,     9,   203,   204,   204,     9,   203,     3,     4,
       5,     6,     7,    10,    11,    12,    13,    27,    28,    53,
      67,    68,    69,    70,    71,    72,    73,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   131,   132,
     134,   135,   136,   137,   138,   150,   151,   152,   162,   164,
     165,   167,   174,   178,   180,   182,   183,   218,   398,   399,
       9,   203,   154,   158,   218,   319,   320,   321,   203,    79,
     330,   248,   303,   475,   249,   205,   298,   299,   475,    14,
      79,   408,   202,   201,   204,   203,   204,   322,   344,   481,
     297,   205,   202,   417,   130,    30,   233,   276,   277,   231,
     408,   408,   408,   342,   205,   203,   203,   408,   401,   306,
     313,   407,   311,    14,    30,    47,   314,   317,     9,    33,
     202,    29,    46,    49,    14,     9,   203,   476,   330,    14,
     248,   203,    14,   408,    35,    79,   389,   231,   231,   204,
     322,   205,   481,   417,   231,    94,   190,   244,   205,   218,
     229,   307,   308,   309,     9,   205,   408,   399,   399,    55,
     315,   320,   320,    29,    46,    49,   408,    79,   201,   203,
     408,   476,   408,    79,     9,   413,   205,   205,   231,   322,
      92,   203,    79,   109,   240,   149,    97,   407,   161,    14,
     304,   201,    35,    79,   202,   205,   203,   201,   167,   247,
     218,   325,   326,   408,   288,   289,   429,   305,    79,   401,
     245,   164,   218,   203,   202,     9,   413,   113,   114,   115,
     328,   329,   288,    79,   273,   203,   481,   429,   489,   202,
     202,   203,   203,   204,   323,   328,    35,    79,   163,   481,
     204,   231,   489,    79,   163,    14,    79,   323,   231,   205,
      35,    79,   163,    14,    79,   408,   205,    79,   163,    14,
      79,   408,    14,    79,   408,   408
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, _p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).line0   = YYRHSLOC (Rhs, 1).line0;	\
	  (Current).char0 = YYRHSLOC (Rhs, 1).char0;	\
	  (Current).line1    = YYRHSLOC (Rhs, N).line1;		\
	  (Current).char1  = YYRHSLOC (Rhs, N).char1;	\
	}								\
      else								\
	{								\
	  (Current).line0   = (Current).line1   =		\
	    YYRHSLOC (Rhs, 0).line1;				\
	  (Current).char0 = (Current).char1 =		\
	    YYRHSLOC (Rhs, 0).char1;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).line0, (Loc).char0,	\
	      (Loc).line1,  (Loc).char1)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, _p)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, _p); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (_p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, _p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _p);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, _p)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , _p);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, _p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, _p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (_p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (HPHP::HPHP_PARSER_NS::Parser *_p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (HPHP::HPHP_PARSER_NS::Parser *_p)
#else
int
yyparse (_p)
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.line0   = yylloc.line1   = 1;
  yylloc.char0 = yylloc.char1 = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	struct yyalloc *yyptr =
	  (struct yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
      memset(yyptr, 0, YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE_RESET (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 737 "hphp.y"
    { _p->onNewLabelScope(true);
                                         _p->initParseTree();;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 740 "hphp.y"
    { _p->popLabelInfo();
                                         _p->finiParseTree();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 747 "hphp.y"
    { _p->addTopStatement((yyvsp[(2) - (2)]));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 748 "hphp.y"
    { ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 751 "hphp.y"
    { _p->nns((yyvsp[(1) - (1)]).num(), (yyvsp[(1) - (1)]).text()); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 752 "hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 753 "hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 754 "hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 755 "hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 756 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 757 "hphp.y"
    { _p->onHaltCompiler();
                                         _p->finiParseTree();
                                         YYACCEPT;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 760 "hphp.y"
    { _p->onNamespaceStart((yyvsp[(2) - (3)]).text(), true);
                                         (yyval).reset();;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 762 "hphp.y"
    { _p->onNamespaceStart((yyvsp[(2) - (3)]).text());;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 763 "hphp.y"
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[(5) - (6)]);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 764 "hphp.y"
    { _p->onNamespaceStart("");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 765 "hphp.y"
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[(4) - (5)]);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 766 "hphp.y"
    { _p->nns(); (yyval).reset();;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 768 "hphp.y"
    { _p->nns(); (yyval).reset();;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 770 "hphp.y"
    { _p->nns(); (yyval).reset();;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 771 "hphp.y"
    { _p->nns();
                                         _p->finishStatement((yyval), (yyvsp[(1) - (2)])); (yyval) = 1;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 776 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 777 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 778 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 779 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 780 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 781 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 782 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 783 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 784 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 785 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 786 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 787 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 788 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 789 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 790 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 791 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 792 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 793 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 794 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 799 "hphp.y"
    { ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 800 "hphp.y"
    { ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 805 "hphp.y"
    { ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 806 "hphp.y"
    { ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 811 "hphp.y"
    { ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 812 "hphp.y"
    { ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 816 "hphp.y"
    { _p->onUse((yyvsp[(1) - (1)]).text(),"");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 817 "hphp.y"
    { _p->onUse((yyvsp[(2) - (2)]).text(),"");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 818 "hphp.y"
    { _p->onUse((yyvsp[(1) - (3)]).text(),(yyvsp[(3) - (3)]).text());;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 820 "hphp.y"
    { _p->onUse((yyvsp[(2) - (4)]).text(),(yyvsp[(4) - (4)]).text());;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 824 "hphp.y"
    { _p->onUseFunction((yyvsp[(1) - (1)]).text(),"");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 825 "hphp.y"
    { _p->onUseFunction((yyvsp[(2) - (2)]).text(),"");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 826 "hphp.y"
    { _p->onUseFunction((yyvsp[(1) - (3)]).text(),(yyvsp[(3) - (3)]).text());;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 828 "hphp.y"
    { _p->onUseFunction((yyvsp[(2) - (4)]).text(),(yyvsp[(4) - (4)]).text());;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 832 "hphp.y"
    { _p->onUseConst((yyvsp[(1) - (1)]).text(),"");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 833 "hphp.y"
    { _p->onUseConst((yyvsp[(2) - (2)]).text(),"");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 834 "hphp.y"
    { _p->onUseConst((yyvsp[(1) - (3)]).text(),(yyvsp[(3) - (3)]).text());;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 836 "hphp.y"
    { _p->onUseConst((yyvsp[(2) - (4)]).text(),(yyvsp[(4) - (4)]).text());;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 840 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 842 "hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(2) - (3)]) + (yyvsp[(3) - (3)]); (yyval) = (yyvsp[(1) - (3)]).num() | 2;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 845 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = (yyval).num() | 1;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 847 "hphp.y"
    { (yyval).set((yyvsp[(3) - (3)]).num() | 2, _p->nsDecl((yyvsp[(3) - (3)]).text()));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 848 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = (yyval).num() | 2;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 851 "hphp.y"
    { if ((yyvsp[(1) - (1)]).num() & 1) {
                                           (yyvsp[(1) - (1)]).setText(_p->resolve((yyvsp[(1) - (1)]).text(),0));
                                         }
                                         (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 858 "hphp.y"
    { if ((yyvsp[(1) - (2)]).num() & 1) {
                                           (yyvsp[(1) - (2)]).setText(_p->resolve((yyvsp[(1) - (2)]).text(),0));
                                         }
                                         (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 865 "hphp.y"
    { if ((yyvsp[(1) - (2)]).num() & 1) {
                                           (yyvsp[(1) - (2)]).setText(_p->resolve((yyvsp[(1) - (2)]).text(),1));
                                         }
                                         _p->onTypeAnnotation((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 873 "hphp.y"
    { (yyvsp[(3) - (5)]).setText(_p->nsDecl((yyvsp[(3) - (5)]).text()));
                                         _p->onConst((yyval),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 876 "hphp.y"
    { (yyvsp[(2) - (4)]).setText(_p->nsDecl((yyvsp[(2) - (4)]).text()));
                                         _p->onConst((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 882 "hphp.y"
    { _p->addStatement((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 883 "hphp.y"
    { _p->onStatementListStart((yyval));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 886 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 887 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 888 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 889 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 892 "hphp.y"
    { _p->onBlock((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 896 "hphp.y"
    { _p->onIf((yyval),(yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 901 "hphp.y"
    { _p->onIf((yyval),(yyvsp[(2) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(6) - (8)]));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 902 "hphp.y"
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope();;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 904 "hphp.y"
    { _p->popLabelScope();
                                         _p->onWhile((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));
                                         _p->onCompleteLabelScope(false);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 908 "hphp.y"
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope();;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 911 "hphp.y"
    { _p->popLabelScope();
                                         _p->onDo((yyval),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));
                                         _p->onCompleteLabelScope(false);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 915 "hphp.y"
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope();;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 917 "hphp.y"
    { _p->popLabelScope();
                                         _p->onFor((yyval),(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]));
                                         _p->onCompleteLabelScope(false);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 920 "hphp.y"
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope();;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 922 "hphp.y"
    { _p->popLabelScope();
                                         _p->onSwitch((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));
                                         _p->onCompleteLabelScope(false);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 925 "hphp.y"
    { _p->onBreakContinue((yyval), true, NULL);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 926 "hphp.y"
    { _p->onBreakContinue((yyval), true, &(yyvsp[(2) - (3)]));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 927 "hphp.y"
    { _p->onBreakContinue((yyval), false, NULL);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 928 "hphp.y"
    { _p->onBreakContinue((yyval), false, &(yyvsp[(2) - (3)]));;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 929 "hphp.y"
    { _p->onReturn((yyval), NULL);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 930 "hphp.y"
    { _p->onReturn((yyval), &(yyvsp[(2) - (3)]));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 931 "hphp.y"
    { _p->onYieldBreak((yyval));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 932 "hphp.y"
    { _p->onGlobal((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 933 "hphp.y"
    { _p->onStatic((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 934 "hphp.y"
    { _p->onEcho((yyval), (yyvsp[(2) - (3)]), 0);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 935 "hphp.y"
    { _p->onUnset((yyval), (yyvsp[(3) - (5)]));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 936 "hphp.y"
    { (yyval).reset(); (yyval) = ';';;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 937 "hphp.y"
    { _p->onEcho((yyval), (yyvsp[(1) - (1)]), 1);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 938 "hphp.y"
    { _p->onHashBang((yyval), (yyvsp[(1) - (1)]));
                                         (yyval) = T_HASHBANG;;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 942 "hphp.y"
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope();;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 944 "hphp.y"
    { _p->popLabelScope();
                                         _p->onForEach((yyval),(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(6) - (9)]),(yyvsp[(9) - (9)]), false);
                                         _p->onCompleteLabelScope(false);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 949 "hphp.y"
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope();;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 951 "hphp.y"
    { _p->popLabelScope();
                                         _p->onForEach((yyval),(yyvsp[(3) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]), true);
                                         _p->onCompleteLabelScope(false);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 955 "hphp.y"
    { _p->onBlock((yyval), (yyvsp[(5) - (5)])); (yyval) = T_DECLARE;;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 962 "hphp.y"
    { _p->onCompleteLabelScope(false);;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 963 "hphp.y"
    { _p->onTry((yyval),(yyvsp[(2) - (13)]),(yyvsp[(5) - (13)]),(yyvsp[(6) - (13)]),(yyvsp[(9) - (13)]),(yyvsp[(11) - (13)]),(yyvsp[(13) - (13)]));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 966 "hphp.y"
    { _p->onCompleteLabelScope(false);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 967 "hphp.y"
    { _p->onTry((yyval), (yyvsp[(2) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 968 "hphp.y"
    { _p->onThrow((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 969 "hphp.y"
    { _p->onGoto((yyval), (yyvsp[(2) - (3)]), true);
                                         _p->addGoto((yyvsp[(2) - (3)]).text(),
                                                     _p->getLocation(),
                                                     &(yyval));;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 973 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 974 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 975 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 976 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 977 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 978 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 979 "hphp.y"
    { _p->onReturn((yyval), &(yyvsp[(2) - (3)])); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 980 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 981 "hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 982 "hphp.y"
    { _p->onReturn((yyval), &(yyvsp[(2) - (3)])); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 983 "hphp.y"
    { _p->onLabel((yyval), (yyvsp[(1) - (2)]));
                                         _p->addLabel((yyvsp[(1) - (2)]).text(),
                                                      _p->getLocation(),
                                                      &(yyval));
                                         _p->onScopeLabel((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 991 "hphp.y"
    { _p->onNewLabelScope(false);;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 992 "hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]);;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1001 "hphp.y"
    { _p->onCatch((yyval), (yyvsp[(1) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(8) - (9)]));;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1002 "hphp.y"
    { (yyval).reset();;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1006 "hphp.y"
    { _p->onNewLabelScope(false);
                                         _p->pushLabelScope();;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1008 "hphp.y"
    { _p->popLabelScope();
                                         _p->onFinally((yyval), (yyvsp[(3) - (4)]));
                                         _p->onCompleteLabelScope(false);;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1014 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1015 "hphp.y"
    { (yyval).reset();;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1019 "hphp.y"
    { (yyval) = 1;;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1020 "hphp.y"
    { (yyval).reset();;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1024 "hphp.y"
    { _p->pushFuncLocation(); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1029 "hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onNewLabelScope(true);
                                         _p->onFunctionStart((yyvsp[(3) - (3)]));
                                         _p->pushLabelInfo();;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1035 "hphp.y"
    { _p->onFunction((yyval),nullptr,(yyvsp[(8) - (9)]),(yyvsp[(2) - (9)]),(yyvsp[(3) - (9)]),(yyvsp[(6) - (9)]),(yyvsp[(9) - (9)]),nullptr);
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1041 "hphp.y"
    { (yyvsp[(4) - (4)]).setText(_p->nsDecl((yyvsp[(4) - (4)]).text()));
                                         _p->onNewLabelScope(true);
                                         _p->onFunctionStart((yyvsp[(4) - (4)]));
                                         _p->pushLabelInfo();;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1047 "hphp.y"
    { _p->onFunction((yyval),&(yyvsp[(1) - (10)]),(yyvsp[(9) - (10)]),(yyvsp[(3) - (10)]),(yyvsp[(4) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]),nullptr);
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1053 "hphp.y"
    { (yyvsp[(5) - (5)]).setText(_p->nsDecl((yyvsp[(5) - (5)]).text()));
                                         _p->onNewLabelScope(true);
                                         _p->onFunctionStart((yyvsp[(5) - (5)]));
                                         _p->pushLabelInfo();;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1059 "hphp.y"
    { _p->onFunction((yyval),&(yyvsp[(2) - (11)]),(yyvsp[(10) - (11)]),(yyvsp[(4) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(11) - (11)]),&(yyvsp[(1) - (11)]));
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1067 "hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart(T_ENUM,(yyvsp[(2) - (2)]));;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1071 "hphp.y"
    { _p->onEnum((yyval),(yyvsp[(2) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(8) - (9)]),0); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1075 "hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart(T_ENUM,(yyvsp[(3) - (3)]));;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1079 "hphp.y"
    { _p->onEnum((yyval),(yyvsp[(3) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(9) - (10)]),&(yyvsp[(1) - (10)])); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1085 "hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart((yyvsp[(1) - (2)]).num(),(yyvsp[(2) - (2)]));;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1088 "hphp.y"
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[(7) - (8)]));
                                         } else {
                                           stmts = (yyvsp[(7) - (8)]);
                                         }
                                         _p->onClass((yyval),(yyvsp[(1) - (8)]).num(),(yyvsp[(2) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(5) - (8)]),
                                                     stmts,0,nullptr);
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1103 "hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart((yyvsp[(2) - (3)]).num(),(yyvsp[(3) - (3)]));;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1106 "hphp.y"
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[(8) - (9)]));
                                         } else {
                                           stmts = (yyvsp[(8) - (9)]);
                                         }
                                         _p->onClass((yyval),(yyvsp[(2) - (9)]).num(),(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(6) - (9)]),
                                                     stmts,&(yyvsp[(1) - (9)]),nullptr);
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1120 "hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[(2) - (2)]));;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1123 "hphp.y"
    { _p->onInterface((yyval),(yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(6) - (7)]),0);
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1128 "hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[(3) - (3)]));;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1131 "hphp.y"
    { _p->onInterface((yyval),(yyvsp[(3) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(7) - (8)]),&(yyvsp[(1) - (8)]));
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1138 "hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[(2) - (2)]));;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1141 "hphp.y"
    { Token t_ext;
                                         t_ext.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[(2) - (7)]),t_ext,(yyvsp[(4) - (7)]),
                                                     (yyvsp[(6) - (7)]), 0, nullptr);
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1149 "hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[(3) - (3)]));;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1152 "hphp.y"
    { Token t_ext;
                                         t_ext.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[(3) - (8)]),t_ext,(yyvsp[(5) - (8)]),
                                                     (yyvsp[(7) - (8)]), &(yyvsp[(1) - (8)]), nullptr);
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1160 "hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1161 "hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); _p->pushTypeScope();
                                         _p->pushClass(true); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1165 "hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1168 "hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1171 "hphp.y"
    { (yyval) = T_CLASS;;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1172 "hphp.y"
    { (yyval) = T_ABSTRACT; ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1173 "hphp.y"
    { only_in_hh_syntax(_p);
      /* hacky, but transforming to a single token is quite convenient */
      (yyval) = T_STATIC; ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1176 "hphp.y"
    { only_in_hh_syntax(_p); (yyval) = T_STATIC; ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1177 "hphp.y"
    { (yyval) = T_FINAL;;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1181 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1182 "hphp.y"
    { (yyval).reset();;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1185 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1186 "hphp.y"
    { (yyval).reset();;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1189 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1190 "hphp.y"
    { (yyval).reset();;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1193 "hphp.y"
    { _p->onInterfaceName((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1195 "hphp.y"
    { _p->onInterfaceName((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1198 "hphp.y"
    { _p->onTraitName((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1200 "hphp.y"
    { _p->onTraitName((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1204 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1205 "hphp.y"
    { (yyval).reset();;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1208 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 0;;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1209 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 1;;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1210 "hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (4)]), NULL);;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1214 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1216 "hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1219 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1221 "hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1224 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1226 "hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1229 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1231 "hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1241 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1242 "hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]);;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1243 "hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1244 "hphp.y"
    { (yyval) = (yyvsp[(3) - (5)]);;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1249 "hphp.y"
    { _p->onCase((yyval),(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1251 "hphp.y"
    { _p->onCase((yyval),(yyvsp[(1) - (4)]),NULL,(yyvsp[(4) - (4)]));;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1252 "hphp.y"
    { (yyval).reset();;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1255 "hphp.y"
    { (yyval).reset();;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1256 "hphp.y"
    { (yyval).reset();;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1261 "hphp.y"
    { _p->onElseIf((yyval),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1262 "hphp.y"
    { (yyval).reset();;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1267 "hphp.y"
    { _p->onElseIf((yyval),(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1268 "hphp.y"
    { (yyval).reset();;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1271 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1272 "hphp.y"
    { (yyval).reset();;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1275 "hphp.y"
    { (yyval) = (yyvsp[(3) - (3)]);;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1276 "hphp.y"
    { (yyval).reset();;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1284 "hphp.y"
    { _p->onVariadicParam((yyval),&(yyvsp[(1) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)]),false,
                                                            &(yyvsp[(3) - (7)]),&(yyvsp[(4) - (7)])); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1290 "hphp.y"
    { _p->onVariadicParam((yyval),&(yyvsp[(1) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(8) - (8)]),true,
                                                            &(yyvsp[(3) - (8)]),&(yyvsp[(4) - (8)])); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1296 "hphp.y"
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), &(yyvsp[(4) - (6)]));
                                        (yyval) = (yyvsp[(1) - (6)]); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1300 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1304 "hphp.y"
    { _p->onVariadicParam((yyval),NULL,(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),false,
                                                            &(yyvsp[(1) - (5)]),&(yyvsp[(2) - (5)])); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1309 "hphp.y"
    { _p->onVariadicParam((yyval),NULL,(yyvsp[(3) - (6)]),(yyvsp[(6) - (6)]),true,
                                                            &(yyvsp[(1) - (6)]),&(yyvsp[(2) - (6)])); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1314 "hphp.y"
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]));
                                        (yyval).reset(); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1317 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1323 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]),0,
                                                     NULL,&(yyvsp[(1) - (4)]),&(yyvsp[(2) - (4)]));;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1327 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),1,
                                                     NULL,&(yyvsp[(1) - (5)]),&(yyvsp[(2) - (5)]));;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1332 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),1,
                                                     &(yyvsp[(7) - (7)]),&(yyvsp[(1) - (7)]),&(yyvsp[(2) - (7)]));;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1337 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(3) - (6)]),(yyvsp[(4) - (6)]),0,
                                                     &(yyvsp[(6) - (6)]),&(yyvsp[(1) - (6)]),&(yyvsp[(2) - (6)]));;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1342 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(5) - (6)]),(yyvsp[(6) - (6)]),0,
                                                     NULL,&(yyvsp[(3) - (6)]),&(yyvsp[(4) - (6)]));;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1347 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)]),1,
                                                     NULL,&(yyvsp[(3) - (7)]),&(yyvsp[(4) - (7)]));;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1353 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(7) - (9)]),1,
                                                     &(yyvsp[(9) - (9)]),&(yyvsp[(3) - (9)]),&(yyvsp[(4) - (9)]));;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1359 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(6) - (8)]),0,
                                                     &(yyvsp[(8) - (8)]),&(yyvsp[(3) - (8)]),&(yyvsp[(4) - (8)]));;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1367 "hphp.y"
    { _p->onVariadicParam((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(6) - (6)]),
                                        false,&(yyvsp[(3) - (6)]),NULL); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1372 "hphp.y"
    { _p->onVariadicParam((yyval),&(yyvsp[(1) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(7) - (7)]),
                                        true,&(yyvsp[(3) - (7)]),NULL); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1377 "hphp.y"
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), NULL);
                                        (yyval) = (yyvsp[(1) - (5)]); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1381 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1384 "hphp.y"
    { _p->onVariadicParam((yyval),NULL,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),
                                                            false,&(yyvsp[(1) - (4)]),NULL); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1388 "hphp.y"
    { _p->onVariadicParam((yyval),NULL,(yyvsp[(2) - (5)]),(yyvsp[(5) - (5)]),
                                                            true,&(yyvsp[(1) - (5)]),NULL); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1392 "hphp.y"
    { validate_hh_variadic_variant(
                                          _p, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), NULL);
                                        (yyval).reset(); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1395 "hphp.y"
    { (yyval).reset();;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1400 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),false,
                                                     NULL,&(yyvsp[(1) - (3)]),NULL); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1403 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),true,
                                                     NULL,&(yyvsp[(1) - (4)]),NULL); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1407 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (6)]),(yyvsp[(4) - (6)]),true,
                                                     &(yyvsp[(6) - (6)]),&(yyvsp[(1) - (6)]),NULL); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1411 "hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]),false,
                                                     &(yyvsp[(5) - (5)]),&(yyvsp[(1) - (5)]),NULL); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1415 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]),false,
                                                     NULL,&(yyvsp[(3) - (5)]),NULL); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1419 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(6) - (6)]),true,
                                                     NULL,&(yyvsp[(3) - (6)]),NULL); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1424 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(6) - (8)]),true,
                                                     &(yyvsp[(8) - (8)]),&(yyvsp[(3) - (8)]),NULL); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1429 "hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(5) - (7)]),false,
                                                     &(yyvsp[(7) - (7)]),&(yyvsp[(3) - (7)]),NULL); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1435 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1436 "hphp.y"
    { (yyval).reset();;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1439 "hphp.y"
    { _p->onCallParam((yyval),NULL,(yyvsp[(1) - (1)]),false,false);;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1440 "hphp.y"
    { _p->onCallParam((yyval),NULL,(yyvsp[(2) - (2)]),true,false);;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1441 "hphp.y"
    { _p->onCallParam((yyval),NULL,(yyvsp[(2) - (2)]),false,true);;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1443 "hphp.y"
    { _p->onCallParam((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),false, false);;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1445 "hphp.y"
    { _p->onCallParam((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),false,true);;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1447 "hphp.y"
    { _p->onCallParam((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),true, false);;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1451 "hphp.y"
    { _p->onGlobalVar((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1452 "hphp.y"
    { _p->onGlobalVar((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1455 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1456 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 1;;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1457 "hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]); (yyval) = 1;;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1461 "hphp.y"
    { _p->onStaticVariable((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1463 "hphp.y"
    { _p->onStaticVariable((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),&(yyvsp[(5) - (5)]));;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1464 "hphp.y"
    { _p->onStaticVariable((yyval),0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1465 "hphp.y"
    { _p->onStaticVariable((yyval),0,(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1470 "hphp.y"
    { _p->onClassStatement((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1471 "hphp.y"
    { (yyval).reset();;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1474 "hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),NULL,(yyvsp[(1) - (2)]),NULL);;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1479 "hphp.y"
    { _p->onClassConstant((yyval),0,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1485 "hphp.y"
    { _p->onClassStatement((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1486 "hphp.y"
    { (yyval).reset();;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1489 "hphp.y"
    { _p->onClassVariableModifer((yyvsp[(1) - (1)]));;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1490 "hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1493 "hphp.y"
    { _p->onClassVariableModifer((yyvsp[(1) - (2)]));;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1494 "hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(4) - (5)]),&(yyvsp[(2) - (5)]));;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1496 "hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),NULL,(yyvsp[(1) - (2)]),NULL);;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1500 "hphp.y"
    { _p->onNewLabelScope(true);
                                         _p->onMethodStart((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
                                         _p->pushLabelInfo();;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1506 "hphp.y"
    { _p->onMethod((yyval),(yyvsp[(1) - (10)]),(yyvsp[(9) - (10)]),(yyvsp[(3) - (10)]),(yyvsp[(4) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]),nullptr);
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1513 "hphp.y"
    { _p->onNewLabelScope(true);
                                         _p->onMethodStart((yyvsp[(5) - (6)]), (yyvsp[(2) - (6)]));
                                         _p->pushLabelInfo();;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1519 "hphp.y"
    { _p->onMethod((yyval),(yyvsp[(2) - (11)]),(yyvsp[(10) - (11)]),(yyvsp[(4) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(11) - (11)]),&(yyvsp[(1) - (11)]));
                                         _p->popLabelInfo();
                                         _p->popTypeScope();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1524 "hphp.y"
    { _p->xhpSetAttributes((yyvsp[(2) - (3)]));;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1526 "hphp.y"
    { xhp_category_stmt(_p,(yyval),(yyvsp[(2) - (3)]));;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1528 "hphp.y"
    { xhp_children_stmt(_p,(yyval),(yyvsp[(2) - (3)]));;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1530 "hphp.y"
    { _p->onClassRequire((yyval), (yyvsp[(3) - (4)]), true); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1532 "hphp.y"
    { _p->onClassRequire((yyval), (yyvsp[(3) - (4)]), false); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1533 "hphp.y"
    { Token t; t.reset();
                                         _p->onTraitUse((yyval),(yyvsp[(2) - (3)]),t); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1536 "hphp.y"
    { _p->onTraitUse((yyval),(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1539 "hphp.y"
    { _p->onTraitRule((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1540 "hphp.y"
    { _p->onTraitRule((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1541 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1547 "hphp.y"
    { _p->onTraitPrecRule((yyval),(yyvsp[(1) - (6)]),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1551 "hphp.y"
    { _p->onTraitAliasRuleModify((yyval),(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),
                                                                    (yyvsp[(4) - (5)]));;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1554 "hphp.y"
    { Token t; t.reset();
                                         _p->onTraitAliasRuleModify((yyval),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),
                                                                    t);;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1561 "hphp.y"
    { _p->onTraitAliasRuleStart((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1562 "hphp.y"
    { Token t; t.reset();
                                         _p->onTraitAliasRuleStart((yyval),t,(yyvsp[(1) - (1)]));;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1567 "hphp.y"
    { xhp_attribute_list(_p,(yyval),
                                         _p->xhpGetAttributes(),(yyvsp[(1) - (1)]));;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1570 "hphp.y"
    { xhp_attribute_list(_p,(yyval), &(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1577 "hphp.y"
    { xhp_attribute(_p,(yyval),(yyvsp[(1) - (4)]),(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));
                                         (yyval) = 1;;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1579 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 0;;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1583 "hphp.y"
    { (yyval) = 4;;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1584 "hphp.y"
    { /* This case handles all types other
                                            than "array", "var" and "enum".
                                            For now we just use type code 5;
                                            later xhp_attribute() will fix up
                                            the type code as appropriate. */
                                         (yyval) = 5; (yyval).setText((yyvsp[(1) - (1)]));;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1590 "hphp.y"
    { (yyval) = 6;;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1592 "hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]); (yyval) = 7;;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1593 "hphp.y"
    { (yyval) = 9; ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1597 "hphp.y"
    { _p->onArrayPair((yyval),  0,0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1599 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1603 "hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1604 "hphp.y"
    { scalar_null(_p, (yyval));;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1608 "hphp.y"
    { scalar_num(_p, (yyval), "1");;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1609 "hphp.y"
    { scalar_num(_p, (yyval), "0");;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1613 "hphp.y"
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),0,&(yyvsp[(1) - (1)]),t,0);;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1616 "hphp.y"
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]),t,0);;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1621 "hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1626 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 2;;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1627 "hphp.y"
    { (yyval) = -1;
                                         if ((yyvsp[(1) - (1)]).same("any")) (yyval) = 1;;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1629 "hphp.y"
    { (yyval) = 0;;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1633 "hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (3)]), 0);;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1634 "hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 1);;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1635 "hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 2);;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1636 "hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 3);;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1640 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1641 "hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (1)]),0,  0);;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1642 "hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),1,  0);;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1643 "hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),2,  0);;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1644 "hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),3,  0);;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1646 "hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (3)]),4,&(yyvsp[(3) - (3)]));;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1648 "hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (3)]),5,&(yyvsp[(3) - (3)]));;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1652 "hphp.y"
    { (yyval) = -1;
                                         if ((yyvsp[(1) - (1)]).same("any")) (yyval) = 1; else
                                         if ((yyvsp[(1) - (1)]).same("pcdata")) (yyval) = 2;;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1655 "hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel();  (yyval) = (yyvsp[(1) - (1)]); (yyval) = 3;;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1656 "hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(0); (yyval) = (yyvsp[(1) - (1)]); (yyval) = 4;;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1660 "hphp.y"
    { (yyval).reset();;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1661 "hphp.y"
    { _p->finishStatement((yyval), (yyvsp[(2) - (3)])); (yyval) = 1;;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1665 "hphp.y"
    { (yyval).reset();;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1666 "hphp.y"
    { _p->finishStatement((yyval), (yyvsp[(2) - (3)])); (yyval) = 1;;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1669 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1670 "hphp.y"
    { (yyval).reset();;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1673 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1674 "hphp.y"
    { (yyval).reset();;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1677 "hphp.y"
    { _p->onMemberModifier((yyval),NULL,(yyvsp[(1) - (1)]));;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1679 "hphp.y"
    { _p->onMemberModifier((yyval),&(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1682 "hphp.y"
    { (yyval) = T_PUBLIC;;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1683 "hphp.y"
    { (yyval) = T_PROTECTED;;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1684 "hphp.y"
    { (yyval) = T_PRIVATE;;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1685 "hphp.y"
    { (yyval) = T_STATIC;;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1686 "hphp.y"
    { (yyval) = T_ABSTRACT;;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1687 "hphp.y"
    { (yyval) = T_FINAL;;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1688 "hphp.y"
    { (yyval) = T_ASYNC;;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1692 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1693 "hphp.y"
    { (yyval).reset();;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1696 "hphp.y"
    { (yyval) = T_PUBLIC;;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1697 "hphp.y"
    { (yyval) = T_PROTECTED;;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1698 "hphp.y"
    { (yyval) = T_PRIVATE;;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1702 "hphp.y"
    { _p->onClassVariable((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1704 "hphp.y"
    { _p->onClassVariable((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),&(yyvsp[(5) - (5)]));;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1705 "hphp.y"
    { _p->onClassVariable((yyval),0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1706 "hphp.y"
    { _p->onClassVariable((yyval),0,(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1710 "hphp.y"
    { _p->onClassConstant((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1712 "hphp.y"
    { _p->onClassConstant((yyval),0,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1716 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1718 "hphp.y"
    { _p->onNewObject((yyval), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1719 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_CLONE,1);;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1720 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1721 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1724 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1728 "hphp.y"
    { _p->onExprListElem((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1729 "hphp.y"
    { _p->onExprListElem((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1733 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1734 "hphp.y"
    { (yyval).reset();;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1738 "hphp.y"
    { _p->onYield((yyval), NULL);;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1739 "hphp.y"
    { _p->onYield((yyval), &(yyvsp[(2) - (2)]));;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1740 "hphp.y"
    { _p->onYieldPair((yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]));;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1744 "hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0, true);;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1749 "hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (6)]), &(yyvsp[(6) - (6)]), true);;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1753 "hphp.y"
    { _p->onAwait((yyval), (yyvsp[(2) - (2)])); ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1757 "hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0, true);;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1762 "hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (6)]), &(yyvsp[(6) - (6)]), true);;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1766 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1767 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1768 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1769 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1770 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1775 "hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (6)]), &(yyvsp[(6) - (6)]));;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1776 "hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1777 "hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]), 1);;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1780 "hphp.y"
    { _p->onAssignNew((yyval),(yyvsp[(1) - (6)]),(yyvsp[(5) - (6)]),(yyvsp[(6) - (6)]));;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1781 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_PLUS_EQUAL);;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1782 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MINUS_EQUAL);;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1783 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MUL_EQUAL);;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1784 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_DIV_EQUAL);;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1785 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_CONCAT_EQUAL);;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1786 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MOD_EQUAL);;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1787 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_AND_EQUAL);;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1788 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_OR_EQUAL);;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1789 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_XOR_EQUAL);;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1790 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SL_EQUAL);;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1791 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SR_EQUAL);;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1792 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_POW_EQUAL);;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1793 "hphp.y"
    { UEXP((yyval),(yyvsp[(1) - (2)]),T_INC,0);;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1794 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INC,1);;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1795 "hphp.y"
    { UEXP((yyval),(yyvsp[(1) - (2)]),T_DEC,0);;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1796 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_DEC,1);;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1797 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_OR);;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1798 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_AND);;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1799 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_OR);;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1800 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_AND);;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1801 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_XOR);;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1802 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'|');;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1803 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'&');;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1804 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'^');;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1805 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'.');;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1806 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'+');;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1807 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'-');;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1808 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'*');;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1809 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'/');;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1810 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_POW);;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1811 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'%');;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1812 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SL);;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1813 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SR);;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1814 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1815 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1816 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'!',1);;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1817 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'~',1);;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1818 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_IDENTICAL);;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1819 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_IDENTICAL);;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1820 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_EQUAL);;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1821 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_EQUAL);;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1822 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'<');;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1823 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_SMALLER_OR_EQUAL);;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1825 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'>');;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1826 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_GREATER_OR_EQUAL);;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1829 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_INSTANCEOF);;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1830 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1831 "hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1832 "hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (4)]),   0, (yyvsp[(4) - (4)]));;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1833 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1834 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INT_CAST,1);;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1835 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_DOUBLE_CAST,1);;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1836 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_STRING_CAST,1);;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1837 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_ARRAY_CAST,1);;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1838 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_OBJECT_CAST,1);;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1839 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_BOOL_CAST,1);;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1840 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_UNSET_CAST,1);;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1841 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_EXIT,1);;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1842 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'@',1);;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1843 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1844 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1845 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1846 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1847 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1848 "hphp.y"
    { _p->onEncapsList((yyval),'`',(yyvsp[(2) - (3)]));;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1849 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_PRINT,1);;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1850 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1857 "hphp.y"
    { (yyval) = (yyvsp[(3) - (5)]);;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1858 "hphp.y"
    { (yyval).reset();;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1863 "hphp.y"
    { Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo(); ;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1869 "hphp.y"
    { _p->finishStatement((yyvsp[(10) - (11)]), (yyvsp[(10) - (11)])); (yyvsp[(10) - (11)]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Long,
                                                            nullptr,
                                                            (yyvsp[(2) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(10) - (11)]),(yyvsp[(7) - (11)]));
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1877 "hphp.y"
    { Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo(); ;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1883 "hphp.y"
    { _p->finishStatement((yyvsp[(11) - (12)]), (yyvsp[(11) - (12)])); (yyvsp[(11) - (12)]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Long,
                                                            &(yyvsp[(1) - (12)]),
                                                            (yyvsp[(3) - (12)]),(yyvsp[(6) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(11) - (12)]),(yyvsp[(8) - (12)]));
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1892 "hphp.y"
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();
                                         Token u;
                                         _p->onParam((yyvsp[(1) - (1)]),NULL,u,(yyvsp[(1) - (1)]),0,
                                                     NULL,NULL,NULL);;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1900 "hphp.y"
    { Token v; Token w; Token x;
                                         _p->finishStatement((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); (yyvsp[(3) - (3)]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            nullptr,
                                                            v,(yyvsp[(1) - (3)]),w,(yyvsp[(3) - (3)]),x);
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1908 "hphp.y"
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();
                                         Token u;
                                         _p->onParam((yyvsp[(2) - (2)]),NULL,u,(yyvsp[(2) - (2)]),0,
                                                     NULL,NULL,NULL);;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1916 "hphp.y"
    { Token v; Token w; Token x;
                                         (yyvsp[(1) - (4)]) = T_ASYNC;
                                         _p->onMemberModifier((yyvsp[(1) - (4)]), nullptr, (yyvsp[(1) - (4)]));
                                         _p->finishStatement((yyvsp[(4) - (4)]), (yyvsp[(4) - (4)])); (yyvsp[(4) - (4)]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            &(yyvsp[(1) - (4)]),
                                                            v,(yyvsp[(2) - (4)]),w,(yyvsp[(4) - (4)]),x);
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1925 "hphp.y"
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1933 "hphp.y"
    { Token u; Token v;
                                         _p->finishStatement((yyvsp[(6) - (6)]), (yyvsp[(6) - (6)])); (yyvsp[(6) - (6)]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            nullptr,
                                                            u,(yyvsp[(3) - (6)]),v,(yyvsp[(6) - (6)]),(yyvsp[(5) - (6)]));
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1941 "hphp.y"
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1949 "hphp.y"
    { Token u; Token v;
                                         (yyvsp[(1) - (7)]) = T_ASYNC;
                                         _p->onMemberModifier((yyvsp[(1) - (7)]), nullptr, (yyvsp[(1) - (7)]));
                                         _p->finishStatement((yyvsp[(7) - (7)]), (yyvsp[(7) - (7)])); (yyvsp[(7) - (7)]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            &(yyvsp[(1) - (7)]),
                                                            u,(yyvsp[(4) - (7)]),v,(yyvsp[(7) - (7)]),(yyvsp[(6) - (7)]));
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1959 "hphp.y"
    { _p->pushFuncLocation();
                                         Token t;
                                         _p->onNewLabelScope(true);
                                         _p->onClosureStart(t);
                                         _p->pushLabelInfo();;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1965 "hphp.y"
    { Token u; Token v; Token w; Token x;
                                         Token y;
                                         (yyvsp[(1) - (5)]) = T_ASYNC;
                                         _p->onMemberModifier((yyvsp[(1) - (5)]), nullptr, (yyvsp[(1) - (5)]));
                                         _p->finishStatement((yyvsp[(4) - (5)]), (yyvsp[(4) - (5)])); (yyvsp[(4) - (5)]) = 1;
                                         (yyval) = _p->onClosure(ClosureType::Short,
                                                            &(yyvsp[(1) - (5)]),
                                                            u,v,w,(yyvsp[(4) - (5)]),x);
                                         _p->popLabelInfo();
                                         _p->onCompleteLabelScope(true);
                                         _p->onCall((yyval),1,(yyval),y,NULL);;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1979 "hphp.y"
    { (yyval) = _p->onExprForLambda((yyvsp[(2) - (2)]));;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1980 "hphp.y"
    { (yyval) = _p->onExprForLambda((yyvsp[(2) - (2)]));;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1982 "hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]); ;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1986 "hphp.y"
    { validate_shape_keyname((yyvsp[(1) - (1)]), _p);
                                        _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)])); ;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1988 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1995 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0); ;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1998 "hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0); ;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2005 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0); ;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2008 "hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0); ;}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2013 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2014 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2019 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2020 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2024 "hphp.y"
    { _p->onArray((yyval), (yyvsp[(3) - (4)]), T_ARRAY);;}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2028 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY);;}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2029 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(2) - (3)]),T_ARRAY);;}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2034 "hphp.y"
    { Token t;
                                         _p->onName(t,(yyvsp[(1) - (4)]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[(3) - (4)]),T_COLLECTION);;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2040 "hphp.y"
    { _p->onCheckedArray((yyval),(yyvsp[(3) - (4)]),T_MIARRAY);;}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2041 "hphp.y"
    { _p->onCheckedArray((yyval),(yyvsp[(3) - (4)]),T_MSARRAY);;}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2045 "hphp.y"
    { _p->onCheckedArray((yyval),(yyvsp[(3) - (4)]),T_VARRAY);;}
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2050 "hphp.y"
    { _p->onCheckedArray((yyval),(yyvsp[(3) - (4)]),T_MIARRAY);;}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2052 "hphp.y"
    { _p->onCheckedArray((yyval),(yyvsp[(3) - (4)]),T_MSARRAY);;}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2057 "hphp.y"
    { _p->onCheckedArray((yyval),(yyvsp[(3) - (4)]),T_VARRAY);;}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2062 "hphp.y"
    { Token t;
                                         _p->onName(t,(yyvsp[(1) - (4)]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[(3) - (4)]),T_COLLECTION);;}
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2069 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2071 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 2075 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2076 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2077 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2078 "hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)])); ;}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2080 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2084 "hphp.y"
    { _p->onQuery((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2088 "hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0, true);;}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2092 "hphp.y"
    { _p->onFromClause((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 2097 "hphp.y"
    { _p->onQueryBody((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL); ;}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2099 "hphp.y"
    { _p->onQueryBody((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)])); ;}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2101 "hphp.y"
    { _p->onQueryBody((yyval), NULL, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2103 "hphp.y"
    { _p->onQueryBody((yyval), NULL, (yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); ;}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2107 "hphp.y"
    { _p->onQueryBodyClause((yyval), NULL, (yyvsp[(1) - (1)])); ;}
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2109 "hphp.y"
    { _p->onQueryBodyClause((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 2113 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 2114 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 2115 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 2116 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 2117 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 2118 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 2122 "hphp.y"
    { _p->onFromClause((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 2126 "hphp.y"
    { _p->onLetClause((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 2130 "hphp.y"
    { _p->onWhereClause((yyval), (yyvsp[(2) - (2)])); ;}
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 2135 "hphp.y"
    { _p->onJoinClause((yyval), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(8) - (8)])); ;}
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 2140 "hphp.y"
    { _p->onJoinIntoClause((yyval), (yyvsp[(2) - (10)]), (yyvsp[(4) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(8) - (10)]), (yyvsp[(10) - (10)])); ;}
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 2144 "hphp.y"
    { _p->onOrderbyClause((yyval), (yyvsp[(2) - (2)])); ;}
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 2148 "hphp.y"
    { _p->onOrdering((yyval), NULL, (yyvsp[(1) - (1)])); ;}
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 2149 "hphp.y"
    { _p->onOrdering((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 2153 "hphp.y"
    { _p->onOrderingExpr((yyval), (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 2154 "hphp.y"
    { _p->onOrderingExpr((yyval), (yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); ;}
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 2158 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 2159 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 2163 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 2164 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 2168 "hphp.y"
    { _p->onSelectClause((yyval), (yyvsp[(2) - (2)])); ;}
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 2172 "hphp.y"
    { _p->onGroupClause((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 2176 "hphp.y"
    { _p->onIntoClause((yyval), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 2180 "hphp.y"
    { _p->onClosureParam((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 2181 "hphp.y"
    { _p->onClosureParam((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 2182 "hphp.y"
    { _p->onClosureParam((yyval),  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 2183 "hphp.y"
    { _p->onClosureParam((yyval),  0,(yyvsp[(2) - (2)]),1);;}
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 2190 "hphp.y"
    { xhp_tag(_p,(yyval),(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]));;}
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 2193 "hphp.y"
    { Token t1; _p->onArray(t1,(yyvsp[(1) - (2)]));
                                         Token t2; _p->onArray(t2,(yyvsp[(2) - (2)]));
                                         Token file; scalar_file(_p, file);
                                         Token line; scalar_line(_p, line);
                                         _p->onCallParam((yyvsp[(1) - (2)]),NULL,t1,0,0);
                                         _p->onCallParam((yyval), &(yyvsp[(1) - (2)]),t2,0,0);
                                         _p->onCallParam((yyvsp[(1) - (2)]), &(yyvsp[(1) - (2)]),file,0,0);
                                         _p->onCallParam((yyvsp[(1) - (2)]), &(yyvsp[(1) - (2)]),line,0,0);
                                         (yyval).setText("");;}
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 2204 "hphp.y"
    { Token file; scalar_file(_p, file);
                                         Token line; scalar_line(_p, line);
                                         _p->onArray((yyvsp[(4) - (6)]),(yyvsp[(1) - (6)]));
                                         _p->onArray((yyvsp[(5) - (6)]),(yyvsp[(3) - (6)]));
                                         _p->onCallParam((yyvsp[(2) - (6)]),NULL,(yyvsp[(4) - (6)]),0,0);
                                         _p->onCallParam((yyval), &(yyvsp[(2) - (6)]),(yyvsp[(5) - (6)]),0,0);
                                         _p->onCallParam((yyvsp[(2) - (6)]), &(yyvsp[(2) - (6)]),file,0,0);
                                         _p->onCallParam((yyvsp[(2) - (6)]), &(yyvsp[(2) - (6)]),line,0,0);
                                         (yyval).setText((yyvsp[(6) - (6)]).text());;}
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 2215 "hphp.y"
    { (yyval).reset(); (yyval).setText("");;}
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 2216 "hphp.y"
    { (yyval).reset(); (yyval).setText((yyvsp[(1) - (1)]));;}
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 2221 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (4)]),&(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),0);;}
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 2222 "hphp.y"
    { (yyval).reset();;}
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 2225 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (2)]),0,(yyvsp[(2) - (2)]),0);;}
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 2226 "hphp.y"
    { (yyval).reset();;}
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 2229 "hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 2233 "hphp.y"
    { (yyvsp[(1) - (1)]).xhpDecode();
                                         _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 2236 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 2239 "hphp.y"
    { (yyval).reset();
                                         if ((yyvsp[(1) - (1)]).htmlTrim()) {
                                           (yyvsp[(1) - (1)]).xhpDecode();
                                           _p->onScalar((yyval),
                                           T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));
                                         }
                                       ;}
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 2246 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 2247 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 2251 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 2253 "hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + ":" + (yyvsp[(3) - (3)]);;}
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 2255 "hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + "-" + (yyvsp[(3) - (3)]);;}
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 2258 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 2259 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 2260 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 2261 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 2262 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 2263 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 2264 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 2265 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 2266 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 2267 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 2268 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 2269 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 2270 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 2271 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 2272 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 2273 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 2274 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 2275 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 2276 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 2277 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 2278 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 2279 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 2280 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 2281 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 2282 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 2283 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 2284 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 2285 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 2286 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 2287 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 2288 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 2289 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 2290 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 2291 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 2292 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 2293 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 2294 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 2295 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 2296 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 2297 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 2298 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 2299 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 2300 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 2301 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 2302 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 2303 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 2304 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 2305 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 2306 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 2307 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 2308 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 2309 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 2310 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 2311 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 2312 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 2313 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 2314 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 2315 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 2316 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 2317 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 2318 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 2319 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 2320 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 2321 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 2322 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 2323 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 2324 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 2325 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 2326 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 2327 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 2328 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 2329 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 2330 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 2331 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 2332 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 2333 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 2334 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 2335 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 2336 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 2337 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 2342 "hphp.y"
    { _p->onCall((yyval),0,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 2346 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 2347 "hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 2350 "hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StringName);;}
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 2351 "hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StaticName);;}
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 2352 "hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),
                                         Parser::StaticClassExprName);;}
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 2356 "hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StringName);;}
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 2357 "hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StaticName);;}
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 2358 "hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::ExprName);;}
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 2362 "hphp.y"
    { (yyval).reset();;}
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 2363 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 2364 "hphp.y"
    { (yyval).reset();;}
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 2368 "hphp.y"
    { (yyval).reset();;}
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 2369 "hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (1)]), 0);;}
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 2370 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 2374 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 2375 "hphp.y"
    { (yyval).reset();;}
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 2379 "hphp.y"
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 2380 "hphp.y"
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 2381 "hphp.y"
    { _p->onScalar((yyval), T_ONUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 2382 "hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,  (yyvsp[(1) - (1)]));;}
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 2384 "hphp.y"
    { _p->onScalar((yyval), T_LINE,     (yyvsp[(1) - (1)]));;}
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 2385 "hphp.y"
    { _p->onScalar((yyval), T_FILE,     (yyvsp[(1) - (1)]));;}
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 2386 "hphp.y"
    { _p->onScalar((yyval), T_DIR,      (yyvsp[(1) - (1)]));;}
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 2387 "hphp.y"
    { _p->onScalar((yyval), T_CLASS_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 2388 "hphp.y"
    { _p->onScalar((yyval), T_TRAIT_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 2389 "hphp.y"
    { _p->onScalar((yyval), T_METHOD_C, (yyvsp[(1) - (1)]));;}
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 2390 "hphp.y"
    { _p->onScalar((yyval), T_FUNC_C,   (yyvsp[(1) - (1)]));;}
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 2391 "hphp.y"
    { _p->onScalar((yyval), T_NS_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 2392 "hphp.y"
    { _p->onScalar((yyval), T_COMPILER_HALT_OFFSET, (yyvsp[(1) - (1)]));;}
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 2395 "hphp.y"
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[(2) - (3)]));;}
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 2397 "hphp.y"
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));;}
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 2401 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 2402 "hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 2404 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY); ;}
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 2405 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(2) - (3)]),T_ARRAY); ;}
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 2407 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY); ;}
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 2408 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 2409 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 2410 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 2411 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 2412 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 2414 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_OR);;}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 2416 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_AND);;}
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 2418 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_OR);;}
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 2420 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_AND);;}
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 2422 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_XOR);;}
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 2423 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'|');;}
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 2424 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'&');;}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 2425 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'^');;}
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 2426 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'.');;}
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 2427 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'+');;}
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 2428 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'-');;}
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 2429 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'*');;}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 2430 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'/');;}
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 2431 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'%');;}
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 2432 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SL);;}
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 2433 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SR);;}
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 2434 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_POW);;}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 2435 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'!',1);;}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 2436 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'~',1);;}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 2437 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 2438 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 2440 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_IDENTICAL);;}
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 2442 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_IDENTICAL);;}
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 2444 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_EQUAL);;}
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 2446 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_EQUAL);;}
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 2447 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'<');;}
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 2449 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_SMALLER_OR_EQUAL);;}
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 2451 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'>');;}
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 2454 "hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_GREATER_OR_EQUAL);;}
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 2457 "hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 2458 "hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (4)]),   0, (yyvsp[(4) - (4)]));;}
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 2464 "hphp.y"
    { _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 1);;}
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 2466 "hphp.y"
    { (yyvsp[(1) - (3)]).xhpLabel();
                                         _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 1);;}
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 2470 "hphp.y"
    { _p->onClassClass((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 1);;}
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 2474 "hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 2475 "hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 2476 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 2477 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 2478 "hphp.y"
    { _p->onEncapsList((yyval),'"',(yyvsp[(2) - (3)]));;}
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 2479 "hphp.y"
    { _p->onEncapsList((yyval),'\'',(yyvsp[(2) - (3)]));;}
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 2481 "hphp.y"
    { _p->onEncapsList((yyval),T_START_HEREDOC,
                                                          (yyvsp[(2) - (3)]));;}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 2486 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 2487 "hphp.y"
    { (yyval).reset();;}
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 2491 "hphp.y"
    { (yyval).reset();;}
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 2492 "hphp.y"
    { (yyval).reset();;}
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 2495 "hphp.y"
    { only_in_hh_syntax(_p); (yyval).reset();;}
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 2496 "hphp.y"
    { (yyval).reset();;}
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 2502 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 2504 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 2506 "hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 2507 "hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 2511 "hphp.y"
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 2512 "hphp.y"
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 2513 "hphp.y"
    { _p->onScalar((yyval), T_ONUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 2514 "hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,  (yyvsp[(1) - (1)]));;}
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 2518 "hphp.y"
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[(2) - (3)]));;}
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 2520 "hphp.y"
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));;}
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 2523 "hphp.y"
    { _p->onScalar((yyval),T_LNUMBER,(yyvsp[(1) - (1)]));;}
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 2524 "hphp.y"
    { _p->onScalar((yyval),T_DNUMBER,(yyvsp[(1) - (1)]));;}
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 2525 "hphp.y"
    { _p->onScalar((yyval),T_ONUMBER,(yyvsp[(1) - (1)]));;}
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 2526 "hphp.y"
    { constant_ae(_p,(yyval),(yyvsp[(1) - (1)]));;}
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 2529 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 2530 "hphp.y"
    { constant_ae(_p,(yyval),(yyvsp[(1) - (1)]));;}
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 2531 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 2532 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 2534 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY);;}
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 2535 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(2) - (3)]),T_ARRAY);;}
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 2537 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY); ;}
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 2542 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 2543 "hphp.y"
    { (yyval).reset();;}
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 2548 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 2550 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 2552 "hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 2553 "hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 2557 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 2558 "hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 2563 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 2564 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 2569 "hphp.y"
    {  _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0); ;}
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 2572 "hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0); ;}
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 2577 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 2578 "hphp.y"
    { (yyval).reset();;}
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 2581 "hphp.y"
    { _p->onArray((yyval),(yyvsp[(2) - (3)]),T_ARRAY);;}
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 2582 "hphp.y"
    { Token t; t.reset();
                                         _p->onArray((yyval),t,T_ARRAY);;}
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 2589 "hphp.y"
    { _p->onUserAttribute((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 2591 "hphp.y"
    { _p->onUserAttribute((yyval),  0,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 2594 "hphp.y"
    { only_in_hh_syntax(_p);;}
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 2596 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 2599 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 2602 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 2603 "hphp.y"
    { (yyval).reset();;}
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 2607 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 0;;}
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 2608 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 1;;}
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 2612 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = HPHP::ObjPropNormal;;}
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 2613 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = HPHP::ObjPropXhpAttr;;}
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 2614 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]); (yyval) = HPHP::ObjPropNormal;;}
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 2618 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 2619 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = HPHP::ObjPropNormal;;}
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 2623 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 2624 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 2628 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 2629 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 2633 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 2634 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 2638 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 2640 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 2645 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 2647 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 2651 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 2652 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 2653 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 2654 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 2655 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 2657 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).num(),(yyvsp[(3) - (3)]));;}
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 2660 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]).num(),(yyvsp[(5) - (5)]));;}
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 2663 "hphp.y"
    { _p->onStaticMember((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 2665 "hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 2667 "hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 2668 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 2672 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 2673 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 2674 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 2675 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 2678 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).num(),(yyvsp[(3) - (3)]));;}
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 2682 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]).num(),(yyvsp[(5) - (5)]));;}
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 2684 "hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 2685 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 2689 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 2690 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 2691 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 2695 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 2699 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 2700 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 2706 "hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(1) - (7)]),(yyvsp[(2) - (7)]).num(),(yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]));;}
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 2710 "hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(2) - (9)]),(yyvsp[(4) - (9)]).num(),(yyvsp[(5) - (9)]),(yyvsp[(8) - (9)]));;}
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 2717 "hphp.y"
    { _p->onCall((yyval),0,(yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]),&(yyvsp[(1) - (7)]));;}
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 2721 "hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]),&(yyvsp[(1) - (6)]));;}
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 2725 "hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(4) - (8)]),(yyvsp[(7) - (8)]),&(yyvsp[(1) - (8)]));;}
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 2729 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 2731 "hphp.y"
    { _p->onIndirectRef((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 2736 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 2737 "hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 2738 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 2741 "hphp.y"
    { _p->onSimpleVariable((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 2742 "hphp.y"
    { _p->onDynamicVariable((yyval), (yyvsp[(3) - (4)]), 0);;}
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 2745 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 2746 "hphp.y"
    { (yyval).reset();;}
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 2750 "hphp.y"
    { (yyval) = 1;;}
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 2751 "hphp.y"
    { (yyval)++;;}
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 2755 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 2756 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 2759 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).num(),(yyvsp[(3) - (3)]));;}
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 2762 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]).num(),(yyvsp[(5) - (5)]));;}
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 2765 "hphp.y"
    { _p->onStaticMember((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 2766 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 2770 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 2773 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]).num(),(yyvsp[(3) - (3)]));;}
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 2777 "hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]).num(),(yyvsp[(5) - (5)]));;}
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 2778 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 2782 "hphp.y"
    { _p->onAListVar((yyval),&(yyvsp[(1) - (2)]),NULL);;}
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 2783 "hphp.y"
    { _p->onAListVar((yyval),&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 2785 "hphp.y"
    { _p->onAListSub((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 2786 "hphp.y"
    { _p->onAListVar((yyval),NULL,NULL);;}
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 2787 "hphp.y"
    { _p->onAListVar((yyval),NULL,&(yyvsp[(1) - (1)]));;}
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 2788 "hphp.y"
    { _p->onAListSub((yyval),NULL,(yyvsp[(3) - (4)]));;}
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 2793 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 2794 "hphp.y"
    { (yyval).reset();;}
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 2798 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 2799 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 2800 "hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 2801 "hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 2804 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (6)]),&(yyvsp[(3) - (6)]),(yyvsp[(6) - (6)]),1);;}
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 2806 "hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (4)]),  0,(yyvsp[(4) - (4)]),1);;}
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 2807 "hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 2808 "hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(2) - (2)]),1);;}
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 2813 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 2814 "hphp.y"
    { _p->onEmptyCollection((yyval));;}
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 2818 "hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 2819 "hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 2820 "hphp.y"
    { _p->onCollectionPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 2821 "hphp.y"
    { _p->onCollectionPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 2826 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 2827 "hphp.y"
    { _p->onEmptyCollection((yyval));;}
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 2832 "hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 2834 "hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 2836 "hphp.y"
    { _p->onCollectionPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 2837 "hphp.y"
    { _p->onCollectionPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 2842 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 2843 "hphp.y"
    { _p->onEmptyCheckedArray((yyval));;}
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 2847 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 2848 "hphp.y"
    { _p->onEmptyCheckedArray((yyval));;}
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 2852 "hphp.y"
    { _p->onCheckedArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 2853 "hphp.y"
    { _p->onCheckedArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 2856 "hphp.y"
    { _p->onCheckedArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 2857 "hphp.y"
    { _p->onCheckedArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 2862 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 2863 "hphp.y"
    { _p->onEmptyCheckedArray((yyval));;}
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 2867 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 2868 "hphp.y"
    { _p->onEmptyCheckedArray((yyval));;}
    break;

  case 865:

/* Line 1455 of yacc.c  */
#line 2873 "hphp.y"
    { _p->onCheckedArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 866:

/* Line 1455 of yacc.c  */
#line 2875 "hphp.y"
    { _p->onCheckedArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 867:

/* Line 1455 of yacc.c  */
#line 2879 "hphp.y"
    { _p->onCheckedArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 2880 "hphp.y"
    { _p->onCheckedArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 2884 "hphp.y"
    { _p->addEncap((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), -1);;}
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 2886 "hphp.y"
    { _p->addEncap((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), 0);;}
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 2887 "hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (1)]), -1);;}
    break;

  case 872:

/* Line 1455 of yacc.c  */
#line 2889 "hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (2)]), 0);
                                         _p->addEncap((yyval), &(yyval), (yyvsp[(2) - (2)]), -1); ;}
    break;

  case 873:

/* Line 1455 of yacc.c  */
#line 2894 "hphp.y"
    { _p->onSimpleVariable((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 2896 "hphp.y"
    { _p->encapRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 875:

/* Line 1455 of yacc.c  */
#line 2898 "hphp.y"
    { _p->encapObjProp((yyval), (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).num(), (yyvsp[(3) - (3)]));;}
    break;

  case 876:

/* Line 1455 of yacc.c  */
#line 2900 "hphp.y"
    { _p->onDynamicVariable((yyval), (yyvsp[(2) - (3)]), 1);;}
    break;

  case 877:

/* Line 1455 of yacc.c  */
#line 2902 "hphp.y"
    { _p->encapArray((yyval), (yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]));;}
    break;

  case 878:

/* Line 1455 of yacc.c  */
#line 2903 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 879:

/* Line 1455 of yacc.c  */
#line 2906 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_STRING;;}
    break;

  case 880:

/* Line 1455 of yacc.c  */
#line 2907 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_NUM_STRING;;}
    break;

  case 881:

/* Line 1455 of yacc.c  */
#line 2908 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_VARIABLE;;}
    break;

  case 882:

/* Line 1455 of yacc.c  */
#line 2912 "hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_ISSET,1);;}
    break;

  case 883:

/* Line 1455 of yacc.c  */
#line 2913 "hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_EMPTY,1);;}
    break;

  case 884:

/* Line 1455 of yacc.c  */
#line 2914 "hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),'!',1);;}
    break;

  case 885:

/* Line 1455 of yacc.c  */
#line 2915 "hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),'!',1);;}
    break;

  case 886:

/* Line 1455 of yacc.c  */
#line 2916 "hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),'!',1);;}
    break;

  case 887:

/* Line 1455 of yacc.c  */
#line 2917 "hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),'!',1);;}
    break;

  case 888:

/* Line 1455 of yacc.c  */
#line 2918 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INCLUDE,1);;}
    break;

  case 889:

/* Line 1455 of yacc.c  */
#line 2919 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INCLUDE_ONCE,1);;}
    break;

  case 890:

/* Line 1455 of yacc.c  */
#line 2920 "hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_EVAL,1);;}
    break;

  case 891:

/* Line 1455 of yacc.c  */
#line 2921 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_REQUIRE,1);;}
    break;

  case 892:

/* Line 1455 of yacc.c  */
#line 2922 "hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_REQUIRE_ONCE,1);;}
    break;

  case 893:

/* Line 1455 of yacc.c  */
#line 2926 "hphp.y"
    { _p->onExprListElem((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 894:

/* Line 1455 of yacc.c  */
#line 2927 "hphp.y"
    { _p->onExprListElem((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 895:

/* Line 1455 of yacc.c  */
#line 2932 "hphp.y"
    { _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);;}
    break;

  case 896:

/* Line 1455 of yacc.c  */
#line 2934 "hphp.y"
    { _p->onClassClass((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);;}
    break;

  case 899:

/* Line 1455 of yacc.c  */
#line 2948 "hphp.y"
    { (yyvsp[(2) - (5)]).setText(_p->nsDecl((yyvsp[(2) - (5)]).text()));
                                         _p->onTypedef((yyval), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
                                         _p->popTypeScope(); ;}
    break;

  case 900:

/* Line 1455 of yacc.c  */
#line 2952 "hphp.y"
    { (yyvsp[(2) - (6)]).setText(_p->nsDecl((yyvsp[(2) - (6)]).text()));
                                         _p->onTypedef((yyval), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
                                         _p->popTypeScope(); ;}
    break;

  case 901:

/* Line 1455 of yacc.c  */
#line 2958 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 902:

/* Line 1455 of yacc.c  */
#line 2959 "hphp.y"
    { only_in_hh_syntax(_p); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 903:

/* Line 1455 of yacc.c  */
#line 2965 "hphp.y"
    { _p->pushTypeScope(); (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 904:

/* Line 1455 of yacc.c  */
#line 2969 "hphp.y"
    { _p->pushTypeScope(); (yyval) = (yyvsp[(1) - (4)]); ;}
    break;

  case 905:

/* Line 1455 of yacc.c  */
#line 2975 "hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 906:

/* Line 1455 of yacc.c  */
#line 2976 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 907:

/* Line 1455 of yacc.c  */
#line 2980 "hphp.y"
    { Token t; t.reset();
                                         _p->onTypeList((yyvsp[(1) - (1)]), t);
                                         (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 908:

/* Line 1455 of yacc.c  */
#line 2983 "hphp.y"
    { _p->onTypeList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
                                         (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 909:

/* Line 1455 of yacc.c  */
#line 2989 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 910:

/* Line 1455 of yacc.c  */
#line 2994 "hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 911:

/* Line 1455 of yacc.c  */
#line 2995 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 912:

/* Line 1455 of yacc.c  */
#line 2996 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 913:

/* Line 1455 of yacc.c  */
#line 2997 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 914:

/* Line 1455 of yacc.c  */
#line 3001 "hphp.y"
    { (yyval).reset(); ;}
    break;

  case 915:

/* Line 1455 of yacc.c  */
#line 3002 "hphp.y"
    { only_in_hh_syntax(_p); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 916:

/* Line 1455 of yacc.c  */
#line 3007 "hphp.y"
    { _p->addTypeVar((yyvsp[(4) - (4)]).text()); ;}
    break;

  case 917:

/* Line 1455 of yacc.c  */
#line 3008 "hphp.y"
    { _p->addTypeVar((yyvsp[(2) - (2)]).text()); ;}
    break;

  case 918:

/* Line 1455 of yacc.c  */
#line 3011 "hphp.y"
    { _p->addTypeVar((yyvsp[(4) - (6)]).text()); ;}
    break;

  case 919:

/* Line 1455 of yacc.c  */
#line 3013 "hphp.y"
    { _p->addTypeVar((yyvsp[(2) - (4)]).text()); ;}
    break;

  case 920:

/* Line 1455 of yacc.c  */
#line 3017 "hphp.y"
    {;}
    break;

  case 921:

/* Line 1455 of yacc.c  */
#line 3018 "hphp.y"
    {;}
    break;

  case 922:

/* Line 1455 of yacc.c  */
#line 3019 "hphp.y"
    {;}
    break;

  case 923:

/* Line 1455 of yacc.c  */
#line 3025 "hphp.y"
    { validate_shape_keyname((yyvsp[(1) - (3)]), _p); ;}
    break;

  case 924:

/* Line 1455 of yacc.c  */
#line 3030 "hphp.y"
    { ;}
    break;

  case 927:

/* Line 1455 of yacc.c  */
#line 3042 "hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 928:

/* Line 1455 of yacc.c  */
#line 3044 "hphp.y"
    {;}
    break;

  case 929:

/* Line 1455 of yacc.c  */
#line 3048 "hphp.y"
    { (yyval).setText("array"); ;}
    break;

  case 930:

/* Line 1455 of yacc.c  */
#line 3055 "hphp.y"
    { only_in_hh_syntax(_p);
                                         _p->onTypeSpecialization((yyvsp[(2) - (2)]), '?');
                                         (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 931:

/* Line 1455 of yacc.c  */
#line 3058 "hphp.y"
    { only_in_hh_syntax(_p);
                                         _p->onTypeSpecialization((yyvsp[(2) - (2)]), '@');
                                         (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 932:

/* Line 1455 of yacc.c  */
#line 3061 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 933:

/* Line 1455 of yacc.c  */
#line 3062 "hphp.y"
    { Token t; t.reset();
                                         (yyvsp[(1) - (1)]).setText("array");
                                         _p->onTypeAnnotation((yyval), (yyvsp[(1) - (1)]), t); ;}
    break;

  case 934:

/* Line 1455 of yacc.c  */
#line 3065 "hphp.y"
    { Token t; t.reset();
                                         (yyvsp[(1) - (1)]).setText("callable");
                                         _p->onTypeAnnotation((yyval), (yyvsp[(1) - (1)]), t); ;}
    break;

  case 935:

/* Line 1455 of yacc.c  */
#line 3068 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 936:

/* Line 1455 of yacc.c  */
#line 3070 "hphp.y"
    { (yyvsp[(1) - (4)]).setText("array");
                                         _p->onTypeAnnotation((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 937:

/* Line 1455 of yacc.c  */
#line 3073 "hphp.y"
    { _p->onTypeList((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));
                                         (yyvsp[(1) - (6)]).setText("array");
                                         _p->onTypeAnnotation((yyval), (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])); ;}
    break;

  case 938:

/* Line 1455 of yacc.c  */
#line 3076 "hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel();
                                         Token t; t.reset();
                                         _p->onTypeAnnotation((yyval), (yyvsp[(1) - (1)]), t);
                                         _p->onTypeSpecialization((yyval), 'x'); ;}
    break;

  case 939:

/* Line 1455 of yacc.c  */
#line 3082 "hphp.y"
    { only_in_hh_syntax(_p);
                                        _p->onTypeList((yyvsp[(7) - (8)]), (yyvsp[(4) - (8)]));
                                        _p->onTypeAnnotation((yyval), (yyvsp[(2) - (8)]), (yyvsp[(7) - (8)]));
                                        _p->onTypeSpecialization((yyval), 'f'); ;}
    break;

  case 940:

/* Line 1455 of yacc.c  */
#line 3088 "hphp.y"
    { only_in_hh_syntax(_p);
                                        _p->onTypeList((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]));
                                        Token t; t.reset(); t.setText("array");
                                        _p->onTypeAnnotation((yyval), t, (yyvsp[(2) - (6)]));
                                        _p->onTypeSpecialization((yyval), 't'); ;}
    break;

  case 941:

/* Line 1455 of yacc.c  */
#line 3096 "hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 942:

/* Line 1455 of yacc.c  */
#line 3097 "hphp.y"
    { (yyval).reset(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 13746 "hphp.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, _p, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, _p, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, _p, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc, _p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, _p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, _p);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
  YYSTACK_CLEANUP;
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 3100 "hphp.y"

bool Parser::parseImpl() {
  return yyparse(this) == 0;
}

