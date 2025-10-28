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
  YYSYMBOL_constructor_declaration = 95,   /* constructor_declaration  */
  YYSYMBOL_field_declaration = 96,         /* field_declaration  */
  YYSYMBOL_interface_body_declarations = 97, /* interface_body_declarations  */
  YYSYMBOL_interface_body_declaration = 98, /* interface_body_declaration  */
  YYSYMBOL_method_declaration = 99,        /* method_declaration  */
  YYSYMBOL_method_body = 100,              /* method_body  */
  YYSYMBOL_formal_parameter_list = 101,    /* formal_parameter_list  */
  YYSYMBOL_formal_parameter = 102,         /* formal_parameter  */
  YYSYMBOL_type = 103,                     /* type  */
  YYSYMBOL_block = 104,                    /* block  */
  YYSYMBOL_block_statements = 105,         /* block_statements  */
  YYSYMBOL_block_statement = 106,          /* block_statement  */
  YYSYMBOL_local_variable_declaration = 107, /* local_variable_declaration  */
  YYSYMBOL_statement = 108,                /* statement  */
  YYSYMBOL_expression_statement = 109,     /* expression_statement  */
  YYSYMBOL_statement_expression = 110,     /* statement_expression  */
  YYSYMBOL_if_statement = 111,             /* if_statement  */
  YYSYMBOL_while_statement = 112,          /* while_statement  */
  YYSYMBOL_for_statement = 113,            /* for_statement  */
  YYSYMBOL_for_init = 114,                 /* for_init  */
  YYSYMBOL_for_condition = 115,            /* for_condition  */
  YYSYMBOL_for_update = 116,               /* for_update  */
  YYSYMBOL_do_statement = 117,             /* do_statement  */
  YYSYMBOL_switch_statement = 118,         /* switch_statement  */
  YYSYMBOL_switch_block_statement_groups = 119, /* switch_block_statement_groups  */
  YYSYMBOL_switch_block_statement_group = 120, /* switch_block_statement_group  */
  YYSYMBOL_switch_labels = 121,            /* switch_labels  */
  YYSYMBOL_switch_label = 122,             /* switch_label  */
  YYSYMBOL_break_statement = 123,          /* break_statement  */
  YYSYMBOL_continue_statement = 124,       /* continue_statement  */
  YYSYMBOL_return_statement = 125,         /* return_statement  */
  YYSYMBOL_print_statement = 126,          /* print_statement  */
  YYSYMBOL_expression = 127,               /* expression  */
  YYSYMBOL_assignment = 128,               /* assignment  */
  YYSYMBOL_conditional_expression = 129,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 130,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 131,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 132,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 133,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 134,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 135,      /* equality_expression  */
  YYSYMBOL_relational_expression = 136,    /* relational_expression  */
  YYSYMBOL_shift_expression = 137,         /* shift_expression  */
  YYSYMBOL_additive_expression = 138,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 139, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 140,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 141,       /* postfix_expression  */
  YYSYMBOL_primary = 142,                  /* primary  */
  YYSYMBOL_literal = 143,                  /* literal  */
  YYSYMBOL_class_instance_creation = 144,  /* class_instance_creation  */
  YYSYMBOL_method_invocation = 145,        /* method_invocation  */
  YYSYMBOL_argument_list = 146             /* argument_list  */
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
#define YYLAST   826

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  405

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
     144,   145,   151,   156,   161,   166,   171,   176,   186,   191,
     196,   201,   210,   212,   216,   221,   226,   231,   241,   246,
     251,   256,   261,   266,   271,   276,   284,   285,   289,   290,
     294,   295,   301,   302,   303,   304,   305,   306,   307,   308,
     314,   317,   319,   323,   324,   328,   333,   338,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     361,   365,   366,   367,   371,   375,   382,   389,   395,   397,
     398,   401,   403,   406,   408,   412,   419,   425,   427,   431,
     435,   436,   440,   444,   451,   458,   465,   469,   476,   480,
     489,   490,   494,   495,   496,   497,   498,   499,   500,   504,
     508,   509,   513,   514,   518,   519,   523,   524,   528,   529,
     533,   534,   535,   539,   540,   541,   542,   543,   547,   548,
     549,   553,   554,   555,   559,   560,   561,   562,   566,   567,
     568,   569,   570,   571,   572,   576,   577,   578,   579,   580,
     581,   585,   586,   587,   588,   589,   590,   594,   595,   596,
     597,   598,   599,   600,   604,   605,   606,   610,   611,   612,
     613,   614,   615,   619,   620
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
  "class_body_declarations", "class_body_declaration",
  "constructor_declaration", "field_declaration",
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

