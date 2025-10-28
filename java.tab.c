/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "java.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE *yyin;
void yyerror(const char *s);

int parse_success = 1;

#line 84 "java.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "java.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABSTRACT = 3,                   /* ABSTRACT  */
  YYSYMBOL_CLASS = 4,                      /* CLASS  */
  YYSYMBOL_INTERFACE = 5,                  /* INTERFACE  */
  YYSYMBOL_EXTENDS = 6,                    /* EXTENDS  */
  YYSYMBOL_IMPLEMENTS = 7,                 /* IMPLEMENTS  */
  YYSYMBOL_PUBLIC = 8,                     /* PUBLIC  */
  YYSYMBOL_PRIVATE = 9,                    /* PRIVATE  */
  YYSYMBOL_PROTECTED = 10,                 /* PROTECTED  */
  YYSYMBOL_STATIC = 11,                    /* STATIC  */
  YYSYMBOL_FINAL = 12,                     /* FINAL  */
  YYSYMBOL_VOID = 13,                      /* VOID  */
  YYSYMBOL_INT = 14,                       /* INT  */
  YYSYMBOL_FLOAT = 15,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 16,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 17,                      /* CHAR  */
  YYSYMBOL_BOOLEAN = 18,                   /* BOOLEAN  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_SWITCH = 25,                    /* SWITCH  */
  YYSYMBOL_CASE = 26,                      /* CASE  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_NEW = 31,                       /* NEW  */
  YYSYMBOL_THIS = 32,                      /* THIS  */
  YYSYMBOL_SUPER = 33,                     /* SUPER  */
  YYSYMBOL_NULL_LITERAL = 34,              /* NULL_LITERAL  */
  YYSYMBOL_TRUE = 35,                      /* TRUE  */
  YYSYMBOL_FALSE = 36,                     /* FALSE  */
  YYSYMBOL_PRINTLN = 37,                   /* PRINTLN  */
  YYSYMBOL_PRINT = 38,                     /* PRINT  */
  YYSYMBOL_LPAREN = 39,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 40,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 41,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 42,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 43,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 44,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 45,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_DOT = 47,                       /* DOT  */
  YYSYMBOL_COLON = 48,                     /* COLON  */
  YYSYMBOL_ASSIGN = 49,                    /* ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 50,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 51,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULT_ASSIGN = 52,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 53,                /* DIV_ASSIGN  */
  YYSYMBOL_PLUS = 54,                      /* PLUS  */
  YYSYMBOL_MINUS = 55,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 56,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 57,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 58,                    /* MODULO  */
  YYSYMBOL_INCREMENT = 59,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 60,                 /* DECREMENT  */
  YYSYMBOL_EQ = 61,                        /* EQ  */
  YYSYMBOL_NE = 62,                        /* NE  */
  YYSYMBOL_LT = 63,                        /* LT  */
  YYSYMBOL_LE = 64,                        /* LE  */
  YYSYMBOL_GT = 65,                        /* GT  */
  YYSYMBOL_GE = 66,                        /* GE  */
  YYSYMBOL_AND = 67,                       /* AND  */
  YYSYMBOL_OR = 68,                        /* OR  */
  YYSYMBOL_NOT = 69,                       /* NOT  */
  YYSYMBOL_BITWISE_AND = 70,               /* BITWISE_AND  */
  YYSYMBOL_BITWISE_OR = 71,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_XOR = 72,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_NOT = 73,               /* BITWISE_NOT  */
  YYSYMBOL_LEFT_SHIFT = 74,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 75,               /* RIGHT_SHIFT  */
  YYSYMBOL_IDENTIFIER = 76,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 77,            /* STRING_LITERAL  */
  YYSYMBOL_NUMBER = 78,                    /* NUMBER  */
  YYSYMBOL_FLOAT_LITERAL = 79,             /* FLOAT_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 80,              /* CHAR_LITERAL  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_program = 82,                   /* program  */
  YYSYMBOL_compilation_unit_list = 83,     /* compilation_unit_list  */
  YYSYMBOL_compilation_unit = 84,          /* compilation_unit  */
  YYSYMBOL_class_declaration = 85,         /* class_declaration  */
  YYSYMBOL_interface_declaration = 86,     /* interface_declaration  */
  YYSYMBOL_extends_clause = 87,            /* extends_clause  */
  YYSYMBOL_implements_clause = 88,         /* implements_clause  */
  YYSYMBOL_extends_interfaces = 89,        /* extends_interfaces  */
  YYSYMBOL_type_list = 90,                 /* type_list  */
  YYSYMBOL_modifiers = 91,                 /* modifiers  */
  YYSYMBOL_modifier = 92,                  /* modifier  */
  YYSYMBOL_class_body_declarations = 93,   /* class_body_declarations  */
  YYSYMBOL_class_body_declaration = 94,    /* class_body_declaration  */
  YYSYMBOL_field_declaration = 95,         /* field_declaration  */
  YYSYMBOL_interface_body_declarations = 96, /* interface_body_declarations  */
  YYSYMBOL_interface_body_declaration = 97, /* interface_body_declaration  */
  YYSYMBOL_method_declaration = 98,        /* method_declaration  */
  YYSYMBOL_method_body = 99,               /* method_body  */
  YYSYMBOL_formal_parameter_list = 100,    /* formal_parameter_list  */
  YYSYMBOL_formal_parameter = 101,         /* formal_parameter  */
  YYSYMBOL_type = 102,                     /* type  */
  YYSYMBOL_block = 103,                    /* block  */
  YYSYMBOL_block_statements = 104,         /* block_statements  */
  YYSYMBOL_block_statement = 105,          /* block_statement  */
  YYSYMBOL_local_variable_declaration = 106, /* local_variable_declaration  */
  YYSYMBOL_statement = 107,                /* statement  */
  YYSYMBOL_expression_statement = 108,     /* expression_statement  */
  YYSYMBOL_statement_expression = 109,     /* statement_expression  */
  YYSYMBOL_if_statement = 110,             /* if_statement  */
  YYSYMBOL_while_statement = 111,          /* while_statement  */
  YYSYMBOL_for_statement = 112,            /* for_statement  */
  YYSYMBOL_for_init = 113,                 /* for_init  */
  YYSYMBOL_for_condition = 114,            /* for_condition  */
  YYSYMBOL_for_update = 115,               /* for_update  */
  YYSYMBOL_do_statement = 116,             /* do_statement  */
  YYSYMBOL_switch_statement = 117,         /* switch_statement  */
  YYSYMBOL_switch_block_statement_groups = 118, /* switch_block_statement_groups  */
  YYSYMBOL_switch_block_statement_group = 119, /* switch_block_statement_group  */
  YYSYMBOL_switch_labels = 120,            /* switch_labels  */
  YYSYMBOL_switch_label = 121,             /* switch_label  */
  YYSYMBOL_break_statement = 122,          /* break_statement  */
  YYSYMBOL_continue_statement = 123,       /* continue_statement  */
  YYSYMBOL_return_statement = 124,         /* return_statement  */
  YYSYMBOL_print_statement = 125,          /* print_statement  */
  YYSYMBOL_expression = 126,               /* expression  */
  YYSYMBOL_assignment = 127,               /* assignment  */
  YYSYMBOL_conditional_expression = 128,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 129,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 130,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 131,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 132,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 133,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 134,      /* equality_expression  */
  YYSYMBOL_relational_expression = 135,    /* relational_expression  */
  YYSYMBOL_shift_expression = 136,         /* shift_expression  */
  YYSYMBOL_additive_expression = 137,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 138, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 139,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 140,       /* postfix_expression  */
  YYSYMBOL_primary = 141,                  /* primary  */
  YYSYMBOL_literal = 142,                  /* literal  */
  YYSYMBOL_class_instance_creation = 143,  /* class_instance_creation  */
  YYSYMBOL_method_invocation = 144,        /* method_invocation  */
  YYSYMBOL_argument_list = 145             /* argument_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   874

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  411

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    69,    70,    74,    75,    81,    86,    94,
      99,   106,   108,   111,   113,   116,   118,   122,   123,   127,
     128,   132,   132,   132,   132,   132,   132,   137,   139,   143,
     144,   150,   155,   160,   165,   174,   176,   180,   185,   190,
     195,   205,   210,   215,   220,   225,   230,   235,   240,   245,
     250,   255,   260,   265,   270,   275,   280,   288,   289,   293,
     294,   298,   299,   305,   306,   307,   308,   309,   310,   311,
     312,   318,   321,   323,   327,   328,   332,   337,   342,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   365,   369,   370,   371,   375,   379,   386,   393,   399,
     401,   402,   405,   407,   410,   412,   416,   423,   429,   431,
     435,   439,   440,   444,   448,   455,   462,   469,   473,   480,
     484,   493,   494,   498,   499,   500,   501,   502,   503,   504,
     508,   512,   513,   517,   518,   522,   523,   527,   528,   532,
     533,   537,   538,   539,   543,   544,   545,   546,   547,   551,
     552,   553,   557,   558,   559,   563,   564,   565,   566,   570,
     571,   572,   573,   574,   575,   576,   580,   581,   582,   583,
     584,   585,   589,   590,   591,   592,   593,   594,   598,   599,
     600,   601,   602,   603,   604,   608,   609,   610,   614,   615,
     616,   617,   618,   619,   623,   624
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ABSTRACT", "CLASS",
  "INTERFACE", "EXTENDS", "IMPLEMENTS", "PUBLIC", "PRIVATE", "PROTECTED",
  "STATIC", "FINAL", "VOID", "INT", "FLOAT", "DOUBLE", "CHAR", "BOOLEAN",
  "STRING", "IF", "ELSE", "WHILE", "FOR", "DO", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "CONTINUE", "RETURN", "NEW", "THIS", "SUPER",
  "NULL_LITERAL", "TRUE", "FALSE", "PRINTLN", "PRINT", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "SEMICOLON", "COMMA", "DOT",
  "COLON", "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MULT_ASSIGN",
  "DIV_ASSIGN", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULO",
  "INCREMENT", "DECREMENT", "EQ", "NE", "LT", "LE", "GT", "GE", "AND",
  "OR", "NOT", "BITWISE_AND", "BITWISE_OR", "BITWISE_XOR", "BITWISE_NOT",
  "LEFT_SHIFT", "RIGHT_SHIFT", "IDENTIFIER", "STRING_LITERAL", "NUMBER",
  "FLOAT_LITERAL", "CHAR_LITERAL", "$accept", "program",
  "compilation_unit_list", "compilation_unit", "class_declaration",
  "interface_declaration", "extends_clause", "implements_clause",
  "extends_interfaces", "type_list", "modifiers", "modifier",
  "class_body_declarations", "class_body_declaration", "field_declaration",
  "interface_body_declarations", "interface_body_declaration",
  "method_declaration", "method_body", "formal_parameter_list",
  "formal_parameter", "type", "block", "block_statements",
  "block_statement", "local_variable_declaration", "statement",
  "expression_statement", "statement_expression", "if_statement",
  "while_statement", "for_statement", "for_init", "for_condition",
  "for_update", "do_statement", "switch_statement",
  "switch_block_statement_groups", "switch_block_statement_group",
  "switch_labels", "switch_label", "break_statement", "continue_statement",
  "return_statement", "print_statement", "expression", "assignment",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "primary", "literal", "class_instance_creation",
  "method_invocation", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-303)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     462,  -303,   -64,   -62,  -303,  -303,  -303,  -303,  -303,    30,
     462,  -303,  -303,  -303,   574,  -303,    27,    29,  -303,  -303,
     -26,   -10,  -303,    -4,    72,     8,    40,    27,    29,  -303,
       8,    45,  -303,    53,  -303,    72,    60,    53,  -303,    36,
     147,    74,  -303,    79,  -303,    43,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,   -28,  -303,   284,    46,    56,
      59,    61,  -303,   101,   306,  -303,  -303,  -303,   -24,   110,
     125,   137,   270,  -303,   140,   152,   158,   166,   167,   136,
     -23,    25,   388,  -303,   402,  -303,   415,   421,   429,   435,
       1,   -30,  -303,   -20,   176,    26,   466,  -303,   741,   180,
      68,   181,    70,     1,    77,     1,    85,     1,    93,     1,
     104,  -303,  -303,  -303,  -303,     1,   504,   186,  -303,   484,
     498,  -303,   741,     1,   105,   511,  -303,   198,  -303,  -303,
    -303,   741,   772,   772,   772,   772,   772,   772,   814,  -303,
    -303,  -303,  -303,   200,  -303,  -303,   178,   187,   192,   184,
     182,     7,   185,    82,    22,   144,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,   219,  -303,   222,  -303,     1,  -303,     1,
    -303,     1,  -303,     1,   314,  -303,  -303,   194,     1,   108,
       1,   127,   226,  -303,     1,   233,   231,   536,   235,    99,
    -303,  -303,  -303,  -303,  -303,  -303,   567,   741,   214,   741,
     741,   741,   741,   741,  -303,  -303,  -303,   772,   772,   772,
     772,   772,   772,   772,   772,   772,   772,   772,   772,   772,
     772,   772,   772,   772,   772,  -303,  -303,  -303,  -303,  -303,
    -303,   237,   252,   255,   521,   256,   265,   266,   617,   198,
     274,   288,  -303,  -303,   581,   -17,  -303,  -303,  -303,  -303,
    -303,   290,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,     1,  -303,     1,  -303,
    -303,   648,   679,  -303,  -303,   128,  -303,   741,   264,  -303,
     131,   297,   -18,  -303,  -303,  -303,  -303,  -303,   187,   192,
     184,   182,     7,   185,   185,    82,    82,    82,    82,    22,
      22,   144,   144,  -303,  -303,  -303,   741,   741,   382,   581,
     327,   741,  -303,  -303,  -303,   305,   741,   741,   741,   277,
     310,    12,  -303,  -303,  -303,  -303,   132,   313,  -303,   741,
     317,   319,  -303,   322,   710,   741,   336,   337,   -16,  -303,
     339,   323,   345,  -303,   346,   349,   348,   -18,   318,  -303,
     741,  -303,  -303,  -303,  -303,   741,  -303,   150,  -303,   521,
     521,   344,   741,   741,   367,   364,   365,   322,   362,   369,
    -303,  -303,   391,  -303,   741,   377,  -303,   383,  -303,  -303,
    -303,   393,  -303,   521,  -303,   -22,   380,     2,   504,  -303,
    -303,   387,  -303,   741,   408,  -303,  -303,   168,  -303,   398,
     521,   409,  -303,   350,  -303,   679,  -303,  -303,   416,   414,
    -303
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,     0,     0,    21,    22,    23,    24,    25,     0,
       2,     3,     5,     6,     0,    19,    11,    15,     1,     4,
       0,     0,    20,     0,    13,     0,     0,    11,    15,    12,
       0,     0,    17,    16,    35,    13,     0,    14,    27,     0,
       0,     0,    35,     0,    18,     0,    63,    64,    65,    66,
      67,    68,    10,    69,    36,     0,    27,     0,    21,    22,
      23,     0,     8,    69,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     7,     0,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    57,    56,    58,     0,     0,     0,    61,     0,
       0,    31,     0,     0,     0,     0,   173,   174,   184,   182,
     183,     0,     0,     0,     0,     0,     0,     0,   177,   181,
     178,   179,   180,     0,   121,   122,   130,   131,   133,   135,
     137,   139,   141,   144,   149,   152,   155,   159,   166,   172,
     176,   171,    40,     0,    38,     0,    50,     0,    52,     0,
      54,     0,    48,     0,     0,    55,    60,    70,     0,     0,
       0,     0,     0,    46,     0,    69,     0,     0,     0,   177,
     162,   163,   160,   161,   164,   165,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   168,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    37,    49,    51,    53,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    80,    69,     0,    79,    73,    74,    75,
      81,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    92,    94,    93,    62,    44,     0,    42,     0,    32,
      45,     0,     0,   193,   194,     0,   175,     0,     0,   189,
       0,     0,   170,   123,   124,   125,   126,   127,   132,   134,
     136,   138,   140,   142,   143,   145,   147,   146,   148,   150,
     151,   153,   154,   156,   157,   158,     0,     0,    99,     0,
       0,     0,   115,   116,   117,     0,     0,     0,     0,     0,
       0,     0,    91,    43,    41,   186,     0,     0,   192,     0,
       0,   170,   188,   169,     0,     0,     0,     0,     0,   101,
       0,     0,     0,   118,     0,     0,     0,     0,    70,    76,
       0,   185,   187,   195,   169,     0,   191,     0,   129,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
     128,   190,    95,    97,     0,     0,   103,     0,   108,   119,
     120,     0,    77,     0,   100,   104,     0,     0,     0,    96,
     105,     0,   106,     0,     0,   107,   109,    72,   111,     0,
       0,     0,   114,   110,   112,     0,    98,   113,     0,     0,
      78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,  -303,  -303,   452,  -303,  -303,   436,   433,   448,   447,
     -21,    -6,   423,  -303,  -303,   444,  -303,  -303,   -60,   173,
     371,   -40,  -167,    91,  -303,  -303,  -230,  -303,  -302,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
      92,  -303,  -303,  -303,  -303,   -97,  -172,  -303,  -303,   283,
     285,   286,   282,   293,     5,    90,    16,    20,   -96,  -303,
    -303,  -303,  -161,  -156,  -191
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,    24,    31,    26,    33,
      14,    15,    43,    65,    66,    40,    54,    67,   113,    91,
      92,    93,   114,   174,   247,   248,   249,   250,   251,   252,
     253,   254,   340,   375,   391,   255,   256,   387,   396,   397,
     398,   257,   258,   259,   260,   274,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   275
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   143,   261,    68,   310,   280,   339,   246,    22,   125,
     115,   239,    16,   262,    17,    70,   116,    55,   263,    70,
      70,   334,    64,   117,    80,   182,   320,    70,   393,   394,
      18,   335,    68,    23,   188,    25,   190,   191,   192,   193,
     194,   195,   111,   166,   395,   168,   112,   170,    71,   172,
      27,    64,    81,    95,   309,   175,   118,   349,    22,   321,
     361,   350,   261,   183,    96,   120,    28,   246,   212,   213,
      97,   121,    29,   262,    98,   122,   220,   221,   263,    30,
     326,    34,     1,   390,    32,   186,    38,    58,    59,    60,
       7,     8,    61,    46,    47,    48,    49,    50,    51,    39,
     281,    42,   283,   284,   285,   286,   287,   227,   163,   228,
     165,   229,    44,   230,   116,    56,   116,   167,   265,    69,
     267,    62,    74,   116,   270,   169,   303,   304,   305,   372,
     373,   116,    75,   171,   245,    76,   261,    77,   196,   116,
      78,   315,   277,   357,   173,   184,   278,   262,   266,    82,
     116,   116,   263,   389,   116,    63,   218,   219,   204,   205,
      45,    46,    47,    48,    49,    50,    51,   268,   328,    83,
     406,   332,   351,   116,   329,   327,    84,   329,   329,    86,
     330,    46,    47,    48,    49,    50,    51,   261,   261,    52,
     371,    87,   246,   246,   393,   394,   329,    88,   262,   262,
     222,   223,   224,   263,   263,    89,   323,    90,   324,   336,
     337,   261,    94,   261,   342,   119,   246,   293,   294,   344,
     345,   346,   262,    53,   262,   162,   164,   263,   261,   263,
     177,   261,   353,   246,   299,   300,   246,   187,   358,   262,
     301,   302,   262,    53,   263,   206,   207,   263,   214,   215,
     216,   217,   211,   369,   208,   100,   210,   102,   370,   104,
     106,   108,   110,   209,   225,   376,   377,   226,   338,   124,
     264,   269,   271,     1,   272,   276,   306,   384,    58,    59,
      60,     7,     8,    61,    46,    47,    48,    49,    50,    51,
     282,   307,   179,   181,   308,   311,   401,    45,    46,    47,
      48,    49,    50,    51,   295,   296,   297,   298,   408,     1,
     312,   313,    85,   316,     4,     5,     6,     7,     8,    79,
      46,    47,    48,    49,    50,    51,    73,   317,    46,    47,
      48,    49,    50,    51,   231,   322,   232,   233,   234,   235,
     331,   333,   236,   237,   238,   125,    63,   239,   399,   341,
     343,   240,   241,   347,   348,   111,   242,   352,   334,   243,
      53,   354,   363,   245,    46,    47,    48,    49,    50,    51,
     231,   355,   232,   233,   234,   235,   359,   360,   236,   237,
     238,   125,    53,   239,   362,   364,   365,   240,   241,   366,
     244,   111,   367,   374,   368,   243,    46,    47,    48,    49,
      50,    51,    46,    47,    48,    49,    50,    51,   378,   379,
     380,   381,   383,   125,   382,   239,    46,    47,    48,    49,
      50,    51,   385,   386,   388,   392,   244,   400,    99,    46,
      47,    48,    49,    50,    51,    46,    47,    48,    49,    50,
      51,   405,   101,    46,    47,    48,    49,    50,    51,    46,
      47,    48,    49,    50,    51,   103,   402,   407,   244,   410,
     409,   105,    19,    35,    53,     1,     2,     3,    41,   107,
       4,     5,     6,     7,     8,   109,    36,    37,    53,    72,
      46,    47,    48,    49,    50,    51,    57,   176,   403,   404,
     288,    53,   291,   289,     0,   290,     0,    53,    46,    47,
      48,    49,    50,    51,   292,    53,   123,     0,     0,     0,
       0,    53,    46,    47,    48,    49,    50,    51,    46,    47,
      48,    49,    50,    51,   178,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,   180,     0,
       0,   231,    53,   232,   233,   234,   235,     0,     0,   236,
     237,   238,   125,     0,   239,     0,     0,     0,   240,   241,
      53,     0,   111,     0,     0,     0,   243,   125,   126,   127,
     128,   129,   130,     0,    53,   131,   273,     1,    20,    21,
      53,     0,     4,     5,     6,     7,     8,   185,     0,     0,
     132,   133,     0,     0,     0,   134,   135,   309,   125,   126,
     127,   128,   129,   130,     0,   136,   131,   279,     0,   137,
       0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
     196,   132,   133,     0,   318,     0,   134,   135,   319,     0,
     199,   200,   201,   202,   203,     0,   136,     0,     0,     0,
     137,     0,     0,   138,   139,   140,   141,   142,   125,   126,
     127,   128,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,   314,     0,     0,     0,     0,     0,     0,     0,
       0,   132,   133,     0,     0,     0,   134,   135,     0,   125,
     126,   127,   128,   129,   130,     0,   136,   131,   325,     0,
     137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
       0,     0,   132,   133,     0,     0,     0,   134,   135,     0,
     125,   126,   127,   128,   129,   130,     0,   136,   131,     0,
       0,   137,     0,    83,   138,   139,   140,   141,   142,     0,
       0,     0,     0,   132,   133,     0,     0,     0,   134,   135,
       0,   125,   126,   127,   128,   129,   130,     0,   136,   131,
     356,     0,   137,     0,     0,   138,   139,   140,   141,   142,
       0,     0,     0,     0,   132,   133,     0,     0,     0,   134,
     135,     0,   125,   126,   127,   128,   129,   130,     0,   136,
     131,     0,     0,   137,     0,     0,   138,   139,   140,   141,
     142,     0,     0,     0,     0,   132,   133,     0,     0,     0,
     134,   135,     0,   125,   126,   127,   128,   129,   130,     0,
     136,   131,     0,     0,   137,     0,     0,   138,   139,   140,
     141,   142,     0,     0,     0,     0,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,     0,     0,   137,     0,     0,   189,   139,
     140,   141,   142,   196,     0,     0,     0,   197,     0,     0,
       0,   198,     0,   199,   200,   201,   202,   203,     0,     0,
       0,     0,     0,   204,   205
};

static const yytype_int16 yycheck[] =
{
      40,    98,   174,    43,   234,   196,   308,   174,    14,    31,
      40,    33,    76,   174,    76,    43,    46,    57,   174,    43,
      43,    39,    43,    43,    64,   122,    43,    43,    26,    27,
       0,    49,    72,     6,   131,     6,   132,   133,   134,   135,
     136,   137,    41,   103,    42,   105,    45,   107,    76,   109,
      76,    72,    76,    76,    76,   115,    76,    45,    64,    76,
      76,    49,   234,   123,    39,    39,    76,   234,    61,    62,
      45,    45,    76,   234,    49,    49,    54,    55,   234,     7,
     271,    41,     3,   385,    76,   125,    41,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    46,
     197,    41,   199,   200,   201,   202,   203,   167,    40,   169,
      40,   171,    76,   173,    46,    41,    46,    40,   178,    76,
     180,    42,    76,    46,   184,    40,   222,   223,   224,   359,
     360,    46,    76,    40,   174,    76,   308,    76,    39,    46,
      39,   238,    43,   334,    40,    40,    47,   308,    40,    39,
      46,    46,   308,   383,    46,    76,    74,    75,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    40,    40,    44,
     400,    40,    40,    46,    46,   272,    39,    46,    46,    39,
     277,    14,    15,    16,    17,    18,    19,   359,   360,    42,
      40,    39,   359,   360,    26,    27,    46,    39,   359,   360,
      56,    57,    58,   359,   360,    39,   266,    40,   268,   306,
     307,   383,    76,   385,   311,    39,   383,   212,   213,   316,
     317,   318,   383,    76,   385,    45,    45,   383,   400,   385,
      44,   403,   329,   400,   218,   219,   403,    39,   335,   400,
     220,   221,   403,    76,   400,    45,    68,   403,    63,    64,
      65,    66,    70,   350,    67,    82,    72,    84,   355,    86,
      87,    88,    89,    71,    45,   362,   363,    45,   308,    96,
      76,    45,    39,     3,    43,    40,    39,   374,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      76,    39,   119,   120,    39,    39,   393,    13,    14,    15,
      16,    17,    18,    19,   214,   215,   216,   217,   405,     3,
      45,    45,    42,    39,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    42,    39,    14,    15,
      16,    17,    18,    19,    20,    45,    22,    23,    24,    25,
      76,    44,    28,    29,    30,    31,    76,    33,   388,    22,
      45,    37,    38,    76,    44,    41,    42,    44,    39,    45,
      76,    44,    39,   403,    14,    15,    16,    17,    18,    19,
      20,    49,    22,    23,    24,    25,    40,    40,    28,    29,
      30,    31,    76,    33,    45,    40,    40,    37,    38,    40,
      76,    41,    44,    49,    76,    45,    14,    15,    16,    17,
      18,    19,    14,    15,    16,    17,    18,    19,    41,    45,
      45,    49,    21,    31,    45,    33,    14,    15,    16,    17,
      18,    19,    45,    40,    31,    45,    76,    40,    40,    14,
      15,    16,    17,    18,    19,    14,    15,    16,    17,    18,
      19,    43,    40,    14,    15,    16,    17,    18,    19,    14,
      15,    16,    17,    18,    19,    40,    48,    48,    76,    45,
      44,    40,    10,    27,    76,     3,     4,     5,    35,    40,
       8,     9,    10,    11,    12,    40,    28,    30,    76,    56,
      14,    15,    16,    17,    18,    19,    42,   116,   397,   397,
     207,    76,   210,   208,    -1,   209,    -1,    76,    14,    15,
      16,    17,    18,    19,   211,    76,    40,    -1,    -1,    -1,
      -1,    76,    14,    15,    16,    17,    18,    19,    14,    15,
      16,    17,    18,    19,    40,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    20,    76,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    37,    38,
      76,    -1,    41,    -1,    -1,    -1,    45,    31,    32,    33,
      34,    35,    36,    -1,    76,    39,    40,     3,     4,     5,
      76,    -1,     8,     9,    10,    11,    12,    76,    -1,    -1,
      54,    55,    -1,    -1,    -1,    59,    60,    76,    31,    32,
      33,    34,    35,    36,    -1,    69,    39,    40,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      39,    54,    55,    -1,    43,    -1,    59,    60,    47,    -1,
      49,    50,    51,    52,    53,    -1,    69,    -1,    -1,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    59,    60,    -1,    31,
      32,    33,    34,    35,    36,    -1,    69,    39,    40,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    59,    60,    -1,
      31,    32,    33,    34,    35,    36,    -1,    69,    39,    -1,
      -1,    73,    -1,    44,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,    60,
      -1,    31,    32,    33,    34,    35,    36,    -1,    69,    39,
      40,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,
      60,    -1,    31,    32,    33,    34,    35,    36,    -1,    69,
      39,    -1,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      59,    60,    -1,    31,    32,    33,    34,    35,    36,    -1,
      69,    39,    -1,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    39,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     8,     9,    10,    11,    12,    82,
      83,    84,    85,    86,    91,    92,    76,    76,     0,    84,
       4,     5,    92,     6,    87,     6,    89,    76,    76,    76,
       7,    88,    76,    90,    41,    87,    89,    90,    41,    46,
      96,    88,    41,    93,    76,    13,    14,    15,    16,    17,
      18,    19,    42,    76,    97,   102,    41,    96,     8,     9,
      10,    13,    42,    76,    91,    94,    95,    98,   102,    76,
      43,    76,    93,    42,    76,    76,    76,    76,    39,    13,
     102,    76,    39,    44,    39,    42,    39,    39,    39,    39,
      40,   100,   101,   102,    76,    76,    39,    45,    49,    40,
     100,    40,   100,    40,   100,    40,   100,    40,   100,    40,
     100,    41,    45,    99,   103,    40,    46,    43,    76,    39,
      39,    45,    49,    40,   100,    31,    32,    33,    34,    35,
      36,    39,    54,    55,    59,    60,    69,    73,    76,    77,
      78,    79,    80,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    45,    40,    45,    40,    99,    40,    99,    40,
      99,    40,    99,    40,   104,    99,   101,    44,    40,   100,
      40,   100,   126,    99,    40,    76,   102,    39,   126,    76,
     139,   139,   139,   139,   139,   139,    39,    43,    47,    49,
      50,    51,    52,    53,    59,    60,    45,    68,    67,    71,
      72,    70,    61,    62,    63,    64,    65,    66,    74,    75,
      54,    55,    56,    57,    58,    45,    45,    99,    99,    99,
      99,    20,    22,    23,    24,    25,    28,    29,    30,    33,
      37,    38,    42,    45,    76,   102,   103,   105,   106,   107,
     108,   109,   110,   111,   112,   116,   117,   122,   123,   124,
     125,   127,   143,   144,    76,    99,    40,    99,    40,    45,
      99,    39,    43,    40,   126,   145,    40,    43,    47,    40,
     145,   126,    76,   126,   126,   126,   126,   126,   130,   131,
     132,   133,   134,   135,   135,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,    39,    39,    39,    76,
     107,    39,    45,    45,    45,   126,    39,    39,    43,    47,
      43,    76,    45,    99,    99,    40,   145,   126,    40,    46,
     126,    76,    40,    44,    39,    49,   126,   126,   102,   109,
     113,    22,   126,    45,   126,   126,   126,    76,    44,    45,
      49,    40,    44,   126,    44,    49,    40,   145,   126,    40,
      40,    76,    45,    39,    40,    40,    40,    44,    76,   126,
     126,    40,   107,   107,    49,   114,   126,   126,    41,    45,
      45,    49,    45,    21,   126,    45,    40,   118,    31,   107,
     109,   115,    45,    26,    27,    42,   119,   120,   121,   102,
      40,   126,    48,   104,   121,    43,   107,    48,   126,    44,
      45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    95,    95,    96,    96,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   103,   104,   104,   105,   105,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   109,   109,   109,   110,   110,   111,   112,   113,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   118,
     119,   120,   120,   121,   121,   122,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   136,
     136,   136,   137,   137,   137,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   142,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   145,   145
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     8,     7,     7,
       6,     0,     2,     0,     2,     0,     2,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     4,     6,     3,     5,     0,     2,     6,     5,     6,
       5,     7,     6,     7,     6,     6,     5,     6,     5,     6,
       5,     6,     5,     6,     5,     5,     4,     1,     1,     1,
       3,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     0,     2,     1,     1,     3,     5,    11,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     5,     7,     5,     9,     0,
       4,     1,     0,     1,     0,     1,     7,     7,     0,     2,
       2,     1,     2,     3,     2,     2,     2,     2,     3,     5,
       5,     1,     1,     3,     3,     3,     3,     3,     6,     5,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     4,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     5,     4,     3,
       6,     5,     4,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: compilation_unit_list  */
