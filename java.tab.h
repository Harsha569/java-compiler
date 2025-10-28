/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_JAVA_TAB_H_INCLUDED
# define YY_YY_JAVA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABSTRACT = 258,                /* ABSTRACT  */
    CLASS = 259,                   /* CLASS  */
    INTERFACE = 260,               /* INTERFACE  */
    EXTENDS = 261,                 /* EXTENDS  */
    IMPLEMENTS = 262,              /* IMPLEMENTS  */
    PUBLIC = 263,                  /* PUBLIC  */
    PRIVATE = 264,                 /* PRIVATE  */
    PROTECTED = 265,               /* PROTECTED  */
    STATIC = 266,                  /* STATIC  */
    FINAL = 267,                   /* FINAL  */
    VOID = 268,                    /* VOID  */
    INT = 269,                     /* INT  */
    FLOAT = 270,                   /* FLOAT  */
    DOUBLE = 271,                  /* DOUBLE  */
    CHAR = 272,                    /* CHAR  */
    BOOLEAN = 273,                 /* BOOLEAN  */
    STRING = 274,                  /* STRING  */
    IF = 275,                      /* IF  */
    ELSE = 276,                    /* ELSE  */
    WHILE = 277,                   /* WHILE  */
    FOR = 278,                     /* FOR  */
    DO = 279,                      /* DO  */
    SWITCH = 280,                  /* SWITCH  */
    CASE = 281,                    /* CASE  */
    DEFAULT = 282,                 /* DEFAULT  */
    BREAK = 283,                   /* BREAK  */
    CONTINUE = 284,                /* CONTINUE  */
    RETURN = 285,                  /* RETURN  */
    NEW = 286,                     /* NEW  */
    THIS = 287,                    /* THIS  */
    SUPER = 288,                   /* SUPER  */
    NULL_LITERAL = 289,            /* NULL_LITERAL  */
    TRUE = 290,                    /* TRUE  */
    FALSE = 291,                   /* FALSE  */
    PRINTLN = 292,                 /* PRINTLN  */
    PRINT = 293,                   /* PRINT  */
    LPAREN = 294,                  /* LPAREN  */
    RPAREN = 295,                  /* RPAREN  */
    LBRACE = 296,                  /* LBRACE  */
    RBRACE = 297,                  /* RBRACE  */
    LBRACKET = 298,                /* LBRACKET  */
    RBRACKET = 299,                /* RBRACKET  */
    SEMICOLON = 300,               /* SEMICOLON  */
    COMMA = 301,                   /* COMMA  */
    DOT = 302,                     /* DOT  */
    COLON = 303,                   /* COLON  */
    ASSIGN = 304,                  /* ASSIGN  */
    PLUS_ASSIGN = 305,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 306,            /* MINUS_ASSIGN  */
    MULT_ASSIGN = 307,             /* MULT_ASSIGN  */
    DIV_ASSIGN = 308,              /* DIV_ASSIGN  */
    PLUS = 309,                    /* PLUS  */
    MINUS = 310,                   /* MINUS  */
    MULTIPLY = 311,                /* MULTIPLY  */
    DIVIDE = 312,                  /* DIVIDE  */
    MODULO = 313,                  /* MODULO  */
    INCREMENT = 314,               /* INCREMENT  */
    DECREMENT = 315,               /* DECREMENT  */
    EQ = 316,                      /* EQ  */
    NE = 317,                      /* NE  */
    LT = 318,                      /* LT  */
    LE = 319,                      /* LE  */
    GT = 320,                      /* GT  */
    GE = 321,                      /* GE  */
    AND = 322,                     /* AND  */
    OR = 323,                      /* OR  */
    NOT = 324,                     /* NOT  */
    BITWISE_AND = 325,             /* BITWISE_AND  */
    BITWISE_OR = 326,              /* BITWISE_OR  */
    BITWISE_XOR = 327,             /* BITWISE_XOR  */
    BITWISE_NOT = 328,             /* BITWISE_NOT  */
    LEFT_SHIFT = 329,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 330,             /* RIGHT_SHIFT  */
    IDENTIFIER = 331,              /* IDENTIFIER  */
    STRING_LITERAL = 332,          /* STRING_LITERAL  */
    NUMBER = 333,                  /* NUMBER  */
    FLOAT_LITERAL = 334,           /* FLOAT_LITERAL  */
    CHAR_LITERAL = 335             /* CHAR_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "java.y"

    int num;
    float flt;
    char ch;
    char *str;

#line 151 "java.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_JAVA_TAB_H_INCLUDED  */