#define YYPACT_NINF (-304)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     634,  -304,   -63,   -52,  -304,  -304,  -304,  -304,  -304,    31,
     634,  -304,  -304,  -304,   669,  -304,    33,    42,  -304,  -304,
     -26,    -9,  -304,    -1,    87,    35,    72,    33,    42,  -304,
      35,    90,  -304,    26,  -304,    87,    98,    26,  -304,    76,
      27,   103,  -304,   187,  -304,    86,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,   -27,  -304,    65,    91,   102,
     107,   110,  -304,   270,  -304,  -304,  -304,  -304,   -22,    70,
     150,   152,   235,  -304,   168,   186,   189,   198,   181,   -21,
     124,   194,  -304,   284,  -304,   333,   379,   385,   396,   230,
     126,   412,  -304,   693,   249,    46,  -304,   -18,   265,    47,
     -15,    68,   -15,   120,   -15,   147,   -15,   178,   423,   429,
    -304,   693,   -15,   190,   139,  -304,   280,  -304,  -304,  -304,
     693,   724,   724,   724,   724,   724,   724,   766,  -304,  -304,
    -304,  -304,   285,  -304,  -304,   257,   267,   266,   269,   268,
      74,    58,   142,    94,   248,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,   299,   459,   301,  -304,  -304,   308,  -304,  -304,
    -304,  -304,   -15,  -304,   -15,  -304,   -15,  -304,   -15,   -15,
     195,   -15,   215,   309,  -304,   -15,   316,   313,   488,   318,
     180,  -304,  -304,  -304,  -304,  -304,  -304,   519,   693,   283,
     693,   693,   693,   693,   693,  -304,  -304,  -304,   724,   724,
     724,   724,   724,   724,   724,   724,   724,   724,   724,   724,
     724,   724,   724,   724,   724,   724,  -304,  -304,   292,  -304,
     298,  -304,  -304,  -304,  -304,  -304,   -15,  -304,   -15,  -304,
    -304,   550,   581,  -304,  -304,   216,  -304,   693,   303,  -304,
     218,   337,    56,  -304,  -304,  -304,  -304,  -304,   267,   266,
     269,   268,    74,    58,    58,   142,   142,   142,   142,    94,
      94,   248,   248,  -304,  -304,  -304,  -304,   343,   344,   348,
     473,   350,   341,   345,   631,   280,   352,   366,  -304,  -304,
     487,   -16,  -304,  -304,  -304,  -304,  -304,   361,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,   219,   363,  -304,   693,   364,   377,  -304,
     368,   662,   693,   693,   693,   101,   487,   398,   693,  -304,
    -304,  -304,   373,   693,   693,   693,   346,   380,     2,  -304,
    -304,  -304,  -304,  -304,   693,  -304,   228,  -304,   381,   392,
     -14,  -304,   388,   395,   409,  -304,   410,   411,   391,    56,
     384,  -304,   693,  -304,  -304,   473,   473,   404,   693,   693,
     424,   419,   421,   368,   418,   425,   447,  -304,   693,   426,
    -304,   441,  -304,  -304,  -304,   451,  -304,   473,  -304,   -13,
     438,    62,   459,  -304,  -304,   444,  -304,   693,   437,  -304,
    -304,   245,  -304,   443,   473,   439,  -304,   347,  -304,   581,
    -304,  -304,   445,   446,  -304
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,     0,     0,    21,    22,    23,    24,    25,     0,
       2,     3,     5,     6,     0,    19,    11,    15,     1,     4,
       0,     0,    20,     0,    13,     0,     0,    11,    15,    12,
       0,     0,    17,    16,    42,    13,     0,    14,    27,     0,
       0,     0,    42,     0,    18,     0,    62,    63,    64,    65,
      66,    67,    10,    68,    43,     0,    27,     0,    21,    22,
      23,     0,     8,     0,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     7,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,   172,   173,   183,   181,   182,
       0,     0,     0,     0,     0,     0,     0,   176,   180,   177,
     178,   179,     0,   120,   121,   129,   130,   132,   134,   136,
     138,   140,   143,   148,   151,   154,   158,   165,   171,   175,
     170,    47,     0,     0,     0,    60,    45,     0,    71,    56,
      33,    57,     0,    35,     0,    37,     0,    55,     0,     0,
       0,     0,     0,     0,    53,     0,    68,     0,     0,     0,
     176,   161,   162,   159,   160,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    59,    69,    44,
       0,    32,    34,    36,    54,    51,     0,    49,     0,    39,
      52,     0,     0,   192,   193,     0,   174,     0,     0,   188,
       0,     0,   169,   122,   123,   124,   125,   126,   131,   133,
     135,   137,   139,   141,   142,   144,   146,   145,   147,   149,
     150,   152,   153,   155,   156,   157,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    79,
      68,     0,    78,    72,    73,    74,    80,     0,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    93,    92,
      50,    48,   185,     0,     0,   191,     0,     0,   169,   187,
     168,     0,     0,     0,     0,    98,     0,     0,     0,   114,
     115,   116,     0,     0,     0,     0,     0,     0,     0,    90,
     184,   186,   194,   168,     0,   190,     0,   128,     0,     0,
       0,   100,     0,     0,     0,   117,     0,     0,     0,     0,
      69,    75,     0,   127,   189,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,    94,    96,     0,     0,
     102,     0,   107,   118,   119,     0,    76,     0,    99,   103,
       0,     0,     0,    95,   104,     0,   105,     0,     0,   106,
     108,    71,   110,     0,     0,     0,   113,   109,   111,     0,
      97,   112,     0,     0,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -304,  -304,  -304,   480,  -304,  -304,   465,   472,   466,   470,
      13,    -4,   452,  -304,  -304,  -304,   467,  -304,  -304,   -98,
     371,   359,   -40,  -213,   122,  -304,  -304,  -265,  -304,  -303,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,   125,  -304,  -304,  -304,  -304,   -92,  -218,  -304,  -304,
     317,   326,   329,   330,   315,    93,    85,    99,   121,   -88,
    -304,  -304,  -304,  -209,  -205,  -178
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,    24,    31,    26,    33,
      14,    15,    43,    64,    65,    66,    40,    54,    67,   160,
      95,    96,    97,   161,   220,   283,   284,   285,   286,   287,
     288,   289,   290,   342,   369,   385,   291,   292,   381,   390,
     391,   392,   293,   294,   295,   296,   234,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   235
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   132,   297,    68,   163,   317,   165,   282,   167,   240,
      22,   298,   341,    16,   174,   299,    70,    55,   114,   173,
     275,    70,    70,    79,    17,   154,   158,   327,   179,    70,
     159,    18,    68,   181,   182,   183,   184,   185,   186,    23,
      45,    46,    47,    48,    49,    50,    51,   351,    25,    71,
      27,   352,   297,   303,    80,    90,    63,   282,   155,    22,
     328,   298,   357,   316,   221,   299,   222,    28,   223,    52,
     224,   225,    39,   227,   177,    29,   384,   230,    45,    46,
      47,    48,    49,    50,    51,    63,   152,   157,   387,   388,
     366,   367,   153,   153,    30,   311,   241,   297,   243,   244,
     245,   246,   247,    53,   389,   312,   298,    73,   162,    81,
     299,    32,   383,    34,   153,    46,    47,    48,    49,    50,
      51,   205,   206,   207,   208,   263,   264,   265,   300,   400,
     301,    38,   114,   336,   275,   203,   204,   297,   297,    42,
     304,    53,   282,   282,    56,   307,   298,   298,   211,   212,
     299,   299,    44,    46,    47,    48,    49,    50,    51,   297,
     164,   297,    69,    91,   282,   109,   153,    74,   298,    92,
     298,   110,   299,    93,   299,   111,   297,   280,    75,   297,
     281,   282,   322,    76,   282,   298,    77,   166,   298,   299,
       1,    83,   299,   153,    82,    58,    59,    60,     7,     8,
      61,    46,    47,    48,    49,    50,    51,    85,    46,    47,
      48,    49,    50,    51,   332,   176,   209,   210,   168,   187,
     337,   338,   339,   237,   153,    86,   344,   238,    87,    62,
     175,   346,   347,   348,    94,   226,   153,    88,     1,   195,
     196,   153,   353,    58,    59,    60,     7,     8,    61,    46,
      47,    48,    49,    50,    51,   228,   305,    89,   309,   330,
     365,   153,   306,    53,   306,   306,   370,   371,   354,   108,
      53,   387,   388,     1,   306,   340,   378,    84,     4,     5,
       6,     7,     8,    78,    46,    47,    48,    49,    50,    51,
     255,   256,   257,   258,   151,   395,   253,   254,    46,    47,
      48,    49,    50,    51,   213,   214,   215,   402,   259,   260,
     156,    53,    46,    47,    48,    49,    50,    51,   267,   178,
     268,   269,   270,   271,    98,   198,   272,   273,   274,   114,
     197,   275,   261,   262,   199,   276,   277,   200,   202,   158,
     278,   201,   393,   279,   216,   218,    53,    46,    47,    48,
      49,    50,    51,   219,   229,   231,   232,   281,   236,   242,
      53,    46,    47,    48,    49,    50,    51,   267,   266,   268,
     269,   270,   271,   100,   280,   272,   273,   274,   114,   308,
     275,   310,   313,   314,   276,   277,   319,   315,   158,   318,
     320,   323,   279,    46,    47,    48,    49,    50,    51,    46,
      47,    48,    49,    50,    51,   324,   329,   331,   333,    53,
      46,    47,    48,    49,    50,    51,   311,   334,   345,   102,
     343,   355,   349,   280,   350,   104,    46,    47,    48,    49,
      50,    51,   356,   358,   359,   363,   106,    46,    47,    48,
      49,    50,    51,    46,    47,    48,    49,    50,    51,   360,
     361,   362,   112,   368,    99,    53,   101,   103,   105,   107,
     364,    53,   113,   169,   373,   372,   374,   375,   377,   171,
     376,   379,    53,    46,    47,    48,    49,    50,    51,   170,
     172,   380,   382,   386,   394,   396,   399,   401,    53,   403,
      19,   404,    35,   267,    36,   268,   269,   270,   271,    53,
      37,   272,   273,   274,   114,    53,   275,    41,    72,    57,
     276,   277,   217,   397,   158,   248,   398,   252,   279,   114,
     115,   116,   117,   118,   119,   249,   187,   120,   233,   250,
     325,   251,     0,     0,   326,    53,   190,   191,   192,   193,
     194,     0,   121,   122,     0,     0,     0,   123,   124,   316,
     114,   115,   116,   117,   118,   119,     0,   125,   120,   239,
       0,   126,     0,     0,   127,   128,   129,   130,   131,     0,
       0,     0,     0,   121,   122,     0,     0,     0,   123,   124,
       0,   114,   115,   116,   117,   118,   119,     0,   125,   120,
     302,     0,   126,     0,     0,   127,   128,   129,   130,   131,
       0,     0,     0,     0,   121,   122,     0,     0,     0,   123,
     124,     0,   114,   115,   116,   117,   118,   119,     0,   125,
     120,     0,     0,   126,     0,    82,   127,   128,   129,   130,
     131,     0,     0,     0,     0,   121,   122,     1,     2,     3,
     123,   124,     4,     5,     6,     7,     8,     0,     0,     0,
     125,     0,     0,     0,   126,     0,     0,   127,   128,   129,
     130,   131,   114,   115,   116,   117,   118,   119,     0,     0,
     120,     0,     1,    20,    21,     0,   321,     4,     5,     6,
       7,     8,     0,     0,     0,   121,   122,     0,     0,     0,
     123,   124,     0,   114,   115,   116,   117,   118,   119,     0,
     125,   120,   335,     0,   126,     0,     0,   127,   128,   129,
     130,   131,     0,     0,     0,     0,   121,   122,     0,     0,
       0,   123,   124,     0,   114,   115,   116,   117,   118,   119,
       0,   125,   120,     0,     0,   126,     0,     0,   127,   128,
     129,   130,   131,     0,     0,     0,     0,   121,   122,     0,
       0,     0,   123,   124,     0,   114,   115,   116,   117,   118,
     119,     0,   125,   120,     0,     0,   126,     0,     0,   127,
     128,   129,   130,   131,     0,     0,     0,     0,   121,   122,
       0,     0,     0,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,   126,     0,     0,
     180,   128,   129,   130,   131,   187,     0,     0,     0,   188,
       0,     0,     0,   189,     0,   190,   191,   192,   193,   194,
       0,     0,     0,     0,     0,   195,   196
};

