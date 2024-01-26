/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include "parser.tab.h"
#include "error.h"
#define YYDEBUG 1

#line 77 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STR = 4,                        /* STR  */
  YYSYMBOL_COMMA = 5,                      /* COMMA  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_BIN = 7,                        /* BIN  */
  YYSYMBOL_HEX = 8,                        /* HEX  */
  YYSYMBOL_DEC = 9,                        /* DEC  */
  YYSYMBOL_TRUE = 10,                      /* TRUE  */
  YYSYMBOL_FALSE = 11,                     /* FALSE  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_BREAK = 16,                     /* BREAK  */
  YYSYMBOL_SEMICOLON = 17,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 18,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 19,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 20,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 22,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 23,                  /* RBRACKET  */
  YYSYMBOL_TYPEDEF = 24,                   /* TYPEDEF  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_ARRAY_COMMAS = 26,              /* ARRAY_COMMAS  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_STAR = 32,                      /* STAR  */
  YYSYMBOL_SLASH = 33,                     /* SLASH  */
  YYSYMBOL_PERCENT = 34,                   /* PERCENT  */
  YYSYMBOL_EQUAL = 35,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 36,                  /* NOTEQUAL  */
  YYSYMBOL_LESSTHAN = 37,                  /* LESSTHAN  */
  YYSYMBOL_GREATERTHAN = 38,               /* GREATERTHAN  */
  YYSYMBOL_LESSTHANEQ = 39,                /* LESSTHANEQ  */
  YYSYMBOL_GREATERTHANEQ = 40,             /* GREATERTHANEQ  */
  YYSYMBOL_ASSIGN = 41,                    /* ASSIGN  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_source = 43,                    /* source  */
  YYSYMBOL_sourceItem = 44,                /* sourceItem  */
  YYSYMBOL_funcSignature = 45,             /* funcSignature  */
  YYSYMBOL_listArgDef = 46,                /* listArgDef  */
  YYSYMBOL_argDef = 47,                    /* argDef  */
  YYSYMBOL_typeRef = 48,                   /* typeRef  */
  YYSYMBOL_builtin = 49,                   /* builtin  */
  YYSYMBOL_statement = 50,                 /* statement  */
  YYSYMBOL_return = 51,                    /* return  */
  YYSYMBOL_custom = 52,                    /* custom  */
  YYSYMBOL_array = 53,                     /* array  */
  YYSYMBOL_listVarDeclared = 54,           /* listVarDeclared  */
  YYSYMBOL_listVarDeclaredItem = 55,       /* listVarDeclaredItem  */
  YYSYMBOL_var = 56,                       /* var  */
  YYSYMBOL_if = 57,                        /* if  */
  YYSYMBOL_optionalElseStatement = 58,     /* optionalElseStatement  */
  YYSYMBOL_listStatement = 59,             /* listStatement  */
  YYSYMBOL_block = 60,                     /* block  */
  YYSYMBOL_while = 61,                     /* while  */
  YYSYMBOL_do = 62,                        /* do  */
  YYSYMBOL_break = 63,                     /* break  */
  YYSYMBOL_expression = 64,                /* expression  */
  YYSYMBOL_assignment = 65,                /* assignment  */
  YYSYMBOL_canAssign = 66,                 /* canAssign  */
  YYSYMBOL_expr = 67,                      /* expr  */
  YYSYMBOL_binary = 68,                    /* binary  */
  YYSYMBOL_unary = 69,                     /* unary  */
  YYSYMBOL_braces = 70,                    /* braces  */
  YYSYMBOL_call = 71,                      /* call  */
  YYSYMBOL_optionalListExpr = 72,          /* optionalListExpr  */
  YYSYMBOL_listExpr = 73,                  /* listExpr  */
  YYSYMBOL_indexer = 74,                   /* indexer  */
  YYSYMBOL_place = 75,                     /* place  */
  YYSYMBOL_literal = 76                    /* literal  */
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
typedef yytype_uint8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    71,    73,    74,    78,    80,    81,    82,
      84,    88,    89,    90,    92,    95,    96,    97,    98,    99,
     100,   101,   102,   104,   105,   108,   110,   113,   114,   116,
     117,   119,   121,   123,   124,   126,   127,   129,   130,   132,
     134,   136,   138,   139,   141,   142,   143,   145,   146,   147,
     148,   149,   150,   151,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   168,   169,   171,
     173,   174,   175,   177,   178,   179,   181,   183,   184,   185,
     186,   187,   188,   189
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STR",
  "COMMA", "CHAR", "BIN", "HEX", "DEC", "TRUE", "FALSE", "IF", "ELSE",
  "WHILE", "DO", "BREAK", "SEMICOLON", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "LBRACKET", "RBRACKET", "TYPEDEF", "RETURN", "ARRAY_COMMAS",
  "OR", "AND", "NOT", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "EQUAL",
  "NOTEQUAL", "LESSTHAN", "GREATERTHAN", "LESSTHANEQ", "GREATERTHANEQ",
  "ASSIGN", "$accept", "source", "sourceItem", "funcSignature",
  "listArgDef", "argDef", "typeRef", "builtin", "statement", "return",
  "custom", "array", "listVarDeclared", "listVarDeclaredItem", "var", "if",
  "optionalElseStatement", "listStatement", "block", "while", "do",
  "break", "expression", "assignment", "canAssign", "expr", "binary",
  "unary", "braces", "call", "optionalListExpr", "listExpr", "indexer",
  "place", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
