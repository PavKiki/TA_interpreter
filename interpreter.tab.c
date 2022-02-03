/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "interpreter.y" /* yacc.c:337  */

#include <exception>
#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <string>
#include "classes/BoolNode.h"
#include "classes/IntegerNode.h"
#include "classes/OperationNode.h"
#include "AuxFunctions.h"

extern FILE* yyin;
extern std::unordered_map<std::string, bool> Interpreter::isConst;
extern std::unordered_map<std::string, Interpreter::Node*> Interpreter::varStorage;

int yylex(void);
void yyerror(const char*);


#line 91 "interpreter.tab.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "interpreter.tab.h".  */
#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 258,
    BOOL = 259,
    INTEGER = 260,
    VARIABLE = 261,
    VVARIABLE = 262,
    MVARIABLE = 263,
    CINT = 264,
    VINT = 265,
    MINT = 266,
    INT = 267,
    CVINT = 268,
    CMINT = 269,
    BOOLEAN = 270,
    CBOOLEAN = 271,
    VBOOLEAN = 272,
    MBOOLEAN = 273,
    CVBOOLEAN = 274,
    CMBOOLEAN = 275,
    NEWLINE = 276,
    PRINT = 277,
    CONJUNCTION = 278,
    ELEMMULT = 279,
    LEFTSHIFT = 280,
    RIGHTSHIFT = 281,
    ASSIGN = 282,
    DECLARE = 283,
    UMINUS = 284
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "interpreter.y" /* yacc.c:352  */

    Interpreter::BoolNode* boolPtr;
    Interpreter::IntegerNode* intPtr;
    Interpreter::Node* ptr;
    std::string* varName;
    Interpreter::VariableOperationNode* varOpPtr;
    Interpreter::varType vtype;

#line 173 "interpreter.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

#define YYUNDEFTOK  2
#define YYMAXUTOK   284

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,     2,     2,    25,
      39,    40,    35,    33,    28,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      31,     2,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      26,    27,    29,    30,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    59,    62,    66,    67,    76,    80,    81,
      82,    83,    84,    85,    86,    87,    91,    92,   103,   109,
     115,   120,   125,   130,   136,   142,   151,   155,   159,   160,
     171,   177,   182,   187,   196,   200,   204,   218,   230,   244,
     256,   268,   280,   292,   307,   313,   319,   328,   336,   346,
     359,   364,   370,   379,   380,   395,   400,   406,   412,   418,
     424,   430,   435,   441,   442,   460,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   497,   498
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "BOOL", "INTEGER", "VARIABLE",
  "VVARIABLE", "MVARIABLE", "CINT", "VINT", "MINT", "INT", "CVINT",
  "CMINT", "BOOLEAN", "CBOOLEAN", "VBOOLEAN", "MBOOLEAN", "CVBOOLEAN",
  "CMBOOLEAN", "NEWLINE", "PRINT", "CONJUNCTION", "ELEMMULT", "'\\''",
  "LEFTSHIFT", "RIGHTSHIFT", "','", "ASSIGN", "DECLARE", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "'('", "')'", "'{'", "'}'",
  "'['", "']'", "$accept", "program", "function", "stmts", "stmt",
  "matrix", "listexprs", "vector", "exprs", "vmdeclaration", "declaration",
  "assignment", "print", "expr", "type", "const", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    39,   280,   281,    44,   282,
     283,    60,    62,    43,    45,    42,    47,    33,   284,    40,
      41,   123,   125,    91,    93
};
# endif

