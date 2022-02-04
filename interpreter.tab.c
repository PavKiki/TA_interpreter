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
    VAR = 264,
    CINT = 265,
    VINT = 266,
    MINT = 267,
    INT = 268,
    CVINT = 269,
    CMINT = 270,
    BOOLEAN = 271,
    CBOOLEAN = 272,
    VBOOLEAN = 273,
    MBOOLEAN = 274,
    CVBOOLEAN = 275,
    CMBOOLEAN = 276,
    NEWLINE = 277,
    PRINT = 278,
    CONJUNCTION = 279,
    ELEMMULT = 280,
    LEFTSHIFT = 281,
    RIGHTSHIFT = 282,
    IF = 283,
    FORR = 284,
    BEGIF = 285,
    ENDIF = 286,
    BEGFOR = 287,
    ENDFOR = 288,
    ER = 289,
    DOUBLEDOT = 290,
    ASSIGN = 291,
    DECLARE = 292,
    UMINUS = 293
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

#line 182 "interpreter.tab.c" /* yacc.c:352  */
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
#define YYLAST   644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
       2,     2,     2,    46,     2,     2,     2,     2,     2,    26,
      48,    49,    44,    42,    29,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,     2,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      25,    27,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    59,    67,    71,    72,    81,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    98,   107,
     117,   118,   125,   132,   139,   144,   150,   156,   161,   166,
     171,   177,   183,   192,   196,   200,   201,   208,   215,   222,
     227,   233,   238,   243,   253,   257,   261,   275,   287,   301,
     313,   325,   337,   349,   364,   377,   385,   396,   403,   412,
     424,   429,   432,   438,   439,   443,   448,   454,   460,   466,
     472,   478,   483,   489,   490,   502,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   533,   534
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "BOOL", "INTEGER", "VARIABLE",
  "VVARIABLE", "MVARIABLE", "VAR", "CINT", "VINT", "MINT", "INT", "CVINT",
  "CMINT", "BOOLEAN", "CBOOLEAN", "VBOOLEAN", "MBOOLEAN", "CVBOOLEAN",
  "CMBOOLEAN", "NEWLINE", "PRINT", "CONJUNCTION", "ELEMMULT", "'\\''",
  "LEFTSHIFT", "RIGHTSHIFT", "','", "IF", "FORR", "BEGIF", "ENDIF",
  "BEGFOR", "ENDFOR", "ER", "DOUBLEDOT", "ASSIGN", "DECLARE", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "'('", "')'", "'{'", "'}'",
  "'['", "']'", "$accept", "program", "function", "stmts", "stmt", "iff",
  "forr", "matrix", "listexprs", "vector", "exprs", "vmdeclaration",
  "declaration", "assignment", "print", "expr", "type", "const", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    39,   281,   282,    44,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
      60,    62,    43,    45,    42,    47,    33,   293,    40,    41,
     123,   125,    91,    93
};
# endif

