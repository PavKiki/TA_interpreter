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
#include "classes/FunctionNode.h"
#include "AuxFunctions.h"
#include "classes/Robot.h"

extern FILE* yyin;
extern std::unordered_map<std::string, bool> Interpreter::isConst;
extern std::unordered_map<std::string, Interpreter::Node*> Interpreter::varStorage;

int yylex(void);
void yyerror(const char*);


#line 93 "interpreter.tab.c" /* yacc.c:337  */
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
    FVARIABLE = 265,
    CINT = 266,
    VINT = 267,
    MINT = 268,
    INT = 269,
    CVINT = 270,
    CMINT = 271,
    BOOLEAN = 272,
    CBOOLEAN = 273,
    VBOOLEAN = 274,
    MBOOLEAN = 275,
    CVBOOLEAN = 276,
    CMBOOLEAN = 277,
    NEWLINE = 278,
    PRINT = 279,
    CONJUNCTION = 280,
    ELEMMULT = 281,
    LEFTSHIFT = 282,
    RIGHTSHIFT = 283,
    IF = 284,
    FORR = 285,
    ER = 286,
    DOUBLEDOT = 287,
    B = 288,
    E = 289,
    FUNC = 290,
    MOVE = 291,
    RIGHT = 292,
    LEFT = 293,
    ROBEX = 294,
    WALL = 295,
    BEGFOR = 296,
    BEGIF = 297,
    ENDIF = 298,
    ENDFOR = 299,
    DFLT = 300,
    ASSIGN = 301,
    DECLARE = 302,
    UMINUS = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "interpreter.y" /* yacc.c:352  */

    Interpreter::BoolNode* boolPtr;
    Interpreter::IntegerNode* intPtr;
    Interpreter::Node* ptr;
    std::string* varName;
    Interpreter::VariableOperationNode* varOpPtr;
    Interpreter::varType vtype;

#line 194 "interpreter.tab.c" /* yacc.c:352  */
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
#define YYLAST   1347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  337

#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
       2,     2,     2,    56,     2,     2,     2,     2,     2,    27,
      58,    59,    54,    52,    30,    53,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,     2,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      25,    26,    28,    29,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    67,    75,    78,    82,    83,    89,    93,
     100,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   124,   125,   129,   137,   144,
     151,   158,   165,   179,   180,   184,   185,   189,   190,   194,
     195,   199,   213,   216,   220,   228,   229,   230,   231,   232,
     236,   240,   244,   248,   253,   258,   266,   273,   280,   289,
     292,   295,   298,   301,   305,   309,   313,   317,   322,   329,
     333,   341,   342,   351,   361,   371,   380,   391,   402,   412,
     422,   432,   442,   453,   464,   469,   474,   482,   486,   487,
     494,   495,   505,   515,   525,   534,   545,   555,   565,   576,
     580,   588,   592,   593,   600,   618,   629,   642,   653,   664,
     675,   686,   700,   715,   724,   736,   743,   752,   764,   769,
     772,   778,   779,   780,   781,   782,   786,   791,   797,   803,
     809,   815,   821,   826,   832,   833,   838,   844,   852,   853,
     854,   855,   856,   857,   858,   859,   860,   861,   862,   863,
     867,   868
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "BOOL", "INTEGER", "VARIABLE",
  "VVARIABLE", "MVARIABLE", "VAR", "FVARIABLE", "CINT", "VINT", "MINT",
  "INT", "CVINT", "CMINT", "BOOLEAN", "CBOOLEAN", "VBOOLEAN", "MBOOLEAN",
  "CVBOOLEAN", "CMBOOLEAN", "NEWLINE", "PRINT", "CONJUNCTION", "ELEMMULT",
  "'\\''", "LEFTSHIFT", "RIGHTSHIFT", "','", "IF", "FORR", "ER",
  "DOUBLEDOT", "B", "E", "FUNC", "MOVE", "RIGHT", "LEFT", "ROBEX", "WALL",
  "BEGFOR", "BEGIF", "ENDIF", "ENDFOR", "DFLT", "ASSIGN", "DECLARE", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "'('", "')'", "'['",
  "']'", "'{'", "'}'", "$accept", "program", "func", "stmts", "stmt",
  "robotactions", "robotmove", "robotright", "robotleft", "robotwall",
  "robotexit", "iff", "begif", "endif", "begfor", "endfor", "forr",
  "return_func", "args_func", "function_head", "function", "callfunc_args",
  "callfunction", "matrix", "listexprs", "vector", "exprs",
  "vmdeclaration", "declaration", "assignment", "print", "expr", "type",
  "const", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    39,   282,   283,
      44,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
      60,    62,    43,    45,    42,    47,    33,   303,    40,    41,
      91,    93,   123,   125
};
# endif

#define YYPACT_NINF -33

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-33)))