#define YYPACT_NINF -36

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-36)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,    25,   205,   -36,   -36,   -36,   -23,    26,    82,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,    12,     6,     6,   205,   125,   -36,   170,    52,
      31,    33,    37,    53,   301,    74,   -36,     6,     0,   125,
      -6,    83,   230,   -36,    59,    75,     6,   100,   100,   167,
     -36,   220,    59,     6,    14,   126,    22,   308,   -36,   224,
     -36,   -36,   -36,    -6,   -36,   125,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     6,     6,     6,     6,     6,     6,
      95,   329,   -36,   118,   221,   -14,   -36,   342,    68,    75,
     112,   111,   346,   315,   -35,   -11,    76,     6,     6,   239,
     -36,   -36,   -36,     0,   -36,     0,     6,   -36,     6,   342,
      68,   329,   354,   118,   329,   329,   124,   124,   -15,   -15,
     100,   224,    84,   110,   133,   139,   147,    63,   -36,   -36,
     -36,   251,   322,   118,   118,   329,   329,   342,    68,   329,
     148,     6,   125,    -6,   149,   154,   263,   -36,     6,   129,
     329,    35,   275,   342,   159,   160,   173,   287,   174,   204,
     211,   226,   228,     6,   -36,     0,    -6,     0,    -6,     0,
     329,   118,   342,   118,   342,   118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    79,    78,    54,    29,    17,    67,
      68,    69,    66,    70,    71,    72,    73,    74,    75,    76,
      77,     7,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     0,    55,    61,     0,
       5,     0,    29,     0,     0,     0,     0,     0,    10,     0,
      20,    22,    21,     0,     9,     0,    23,    32,    31,    12,
      13,    14,    11,     8,     0,     0,     0,     0,     0,     0,
       0,    47,    29,    48,     0,     0,    17,    49,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     6,    63,     0,    16,     0,     0,    28,     0,    19,
      24,    25,    18,    30,    33,    62,    59,    60,    56,    57,
      58,     0,     0,    64,     0,     0,     0,     0,    51,    52,
      50,     0,     0,    27,    26,    35,    34,    46,    45,    44,
       0,     0,     0,     0,     0,     0,     0,    64,     0,     0,
      36,     0,     0,    43,     0,     0,    65,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
      38,    37,    42,    40,    41,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -36,   -36,   -36,   -36,   -22,   -25,   -36,    -2,   -36,   -36,
     -36,   -36,   -36,     7,   -36,   -36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    49,    27,    28,    54,    88,    56,    30,
      31,    32,    33,    34,    35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,    82,    86,    50,    97,   128,    37,    82,    74,    74,
       4,     5,    43,    44,    45,    87,    91,    75,    76,    77,
      78,    79,    79,    29,    55,     3,   123,   101,    98,   129,
      47,    48,    51,    57,   109,    26,    83,    84,   112,    92,
      23,    53,   103,    24,    81,    46,    85,    29,    93,    96,
     106,    42,    69,    99,    70,    38,   104,   110,    71,    65,
      57,    67,    68,   113,   107,    39,   111,     4,     5,    43,
      44,    45,   114,    64,    72,   159,    65,    66,    67,    68,
      80,   115,   116,   117,   118,   119,   120,     4,     5,    43,
      52,    89,    65,    66,    67,    68,   137,    23,    97,    74,
      24,   133,    46,   134,   131,   132,   145,    75,    76,    77,
      78,    40,    79,   135,    98,   136,   130,    23,   153,   138,
      24,    41,    46,    74,    26,   121,    90,   140,   139,     4,
       5,    43,    52,    45,   146,    59,    60,    61,    62,   141,
     151,   172,    65,   174,    67,    68,    63,    74,   150,   152,
      65,   125,    67,    68,   105,   157,   124,    77,    78,    23,
      79,   142,    24,   171,    46,   173,    53,   175,   143,   158,
     170,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     144,    58,   149,   154,    59,    60,    61,    62,   155,   161,
     162,    23,   163,   165,    24,    63,    25,   100,    26,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     4,     5,
      43,    52,    89,   166,     4,     5,    43,    94,    95,    23,
     167,    73,    24,    74,    25,    65,    26,    67,    68,   122,
       0,    75,    76,    77,    78,   168,    79,   169,    23,     0,
     102,    24,    74,    46,    23,    26,     0,    24,     0,    46,
      75,    76,    77,    78,    74,    79,     0,     0,     0,   102,
       0,     0,    75,    76,    77,    78,    74,    79,     0,     0,
       0,   147,     0,     0,    75,    76,    77,    78,    74,    79,
       0,     0,     0,   156,     0,     0,    75,    76,    77,    78,
      74,    79,     0,     0,     0,   160,     0,     0,    75,    76,
      77,    78,    73,    79,    74,     0,     0,   164,     0,     0,
       0,    74,    75,    76,    77,    78,   108,    79,    74,    75,
      76,    77,    78,   127,    79,    74,    75,    76,    77,    78,
     148,    79,    74,    75,    76,    77,    78,     0,    79,     0,
      75,    76,    77,    78,     0,    79,    59,    60,    61,    62,
      65,    66,    67,    68,   126,     0,     0,    63,    59,    60,
      61,    62
};