#define YYPACT_NINF -30

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-30)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,    32,   418,   -30,   -30,   -30,    -5,     2,    13,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -13,    97,   623,    97,    97,   418,     6,   418,
     -30,    22,    37,   336,   382,    42,    46,    55,    56,   513,
      70,   -30,    97,    -4,     6,    -2,    17,   305,   -30,    33,
      35,    97,   521,    51,    85,    85,   277,   429,    62,    67,
      97,   -21,    65,   -20,   541,   -30,   -30,   -30,   -30,    68,
     -30,   -30,   -30,    -2,   -30,     6,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,    97,    97,    97,    97,    97,    97,
      78,   587,    73,    74,   170,   150,   199,    76,   278,   417,
      80,    77,   226,   289,   550,   -29,   -22,   439,    97,    97,
     449,   102,    97,   -30,   -30,     6,   214,    -4,   -30,    -4,
      97,   -30,    97,   278,   417,   587,   430,   170,   587,   587,
     120,   120,   -17,   -17,    85,    68,    -4,   214,    83,    91,
     153,   153,   107,   101,    95,   221,   -30,   -30,   -30,   459,
     565,   418,   535,   218,   100,   572,   170,   170,   587,   587,
     278,   417,   587,   580,   111,    97,   113,   524,   370,     6,
      -2,   121,   129,   469,   -30,    97,   324,   116,   103,   125,
     228,   131,   124,   587,   156,   -30,   141,    57,   479,   278,
     145,   151,   164,   489,   -30,   418,   154,    97,   157,   166,
       6,   160,   168,   171,   177,   178,    97,   -30,   371,   175,
     499,   181,    -4,   143,   182,    -2,    -4,    -2,    -4,   587,
     -30,   -30,   -30,   -30,   170,   -30,   -30,   278,   170,   278,
     170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    89,    88,    64,    39,    24,    77,
      78,    79,    76,    80,    81,    82,    83,    84,    85,    86,
      87,     7,     0,     0,     0,     0,     0,     0,     0,     3,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,     0,    65,    71,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     6,    15,    16,    10,     0,
      27,    29,    28,     0,     9,     0,    30,    42,    41,    12,
      13,    14,    11,     8,     0,     0,     0,     0,     0,     0,
       0,    57,    39,     0,    58,     0,     0,    24,    59,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,    73,     0,     0,     0,    20,     0,
       0,    35,     0,    26,    31,    32,    25,    40,    43,    72,
      69,    70,    66,    67,    68,     0,     0,     0,     0,    74,
       0,     0,     0,    23,     0,     0,    61,    62,    60,     0,
       0,     0,     0,     0,     0,     0,    34,    33,    45,    44,
      56,    55,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    23,     0,     0,     0,    53,
       0,     0,    75,     0,    18,     0,     0,     0,     0,    36,
       0,     0,    22,    38,    21,    37,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      19,    36,    38,    37,    47,    22,    21,    52,    50,    51,
      49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -30,   -30,   -30,   -26,   -27,   -30,   -30,    -3,   -30,   -28,
     -30,   -30,   213,   -30,   -30,    11,   -30,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    29,    30,    31,    32,    33,    61,    34,
      63,    35,    36,    37,    38,    39,    40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,    56,    65,    92,    93,    92,    97,    84,   117,   120,
       4,     5,    48,    58,    59,    94,    95,    99,   103,   108,
     146,     4,     5,    48,    58,   100,   109,   147,    89,    65,
     118,   121,     3,    42,    52,    47,    54,    55,    57,    64,
      43,   124,    98,   102,    66,    99,    60,   127,    28,    25,
      44,    45,    26,    91,    51,    96,    60,   104,   107,    67,
      25,    46,   110,    26,    79,    51,   123,    28,    80,   101,
     126,    64,     4,     5,    48,    58,   100,    81,    82,    90,
     125,   108,    75,   109,    77,    78,   128,   153,   112,   156,
      75,   157,    77,    78,   119,   129,   130,   131,   132,   133,
     134,     4,     5,    48,    49,    50,   202,   161,   153,    84,
     115,    25,   168,   168,    26,   116,    51,   135,    28,   149,
     150,   136,   137,   152,   140,   176,   149,   155,   141,   165,
     142,   158,   160,   159,   151,   164,   169,   167,   167,   170,
      25,   187,    99,    26,    84,    51,   162,   171,   163,    65,
     195,   163,   155,   179,   197,   196,   173,     4,     5,    48,
      58,   100,    87,    88,   182,    89,   184,   189,    75,   208,
      77,    78,   213,   199,   190,    75,   183,    77,    78,   138,
     188,    65,   191,   198,   224,   200,   193,    99,   228,    99,
     230,   193,   225,   201,   204,    75,    25,    77,    78,    26,
     205,    51,   206,    28,   212,   166,   215,   209,   210,   216,
     211,   210,   227,   214,   229,   217,   218,   219,     4,     5,
      48,    49,    50,    84,   221,     4,     5,    48,    49,    50,
     223,   226,     4,     5,    48,    49,    50,    53,     0,    85,
      86,    87,    88,    75,    89,    77,    78,   178,   139,     0,
       0,    69,    70,    71,    72,     0,     0,    25,     0,     0,
      26,     0,    51,     0,    25,     0,   154,    26,     0,    51,
      73,    25,     0,   172,    26,   143,    51,     0,     0,     0,
     198,     4,     5,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,    69,    70,    71,    72,    23,    24,     4,
       5,    48,   105,   106,    75,    76,    77,    78,   144,     0,
      25,     0,    73,    26,     0,    27,   113,    28,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    25,     0,
       0,    26,     0,    51,    23,    24,     0,   194,    68,     0,
       0,    69,    70,    71,    72,     0,     0,    25,     0,     0,
      26,     0,    27,     0,    28,     4,     5,     6,     7,     8,
      73,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    75,    76,    77,    78,   186,
       0,    23,    24,     0,    74,     0,   220,    75,    76,    77,
      78,     0,     0,     0,    25,     0,     0,    26,     0,    27,
       0,    28,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    75,    76,    77,    78,     0,     0,    23,    24,
       0,    83,     0,    84,     0,    69,    70,    71,    72,     0,
       0,    25,     0,    84,    26,     0,    27,     0,    28,    85,
      86,    87,    88,    84,    89,     0,     0,     0,   114,    85,
      86,    87,    88,    84,    89,     0,     0,     0,   148,    85,
      86,    87,    88,    84,    89,     0,     0,     0,   114,    85,
      86,    87,    88,    84,    89,     0,     0,     0,   174,    85,
      86,    87,    88,    84,    89,     0,     0,     0,   192,    85,
      86,    87,    88,    84,    89,     0,     0,     0,   203,    85,
      86,    87,    88,     0,    89,    83,     0,    84,   207,    85,
      86,    87,    88,   111,    89,    84,     0,     0,   222,    69,
      70,    71,    72,    85,    86,    87,    88,   177,    89,    84,
       0,    85,    86,    87,    88,    84,    89,     0,    73,     0,
     122,     0,     0,   185,    84,    85,    86,    87,    88,   145,
      89,    85,    86,    87,    88,     0,    89,     0,     0,    84,
      85,    86,    87,    88,   175,    89,    84,     0,     0,     0,
       0,   180,     0,     0,    84,    85,    86,    87,    88,   181,
      89,    84,    85,    86,    87,    88,     0,    89,     0,     0,
      85,    86,    87,    88,     0,    89,     0,    85,    86,    87,
      88,     0,    89,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
      28,    27,    29,     7,     8,     7,     8,    24,    29,    29,
       4,     5,     6,     7,     8,    43,    44,    45,    46,    48,
      49,     4,     5,     6,     7,     8,    48,    49,    45,    56,
      51,    51,     0,    38,    23,    48,    25,    26,    27,    28,
      38,    69,    45,    46,    22,    73,    50,    75,    50,    43,
      48,    38,    46,    42,    48,    44,    50,    46,    47,    22,
      43,    48,    51,    46,    22,    48,    69,    50,    22,    52,
      73,    60,     4,     5,     6,     7,     8,    22,    22,     9,
      69,    48,    25,    48,    27,    28,    75,   115,    37,   117,
      25,   119,    27,    28,    29,    84,    85,    86,    87,    88,
      89,     4,     5,     6,     7,     8,    49,   135,   136,    24,
      48,    43,   140,   141,    46,    48,    48,    39,    50,   108,
     109,    48,    48,   112,    48,   151,   115,   116,    48,    38,
      53,   120,   135,   122,    32,    52,    29,   140,   141,    38,
      43,   169,   170,    46,    24,    48,   135,    52,   137,   176,
      34,   140,   141,    53,    29,    52,   145,     4,     5,     6,
       7,     8,    42,    43,    53,    45,    53,   170,    25,   195,
      27,    28,   200,    49,    53,    25,   165,    27,    28,    29,
     169,   208,    53,    52,   212,    29,   175,   215,   216,   217,
     218,   180,    49,    52,    49,    25,    43,    27,    28,    46,
      49,    48,    38,    50,    38,    52,    38,    53,   197,    38,
      53,   200,   215,    53,   217,    38,    38,   206,     4,     5,
       6,     7,     8,    24,    49,     4,     5,     6,     7,     8,
      49,    49,     4,     5,     6,     7,     8,    24,    -1,    40,
      41,    42,    43,    25,    45,    27,    28,    29,    49,    -1,
      -1,    25,    26,    27,    28,    -1,    -1,    43,    -1,    -1,
      46,    -1,    48,    -1,    43,    -1,    52,    46,    -1,    48,
      44,    43,    -1,    52,    46,    49,    48,    -1,    -1,    -1,
      52,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    25,    26,    27,    28,    30,    31,     4,
       5,     6,     7,     8,    25,    26,    27,    28,    29,    -1,
      43,    -1,    44,    46,    -1,    48,    49,    50,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    43,    -1,
      -1,    46,    -1,    48,    30,    31,    -1,    33,    22,    -1,
      -1,    25,    26,    27,    28,    -1,    -1,    43,    -1,    -1,
      46,    -1,    48,    -1,    50,     4,     5,     6,     7,     8,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    25,    26,    27,    28,    29,
      -1,    30,    31,    -1,    22,    -1,    35,    25,    26,    27,
      28,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      -1,    50,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    25,    26,    27,    28,    -1,    -1,    30,    31,
      -1,    22,    -1,    24,    -1,    25,    26,    27,    28,    -1,
      -1,    43,    -1,    24,    46,    -1,    48,    -1,    50,    40,
      41,    42,    43,    24,    45,    -1,    -1,    -1,    49,    40,
      41,    42,    43,    24,    45,    -1,    -1,    -1,    49,    40,
      41,    42,    43,    24,    45,    -1,    -1,    -1,    49,    40,
      41,    42,    43,    24,    45,    -1,    -1,    -1,    49,    40,
      41,    42,    43,    24,    45,    -1,    -1,    -1,    49,    40,
      41,    42,    43,    24,    45,    -1,    -1,    -1,    49,    40,
      41,    42,    43,    -1,    45,    22,    -1,    24,    49,    40,
      41,    42,    43,    22,    45,    24,    -1,    -1,    49,    25,
      26,    27,    28,    40,    41,    42,    43,    22,    45,    24,
      -1,    40,    41,    42,    43,    24,    45,    -1,    44,    -1,
      29,    -1,    -1,    49,    24,    40,    41,    42,    43,    29,
      45,    40,    41,    42,    43,    -1,    45,    -1,    -1,    24,
      40,    41,    42,    43,    29,    45,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    24,    40,    41,    42,    43,    29,
      45,    24,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      40,    41,    42,    43,    -1,    45,    -1,    40,    41,    42,
      43,    -1,    45,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     4,     5,     6,     7,     8,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    30,    31,    43,    46,    48,    50,    57,
      58,    59,    60,    61,    63,    65,    66,    67,    68,    69,
      70,    71,    38,    38,    48,    38,    48,    48,     6,     7,
       8,    48,    69,    66,    69,    69,    57,    69,     7,     8,
      50,    62,    63,    64,    69,    58,    22,    22,    22,    25,
      26,    27,    28,    44,    22,    25,    26,    27,    28,    22,
      22,    22,    22,    22,    24,    40,    41,    42,    43,    45,
       9,    69,     7,     8,    63,    63,    69,     8,    61,    63,
       8,    52,    61,    63,    69,     7,     8,    69,    48,    48,
      69,    22,    37,    49,    49,    48,    48,    29,    51,    29,
      29,    51,    29,    61,    63,    69,    61,    63,    69,    69,
      69,    69,    69,    69,    69,    39,    48,    48,    29,    49,
      48,    48,    53,    49,    29,    29,    49,    49,    49,    69,
      69,    32,    69,    63,    52,    69,    63,    63,    69,    69,
      61,    63,    69,    69,    52,    38,    52,    61,    63,    29,
      38,    52,    52,    69,    49,    29,    57,    22,    29,    53,
      29,    29,    53,    69,    53,    49,    29,    63,    69,    61,
      53,    53,    49,    69,    33,    34,    52,    29,    52,    49,
      29,    52,    49,    49,    49,    49,    38,    49,    57,    53,
      69,    53,    38,    63,    53,    38,    38,    38,    38,    69,
      35,    49,    49,    49,    63,    49,    49,    61,    63,    61,
      63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    67,    67,    67,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     6,     8,
       3,     7,     7,     4,     1,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     7,     7,     7,     1,
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
#line 1612 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 59 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyvsp[0].ptr)->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 1625 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 71 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1631 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 72 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1642 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 81 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1651 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 85 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1657 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 86 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1663 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 87 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1669 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 88 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1675 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 89 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1681 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 90 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1687 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 91 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1693 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 92 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1699 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 93 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1705 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 94 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1711 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 98 "interpreter.y" /* yacc.c:1652  */
    {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back((yyvsp[-4].ptr));
                                                kids.push_back((yyvsp[-1].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(iff, kids);
                                            }
#line 1722 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 107 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].varOpPtr));
                                                                    kids.push_back((yyvsp[-4].ptr));
                                                                    kids.push_back((yyvsp[-1].ptr));
                                                                    (yyval.ptr) = new Interpreter::OperationNode(forr, kids);
                                                                }
#line 1734 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 117 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1740 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 118 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex);
                                                }