#define YYTABLE_NINF -69

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,     4,   601,   -33,   538,   -33,   -33,   -25,   -23,    31,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -16,  1146,  1325,     0,   -33,   -33,   -33,
     -33,  1146,  1146,  1024,  1325,   402,   664,   -33,    17,   -33,
     -33,   -33,   -33,   -33,    38,    54,    55,    74,    76,   608,
     202,    79,    83,   111,   112,   416,   113,   -33,  1066,   -33,
      80,    84,   -33,  1146,   326,   -10,   142,   252,  1146,     5,
     402,    14,   334,  1154,  1146,    85,    88,  1093,    98,  1146,
     115,   115,   724,   904,    23,   106,   128,    25,   138,   402,
      90,  1146,     2,   290,     8,  1241,   475,   -33,   -33,   -33,
     -33,   127,   -33,   -33,   -33,  1066,   -33,   -33,   -33,    14,
     -33,   402,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
    1146,  1146,  1146,  1146,  1146,  1146,   114,   402,   394,   160,
      42,   -33,    33,   -10,   142,   252,   252,   402,    97,   102,
      99,   433,   215,  1066,   117,   -10,   142,   103,    82,   391,
    1256,   -22,    -2,   296,   252,  1146,  1146,    -5,  1146,  1165,
     -33,   -33,  1325,   133,   -33,   114,   134,   -33,    99,   252,
     255,   -33,     5,   -33,     5,   -33,  1146,   -33,  1146,  1024,
     -10,   142,   252,   258,    99,   252,   252,   137,   137,    26,
      26,   115,  1066,   474,  1175,   116,   332,   400,  1265,   -33,
    1053,   -33,   252,     5,   255,   124,   139,   252,   394,   146,
     147,   126,  1125,   -33,   -33,   -33,  1272,   -33,   -33,  1024,
    1227,   -33,   185,   187,   164,   141,    99,    99,   252,   252,
     964,   -10,   142,   252,   161,   -33,   176,   -33,   163,  1133,
     -33,   -10,   142,   252,  1280,   165,  1146,   402,    14,   171,
     172,  1186,  1146,   784,    53,   -33,   174,   198,   194,   -33,
     177,   402,   183,   184,  1196,   189,   188,   252,   -18,  1206,
     -10,   192,   196,   210,   -33,   -33,   -33,   -33,   -33,  1024,
     326,   211,  1146,   212,    86,  1217,   213,   220,   -33,   232,
     241,   244,   246,   247,  1146,   844,    44,    13,   -33,   -33,
     -33,   -33,   -33,     5,    14,     5,    14,     5,   252,   -33,
     -33,   -33,   -33,   -33,  1325,    32,    99,   -10,    99,   -10,
      99,   289,   -33,  1325,   -33,   -33,   250,   291,  1066,   257,
     -10,   142,   252,  1066,   -10,   142,   252
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,   151,   150,   125,    94,    75,
     139,   140,   141,   138,   142,   143,   144,   145,   146,   147,
     148,   149,    10,     0,     0,     0,     0,    28,    29,    31,
      30,     0,     0,     0,     0,     0,     0,     6,     0,   123,
      25,    26,   124,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,   125,
      94,    75,    24,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,    22,    18,
      19,     0,    20,    21,    13,     0,    78,    80,    79,     0,
      12,     0,    81,    97,    96,    15,    16,    17,    14,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,    61,    60,    59,   115,     0,    94,     0,
     116,     0,     0,     0,    75,   117,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,     0,
      23,    44,     0,     0,   134,    42,     0,    42,    99,   100,
       0,    89,     0,    71,     0,   103,     0,    90,     0,     0,
      77,    82,    83,    76,    95,    98,   133,   130,   131,   127,
     128,   129,     0,     0,     0,     0,     0,     0,     0,    67,
       0,    70,   100,     0,     0,     0,   135,    86,     0,     0,
      74,     0,     0,   119,   120,   118,     0,    33,    34,     0,
       0,    27,     0,     0,     0,     0,    88,    87,   102,   101,
       0,   114,   113,   112,     0,   135,     0,    74,     0,     0,
      66,    65,    64,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,   104,     0,     0,
     111,     0,     0,   136,    35,    36,    32,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,    91,
      73,    93,    72,    92,     0,     0,     0,     0,    91,    73,
      93,    72,    92,     0,     0,     0,     0,     0,   106,    39,
      40,    41,    69,    55,     0,     0,   105,   110,   108,   109,
     107,     0,    54,     0,    56,    53,    45,     0,     0,    49,
      48,    47,    46,     0,    52,    51,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -33,   -33,   -33,   -26,   -31,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   276,   -33,   -33,
     -33,    34,   -33,   145,   -33,   109,   -33,   -33,   297,   -33,
     -33,    -4,   -32,   -33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    36,    37,    38,    39,    40,    41,    42,
      43,    44,   219,   276,   279,   311,    45,    84,   315,    46,
      47,   132,    48,    49,    92,    50,    94,    51,    52,    53,
      54,    55,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    86,    88,   171,     3,    97,   137,    83,   111,   175,
     113,   114,   138,   139,   313,   143,   105,   106,   107,   108,
      77,   138,   144,    68,   161,    69,   161,    80,    81,    85,
     217,    95,   172,   322,   199,    70,   155,   213,   176,   218,
      98,   290,    73,    58,   109,   199,     5,     6,    59,    60,
      61,   120,    97,   162,    67,   162,   156,   214,    79,   129,
     135,    99,   323,   200,   136,   173,   142,    91,   150,   153,
     154,   177,   -68,   314,   200,   159,    35,   100,    67,    71,
      26,   125,   163,    29,    30,   169,   166,    95,   277,    72,
     101,   324,    67,   325,   201,    31,   278,   102,    32,   103,
      63,   182,   115,   -68,    35,   312,   116,   185,   105,   106,
     107,   108,   111,    66,   113,   114,   186,   187,   188,   189,
     190,   191,   126,   194,   198,   111,    67,   113,   114,   119,
     222,   120,   158,   202,   117,   118,   109,   165,   127,   207,
     120,   210,   128,   155,    93,   299,   156,   167,   170,    65,
     179,   194,   216,   230,   220,   203,   121,   122,   123,   124,
     204,   125,   120,   192,   209,   164,   198,    66,   111,   112,
     113,   114,   228,   134,   229,   208,   247,   236,   140,   141,
     146,   149,   223,   224,   245,   120,   249,   246,   233,   123,
     124,    66,   125,   253,   255,   248,   243,   256,   168,    97,
     244,   257,   258,    65,   244,    66,   261,   281,   251,   133,
     121,   122,   123,   124,   181,   125,   145,   148,   146,   164,
     184,   260,    97,   262,   282,   110,   266,    65,   111,   112,
     113,   114,   271,   272,   280,   264,   193,   197,   283,    66,
     120,    65,   267,   269,   286,   287,   168,   289,   264,   263,
     180,   292,    66,   295,   183,   293,    74,   285,   294,     5,
       6,    59,    75,    76,    97,   121,   122,   123,   124,   297,
     125,   298,   301,   196,   206,    65,   135,   120,   285,   302,
     303,   226,   321,   227,   105,   106,   107,   108,    65,   304,
     308,   327,   305,    26,   306,   307,    29,    30,   326,   328,
     329,   232,   121,   122,   123,   124,   333,   125,    31,   242,
      87,    32,   193,    63,   296,   225,   111,   197,   113,   114,
     174,   120,    78,     0,   332,     0,     0,   130,     0,   336,
       5,     6,    59,    60,    61,    58,     0,   231,     5,     6,
      59,    60,    61,     0,     0,   241,   121,   122,   123,   124,
       0,   125,     0,   196,     0,   215,   268,   146,   105,   106,
     107,   108,     0,     0,    26,     0,     0,    29,    30,     0,
     284,     0,    26,   131,     0,    29,    30,     0,     0,    31,
       0,     0,    32,     0,    63,     0,   109,    31,    35,   134,
      32,   237,    63,   270,   147,    58,    35,     0,     5,     6,
      59,    60,    61,    89,     0,     0,     5,     6,    59,    60,
      90,     0,   316,   146,   318,   146,   320,   111,   112,   113,
     114,   211,     0,     0,     0,   133,   111,   112,   113,   114,
     238,     0,    26,     0,     0,    29,    30,   331,     0,   119,
      26,   120,   335,    29,    30,     0,     0,    31,     0,   317,
      32,   319,    63,     0,   195,    31,    35,     0,    32,   111,
      63,   113,   114,   205,    91,     0,   121,   122,   123,   124,
       0,   125,     0,   330,     0,    -8,    58,     0,   334,     5,
       6,    59,    60,    61,     0,     0,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    62,    -8,
     111,     0,   113,   114,   234,     0,    -8,    -8,     0,     0,
     -57,    -8,     0,    26,    -8,    -8,    29,    30,     0,     0,
      -8,    -8,     0,     0,     0,     0,     0,     0,    31,     0,
       0,    32,     0,    63,    -8,    64,     0,    35,    -4,    58,
       0,     0,     5,     6,    59,    60,    61,     0,     0,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    62,    -4,     0,     0,     0,     0,     0,     0,    -4,
      -4,     0,     0,   -57,     0,     0,    26,    -4,    -4,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,    32,     0,    63,     0,    64,     0,
      35,    -2,     4,     0,     0,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,   104,    24,    25,   105,   106,   107,   108,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,    32,     0,    33,
       0,    34,   109,    35,    -3,    96,     0,     0,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    33,     0,    34,    58,    35,     0,     5,     6,
      59,    60,    61,     0,     0,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    62,    -9,     0,
       0,     0,     0,     0,     0,    -9,    -9,     0,     0,   -57,
      -9,     0,    26,    -9,    -9,    29,    30,     0,     0,    -9,
      -9,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    63,    -9,    64,    96,    35,     0,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
     274,     0,    26,    27,    28,    29,    30,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    33,     0,    34,    96,    35,     0,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
     309,     0,    26,    27,    28,    29,    30,     0,     0,     0,
     310,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    33,     0,    34,    96,    35,     0,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    33,   160,    34,    96,    35,     0,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
     259,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    33,     0,    34,    82,    35,     0,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,    58,    24,    25,     5,     6,    59,
      60,    61,    26,    27,    28,    29,    30,    58,     0,     0,
       5,     6,    59,    60,    61,     0,     0,    31,     0,     0,
      32,     0,    33,     0,    34,     0,    35,     0,     0,     0,
       0,    26,     0,     0,    29,    30,     0,     0,     0,     0,
     240,     0,     0,     0,    26,     0,    31,    29,    30,    32,
       0,    63,     0,     0,     0,    35,   157,     0,   120,    31,
       0,     0,    32,     0,    63,     0,    74,     0,    35,     5,
       6,    59,    75,    76,    74,     0,     0,     5,     6,    59,
      75,    76,     0,   121,   122,   123,   124,    74,   125,     0,
       5,     6,    59,    75,    76,    74,     0,     0,     5,     6,
      59,   151,   152,    26,     0,     0,    29,    30,     0,     0,
       0,    26,     0,     0,    29,    30,     0,     0,    31,     0,
       0,    32,     0,    63,    26,   250,    31,    29,    30,    32,
     120,    63,    26,   263,     0,    29,    30,     0,     0,    31,
     120,     0,    32,     0,    63,     0,     0,    31,     0,     0,
      32,   120,    63,     0,     0,   121,   122,   123,   124,     0,
     125,   120,     0,     0,   221,   121,   122,   123,   124,     0,
     125,   120,     0,     0,   235,     0,   121,   122,   123,   124,
       0,   125,   120,     0,     0,   273,   121,   122,   123,   124,
     254,   125,   120,     0,     0,   288,   121,   122,   123,   124,
       0,   125,     0,     0,     0,   291,   120,   121,   122,   123,
     124,   178,   125,     0,     0,     0,   300,   121,   122,   123,
     124,   120,   125,     0,     0,     0,   212,     0,     0,     0,
     120,   121,   122,   123,   124,   239,   125,   120,     0,     0,
       0,     0,   252,     0,     0,   120,   121,   122,   123,   124,
     265,   125,     0,     0,     0,   121,   122,   123,   124,     0,
     125,     0,   121,   122,   123,   124,     0,   125,     0,     0,
     121,   122,   123,   124,     0,   125,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       4,    33,    34,     1,     0,    36,     1,    33,    26,     1,
      28,    29,     7,     8,     1,     1,    26,    27,    28,    29,
      24,     7,     8,    48,     1,    48,     1,    31,    32,    33,
      35,    35,    30,     1,     1,    58,    58,    59,    30,    44,
      23,    59,    58,     1,    54,     1,     4,     5,     6,     7,
       8,    25,    83,    30,    58,    30,    58,    59,    58,    63,
      64,    23,    30,    30,    68,    63,    70,    62,    72,    73,
      74,    63,    30,    60,    30,    79,    62,    23,    82,    48,
      38,    55,    59,    41,    42,    89,    61,    91,    35,    58,
      35,    59,    96,    61,    61,    53,    43,    23,    56,    23,
      58,   105,    23,    61,    62,    61,    23,   111,    26,    27,
      28,    29,    26,     4,    28,    29,   120,   121,   122,   123,
     124,   125,     9,   127,   128,    26,   130,    28,    29,    23,
     162,    25,    34,   137,    23,    23,    54,     9,    58,   143,
      25,    59,    58,    58,    35,    59,    58,     9,    58,     4,
      23,   155,   156,   179,   158,    58,    50,    51,    52,    53,
      58,    55,    25,    49,    61,    59,   170,    58,    26,    27,
      28,    29,   176,    64,   178,    58,    30,    61,    69,    70,
      71,    72,    49,    49,    60,    25,    60,    48,   192,    52,
      53,    82,    55,   219,     9,    48,   200,    10,    89,   230,
     204,    37,    61,    58,   208,    96,    30,     9,   212,    64,
      50,    51,    52,    53,   105,    55,    71,    72,   109,    59,
     111,    60,   253,    60,    30,    23,    61,    82,    26,    27,
      28,    29,    61,    61,    60,   239,   127,   128,    61,   130,
      25,    96,   246,   247,    61,    61,   137,    59,   252,    60,
     105,    59,   143,   279,   109,    59,     1,   261,    48,     4,
       5,     6,     7,     8,   295,    50,    51,    52,    53,    58,
      55,    59,    59,   128,    59,   130,   280,    25,   282,    59,
      48,   172,   314,   174,    26,    27,    28,    29,   143,    48,
     294,   323,    48,    38,    48,    48,    41,    42,     9,    49,
       9,   192,    50,    51,    52,    53,    49,    55,    53,   200,
      34,    56,   203,    58,   280,    60,    26,   208,    28,    29,
      30,    25,    25,    -1,   328,    -1,    -1,     1,    -1,   333,
       4,     5,     6,     7,     8,     1,    -1,   192,     4,     5,
       6,     7,     8,    -1,    -1,   200,    50,    51,    52,    53,
      -1,    55,    -1,   208,    -1,    59,   247,   248,    26,    27,
      28,    29,    -1,    -1,    38,    -1,    -1,    41,    42,    -1,
     261,    -1,    38,    47,    -1,    41,    42,    -1,    -1,    53,
      -1,    -1,    56,    -1,    58,    -1,    54,    53,    62,   280,
      56,    59,    58,   248,    60,     1,    62,    -1,     4,     5,
       6,     7,     8,     1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,   303,   304,   305,   306,   307,    26,    27,    28,
      29,    30,    -1,    -1,    -1,   280,    26,    27,    28,    29,
      30,    -1,    38,    -1,    -1,    41,    42,   328,    -1,    23,
      38,    25,   333,    41,    42,    -1,    -1,    53,    -1,   304,
      56,   306,    58,    -1,    60,    53,    62,    -1,    56,    26,
      58,    28,    29,    30,    62,    -1,    50,    51,    52,    53,
      -1,    55,    -1,   328,    -1,     0,     1,    -1,   333,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      26,    -1,    28,    29,    30,    -1,    31,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    -1,    62,     0,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    56,    -1,    58,    -1,    60,    -1,
      62,     0,     1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    23,    31,    32,    26,    27,    28,    29,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,
      -1,    60,    54,    62,     0,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,    58,    -1,    60,     1,    62,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,    58,    59,    60,     1,    62,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,    39,    40,    41,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,    58,    -1,    60,     1,    62,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,    58,    -1,    60,     1,    62,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,    58,    59,    60,     1,    62,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,    58,    -1,    60,     1,    62,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,     1,    31,    32,     4,     5,     6,
       7,     8,    38,    39,    40,    41,    42,     1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    53,    -1,    -1,
      56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    38,    -1,    53,    41,    42,    56,
      -1,    58,    -1,    -1,    -1,    62,    23,    -1,    25,    53,
      -1,    -1,    56,    -1,    58,    -1,     1,    -1,    62,     4,
       5,     6,     7,     8,     1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    50,    51,    52,    53,     1,    55,    -1,
       4,     5,     6,     7,     8,     1,    -1,    -1,     4,     5,
       6,     7,     8,    38,    -1,    -1,    41,    42,    -1,    -1,
      -1,    38,    -1,    -1,    41,    42,    -1,    -1,    53,    -1,
      -1,    56,    -1,    58,    38,    60,    53,    41,    42,    56,
      25,    58,    38,    60,    -1,    41,    42,    -1,    -1,    53,
      25,    -1,    56,    -1,    58,    -1,    -1,    53,    -1,    -1,
      56,    25,    58,    -1,    -1,    50,    51,    52,    53,    -1,
      55,    25,    -1,    -1,    59,    50,    51,    52,    53,    -1,
      55,    25,    -1,    -1,    59,    -1,    50,    51,    52,    53,
      -1,    55,    25,    -1,    -1,    59,    50,    51,    52,    53,
      23,    55,    25,    -1,    -1,    59,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    59,    25,    50,    51,    52,
      53,    30,    55,    -1,    -1,    -1,    59,    50,    51,    52,
      53,    25,    55,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      25,    50,    51,    52,    53,    30,    55,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    25,    50,    51,    52,    53,
      30,    55,    -1,    -1,    -1,    50,    51,    52,    53,    -1,
      55,    -1,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      50,    51,    52,    53,    -1,    55,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,     1,     4,     5,     6,     7,     8,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    31,    32,    38,    39,    40,    41,
      42,    53,    56,    58,    60,    62,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    80,    83,    84,    86,    87,
      89,    91,    92,    93,    94,    95,    96,    97,     1,     6,
       7,     8,    23,    58,    60,    87,    89,    95,    48,    48,
      58,    48,    58,    58,     1,     7,     8,    95,    92,    58,
      95,    95,     1,    67,    81,    95,    96,    81,    96,     1,
       8,    62,    88,    89,    90,    95,     1,    68,    23,    23,
      23,    35,    23,    23,    23,    26,    27,    28,    29,    54,
      23,    26,    27,    28,    29,    23,    23,    23,    23,    23,
      25,    50,    51,    52,    53,    55,     9,    58,    58,    95,
       1,    47,    85,    87,    89,    95,    95,     1,     7,     8,
      89,    89,    95,     1,     8,    87,    89,    60,    87,    89,
      95,     7,     8,    95,    95,    58,    58,    23,    34,    95,
      59,     1,    30,    59,    59,     9,    61,     9,    89,    95,
      58,     1,    30,    63,    30,     1,    30,    63,    30,    23,
      87,    89,    95,    87,    89,    95,    95,    95,    95,    95,
      95,    95,    49,    89,    95,    60,    87,    89,    95,     1,
      30,    61,    95,    58,    58,    30,    59,    95,    58,    61,
      59,    30,    30,    59,    59,    59,    95,    35,    44,    76,
      95,    59,    96,    49,    49,    60,    89,    89,    95,    95,
      67,    87,    89,    95,    30,    59,    61,    59,    30,    30,
      47,    87,    89,    95,    95,    60,    48,    30,    48,    60,
      60,    95,    30,    67,    23,     9,    10,    37,    61,    36,
      60,    30,    60,    60,    95,    30,    61,    95,    89,    95,
      87,    61,    61,    59,    36,    45,    77,    35,    43,    78,
      60,     9,    30,    61,    89,    95,    61,    61,    59,    59,
      59,    59,    59,    59,    48,    67,    85,    58,    59,    59,
      59,    59,    59,    48,    48,    48,    48,    48,    95,    36,
      46,    79,    61,     1,    60,    82,    89,    87,    89,    87,
      89,    96,     1,    30,    59,    61,     9,    96,    49,     9,
      87,    89,    95,    49,    87,    89,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    70,    71,    72,
      73,    74,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     1,     1,     4,     1,     1,
       1,     1,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     2,     4,     2,     3,     5,     5,     5,     4,
       6,     6,     6,     2,     2,     1,     9,     1,     5,     1,
       1,     1,     1,     3,     3,     3,     3,     2,     1,     8,
       4,     3,     7,     7,     4,     1,     3,     3,     2,     2,
       2,     2,     3,     3,     2,     2,     2,     3,     3,     2,
       3,     7,     7,     7,     1,     3,     2,     2,     3,     2,
       2,     3,     3,     2,     6,     9,     8,     9,     9,     9,
       9,     6,     4,     4,     4,     3,     3,     3,     4,     4,
       4,     1,     1,     1,     1,     1,     2,     3,     3,     3,
       3,     3,     2,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
  switch (yytype)
    {
    case 4: /* BOOL  */
#line 54 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).boolPtr);}
#line 1544 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 5: /* INTEGER  */
#line 55 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).intPtr);}
#line 1550 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 6: /* VARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1556 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 7: /* VVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1562 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 8: /* MVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1568 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 9: /* VAR  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1574 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 10: /* FVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1580 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 67: /* stmts  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1586 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 68: /* stmt  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1592 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 69: /* robotactions  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1598 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 70: /* robotmove  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1604 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 71: /* robotright  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1610 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 72: /* robotleft  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1616 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 73: /* robotwall  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1622 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 74: /* robotexit  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1628 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 75: /* iff  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1634 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 80: /* forr  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1640 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 81: /* return_func  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1646 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 82: /* args_func  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1652 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 83: /* function_head  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1658 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 84: /* function  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1664 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 85: /* callfunc_args  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1670 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 86: /* callfunction  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1676 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 87: /* matrix  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1682 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 88: /* listexprs  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1688 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 89: /* vector  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1694 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 90: /* exprs  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1700 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 91: /* vmdeclaration  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1706 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 92: /* declaration  */
#line 58 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1712 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 93: /* assignment  */
#line 58 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1718 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 94: /* print  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1724 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 95: /* expr  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1730 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 97: /* const  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1736 "interpreter.tab.c" /* yacc.c:1257  */
        break;

      default:
        break;
    }
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
#line 63 "interpreter.y" /* yacc.c:1652  */
    {outputOut(); exit(0);}