static const yytype_int16 yycheck[] =
{
      40,    93,   220,    43,   102,   270,   104,   220,   106,   187,
      14,   220,   315,    76,   112,   220,    43,    57,    31,   111,
      33,    43,    43,    63,    76,    43,    41,    43,   120,    43,
      45,     0,    72,   121,   122,   123,   124,   125,   126,     6,
      13,    14,    15,    16,    17,    18,    19,    45,     6,    76,
      76,    49,   270,   231,    76,    76,    43,   270,    76,    63,
      76,   270,    76,    76,   162,   270,   164,    76,   166,    42,
     168,   169,    46,   171,   114,    76,   379,   175,    13,    14,
      15,    16,    17,    18,    19,    72,    40,    40,    26,    27,
     355,   356,    46,    46,     7,    39,   188,   315,   190,   191,
     192,   193,   194,    76,    42,    49,   315,    42,    40,    39,
     315,    76,   377,    41,    46,    14,    15,    16,    17,    18,
      19,    63,    64,    65,    66,   213,   214,   215,   226,   394,
     228,    41,    31,   311,    33,    61,    62,   355,   356,    41,
     232,    76,   355,   356,    41,   237,   355,   356,    54,    55,
     355,   356,    76,    14,    15,    16,    17,    18,    19,   377,
      40,   379,    76,    39,   377,    39,    46,    76,   377,    45,
     379,    45,   377,    49,   379,    49,   394,    76,    76,   397,
     220,   394,   274,    76,   397,   394,    76,    40,   397,   394,
       3,    39,   397,    46,    44,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    39,    14,    15,
      16,    17,    18,    19,   306,    76,    74,    75,    40,    39,
     312,   313,   314,    43,    46,    39,   318,    47,    39,    42,
      40,   323,   324,   325,    40,    40,    46,    39,     3,    59,
      60,    46,   334,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    40,    40,    76,    40,    40,
     352,    46,    46,    76,    46,    46,   358,   359,    40,    39,
      76,    26,    27,     3,    46,   315,   368,    42,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     205,   206,   207,   208,    45,   387,   203,   204,    14,    15,
      16,    17,    18,    19,    56,    57,    58,   399,   209,   210,
      45,    76,    14,    15,    16,    17,    18,    19,    20,    39,
      22,    23,    24,    25,    40,    68,    28,    29,    30,    31,
      45,    33,   211,   212,    67,    37,    38,    71,    70,    41,
      42,    72,   382,    45,    45,    44,    76,    14,    15,    16,
      17,    18,    19,    45,    45,    39,    43,   397,    40,    76,
      76,    14,    15,    16,    17,    18,    19,    20,    76,    22,
      23,    24,    25,    40,    76,    28,    29,    30,    31,    76,
      33,    44,    39,    39,    37,    38,    45,    39,    41,    39,
      45,    39,    45,    14,    15,    16,    17,    18,    19,    14,
      15,    16,    17,    18,    19,    39,    45,    44,    44,    76,
      14,    15,    16,    17,    18,    19,    39,    49,    45,    40,
      22,    40,    76,    76,    44,    40,    14,    15,    16,    17,
      18,    19,    40,    45,    39,    44,    40,    14,    15,    16,
      17,    18,    19,    14,    15,    16,    17,    18,    19,    40,
      40,    40,    40,    49,    83,    76,    85,    86,    87,    88,
      76,    76,    91,    40,    45,    41,    45,    49,    21,    40,
      45,    45,    76,    14,    15,    16,    17,    18,    19,   108,
     109,    40,    31,    45,    40,    48,    43,    48,    76,    44,
      10,    45,    27,    20,    28,    22,    23,    24,    25,    76,
      30,    28,    29,    30,    31,    76,    33,    35,    56,    42,
      37,    38,   153,   391,    41,   198,   391,   202,    45,    31,
      32,    33,    34,    35,    36,   199,    39,    39,    40,   200,
      43,   201,    -1,    -1,    47,    76,    49,    50,    51,    52,
      53,    -1,    54,    55,    -1,    -1,    -1,    59,    60,    76,
      31,    32,    33,    34,    35,    36,    -1,    69,    39,    40,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,    60,
      -1,    31,    32,    33,    34,    35,    36,    -1,    69,    39,
      40,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,
      60,    -1,    31,    32,    33,    34,    35,    36,    -1,    69,
      39,    -1,    -1,    73,    -1,    44,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    54,    55,     3,     4,     5,
      59,    60,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    80,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,     3,     4,     5,    -1,    45,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      59,    60,    -1,    31,    32,    33,    34,    35,    36,    -1,
      69,    39,    40,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    60,    -1,    31,    32,    33,    34,    35,    36,
      -1,    69,    39,    -1,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    59,    60,    -1,    31,    32,    33,    34,    35,
      36,    -1,    69,    39,    -1,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    39,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     8,     9,    10,    11,    12,    82,
      83,    84,    85,    86,    91,    92,    76,    76,     0,    84,
       4,     5,    92,     6,    87,     6,    89,    76,    76,    76,
       7,    88,    76,    90,    41,    87,    89,    90,    41,    46,
      97,    88,    41,    93,    76,    13,    14,    15,    16,    17,
      18,    19,    42,    76,    98,   103,    41,    97,     8,     9,
      10,    13,    42,    91,    94,    95,    96,    99,   103,    76,
      43,    76,    93,    42,    76,    76,    76,    76,    13,   103,
      76,    39,    44,    39,    42,    39,    39,    39,    39,    76,
      76,    39,    45,    49,    40,   101,   102,   103,    40,   101,
      40,   101,    40,   101,    40,   101,    40,   101,    39,    39,
      45,    49,    40,   101,    31,    32,    33,    34,    35,    36,
      39,    54,    55,    59,    60,    69,    73,    76,    77,    78,
      79,    80,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    45,    40,    46,    43,    76,    45,    40,    41,    45,
     100,   104,    40,   100,    40,   100,    40,   100,    40,    40,
     101,    40,   101,   127,   100,    40,    76,   103,    39,   127,
      76,   140,   140,   140,   140,   140,   140,    39,    43,    47,
      49,    50,    51,    52,    53,    59,    60,    45,    68,    67,
      71,    72,    70,    61,    62,    63,    64,    65,    66,    74,
      75,    54,    55,    56,    57,    58,    45,   102,    44,    45,
     105,   100,   100,   100,   100,   100,    40,   100,    40,    45,
     100,    39,    43,    40,   127,   146,    40,    43,    47,    40,
     146,   127,    76,   127,   127,   127,   127,   127,   131,   132,
     133,   134,   135,   136,   136,   137,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   140,    76,    20,    22,    23,
      24,    25,    28,    29,    30,    33,    37,    38,    42,    45,
      76,   103,   104,   106,   107,   108,   109,   110,   111,   112,
     113,   117,   118,   123,   124,   125,   126,   128,   144,   145,
     100,   100,    40,   146,   127,    40,    46,   127,    76,    40,
      44,    39,    49,    39,    39,    39,    76,   108,    39,    45,
      45,    45,   127,    39,    39,    43,    47,    43,    76,    45,
      40,    44,   127,    44,    49,    40,   146,   127,   127,   127,
     103,   110,   114,    22,   127,    45,   127,   127,   127,    76,
      44,    45,    49,   127,    40,    40,    40,    76,    45,    39,
      40,    40,    40,    44,    76,   127,   108,   108,    49,   115,
     127,   127,    41,    45,    45,    49,    45,    21,   127,    45,
      40,   119,    31,   108,   110,   116,    45,    26,    27,    42,
     120,   121,   122,   103,    40,   127,    48,   105,   122,    43,
     108,    48,   127,    44,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   105,   105,   106,   106,   107,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   110,   110,   110,   111,   111,   112,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   118,   119,   119,   120,
     121,   121,   122,   122,   123,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   136,   136,   136,   136,   136,   137,   137,
     137,   138,   138,   138,   139,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   141,   141,
     141,   142,   142,   142,   142,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   144,   144,   144,   145,   145,   145,
     145,   145,   145,   146,   146
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     8,     7,     7,
       6,     0,     2,     0,     2,     0,     2,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     6,     5,     6,     5,     6,     5,     4,     6,
       3,     5,     0,     2,     6,     5,     6,     5,     7,     6,
       7,     6,     6,     5,     6,     5,     1,     1,     1,     3,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     0,     2,     1,     1,     3,     5,    11,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     5,     7,     5,     9,     0,     4,
       1,     0,     1,     0,     1,     7,     7,     0,     2,     2,
       1,     2,     3,     2,     2,     2,     2,     3,     5,     5,
       1,     1,     3,     3,     3,     3,     3,     6,     5,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     4,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     5,     4,     3,     6,
       5,     4,     3,     1,     3
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
#line 1601 "java.tab.c"
    break;

  case 7: /* class_declaration: modifiers CLASS IDENTIFIER extends_clause implements_clause LBRACE class_body_declarations RBRACE  */
#line 82 "java.y"
    {
        printf("✓ Class '%s' parsed\n", (yyvsp[-5].str));
        free((yyvsp[-5].str));
    }
#line 1610 "java.tab.c"
    break;

  case 8: /* class_declaration: CLASS IDENTIFIER extends_clause implements_clause LBRACE class_body_declarations RBRACE  */
#line 87 "java.y"
    {
        printf("✓ Class '%s' parsed\n", (yyvsp[-5].str));
        free((yyvsp[-5].str));
    }
#line 1619 "java.tab.c"
    break;

  case 9: /* interface_declaration: modifiers INTERFACE IDENTIFIER extends_interfaces LBRACE interface_body_declarations RBRACE  */
#line 95 "java.y"
    {
        printf("✓ Interface '%s' parsed\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1628 "java.tab.c"
    break;

  case 10: /* interface_declaration: INTERFACE IDENTIFIER extends_interfaces LBRACE interface_body_declarations RBRACE  */
#line 100 "java.y"
    {
        printf("✓ Interface '%s' parsed\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1637 "java.tab.c"
    break;

  case 12: /* extends_clause: EXTENDS IDENTIFIER  */
#line 108 "java.y"
                         { free((yyvsp[0].str)); }
#line 1643 "java.tab.c"
    break;

  case 17: /* type_list: IDENTIFIER  */
#line 122 "java.y"
               { free((yyvsp[0].str)); }
#line 1649 "java.tab.c"
    break;

  case 18: /* type_list: type_list COMMA IDENTIFIER  */
#line 123 "java.y"
                                 { free((yyvsp[0].str)); }
#line 1655 "java.tab.c"
    break;

  case 32: /* constructor_declaration: PUBLIC IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 152 "java.y"
    {
        printf("  - Constructor: %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1664 "java.tab.c"
    break;

  case 33: /* constructor_declaration: PUBLIC IDENTIFIER LPAREN RPAREN method_body  */
#line 157 "java.y"
    {
        printf("  - Constructor: %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1673 "java.tab.c"
    break;

  case 34: /* constructor_declaration: PRIVATE IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 162 "java.y"
    {
        printf("  - Constructor: %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1682 "java.tab.c"
    break;

  case 35: /* constructor_declaration: PRIVATE IDENTIFIER LPAREN RPAREN method_body  */
#line 167 "java.y"
    {
        printf("  - Constructor: %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1691 "java.tab.c"
    break;

  case 36: /* constructor_declaration: PROTECTED IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 172 "java.y"
    {
        printf("  - Constructor: %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1700 "java.tab.c"
    break;

  case 37: /* constructor_declaration: PROTECTED IDENTIFIER LPAREN RPAREN method_body  */
#line 177 "java.y"
    {
        printf("  - Constructor: %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1709 "java.tab.c"
    break;

  case 38: /* field_declaration: modifiers type IDENTIFIER SEMICOLON  */
#line 187 "java.y"
    {
        printf("  - Field: %s %s\n", (yyvsp[-2].str), (yyvsp[-1].str));
        free((yyvsp[-2].str)); free((yyvsp[-1].str));
    }
#line 1718 "java.tab.c"
    break;

  case 39: /* field_declaration: modifiers type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 192 "java.y"
    {
        printf("  - Field: %s %s = ...\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1727 "java.tab.c"
    break;

  case 40: /* field_declaration: type IDENTIFIER SEMICOLON  */
#line 197 "java.y"
    {
        printf("  - Field: %s %s\n", (yyvsp[-2].str), (yyvsp[-1].str));
        free((yyvsp[-2].str)); free((yyvsp[-1].str));
    }
#line 1736 "java.tab.c"
    break;

  case 41: /* field_declaration: type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 202 "java.y"
    {
        printf("  - Field: %s %s = ...\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1745 "java.tab.c"
    break;

  case 44: /* interface_body_declaration: type IDENTIFIER LPAREN formal_parameter_list RPAREN SEMICOLON  */
#line 217 "java.y"
    {
        printf("  - Method signature: %s %s(...)\n", (yyvsp[-5].str), (yyvsp[-4].str));
        free((yyvsp[-5].str)); free((yyvsp[-4].str));
    }
#line 1754 "java.tab.c"
    break;

  case 45: /* interface_body_declaration: type IDENTIFIER LPAREN RPAREN SEMICOLON  */
#line 222 "java.y"
    {
        printf("  - Method signature: %s %s()\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1763 "java.tab.c"
    break;

  case 46: /* interface_body_declaration: VOID IDENTIFIER LPAREN formal_parameter_list RPAREN SEMICOLON  */
#line 227 "java.y"
    {
        printf("  - Method signature: void %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1772 "java.tab.c"
    break;

  case 47: /* interface_body_declaration: VOID IDENTIFIER LPAREN RPAREN SEMICOLON  */
#line 232 "java.y"
    {
        printf("  - Method signature: void %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1781 "java.tab.c"
    break;

  case 48: /* method_declaration: modifiers type IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 242 "java.y"
    {
        printf("  - Method: %s %s(...)\n", (yyvsp[-5].str), (yyvsp[-4].str));
        free((yyvsp[-5].str)); free((yyvsp[-4].str));
    }
#line 1790 "java.tab.c"
    break;

  case 49: /* method_declaration: modifiers type IDENTIFIER LPAREN RPAREN method_body  */
#line 247 "java.y"
    {
        printf("  - Method: %s %s()\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1799 "java.tab.c"
    break;

  case 50: /* method_declaration: modifiers VOID IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 252 "java.y"
    {
        printf("  - Method: void %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1808 "java.tab.c"
    break;

  case 51: /* method_declaration: modifiers VOID IDENTIFIER LPAREN RPAREN method_body  */
#line 257 "java.y"
    {
        printf("  - Method: void %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1817 "java.tab.c"
    break;

  case 52: /* method_declaration: type IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 262 "java.y"
    {
        printf("  - Method: %s %s(...)\n", (yyvsp[-5].str), (yyvsp[-4].str));
        free((yyvsp[-5].str)); free((yyvsp[-4].str));
    }
#line 1826 "java.tab.c"
    break;

  case 53: /* method_declaration: type IDENTIFIER LPAREN RPAREN method_body  */
#line 267 "java.y"
    {
        printf("  - Method: %s %s()\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1835 "java.tab.c"
    break;

  case 54: /* method_declaration: VOID IDENTIFIER LPAREN formal_parameter_list RPAREN method_body  */
#line 272 "java.y"
    {
        printf("  - Method: void %s(...)\n", (yyvsp[-4].str));
        free((yyvsp[-4].str));
    }
#line 1844 "java.tab.c"
    break;

  case 55: /* method_declaration: VOID IDENTIFIER LPAREN RPAREN method_body  */
#line 277 "java.y"
    {
        printf("  - Method: void %s()\n", (yyvsp[-3].str));
        free((yyvsp[-3].str));
    }
#line 1853 "java.tab.c"
    break;

  case 60: /* formal_parameter: type IDENTIFIER  */
#line 294 "java.y"
                    { free((yyvsp[-1].str)); free((yyvsp[0].str)); }
#line 1859 "java.tab.c"
    break;

  case 61: /* formal_parameter: type LBRACKET RBRACKET IDENTIFIER  */
#line 295 "java.y"
                                        { free((yyvsp[-3].str)); free((yyvsp[0].str)); }
#line 1865 "java.tab.c"
    break;

  case 62: /* type: INT  */
#line 301 "java.y"
        { (yyval.str) = strdup("int"); }
#line 1871 "java.tab.c"
    break;

  case 63: /* type: FLOAT  */
#line 302 "java.y"
            { (yyval.str) = strdup("float"); }
#line 1877 "java.tab.c"
    break;

  case 64: /* type: DOUBLE  */
#line 303 "java.y"
             { (yyval.str) = strdup("double"); }
#line 1883 "java.tab.c"
    break;

  case 65: /* type: CHAR  */
#line 304 "java.y"
           { (yyval.str) = strdup("char"); }
#line 1889 "java.tab.c"
    break;

  case 66: /* type: BOOLEAN  */
#line 305 "java.y"
              { (yyval.str) = strdup("boolean"); }
#line 1895 "java.tab.c"
    break;

  case 67: /* type: STRING  */
#line 306 "java.y"
             { (yyval.str) = strdup("String"); }
#line 1901 "java.tab.c"
    break;

  case 68: /* type: IDENTIFIER  */
#line 307 "java.y"
                 { (yyval.str) = (yyvsp[0].str); }
#line 1907 "java.tab.c"
    break;

  case 69: /* type: type LBRACKET RBRACKET  */
#line 308 "java.y"
                             { (yyval.str) = (yyvsp[-2].str); }
#line 1913 "java.tab.c"
    break;

  case 75: /* local_variable_declaration: type IDENTIFIER SEMICOLON  */
#line 329 "java.y"
    {
        printf("    Variable: %s %s\n", (yyvsp[-2].str), (yyvsp[-1].str));
        free((yyvsp[-2].str)); free((yyvsp[-1].str));
    }
#line 1922 "java.tab.c"
    break;

  case 76: /* local_variable_declaration: type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 334 "java.y"
    {
        printf("    Variable: %s %s = ...\n", (yyvsp[-4].str), (yyvsp[-3].str));
        free((yyvsp[-4].str)); free((yyvsp[-3].str));
    }
#line 1931 "java.tab.c"
    break;

  case 77: /* local_variable_declaration: type LBRACKET RBRACKET IDENTIFIER ASSIGN NEW type LBRACKET expression RBRACKET SEMICOLON  */
#line 339 "java.y"
    {
        printf("    Array: %s[] %s = new %s[...]\n", (yyvsp[-10].str), (yyvsp[-7].str), (yyvsp[-4].str));
        free((yyvsp[-10].str)); free((yyvsp[-7].str)); free((yyvsp[-4].str));
    }
#line 1940 "java.tab.c"
    break;

  case 94: /* if_statement: IF LPAREN expression RPAREN statement  */
#line 372 "java.y"
    {
        printf("    If statement\n");
    }
#line 1948 "java.tab.c"
    break;

  case 95: /* if_statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 376 "java.y"
    {
        printf("    If-else statement\n");
    }
#line 1956 "java.tab.c"
    break;

  case 96: /* while_statement: WHILE LPAREN expression RPAREN statement  */
#line 383 "java.y"
    {
        printf("    While loop\n");
    }
#line 1964 "java.tab.c"
    break;

  case 97: /* for_statement: FOR LPAREN for_init SEMICOLON for_condition SEMICOLON for_update RPAREN statement  */
#line 390 "java.y"
    {
        printf("    For loop\n");
    }
#line 1972 "java.tab.c"
    break;

  case 99: /* for_init: type IDENTIFIER ASSIGN expression  */
#line 397 "java.y"
                                        { free((yyvsp[-3].str)); free((yyvsp[-2].str)); }
#line 1978 "java.tab.c"
    break;

  case 105: /* do_statement: DO statement WHILE LPAREN expression RPAREN SEMICOLON  */
#line 413 "java.y"
    {
        printf("    Do-while loop\n");
    }
#line 1986 "java.tab.c"
    break;

  case 106: /* switch_statement: SWITCH LPAREN expression RPAREN LBRACE switch_block_statement_groups RBRACE  */
#line 420 "java.y"
    {
        printf("    Switch statement\n");
    }
#line 1994 "java.tab.c"
    break;

  case 112: /* switch_label: CASE expression COLON  */
#line 441 "java.y"
    {
        printf("      Case label\n");
    }
#line 2002 "java.tab.c"
    break;

  case 113: /* switch_label: DEFAULT COLON  */
#line 445 "java.y"
    {
        printf("      Default label\n");
    }
#line 2010 "java.tab.c"
    break;

  case 114: /* break_statement: BREAK SEMICOLON  */
#line 452 "java.y"
    {
        printf("    Break\n");
    }
#line 2018 "java.tab.c"
    break;

  case 115: /* continue_statement: CONTINUE SEMICOLON  */
#line 459 "java.y"
    {
        printf("    Continue\n");
    }
#line 2026 "java.tab.c"
    break;

  case 116: /* return_statement: RETURN SEMICOLON  */
#line 466 "java.y"
    {
        printf("    Return\n");
    }
#line 2034 "java.tab.c"
    break;

  case 117: /* return_statement: RETURN expression SEMICOLON  */
#line 470 "java.y"
    {
        printf("    Return value\n");
    }
#line 2042 "java.tab.c"
    break;

  case 118: /* print_statement: PRINTLN LPAREN expression RPAREN SEMICOLON  */
#line 477 "java.y"
    {
        printf("    System.out.println(...)\n");
    }
#line 2050 "java.tab.c"
    break;

  case 119: /* print_statement: PRINT LPAREN expression RPAREN SEMICOLON  */
#line 481 "java.y"
    {
        printf("    System.out.print(...)\n");
    }
#line 2058 "java.tab.c"
    break;

  case 122: /* assignment: IDENTIFIER ASSIGN expression  */
#line 494 "java.y"
                                 { free((yyvsp[-2].str)); }
#line 2064 "java.tab.c"
    break;

  case 123: /* assignment: IDENTIFIER PLUS_ASSIGN expression  */
#line 495 "java.y"
                                        { free((yyvsp[-2].str)); }
#line 2070 "java.tab.c"
    break;

  case 124: /* assignment: IDENTIFIER MINUS_ASSIGN expression  */
#line 496 "java.y"
                                         { free((yyvsp[-2].str)); }
#line 2076 "java.tab.c"
    break;

  case 125: /* assignment: IDENTIFIER MULT_ASSIGN expression  */
#line 497 "java.y"
                                        { free((yyvsp[-2].str)); }
#line 2082 "java.tab.c"
    break;

  case 126: /* assignment: IDENTIFIER DIV_ASSIGN expression  */
#line 498 "java.y"
                                       { free((yyvsp[-2].str)); }
#line 2088 "java.tab.c"
    break;

  case 127: /* assignment: IDENTIFIER LBRACKET expression RBRACKET ASSIGN expression  */
#line 499 "java.y"
                                                                { free((yyvsp[-5].str)); }
#line 2094 "java.tab.c"
    break;

  case 128: /* assignment: IDENTIFIER DOT IDENTIFIER ASSIGN expression  */
#line 500 "java.y"
                                                  { free((yyvsp[-4].str)); free((yyvsp[-2].str)); }
#line 2100 "java.tab.c"
    break;

  case 166: /* postfix_expression: IDENTIFIER INCREMENT  */
#line 577 "java.y"
                           { free((yyvsp[-1].str)); }
#line 2106 "java.tab.c"
    break;

  case 167: /* postfix_expression: IDENTIFIER DECREMENT  */
#line 578 "java.y"
                           { free((yyvsp[-1].str)); }
#line 2112 "java.tab.c"
    break;

  case 168: /* postfix_expression: IDENTIFIER LBRACKET expression RBRACKET  */
#line 579 "java.y"
                                              { free((yyvsp[-3].str)); }
#line 2118 "java.tab.c"
    break;

  case 169: /* postfix_expression: IDENTIFIER DOT IDENTIFIER  */
#line 580 "java.y"
                                { free((yyvsp[-2].str)); free((yyvsp[0].str)); }
#line 2124 "java.tab.c"
    break;

  case 176: /* primary: IDENTIFIER  */
#line 590 "java.y"
                 { free((yyvsp[0].str)); }
#line 2130 "java.tab.c"
    break;

  case 180: /* literal: STRING_LITERAL  */
#line 597 "java.y"
                     { free((yyvsp[0].str)); }
#line 2136 "java.tab.c"
    break;

  case 184: /* class_instance_creation: NEW IDENTIFIER LPAREN argument_list RPAREN  */
#line 604 "java.y"
                                               { free((yyvsp[-3].str)); }
#line 2142 "java.tab.c"
    break;

  case 185: /* class_instance_creation: NEW IDENTIFIER LPAREN RPAREN  */
#line 605 "java.y"
                                   { free((yyvsp[-2].str)); }
#line 2148 "java.tab.c"
    break;

  case 186: /* class_instance_creation: NEW type LBRACKET expression RBRACKET  */
#line 606 "java.y"
                                            { free((yyvsp[-3].str)); }
#line 2154 "java.tab.c"
    break;

  case 187: /* method_invocation: IDENTIFIER LPAREN argument_list RPAREN  */
#line 610 "java.y"
                                           { free((yyvsp[-3].str)); }
#line 2160 "java.tab.c"
    break;

  case 188: /* method_invocation: IDENTIFIER LPAREN RPAREN  */
#line 611 "java.y"
                               { free((yyvsp[-2].str)); }
#line 2166 "java.tab.c"
    break;

  case 189: /* method_invocation: IDENTIFIER DOT IDENTIFIER LPAREN argument_list RPAREN  */
#line 612 "java.y"
                                                            { free((yyvsp[-5].str)); free((yyvsp[-3].str)); }
#line 2172 "java.tab.c"
    break;

  case 190: /* method_invocation: IDENTIFIER DOT IDENTIFIER LPAREN RPAREN  */
#line 613 "java.y"
                                              { free((yyvsp[-4].str)); free((yyvsp[-2].str)); }
#line 2178 "java.tab.c"
    break;


#line 2182 "java.tab.c"

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

#line 623 "java.y"


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