static const yytype_int16 yycheck[] =
{
       2,     7,     8,    25,    39,    40,    29,     7,    23,    23,
       4,     5,     6,     7,     8,    40,    41,    31,    32,    33,
      34,    36,    36,    25,    26,     0,    40,    49,    39,    40,
      23,    24,    25,    26,    59,    41,    38,    39,    63,    41,
      34,    41,    28,    37,    37,    39,    39,    49,    41,    42,
      28,    39,    21,    46,    21,    29,    42,    59,    21,    24,
      53,    26,    27,    65,    42,    39,    59,     4,     5,     6,
       7,     8,    65,    21,    21,    40,    24,    25,    26,    27,
       6,    74,    75,    76,    77,    78,    79,     4,     5,     6,
       7,     8,    24,    25,    26,    27,   121,    34,    39,    23,
      37,   103,    39,   105,    97,    98,    43,    31,    32,    33,
      34,    29,    36,   106,    39,   108,    40,    34,   143,   121,
      37,    39,    39,    23,    41,    30,    43,    43,   121,     4,
       5,     6,     7,     8,   127,    24,    25,    26,    27,    29,
     142,   166,    24,   168,    26,    27,    35,    23,   141,   142,
      24,    40,    26,    27,    28,   148,    44,    33,    34,    34,
      36,    28,    37,   165,    39,   167,    41,   169,    29,    40,
     163,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      43,    21,    44,    44,    24,    25,    26,    27,    44,    40,
      40,    34,    29,    29,    37,    35,    39,    40,    41,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     4,     5,
       6,     7,     8,    29,     4,     5,     6,     7,     8,    34,
      29,    21,    37,    23,    39,    24,    41,    26,    27,    28,
      -1,    31,    32,    33,    34,    29,    36,    29,    34,    -1,
      40,    37,    23,    39,    34,    41,    -1,    37,    -1,    39,
      31,    32,    33,    34,    23,    36,    -1,    -1,    -1,    40,
      -1,    -1,    31,    32,    33,    34,    23,    36,    -1,    -1,
      -1,    40,    -1,    -1,    31,    32,    33,    34,    23,    36,
      -1,    -1,    -1,    40,    -1,    -1,    31,    32,    33,    34,
      23,    36,    -1,    -1,    -1,    40,    -1,    -1,    31,    32,
      33,    34,    21,    36,    23,    -1,    -1,    40,    -1,    -1,
      -1,    23,    31,    32,    33,    34,    28,    36,    23,    31,
      32,    33,    34,    28,    36,    23,    31,    32,    33,    34,
      28,    36,    23,    31,    32,    33,    34,    -1,    36,    -1,
      31,    32,    33,    34,    -1,    36,    24,    25,    26,    27,
      24,    25,    26,    27,    28,    -1,    -1,    35,    24,    25,
      26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    34,    37,    39,    41,    49,    50,    52,
      54,    55,    56,    57,    58,    59,    60,    29,    29,    39,
      29,    39,    39,     6,     7,     8,    39,    58,    58,    48,
      49,    58,     7,    41,    51,    52,    53,    58,    21,    24,
      25,    26,    27,    35,    21,    24,    25,    26,    27,    21,
      21,    21,    21,    21,    23,    31,    32,    33,    34,    36,
       6,    58,     7,    52,    52,    58,     8,    50,    52,     8,
      43,    50,    52,    58,     7,     8,    58,    39,    39,    58,
      40,    49,    40,    28,    42,    28,    28,    42,    28,    50,
      52,    58,    50,    52,    58,    58,    58,    58,    58,    58,
      58,    30,    28,    40,    44,    40,    28,    28,    40,    40,
      40,    58,    58,    52,    52,    58,    58,    50,    52,    58,
      43,    29,    28,    29,    43,    43,    58,    40,    28,    44,
      58,    52,    58,    50,    44,    44,    40,    58,    40,    40,
      40,    40,    40,    29,    40,    29,    29,    29,    29,    29,
      58,    52,    50,    52,    50,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     1,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     1,
       3,     2,     2,     3,     3,     3,     6,     9,     8,     9,
       9,     9,     9,     6,     4,     4,     4,     3,     3,     3,
       4,     4,     4,     1,     1,     2,     3,     3,     3,     3,
       3,     2,     3,     3,     4,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 55 "interpreter.y" /* yacc.c:1652  */
    {outputOut(); exit(0);}
#line 1527 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 59 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyvsp[0].ptr)->execute();
                                }