#line 2028 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 67 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyvsp[0].ptr)->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 2041 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 75 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                }
#line 2049 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 82 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2055 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 83 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 2066 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 89 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyvsp[-1].ptr); delete (yyval.ptr);
                                }
#line 2075 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 93 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyval.ptr);
                                }
#line 2084 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 100 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 2093 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 104 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2099 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 105 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2105 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 106 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2111 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 107 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2117 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 108 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2123 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 109 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 2129 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 110 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 2135 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 111 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2141 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 112 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2147 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 113 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2153 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 114 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2159 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 115 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2165 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 116 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2171 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 117 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                    delete (yyval.ptr);
                                }
#line 2180 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 124 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2186 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 125 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2192 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 129 "interpreter.y" /* yacc.c:1652  */
    {   
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(move, kids);
                                }
#line 2202 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 137 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(right, kids);
                                }
#line 2211 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 144 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(left, kids);
                                }
#line 2220 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 151 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(wall, kids);
                                }
#line 2229 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 158 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(exxit, kids);
                                }
#line 2238 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 165 "interpreter.y" /* yacc.c:1652  */
    {
                                                try {
                                                    std::vector<Interpreter::Node*> kids;
                                                    kids.push_back((yyvsp[-4].ptr));
                                                    kids.push_back((yyvsp[-1].ptr));
                                                    (yyval.ptr) = new Interpreter::OperationNode(iff, kids);
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
#line 2254 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 179 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2260 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 180 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2266 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 184 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2272 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 185 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2278 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 189 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2284 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 190 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2290 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 194 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2296 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 195 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2302 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 199 "interpreter.y" /* yacc.c:1652  */
    {  try {
                                                                        std::vector<Interpreter::Node*> kids;
                                                                        kids.push_back((yyvsp[-6].varOpPtr));
                                                                        kids.push_back((yyvsp[-4].ptr));
                                                                        kids.push_back((yyvsp[-1].ptr));
                                                                        (yyval.ptr) = new Interpreter::OperationNode(forr, kids);
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
#line 2318 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 213 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    (yyval.ptr) = new Interpreter::return_func({(yyvsp[-1].vtype), *(yyvsp[0].varName)});
                                                                }
#line 2326 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 216 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    dynamic_cast<Interpreter::return_func*>((yyvsp[-3].ptr))->rets.push_back({(yyvsp[-1].vtype), *(yyvsp[0].varName)});
                                                                    (yyval.ptr) = (yyvsp[-3].ptr);
                                                                }
#line 2335 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 220 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                    if (!(yyvsp[-1].ptr)) delete (yyvsp[-1].ptr);
                                                                    if (!(yyval.ptr)) delete (yyval.ptr);
                                                                }
#line 2345 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 228 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-1].vtype), *(yyvsp[0].varName));}
#line 2351 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 229 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));}
#line 2357 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 230 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));}
#line 2363 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 231 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));}
#line 2369 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 232 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            if (dynamic_cast<Interpreter::args_func*>((yyval.ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addNonDefault((yyvsp[-1].vtype), *(yyvsp[0].varName));
                                                                        }