#line 61 "java.y"
    {
        if (parse_success) {
            printf("\n✓ Java program parsed successfully!\n");
        }
    }
#line 1612 "java.tab.c"
    break;

  case 7: /* class_declaration: modifiers CLASS IDENTIFIER extends_clause implements_clause LBRACE class_body_declarations RBRACE  */
#line 82 "java.y"
    {
        printf("✓ Class '%s' parsed\n", (yyvsp[-5].str));
        free((yyvsp[-5].str));
    }
#line 1621 "java.tab.c"
    break;

  case 8: /* class_declaration: CLASS IDENTIFIER extends_clause implements_clause LBRACE class_body_declarations RBRACE  */
#line 87 "java.y"
    {
        printf("✓ Class '%s' parsed\n", (yyvsp[-5].str));
        free((yyvsp[-5].str));
    }
#line 1630 "java.tab.c"
    break;

  case 9: /* interface_declaration: modifiers INTERFACE IDENTIFIER extends_interfaces LBRACE interface_body_declarations RBRACE  */
#line 95 "java.y"
    {
        printf("✓ Interface '%s' parsed\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1639 "java.tab.c"
    break;

  case 10: /* interface_declaration: INTERFACE IDENTIFIER extends_interfaces LBRACE interface_body_declarations RBRACE  */
#line 100 "java.y"
    {
        printf("✓ Interface '%s' parsed\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1648 "java.tab.c"
    break;

  case 12: /* extends_clause: EXTENDS IDENTIFIER  */
#line 108 "java.y"
                         { free((yyvsp[0].str)); }
#line 1654 "java.tab.c"
    break;

  case 17: /* type_list: IDENTIFIER  */
#line 122 "java.y"
               { free((yyvsp[0].str)); }
#line 1660 "java.tab.c"
    break;

  case 18: /* type_list: type_list COMMA IDENTIFIER  */
#line 123 "java.y"
                                 { free((yyvsp[0].str)); }
#line 1666 "java.tab.c"
    break;

  case 31: /* field_declaration: modifiers type IDENTIFIER SEMICOLON  */
#line 151 "java.y"
    {
        printf("  - Field: %s %s\n", (yyvsp[-2].str), (yyvsp[-1].str));
        free((yyvsp[-2].str)); free((yyvsp[-1].str));
    }
#line 1675 "java.tab.c"
    break;

  case 32: /* field_declaration: modifiers type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 156 "java.y"
    {
        printf("  - Field: %s %s = ...\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1684 "java.tab.c"
    break;

  case 33: /* field_declaration: type IDENTIFIER SEMICOLON  */
#line 161 "java.y"
    {
        printf("  - Field: %s %s\n", (yyvsp[-2].str), (yyvsp[-1].str));
        free((yyvsp[-2].str)); free((yyvsp[-1].str));
    }
#line 1693 "java.tab.c"
    break;

  case 34: /* field_declaration: type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 166 "java.y"
    {
        printf("  - Field: %s %s = ...\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1702 "java.tab.c"
    break;

  case 37: /* interface_body_declaration: type IDENTIFIER LPAREN formal_parameter_list RPAREN SEMICOLON  */
#line 181 "java.y"
    {
        printf("  - Method signature: %s %s(...)\n", (yyvsp[-5].str), (yyvsp[-4].str));
        free((yyvsp[-5].str)); free((yyvsp[-4].str));
    }
#line 1711 "java.tab.c"
    break;

  case 38: /* interface_body_declaration: type IDENTIFIER LPAREN RPAREN SEMICOLON  */
#line 186 "java.y"
    {
        printf("  - Method signature: %s %s()\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1720 "java.tab.c"
    break;

  case 39: /* interface_body_declaration: VOID IDENTIFIER LPAREN formal_parameter_list RPAREN SEMICOLON  */
#line 191 "java.y"
    {
        printf("  - Method signature: void %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1729 "java.tab.c"
    break;

  case 40: /* interface_body_declaration: VOID IDENTIFIER LPAREN RPAREN SEMICOLON  */
#line 196 "java.y"
    {
        printf("  - Method signature: void %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1738 "java.tab.c"
    break;

  case 41: /* method_declaration: modifiers type IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 206 "java.y"
    {
        printf("  - Method: %s %s(...)\n", (yyvsp[-5].str), (yyvsp[-4].str));
        free((yyvsp[-5].str)); free((yyvsp[-4].str));
    }
#line 1747 "java.tab.c"
    break;

  case 42: /* method_declaration: modifiers type IDENTIFIER LPAREN RPAREN method_body  */
#line 211 "java.y"
    {
        printf("  - Method: %s %s()\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1756 "java.tab.c"
    break;

  case 43: /* method_declaration: modifiers VOID IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 216 "java.y"
    {
        printf("  - Method: void %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1765 "java.tab.c"
    break;

  case 44: /* method_declaration: modifiers VOID IDENTIFIER LPAREN RPAREN method_body  */
#line 221 "java.y"
    {
        printf("  - Method: void %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1774 "java.tab.c"
    break;

  case 45: /* method_declaration: type IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 226 "java.y"
    {
        printf("  - Method: %s %s(...)\n", (yyvsp[-5].str), (yyvsp[-4].str));
        free((yyvsp[-5].str)); free((yyvsp[-4].str));
    }
#line 1783 "java.tab.c"
    break;

  case 46: /* method_declaration: type IDENTIFIER LPAREN RPAREN method_body  */
#line 231 "java.y"
    {
        printf("  - Method: %s %s()\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1792 "java.tab.c"
    break;

  case 47: /* method_declaration: VOID IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 236 "java.y"
    {
        printf("  - Method: void %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1801 "java.tab.c"
    break;

  case 48: /* method_declaration: VOID IDENTIFIER LPAREN RPAREN method_body  */
#line 241 "java.y"
    {
        printf("  - Method: void %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1810 "java.tab.c"
    break;

  case 49: /* method_declaration: PUBLIC IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 246 "java.y"
    {
        printf("  - Constructor: %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1819 "java.tab.c"
    break;

  case 50: /* method_declaration: PUBLIC IDENTIFIER LPAREN RPAREN method_body  */
#line 251 "java.y"
    {
        printf("  - Constructor: %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1828 "java.tab.c"
    break;

  case 51: /* method_declaration: PRIVATE IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 256 "java.y"
    {
        printf("  - Constructor: %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1837 "java.tab.c"
    break;

  case 52: /* method_declaration: PRIVATE IDENTIFIER LPAREN RPAREN method_body  */
#line 261 "java.y"
    {
        printf("  - Constructor: %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1846 "java.tab.c"
    break;

  case 53: /* method_declaration: PROTECTED IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 266 "java.y"
    {
        printf("  - Constructor: %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1855 "java.tab.c"
    break;

  case 54: /* method_declaration: PROTECTED IDENTIFIER LPAREN RPAREN method_body  */
#line 271 "java.y"
    {
        printf("  - Constructor: %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1864 "java.tab.c"
    break;

  case 55: /* method_declaration: IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 276 "java.y"
    {
        printf("  - Constructor: %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1873 "java.tab.c"
    break;

  case 56: /* method_declaration: IDENTIFIER LPAREN RPAREN method_body  */
#line 281 "java.y"
    {
        printf("  - Constructor: %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1882 "java.tab.c"
    break;

  case 61: /* formal_parameter: type IDENTIFIER  */
#line 298 "java.y"
                    { free((yyvsp[-1].str)); free((yyvsp[0].str)); }
#line 1888 "java.tab.c"
    break;

  case 62: /* formal_parameter: type LBRACKET RBRACKET IDENTIFIER  */
#line 299 "java.y"
                                        { free((yyvsp[-3].str)); free((yyvsp[0].str)); }
#line 1894 "java.tab.c"
    break;

  case 63: /* type: INT  */
#line 305 "java.y"
        { (yyval.str) = strdup("int"); }
#line 1900 "java.tab.c"
    break;

  case 64: /* type: FLOAT  */
#line 306 "java.y"
            { (yyval.str) = strdup("float"); }
#line 1906 "java.tab.c"
    break;

  case 65: /* type: DOUBLE  */
#line 307 "java.y"
             { (yyval.str) = strdup("double"); }
#line 1912 "java.tab.c"
    break;

  case 66: /* type: CHAR  */
#line 308 "java.y"
           { (yyval.str) = strdup("char"); }
#line 1918 "java.tab.c"
    break;

  case 67: /* type: BOOLEAN  */
#line 309 "java.y"
              { (yyval.str) = strdup("boolean"); }
#line 1924 "java.tab.c"
    break;

  case 68: /* type: STRING  */
#line 310 "java.y"
             { (yyval.str) = strdup("String"); }
#line 1930 "java.tab.c"
    break;

  case 69: /* type: IDENTIFIER  */
#line 311 "java.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1936 "java.tab.c"
    break;

  case 70: /* type: type LBRACKET RBRACKET  */
#line 312 "java.y"
                             { (yyval.str) = (yyvsp[-2].str); }
#line 1942 "java.tab.c"
    break;

  case 76: /* local_variable_declaration: type IDENTIFIER SEMICOLON  */
#line 333 "java.y"
    {
        printf("    Variable: %s %s\n", (yyvsp[-2].str), (yyvsp[-1].str));
        free((yyvsp[-2].str)); free((yyvsp[-1].str));
    }
#line 1951 "java.tab.c"
    break;

  case 77: /* local_variable_declaration: type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 338 "java.y"
    {
        printf("    Variable: %s %s = ...\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1960 "java.tab.c"
    break;

  case 78: /* local_variable_declaration: type LBRACKET RBRACKET IDENTIFIER ASSIGN NEW type LBRACKET expression RBRACKET SEMICOLON  */
#line 343 "java.y"
    {
        printf("    Array: %s[] %s = new %s[...]\n", (yyvsp[-10].str), (yyvsp[-7].str), (yyvsp[-4].str));
        free((yyvsp[-10].str)); free((yyvsp[-7].str)); free((yyvsp[-4].str));
    }
#line 1969 "java.tab.c"
    break;

  case 95: /* if_statement: IF LPAREN expression RPAREN statement  */
#line 376 "java.y"
    {
        printf("    If statement\n");
    }
#line 1977 "java.tab.c"
    break;

  case 96: /* if_statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 380 "java.y"
    {
        printf("    If-else statement\n");
    }
#line 1985 "java.tab.c"
    break;

  case 97: /* while_statement: WHILE LPAREN expression RPAREN statement  */
#line 387 "java.y"
    {
        printf("    While loop\n");
    }
#line 1993 "java.tab.c"
    break;

  case 98: /* for_statement: FOR LPAREN for_init SEMICOLON for_condition SEMICOLON for_update RPAREN statement  */
#line 394 "java.y"
    {
        printf("    For loop\n");
    }
#line 2001 "java.tab.c"
    break;

  case 100: /* for_init: type IDENTIFIER ASSIGN expression  */
#line 401 "java.y"
                                        { free((yyvsp[-3].str)); free((yyvsp[-2].str)); }
#line 2007 "java.tab.c"
    break;

  case 106: /* do_statement: DO statement WHILE LPAREN expression RPAREN SEMICOLON  */
#line 417 "java.y"
    {
        printf("    Do-while loop\n");
    }
#line 2015 "java.tab.c"
    break;

  case 107: /* switch_statement: SWITCH LPAREN expression RPAREN LBRACE switch_block_statement_groups RBRACE  */
#line 424 "java.y"
    {
        printf("    Switch statement\n");
    }
#line 2023 "java.tab.c"
    break;

  case 113: /* switch_label: CASE expression COLON  */
#line 445 "java.y"
    {
        printf("      Case label\n");
    }
#line 2031 "java.tab.c"
    break;

  case 114: /* switch_label: DEFAULT COLON  */
#line 449 "java.y"
    {
        printf("      Default label\n");
    }
#line 2039 "java.tab.c"
    break;

  case 115: /* break_statement: BREAK SEMICOLON  */
#line 456 "java.y"
    {
        printf("    Break\n");
    }
#line 2047 "java.tab.c"
    break;

  case 116: /* continue_statement: CONTINUE SEMICOLON  */
#line 463 "java.y"
    {
        printf("    Continue\n");
    }
#line 2055 "java.tab.c"
    break;

  case 117: /* return_statement: RETURN SEMICOLON  */
#line 470 "java.y"
    {
        printf("    Return\n");
    }
#line 2063 "java.tab.c"
    break;

  case 118: /* return_statement: RETURN expression SEMICOLON  */
#line 474 "java.y"
    {
        printf("    Return value\n");
    }
#line 2071 "java.tab.c"
    break;

  case 119: /* print_statement: PRINTLN LPAREN expression RPAREN SEMICOLON  */
#line 481 "java.y"
    {
        printf("    System.out.println(...)\n");
    }
#line 2079 "java.tab.c"
    break;

  case 120: /* print_statement: PRINT LPAREN expression RPAREN SEMICOLON  */
#line 485 "java.y"
    {
        printf("    System.out.print(...)\n");
    }
#line 2087 "java.tab.c"
    break;

  case 123: /* assignment: IDENTIFIER ASSIGN expression  */
#line 498 "java.y"
                                 { free((yyvsp[-2].str)); }
#line 2093 "java.tab.c"
    break;

  case 124: /* assignment: IDENTIFIER PLUS_ASSIGN expression  */
#line 499 "java.y"
                                        { free((yyvsp[-2].str)); }
#line 2099 "java.tab.c"
    break;

  case 125: /* assignment: IDENTIFIER MINUS_ASSIGN expression  */
#line 500 "java.y"
                                         { free((yyvsp[-2].str)); }
#line 2105 "java.tab.c"
    break;

  case 126: /* assignment: IDENTIFIER MULT_ASSIGN expression  */
#line 501 "java.y"
                                        { free((yyvsp[-2].str)); }
#line 2111 "java.tab.c"
    break;

  case 127: /* assignment: IDENTIFIER DIV_ASSIGN expression  */
#line 502 "java.y"
                                       { free((yyvsp[-2].str)); }
#line 2117 "java.tab.c"
    break;

  case 128: /* assignment: IDENTIFIER LBRACKET expression RBRACKET ASSIGN expression  */
#line 503 "java.y"
                                                                { free((yyvsp[-5].str)); }
#line 2123 "java.tab.c"
    break;

  case 129: /* assignment: IDENTIFIER DOT IDENTIFIER ASSIGN expression  */
#line 504 "java.y"
                                                  { free((yyvsp[-4].str)); free((yyvsp[-2].str)); }
#line 2129 "java.tab.c"
    break;

  case 167: /* postfix_expression: IDENTIFIER INCREMENT  */
#line 581 "java.y"
                           { free((yyvsp[-1].str)); }
#line 2135 "java.tab.c"
    break;

  case 168: /* postfix_expression: IDENTIFIER DECREMENT  */
#line 582 "java.y"
                           { free((yyvsp[-1].str)); }
#line 2141 "java.tab.c"
    break;

  case 169: /* postfix_expression: IDENTIFIER LBRACKET expression RBRACKET  */
#line 583 "java.y"
                                              { free((yyvsp[-3].str)); }
#line 2147 "java.tab.c"
    break;

  case 170: /* postfix_expression: IDENTIFIER DOT IDENTIFIER  */
#line 584 "java.y"
                                { free((yyvsp[-2].str)); free((yyvsp[0].str)); }
#line 2153 "java.tab.c"
    break;

  case 177: /* primary: IDENTIFIER  */
#line 594 "java.y"
                 { free((yyvsp[0].str)); }
#line 2159 "java.tab.c"
    break;

  case 181: /* literal: STRING_LITERAL  */
#line 601 "java.y"
                     { free((yyvsp[0].str)); }
#line 2165 "java.tab.c"
    break;

  case 185: /* class_instance_creation: NEW IDENTIFIER LPAREN argument_list RPAREN  */
#line 608 "java.y"
                                               { free((yyvsp[-3].str)); }
#line 2171 "java.tab.c"
    break;

  case 186: /* class_instance_creation: NEW IDENTIFIER LPAREN RPAREN  */
#line 609 "java.y"
                                   { free((yyvsp[-2].str)); }
#line 2177 "java.tab.c"
    break;

  case 187: /* class_instance_creation: NEW type LBRACKET expression RBRACKET  */
#line 610 "java.y"
                                            { free((yyvsp[-3].str)); }
#line 2183 "java.tab.c"
    break;

  case 188: /* method_invocation: IDENTIFIER LPAREN argument_list RPAREN  */
#line 614 "java.y"
                                           { free((yyvsp[-3].str)); }
#line 2189 "java.tab.c"
    break;

  case 189: /* method_invocation: IDENTIFIER LPAREN RPAREN  */
#line 615 "java.y"
                               { free((yyvsp[-2].str)); }
#line 2195 "java.tab.c"
    break;

  case 190: /* method_invocation: IDENTIFIER DOT IDENTIFIER LPAREN argument_list RPAREN  */
#line 616 "java.y"
                                                            { free((yyvsp[-5].str)); free((yyvsp[-3].str)); }
#line 2201 "java.tab.c"
    break;

  case 191: /* method_invocation: IDENTIFIER DOT IDENTIFIER LPAREN RPAREN  */
#line 617 "java.y"
                                              { free((yyvsp[-4].str)); free((yyvsp[-2].str)); }
#line 2207 "java.tab.c"
    break;


#line 2211 "java.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 627 "java.y"


void yyerror(const char *s) {
    fprintf(stderr, "✗ Parse error at line %d: %s\n", yylineno, s);
    parse_success = 0;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <filename.java>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    yyin = file;
    printf("\n========================================\n");
    printf("  Java Compiler - Parsing: %s\n", argv[1]);
    printf("========================================\n\n");

    int result = yyparse();
    fclose(file);

    if (result == 0 && parse_success) {
        printf("\n========================================\n");
        printf("  ✓ COMPILATION SUCCESSFUL\n");
        printf("========================================\n");
        return 0;
    } else {
        printf("\n========================================\n");
        printf("  ✗ COMPILATION FAILED\n");
        printf("========================================\n");
        return 1;
    }
}