#endif

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-47)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -114,    27,  -114,  -114,  -114,  -114,    -3,    -8,    10,  -114,
    -114,  -114,  -114,   121,  -114,    25,  -114,  -114,   150,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,    30,    35,    -4,     1,
     224,  -114,   179,   224,   224,   195,    73,  -114,  -114,  -114,
      47,  -114,  -114,  -114,  -114,  -114,    52,    29,   245,  -114,
    -114,  -114,  -114,    31,    32,  -114,    55,    66,   224,   224,
     224,    72,  -114,    82,   267,  -114,  -114,  -114,  -114,   390,
     409,   175,    86,    85,  -114,   352,  -114,  -114,  -114,   224,
    -114,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,  -114,    25,     7,    87,  -114,
     289,   311,    89,  -114,  -114,   240,   352,    98,   371,   390,
     409,   409,    79,    79,    79,   127,   127,   127,   127,   127,
     127,  -114,   224,  -114,    73,    -4,   224,  -114,  -114,  -114,
      92,  -114,   333,    73,  -114,    91,  -114,  -114
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    25,    14,     3,     0,     0,     0,    11,
      12,    13,     5,     0,     4,     7,    10,    26,    76,    79,
      80,    82,    81,    83,    77,    78,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,    36,    22,    15,    16,
       0,    17,    18,    19,    20,    21,     0,     0,     0,    48,
      47,    49,    50,    51,    52,    53,     0,     8,    72,     0,
       0,     0,    41,    76,     0,    51,    52,    23,    24,    68,
      67,    76,     0,    28,    30,     0,    35,    37,    43,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     7,    74,     0,    71,
       0,     0,     0,    69,    31,     0,    44,     0,    66,    65,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     9,     0,    70,     0,     0,     0,    27,    75,    73,
      34,    39,     0,     0,    32,     0,    33,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -114,  -114,  -114,  -114,    13,   109,     0,  -114,  -113,  -114,
    -114,  -114,    21,  -114,  -114,  -114,  -114,    76,    -2,  -114,
    -114,  -114,   102,   -30,  -114,   -27,  -114,  -114,  -114,  -114,
    -114,   -72,   -13,   -11,  -114
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,     6,    56,    57,    35,     9,    36,    37,
      10,    11,    72,    73,    38,    39,   134,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      98,    99,    65,    66,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,     8,    54,    64,    14,    74,    69,    70,    75,   107,
      15,   130,   122,    16,    12,     8,    13,    13,    62,    53,
     136,    54,    53,    53,    54,    54,    61,     2,     3,    81,
       3,    97,   100,   101,    82,    83,    17,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    59,     4,
     129,     4,   106,    60,    97,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    77,    78,
      79,    96,   -46,   -45,    95,    74,    18,    19,    75,    20,
      21,    22,    23,    24,    25,    26,   102,    27,    28,    29,
     105,    30,    53,    13,    54,    97,     8,     4,    32,   132,
      58,    81,    33,   104,    34,   133,   123,   126,   137,   121,
       7,    53,    76,    54,    89,    90,    91,    92,    93,    94,
      53,   128,    54,   131,    18,    19,   127,    20,    21,    22,
      23,    24,    25,    26,    68,    27,    28,    29,     0,    30,
       0,    13,    31,     0,     0,     4,    32,     0,     0,    81,
      33,     0,    34,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -47,   -47,   -47,   -47,   -47,   -47,    58,     0,
       0,     0,     0,     0,     0,     0,   -25,     0,     0,   -25,
     -29,   -25,    63,    19,     0,    20,    21,    22,    23,    24,
      25,     0,   -29,    58,     0,     0,    67,    30,    71,    19,
       0,    20,    21,    22,    23,    24,    25,     0,    33,     0,
      34,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,    33,     0,    34,    63,    19,     0,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,    30,    71,    19,     0,    20,    21,    22,    23,
      24,    25,     0,    33,     0,    34,     0,     0,    30,     0,
       0,     0,    80,     0,     0,     0,     0,    81,     0,    33,
       0,    34,    82,    83,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,   103,     0,     0,    81,
       0,     0,     0,     0,    82,    83,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,   124,     0,
       0,    81,     0,     0,     0,     0,    82,    83,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
     125,     0,     0,    81,     0,     0,     0,     0,    82,    83,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,   135,     0,     0,    81,     0,     0,     0,     0,
      82,    83,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    81,     0,     0,     0,     0,    82,
      83,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    81,     0,     0,     0,     0,     0,    83,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    81,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