#line 2378 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 236 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            if (dynamic_cast<Interpreter::args_func*>((yyval.ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addDefault((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                                        }
#line 2387 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 240 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            if (dynamic_cast<Interpreter::args_func*>((yyval.ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addDefault((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                                        }
#line 2396 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 244 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            if (dynamic_cast<Interpreter::args_func*>((yyval.ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                            dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addDefault((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                                        }
#line 2405 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 248 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->isClosed = true;
                                                                            (yyval.ptr) = (yyvsp[-1].ptr);
                                                                        }
#line 2414 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 253 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                            delete (yyvsp[-1].ptr); 
                                                                            if (!(yyval.ptr)) delete (yyval.ptr);
                                                                        }
#line 2424 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 258 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                            if (!(yyval.ptr)) delete (yyval.ptr);
                                                                            delete (yyval.ptr);
                                                                        }
#line 2434 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 266 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::return_func*>((yyvsp[-7].ptr))->rets,
                                                                                dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->args,
                                                                                dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->def_args, *(yyvsp[-3].varName));
                                                                            Interpreter::funcStorage.insert_or_assign(*(yyvsp[-3].varName), plug);
                                                                            (yyval.ptr) = plug;
                                                                        }
#line 2446 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 273 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                            delete (yyval.ptr);
                                                                        }