#line 1535 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 66 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1541 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 67 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1552 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 76 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1561 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 80 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1567 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 81 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1573 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 82 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1579 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 83 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1585 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 84 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1591 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 85 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1597 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 86 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1603 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 87 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1609 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 91 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1615 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 92 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                    if (search != Interpreter::varStorage.end()) {
                                        auto tmp = dynamic_cast<Interpreter::AbstractMatrixNode*>(search->second)->copy();
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeX(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeY());
                                    }
                                    else {
                                        std::string tmp = std::string("Variable ") + *(yyvsp[0].varName) + " doesn't exist!";
                                        yyerror(tmp.c_str());
                                    }
                                }
#line 1631 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 103 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                    }
#line 1642 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 109 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                    }
#line 1653 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 115 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 1663 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 120 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                    }
#line 1673 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 125 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 1683 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 130 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto kid = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>(kid));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 1694 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 136 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 1705 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 142 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                    }
#line 1716 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 151 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 1725 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 155 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 1731 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 159 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1737 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 160 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                            if (search != Interpreter::varStorage.end()) {
                                                auto tmp = dynamic_cast<Interpreter::AbstractVectorNode*>(search->second)->copy();
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getSize());
                                            }
                                            else {
                                                std::string tmp = std::string("Variable ") + *(yyvsp[0].varName) + " doesn't exist!";
                                                yyerror(tmp.c_str());
                                            }
                                        }
#line 1753 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 171 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                        }
#line 1764 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 177 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                        }
#line 1774 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 182 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                        }
#line 1784 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 187 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, VEMexpr);
                                        }
#line 1795 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 196 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 1804 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 200 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 1810 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 204 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
                                                    if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-5].varName)]) {
                                                        std::vector<Interpreter::Node*> kids;
                                                        kids.push_back((yyvsp[-3].ptr));
                                                        kids.push_back((yyvsp[0].ptr));
                                                        (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(vexpr, search->second, kids);
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                    
                                                }
#line 1829 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 218 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(vvec, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 1846 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 230 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-7].varName));
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-7].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-5].ptr));
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    kids.push_back((yyvsp[0].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexpr, search->second, kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-7].varName) + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 1865 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 244 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprcolumn, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 1882 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 256 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprrow, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 1899 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 268 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mveccolumn, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 1916 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 280 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mvecrow, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 1933 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 292 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
                                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-5].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mmat, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " doesn't exist or can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 1950 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 307 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::INT || (yyvsp[-3].vtype) == Interpreter::CINT || (yyvsp[-3].vtype) == Interpreter::BOOL || (yyvsp[-3].vtype) == Interpreter::CBOOL) {
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 1961 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 313 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 1972 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 319 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 1983 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 328 "interpreter.y" /* yacc.c:1652  */
    {
                                                auto search = Interpreter::varStorage.find(*(yyvsp[-2].varName));
                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 1996 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 336 "interpreter.y" /* yacc.c:1652  */
    {
                                                auto search = Interpreter::varStorage.find(*(yyvsp[-2].varName));
                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2011 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 346 "interpreter.y" /* yacc.c:1652  */
    {
                                                auto search = Interpreter::varStorage.find(*(yyvsp[-2].varName));
                                                if (search != Interpreter::varStorage.end() && !Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2026 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 359 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 2036 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 364 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[-1].varName));
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back(search->second);
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 2047 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 370 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[-1].varName));
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back(search->second);
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids);  
                                }