static const yytype_int16 yycheck[] =
{
      13,     1,    13,    30,     6,    35,    33,    34,    35,    81,
      18,   124,     5,     3,    17,    15,    20,    20,    17,    32,
     133,    32,    35,    36,    35,    36,    28,     0,     3,    22,
       3,    58,    59,    60,    27,    28,    26,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    18,    24,
     122,    24,    79,    18,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    21,    17,
      41,     5,    41,    41,    19,   105,     3,     4,   105,     6,
       7,     8,     9,    10,    11,    12,    14,    14,    15,    16,
       5,    18,   105,    20,   105,   122,    96,    24,    25,   126,
      18,    22,    29,    17,    31,    13,    19,    18,    17,    96,
       1,   124,    36,   124,    35,    36,    37,    38,    39,    40,
     133,    23,   133,   125,     3,     4,   105,     6,     7,     8,
       9,    10,    11,    12,    32,    14,    15,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    22,
      29,    -1,    31,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    35,    36,    37,    38,    39,    40,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
       5,    31,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    17,    18,    -1,    -1,    17,    18,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    29,    -1,
      31,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    29,    -1,    31,    -1,    -1,    18,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    29,
      -1,    31,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    19,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    43,     0,     3,    24,    44,    45,    47,    48,    49,
      52,    53,    17,    20,    60,    18,     3,    26,     3,     4,
       6,     7,     8,     9,    10,    11,    12,    14,    15,    16,
      18,    21,    25,    29,    31,    48,    50,    51,    56,    57,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    74,    75,    76,    46,    47,    18,    18,
      18,    60,    17,     3,    67,    74,    75,    17,    64,    67,
      67,     3,    54,    55,    65,    67,    59,    21,    17,    41,
      17,    22,    27,    28,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    19,     5,    67,    72,    73,
      67,    67,    14,    19,    17,     5,    67,    73,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    46,     5,    19,    19,    19,    18,    54,    23,    73,
      50,    60,    67,    13,    58,    19,    50,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    46,    46,    46,
      47,    48,    48,    48,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    52,    53,    54,    54,    55,
      55,    56,    57,    58,    58,    59,    59,    60,    60,    61,
      62,    63,    64,    64,    65,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    70,
      71,    72,    72,    73,    73,    74,    75,    76,    76,    76,
      76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     4,     0,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     2,     3,     1,     1,
       1,     3,     6,     2,     0,     2,     0,     3,     2,     5,
       7,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       4,     1,     0,     3,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* source: %empty  */
#line 70 "parser.y"
        {{(yyval.node) = NULL;}}
#line 1297 "parser.tab.c"
    break;

  case 3: /* source: source sourceItem  */
#line 71 "parser.y"
                        {{(yyval.node) = createNode("source", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1303 "parser.tab.c"
    break;

  case 4: /* sourceItem: funcSignature block  */
#line 73 "parser.y"
                                {{(yyval.node) = createNode(sourceItem, (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1309 "parser.tab.c"
    break;

  case 5: /* sourceItem: funcSignature SEMICOLON  */
#line 74 "parser.y"
                              {{(yyval.node) = createNode(sourceItem, (yyvsp[-1].node), NULL, "");}}
#line 1315 "parser.tab.c"
    break;

  case 6: /* funcSignature: argDef LPAREN listArgDef RPAREN  */
#line 78 "parser.y"
                                               {{(yyval.node) = createNode(funcSignature, (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 1321 "parser.tab.c"
    break;

  case 7: /* listArgDef: %empty  */
#line 80 "parser.y"
             {{(yyval.node) = NULL;}}
#line 1327 "parser.tab.c"
    break;

  case 8: /* listArgDef: argDef  */
#line 81 "parser.y"
             {{(yyval.node) = (yyvsp[0].node);}}
#line 1333 "parser.tab.c"
    break;

  case 9: /* listArgDef: argDef COMMA listArgDef  */
#line 82 "parser.y"
                              {{(yyval.node) = createNode("listArgDef", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1339 "parser.tab.c"
    break;

  case 10: /* argDef: typeRef IDENTIFIER  */
#line 84 "parser.y"
                           {{(yyval.node) = createNode("argDef", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1345 "parser.tab.c"
    break;

  case 11: /* typeRef: builtin  */
#line 88 "parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1351 "parser.tab.c"
    break;

  case 12: /* typeRef: custom  */
#line 89 "parser.y"
             {{(yyval.node) = (yyvsp[0].node);}}
#line 1357 "parser.tab.c"
    break;

  case 13: /* typeRef: array  */
#line 90 "parser.y"
            {{(yyval.node) = (yyvsp[0].node);}}
#line 1363 "parser.tab.c"
    break;

  case 14: /* builtin: TYPEDEF  */
#line 92 "parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1369 "parser.tab.c"
    break;

  case 15: /* statement: var  */
#line 95 "parser.y"
               {{(yyval.node) =  (yyvsp[0].node);}}
#line 1375 "parser.tab.c"
    break;

  case 16: /* statement: if  */
#line 96 "parser.y"
         {{(yyval.node) =  (yyvsp[0].node);}}
#line 1381 "parser.tab.c"
    break;

  case 17: /* statement: block  */
#line 97 "parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1387 "parser.tab.c"
    break;

  case 18: /* statement: while  */
#line 98 "parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1393 "parser.tab.c"
    break;

  case 19: /* statement: do  */
#line 99 "parser.y"
         {{(yyval.node) =  (yyvsp[0].node);}}
#line 1399 "parser.tab.c"
    break;

  case 20: /* statement: break  */
#line 100 "parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1405 "parser.tab.c"
    break;

  case 21: /* statement: expression  */
#line 101 "parser.y"
                 {{(yyval.node) =  (yyvsp[0].node);}}
#line 1411 "parser.tab.c"
    break;

  case 23: /* return: RETURN SEMICOLON  */
#line 104 "parser.y"
                         {{(yyval.node)=createNode("return", NULL, NULL, (yyvsp[0].node)->value);}}
#line 1417 "parser.tab.c"
    break;

  case 24: /* return: RETURN expression  */
#line 105 "parser.y"
                       {{(yyval.node)=createNode("return", (yyvsp[0].node), NULL, (yyvsp[0].node)->value);}}
#line 1423 "parser.tab.c"
    break;

  case 25: /* custom: IDENTIFIER  */
#line 108 "parser.y"
                   {{(yyval.node) = (yyvsp[0].node);}}
#line 1429 "parser.tab.c"
    break;

  case 26: /* array: typeRef ARRAY_COMMAS  */
#line 110 "parser.y"
                            {{(yyval.node) = createNode("array", (yyvsp[-1].node), NULL, (yyvsp[0].node)->value);}}
#line 1435 "parser.tab.c"
    break;

  case 27: /* listVarDeclared: listVarDeclaredItem COMMA listVarDeclared  */
#line 113 "parser.y"
                                                           {{(yyval.node) = createNode("listVarDeclared", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1441 "parser.tab.c"
    break;

  case 28: /* listVarDeclared: listVarDeclaredItem  */
#line 114 "parser.y"
                          {{(yyval.node) = createNode("listVarDeclared", (yyvsp[0].node), NULL, "");}}
#line 1447 "parser.tab.c"
    break;

  case 29: /* listVarDeclaredItem: IDENTIFIER  */
#line 116 "parser.y"
                                {{(yyval.node) = (yyvsp[0].node);}}
#line 1453 "parser.tab.c"
    break;

  case 30: /* listVarDeclaredItem: assignment  */
#line 117 "parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1459 "parser.tab.c"
    break;

  case 31: /* var: typeRef listVarDeclared SEMICOLON  */
#line 119 "parser.y"
                                       {{(yyval.node) = createNode("var", (yyvsp[-2].node), (yyvsp[-1].node), "");}}
#line 1465 "parser.tab.c"
    break;

  case 32: /* if: IF LPAREN expr RPAREN statement optionalElseStatement  */
#line 121 "parser.y"
                                                          {{(yyval.node) = createNode("if", (yyvsp[-3].node), createNode("ifStatements", (yyvsp[-1].node), (yyvsp[0].node), ""), "");}}
#line 1471 "parser.tab.c"
    break;

  case 33: /* optionalElseStatement: ELSE statement  */
#line 123 "parser.y"
                                      {{(yyval.node) = createNode("else", (yyvsp[0].node), NULL, "");}}
#line 1477 "parser.tab.c"
    break;

  case 34: /* optionalElseStatement: %empty  */
#line 124 "parser.y"
      {{(yyval.node) = NULL;}}
#line 1483 "parser.tab.c"
    break;

  case 35: /* listStatement: statement listStatement  */
#line 126 "parser.y"
                                       {{(yyval.node) = createNode("listStatement", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1489 "parser.tab.c"
    break;

  case 36: /* listStatement: %empty  */
#line 127 "parser.y"
      {{(yyval.node) = NULL;}}
#line 1495 "parser.tab.c"
    break;

  case 37: /* block: LBRACE listStatement RBRACE  */
#line 129 "parser.y"
                                   {{(yyval.node) = createNode("block", (yyvsp[-1].node), NULL, "");}}
#line 1501 "parser.tab.c"
    break;

  case 38: /* block: LBRACE RBRACE  */
#line 130 "parser.y"
                    {{(yyval.node) = createNode("block", NULL, NULL, "");}}
#line 1507 "parser.tab.c"
    break;

  case 39: /* while: WHILE LPAREN expr RPAREN block  */
#line 132 "parser.y"
                                      {{(yyval.node) = createNode("while", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1513 "parser.tab.c"
    break;

  case 40: /* do: DO block WHILE LPAREN expr RPAREN SEMICOLON  */
#line 134 "parser.y"
                                                {{(yyval.node) = createNode("dowhile", (yyvsp[-5].node), (yyvsp[-2].node), "");}}
#line 1519 "parser.tab.c"
    break;

  case 41: /* break: BREAK SEMICOLON  */
#line 136 "parser.y"
                       {{(yyval.node) = createNode("break", NULL, NULL, "");}}
#line 1525 "parser.tab.c"
    break;

  case 42: /* expression: expr SEMICOLON  */
#line 138 "parser.y"
                           {{(yyval.node) = (yyvsp[-1].node);}}
#line 1531 "parser.tab.c"
    break;

  case 43: /* expression: assignment SEMICOLON  */
#line 139 "parser.y"
                           {{(yyval.node) = (yyvsp[-1].node);}}
#line 1537 "parser.tab.c"
    break;

  case 44: /* assignment: canAssign ASSIGN expr  */
#line 141 "parser.y"
                                  {{(yyval.node) = createNode("assigment", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1543 "parser.tab.c"
    break;

  case 47: /* expr: unary  */
#line 145 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1549 "parser.tab.c"
    break;

  case 48: /* expr: binary  */
#line 146 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1555 "parser.tab.c"
    break;

  case 49: /* expr: braces  */
#line 147 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1561 "parser.tab.c"
    break;

  case 50: /* expr: call  */
#line 148 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1567 "parser.tab.c"
    break;

  case 51: /* expr: indexer  */
#line 149 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1573 "parser.tab.c"
    break;

  case 52: /* expr: place  */
#line 150 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1579 "parser.tab.c"
    break;

  case 53: /* expr: literal  */
#line 151 "parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1585 "parser.tab.c"
    break;

  case 54: /* binary: expr PLUS expr  */
#line 154 "parser.y"
                       {{(yyval.node) = createNode("PLUS", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1591 "parser.tab.c"
    break;

  case 55: /* binary: expr MINUS expr  */
#line 155 "parser.y"
                      {{(yyval.node) = createNode("MINUS", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1597 "parser.tab.c"
    break;

  case 56: /* binary: expr STAR expr  */
#line 156 "parser.y"
                     {{(yyval.node) = createNode("STAR", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1603 "parser.tab.c"
    break;

  case 57: /* binary: expr SLASH expr  */
#line 157 "parser.y"
                      {{(yyval.node) = createNode("SLASH", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1609 "parser.tab.c"
    break;

  case 58: /* binary: expr PERCENT expr  */
#line 158 "parser.y"
                        {{(yyval.node) = createNode("PERCENT", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1615 "parser.tab.c"
    break;

  case 59: /* binary: expr EQUAL expr  */
#line 159 "parser.y"
                      {{(yyval.node) = createNode("EQUALITY", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1621 "parser.tab.c"
    break;

  case 60: /* binary: expr NOTEQUAL expr  */
#line 160 "parser.y"
                         {{(yyval.node) = createNode("NOTEQUAL", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1627 "parser.tab.c"
    break;

  case 61: /* binary: expr LESSTHAN expr  */
#line 161 "parser.y"
                         {{(yyval.node) = createNode("LESSTHAN", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1633 "parser.tab.c"
    break;

  case 62: /* binary: expr GREATERTHAN expr  */
#line 162 "parser.y"
                            {{(yyval.node) = createNode("GREATERTHAN", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1639 "parser.tab.c"
    break;

  case 63: /* binary: expr LESSTHANEQ expr  */
#line 163 "parser.y"
                           {{(yyval.node) = createNode("LESSTHANEQ", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1645 "parser.tab.c"
    break;

  case 64: /* binary: expr GREATERTHANEQ expr  */
#line 164 "parser.y"
                              {{(yyval.node) = createNode("GREATERTHANEQ", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1651 "parser.tab.c"
    break;

  case 65: /* binary: expr AND expr  */
#line 165 "parser.y"
                    {{(yyval.node) = createNode("AND", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1657 "parser.tab.c"
    break;

  case 66: /* binary: expr OR expr  */
#line 166 "parser.y"
                   {{(yyval.node) = createNode("OR", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1663 "parser.tab.c"
    break;

  case 67: /* unary: MINUS expr  */
#line 168 "parser.y"
                  {{(yyval.node) = createNode("MINUS_UNARY", (yyvsp[0].node), NULL, "");}}
#line 1669 "parser.tab.c"
    break;

  case 68: /* unary: NOT expr  */
#line 169 "parser.y"
               {{(yyval.node) = createNode("NOT", (yyvsp[0].node), NULL, "");}}
#line 1675 "parser.tab.c"
    break;

  case 69: /* braces: LPAREN expr RPAREN  */
#line 171 "parser.y"
                            {{(yyval.node) = createNode("braces", (yyvsp[-1].node), NULL, "");}}
#line 1681 "parser.tab.c"
    break;

  case 70: /* call: IDENTIFIER LPAREN optionalListExpr RPAREN  */
#line 173 "parser.y"
                                                 {{(yyval.node) = createNode("CALL", (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 1687 "parser.tab.c"
    break;

  case 71: /* optionalListExpr: listExpr  */
#line 174 "parser.y"
                            {{(yyval.node) = createNode("optionalListExpr", (yyvsp[0].node), NULL, "");}}
#line 1693 "parser.tab.c"
    break;

  case 72: /* optionalListExpr: %empty  */
#line 175 "parser.y"
      {{(yyval.node) = createNode("optionalListExpr", NULL, NULL, "");}}
#line 1699 "parser.tab.c"
    break;

  case 73: /* listExpr: expr COMMA listExpr  */
#line 177 "parser.y"
                              {{(yyval.node) = createNode("listExpr", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1705 "parser.tab.c"
    break;

  case 74: /* listExpr: expr  */
#line 178 "parser.y"
           {{(yyval.node) = createNode("listExpr", (yyvsp[0].node), NULL, "");}}
#line 1711 "parser.tab.c"
    break;

  case 75: /* indexer: expr LBRACKET listExpr RBRACKET  */
#line 179 "parser.y"
                                         {{(yyval.node) = createNode("indexer", (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 1717 "parser.tab.c"
    break;

  case 76: /* place: IDENTIFIER  */
#line 181 "parser.y"
                  {{(yyval.node) = (yyvsp[0].node);}}
#line 1723 "parser.tab.c"
    break;

  case 77: /* literal: TRUE  */
#line 183 "parser.y"
              {{(yyval.node) = (yyvsp[0].node);}}
#line 1729 "parser.tab.c"
    break;

  case 78: /* literal: FALSE  */
#line 184 "parser.y"
            {{(yyval.node) = (yyvsp[0].node);}}
#line 1735 "parser.tab.c"
    break;

  case 79: /* literal: STR  */
#line 185 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 1741 "parser.tab.c"
    break;

  case 80: /* literal: CHAR  */
#line 186 "parser.y"
           {{(yyval.node) = (yyvsp[0].node);}}
#line 1747 "parser.tab.c"
    break;

  case 81: /* literal: HEX  */
#line 187 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 1753 "parser.tab.c"
    break;

  case 82: /* literal: BIN  */
#line 188 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 1759 "parser.tab.c"
    break;

  case 83: /* literal: DEC  */
#line 189 "parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 1765 "parser.tab.c"
    break;


#line 1769 "parser.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 190 "parser.y"