#line 2455 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 280 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            dynamic_cast<Interpreter::func_descript*>((yyvsp[-4].ptr))->toExec = (yyvsp[-1].ptr);
                                                                            Interpreter::storagePtr = &Interpreter::varStorage;
                                                                            Interpreter::isConstPtr = &Interpreter::isConst;
                                                                            (yyval.ptr) = (yyvsp[-4].ptr);
                                                                        }
#line 2466 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 289 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(expR, (yyvsp[0].ptr));
                                        }
#line 2474 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 292 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(vectoR, (yyvsp[0].ptr));
                                        }
#line 2482 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 295 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(matriX, (yyvsp[0].ptr));
                                        }
#line 2490 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 298 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(defaulT, nullptr); 
                                        }
#line 2498 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 301 "interpreter.y" /* yacc.c:1652  */
    {
                                            dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(expR, (yyvsp[0].ptr));
                                            (yyval.ptr) = (yyvsp[-2].ptr); 
                                        }
#line 2507 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 305 "interpreter.y" /* yacc.c:1652  */
    {
                                            dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(vectoR, (yyvsp[0].ptr)); 
                                            (yyval.ptr) = (yyvsp[-2].ptr); 
                                        }
#line 2516 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 309 "interpreter.y" /* yacc.c:1652  */
    {
                                            dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(matriX, (yyvsp[0].ptr)); 
                                            (yyval.ptr) = (yyvsp[-2].ptr); 
                                        }