#line 2058 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 379 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2064 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 380 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                    if (search != Interpreter::varStorage.end()) {
                                        if (search->second->nType == Interpreter::INTNODE) {
                                            (yyval.ptr) = new Interpreter::IntegerNode(decimal, std::to_string(search->second->execute()));
                                        }
                                        else if (search->second->nType == Interpreter::BOOLNODE) {
                                            (yyval.ptr) = new Interpreter::BoolNode(search->second->execute() ? "true" : "false");
                                        }
                                    }
                                    else {
                                        std::string tmp = std::string("Variable ") + *(yyvsp[0].varName) + " is not declared!";
                                        yyerror(tmp.c_str());
                                    }
                                }
#line 2084 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 395 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 2094 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 400 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 2105 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 406 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 2116 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 412 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 2127 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 418 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 2138 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 424 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 2149 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 430 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 2159 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 435 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 2170 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 441 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2176 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 442 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                    if (search != Interpreter::varStorage.end()) {
                                        std::vector<Interpreter::Node*> kids;
                                        kids.push_back((yyvsp[-1].ptr));
                                        kids.push_back(search->second);
                                        if (search->second->nType == Interpreter::INTVECNODE) {
                                            (yyval.ptr) = new Interpreter::OperationNode(vintgetexp, kids);
                                        }
                                        else if (search->second->nType == Interpreter::BOOLVECNODE) {
                                            (yyval.ptr) = new Interpreter::OperationNode(vboolgetexp, kids);
                                        }
                                    }
                                    else {
                                        std::string tmp = std::string("Variable ") + *(yyvsp[-3].varName) + " is not declared!";
                                        yyerror(tmp.c_str());
                                    }
                                }
#line 2199 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 460 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
                                            if (search != Interpreter::varStorage.end()) {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back((yyvsp[-3].ptr));
                                                kids.push_back((yyvsp[-1].ptr));
                                                kids.push_back(search->second);
                                                if (search->second->nType == Interpreter::INTMATNODE) {
                                                    (yyval.ptr) = new Interpreter::OperationNode(mintgetexp, kids);
                                                }
                                                else if (search->second->nType == Interpreter::BOOLMATNODE) {
                                                    (yyval.ptr) = new Interpreter::OperationNode(mboolgetexp, kids);
                                                }
                                            }
                                            else {
                                                std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " is not declared!";
                                                yyerror(tmp.c_str());
                                            }
                                        }
#line 2223 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 482 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2229 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 483 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2235 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 484 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2241 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 485 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2247 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 486 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2253 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 487 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2259 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 488 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2265 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 489 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2271 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 490 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2277 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 491 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2283 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 492 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2289 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 493 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2295 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 497 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 2301 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 498 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 2307 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 2311 "interpreter.tab.c" /* yacc.c:1652  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 501 "interpreter.y" /* yacc.c:1918  */


void yyerror(const char* error) {
    std::cerr << error << std::endl;
}

int main(void) {
    yyin = std::fopen("test.txt", "r");
    yyparse();
    std::fclose(yyin);
    return 0;
}