#line 1752 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 125 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mvecrowindex);
                                                }
#line 1764 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 132 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmatindex);
                                                }
#line 1776 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 139 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                        auto tmp = dynamic_cast<Interpreter::AbstractMatrixNode*>(search->second)->copy();
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeX(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeY());
                                    }
#line 1786 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 144 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                    }
#line 1797 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 150 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                    }
#line 1808 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 156 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 1818 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 161 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                    }
#line 1828 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 166 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 1838 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 171 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto kid = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>(kid));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 1849 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 177 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 1860 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 183 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                    }
#line 1871 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 192 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 1880 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 196 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 1886 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 200 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1892 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 201 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vvecindex);
                                                }
#line 1904 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 208 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex);
                                                }
#line 1916 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 215 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerVectorNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprrowindex);
                                                }
#line 1928 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 222 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                            auto tmp = dynamic_cast<Interpreter::AbstractVectorNode*>(search->second)->copy();
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getSize());
                                        }
#line 1938 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 227 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                        }
#line 1949 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 233 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                        }
#line 1959 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 238 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                        }
#line 1969 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 243 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, VEMexpr);
                                        }
#line 1980 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 253 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 1989 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 257 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 1995 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 261 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
                                                    if (!Interpreter::isConst[*(yyvsp[-5].varName)]) {
                                                        std::vector<Interpreter::Node*> kids;
                                                        kids.push_back((yyvsp[-3].ptr));
                                                        kids.push_back((yyvsp[0].ptr));
                                                        (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(vexpr, search->second, kids);
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                    
                                                }
#line 2014 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 275 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(vvec, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 2031 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 287 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-7].varName));
                                                                if (!Interpreter::isConst[*(yyvsp[-7].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-5].ptr));
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    kids.push_back((yyvsp[0].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexpr, search->second, kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-7].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 2050 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 301 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprcolumn, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 2067 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 313 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprrow, search->second, dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 2084 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 325 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mveccolumn, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 2101 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 337 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-8].varName));
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mvecrow, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 2118 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 349 "interpreter.y" /* yacc.c:1652  */
    {
                                                                auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
                                                                if (!Interpreter::isConst[*(yyvsp[-5].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mmat, search->second, dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 2135 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 364 "interpreter.y" /* yacc.c:1652  */
    {        
                                                    if ((yyvsp[-3].vtype) == Interpreter::INT || (yyvsp[-3].vtype) == Interpreter::CINT) {
                                                        auto plug = new Interpreter::IntegerNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    }
                                                    else if ((yyvsp[-3].vtype) == Interpreter::BOOL || (yyvsp[-3].vtype) == Interpreter::CBOOL) {
                                                        auto plug = new Interpreter::BoolNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2153 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 377 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2166 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 385 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2179 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 396 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2191 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 403 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2205 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 412 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2219 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 424 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 2229 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 429 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                }
#line 2237 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 432 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                }
#line 2245 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 438 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2251 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 439 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                }
#line 2259 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 443 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 2269 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 448 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 2280 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 454 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 2291 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 460 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 2302 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 466 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 2313 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 472 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 2324 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 478 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 2334 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 483 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 2345 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 489 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2351 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 490 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
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
#line 2368 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 502 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
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
#line 2386 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 518 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2392 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 519 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2398 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 520 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2404 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 521 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2410 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 522 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2416 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 523 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2422 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 524 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2428 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 525 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2434 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 526 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2440 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 527 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2446 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 528 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2452 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 529 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2458 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 533 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 2464 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 534 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 2470 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 2474 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 537 "interpreter.y" /* yacc.c:1918  */


void yyerror(const char* error) {
    std::cerr << error << std::endl;
}

int main(void) {
    yyin = std::fopen("test.txt", "r");
    yyparse();
    std::fclose(yyin);
    return 0;
}