#line 2525 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 313 "interpreter.y" /* yacc.c:1652  */
    {
                                            dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(defaulT, nullptr); 
                                            (yyval.ptr) = (yyvsp[-2].ptr); 
                                        }
#line 2534 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 317 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            delete (yyvsp[-1].ptr);
                                            if (!(yyval.ptr)) delete (yyval.ptr); 
                                        }
#line 2544 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 322 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            if (!(yyval.ptr)) delete (yyval.ptr);
                                        }
#line 2553 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 329 "interpreter.y" /* yacc.c:1652  */
    {
                                                                        (yyval.ptr) = new Interpreter::callfunc(*(yyvsp[-3].varName), dynamic_cast<Interpreter::return_func*>((yyvsp[-6].ptr))->rets, 
                                                                        dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-1].ptr))->args);
                                                                    }
#line 2562 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 333 "interpreter.y" /* yacc.c:1652  */
    {
                                                                        std::cerr << "Error at line " << (yylsp[-3]).first_line << std::endl;
                                                                        delete (yyvsp[-1].ptr);
                                                                        if (!(yyval.ptr)) delete (yyval.ptr);
                                                                    }
#line 2572 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 341 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2578 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 342 "interpreter.y" /* yacc.c:1652  */
    {   try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex, *(yyvsp[-6].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2592 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 351 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mvecrowindex, *(yyvsp[-6].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2607 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 361 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmatindex, *(yyvsp[-3].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2622 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 371 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, getmat, *(yyvsp[0].varName));
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2636 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 380 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2652 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 391 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2668 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 402 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2683 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 412 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2698 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 422 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2713 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 432 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, vtransposition);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2728 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 442 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMvec);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2744 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 453 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2760 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 464 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                        if (!(yyval.ptr)) delete (yyval.ptr);
                                    }
#line 2770 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 469 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                        if (!(yyval.ptr)) delete (yyval.ptr);
                                    }
#line 2780 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 474 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                        if (!(yyval.ptr)) delete (yyval.ptr);
                                    }
#line 2790 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 482 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 2799 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 486 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 2805 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 487 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            delete (yyvsp[-1].ptr);
                                        }
#line 2814 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 494 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2820 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 495 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vvecindex, *(yyvsp[-6].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2835 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 505 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex, *(yyvsp[-6].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2850 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 515 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back((Interpreter::ContainerVectorNode*)((yyvsp[-1].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprrowindex, *(yyvsp[-6].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2865 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 525 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, getvec, *(yyvsp[0].varName));
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2879 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 534 "interpreter.y" /* yacc.c:1652  */
    {   
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2895 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 545 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2910 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 555 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2925 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 565 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                                kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, VEMexpr);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2941 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 576 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2950 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 580 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2959 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 588 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 2968 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 592 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 2974 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 593 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyvsp[-1].ptr);
                                }
#line 2983 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 600 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        if (!(*Interpreter::isConstPtr)[*(yyvsp[-5].varName)]) {
                                                            std::vector<Interpreter::Node*> kids;
                                                            kids.push_back((yyvsp[-3].ptr));
                                                            kids.push_back((yyvsp[0].ptr));
                                                            (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(vexpr, *(yyvsp[-5].varName), kids);
                                                        }
                                                        else {
                                                            std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " can not be changed!";
                                                            yyerror(tmp.c_str());
                                                        }
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                    
                                                }
#line 3006 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 618 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(vvec, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3022 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 629 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-7].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-5].ptr));
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    kids.push_back((yyvsp[0].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexpr, *(yyvsp[-7].varName), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-7].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3040 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 642 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprcolumn, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3056 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 653 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprrow, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3072 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 664 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mveccolumn, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3088 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 675 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mvecrow, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3104 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 686 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-5].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mmat, *(yyvsp[-5].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3120 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 700 "interpreter.y" /* yacc.c:1652  */
    {        
                                                    if ((yyvsp[-3].vtype) == Interpreter::INT || (yyvsp[-3].vtype) == Interpreter::CINT) {
                                                        auto plug = new Interpreter::IntegerNode();
                                                        Interpreter::storagePtr->insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CINT) Interpreter::isConstPtr->insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    }
                                                    else if ((yyvsp[-3].vtype) == Interpreter::BOOL || (yyvsp[-3].vtype) == Interpreter::CBOOL) {
                                                        auto plug = new Interpreter::BoolNode();
                                                        Interpreter::storagePtr->insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CBOOL) Interpreter::isConstPtr->insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3140 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 715 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::storagePtr->insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CVBOOL || (yyvsp[-3].vtype) == Interpreter::CVINT) Interpreter::isConstPtr->insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3154 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 724 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::storagePtr->insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CMBOOL || (yyvsp[-3].vtype) == Interpreter::CMINT) Interpreter::isConstPtr->insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3168 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 736 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3180 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 743 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3194 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 752 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!(*Interpreter::isConstPtr)[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3208 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 764 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 3218 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 769 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                }
#line 3226 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 772 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                }
#line 3234 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 778 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3240 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 779 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3246 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 780 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3252 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 781 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3258 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 782 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                }
#line 3266 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 786 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 3276 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 791 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 3287 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 128:
#line 797 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 3298 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 129:
#line 803 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 3309 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 130:
#line 809 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 3320 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 131:
#line 815 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 3331 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 132:
#line 821 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 3341 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 133:
#line 826 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 3352 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 134:
#line 832 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 3358 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 135:
#line 833 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(vgetexp, *(yyvsp[-3].varName), kids);
                                }
#line 3368 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 136:
#line 838 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::Node*> kids;
                                            kids.push_back((yyvsp[-3].ptr));
                                            kids.push_back((yyvsp[-1].ptr));
                                            (yyval.ptr) = new Interpreter::OperationNode(mgetexp, *(yyvsp[-5].varName), kids);
                                        }
#line 3379 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 137:
#line 844 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                            if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                            if (!(yyval.ptr)) delete (yyval.ptr);
                                        }
#line 3389 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 138:
#line 852 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3395 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 139:
#line 853 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3401 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 140:
#line 854 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3407 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 141:
#line 855 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3413 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 142:
#line 856 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3419 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 143:
#line 857 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3425 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 144:
#line 858 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3431 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 145:
#line 859 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3437 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 146:
#line 860 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3443 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 147:
#line 861 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3449 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 148:
#line 862 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3455 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 149:
#line 863 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3461 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 150:
#line 867 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 3467 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 151:
#line 868 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 3473 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 3477 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 871 "interpreter.y" /* yacc.c:1918  */


void yyerror(const char* error) {
    std::cerr << error << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc == 1) yyin = std::fopen("test.txt", "r");
    else if (argc == 2) yyin = std::fopen(argv[1], "r");
    else {
        std::cerr << "Invalid amount of parameters, please try again!" << std::endl;
        return 1;
    }
    yyparse();
    std::fclose(yyin);
    std::cerr << "Total amount of error: " << yynerrs << std::endl;
    return 0;
}
