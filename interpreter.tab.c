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
#define YYLAST   1071

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  330

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
       0,    62,    62,    66,    74,    78,    82,    83,    89,    96,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   116,   117,   121,   134,   146,   158,   170,
     182,   196,   197,   201,   202,   206,   207,   211,   212,   216,
     231,   234,   243,   251,   252,   253,   254,   255,   265,   275,
     285,   295,   304,   312,   327,   341,   344,   347,   350,   353,
     362,   371,   380,   389,   397,   409,   410,   420,   430,   440,
     449,   460,   471,   481,   491,   501,   511,   522,   533,   540,
     549,   558,   566,   567,   577,   587,   597,   606,   617,   627,
     637,   648,   655,   664,   673,   681,   699,   715,   733,   749,
     765,   781,   797,   816,   836,   850,   864,   873,   885,   899,
     913,   919,   925,   934,   944,   952,   960,   965,   973,   974,
     975,   976,   977,   985,   995,  1006,  1017,  1028,  1039,  1050,
    1060,  1071,  1072,  1082,  1093,  1100,  1101,  1102,  1103,  1104,
    1105,  1106,  1107,  1108,  1109,  1110,  1111,  1115,  1116
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

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -135

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -46,    24,   298,   -46,   -46,   -46,   -46,   -12,   -33,    67,
     998,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -45,   181,  1049,   -30,   -46,   -46,
     -46,   -46,   181,   181,   660,  1049,   780,   361,   -46,    10,
     -46,   -46,   -46,   -46,   -46,    26,    57,    35,    74,    81,
     954,   318,    83,    85,    99,   105,   223,    69,   -46,   181,
     -46,    51,   -46,   780,   103,   -46,    47,   873,   -46,    32,
      68,   -46,   181,   923,    96,   181,   106,   106,   541,    39,
     238,   126,    13,   127,    79,    87,   998,   181,     5,   378,
       9,   963,   -46,   -46,   -46,   -46,   -46,   118,   -46,   -46,
     -46,   787,   -46,   -46,   -46,   103,   -46,   780,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   181,   181,   181,   181,
     181,   181,    -4,  1004,    88,    89,   -46,    37,   383,   635,
      92,   -46,   299,   441,    93,    91,   143,   360,   969,    28,
      59,    97,   101,   692,   181,   181,   714,   -23,   181,   747,
     -46,   -46,  1049,   109,   -46,    -4,   112,   -46,   780,   806,
     -46,    51,   -46,    51,   -46,   181,   -46,   181,   660,   299,
     441,  1004,   480,    37,  1004,  1004,   217,   217,   -24,   -24,
     106,   -46,   787,    51,   806,    95,   116,   171,   171,   136,
     120,   114,   846,   -46,   -46,   -46,   -46,   -46,   842,   975,
     -46,   -46,   660,   934,   -46,   172,   173,   147,   420,   132,
     981,    37,    37,  1004,  1004,   601,   299,   441,  1004,   987,
     133,   181,   134,   305,   368,   780,   103,   137,   138,   882,
     -46,   181,   421,   -17,   -46,   144,   194,   145,   177,   867,
     -46,   148,   151,  1004,   185,   -46,   157,    55,   892,   299,
     152,   161,   180,   903,   -46,   -46,   -46,   -46,   -46,   660,
     699,   163,   164,   181,   175,   192,   780,   183,   201,   203,
     209,   210,   181,   -46,   481,   -46,    18,   299,   441,  1004,
     199,   205,   913,   206,    51,    73,   207,   103,    51,   103,
      51,  1004,   -46,   -46,   -46,   -46,   721,   -46,  1049,    16,
     -46,   -46,   -46,    37,   -46,   -46,   299,    37,   299,    37,
     -46,   299,   441,  1004,   259,   -46,  1049,   -46,   -46,   230,
     271,   787,   232,   299,   441,  1004,   787,   299,   441,  1004
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     4,   148,   147,   122,    86,    69,
      78,   136,   137,   138,   135,   139,   140,   141,   142,   143,
     144,   145,   146,     9,     0,     0,     0,     0,    26,    27,
      29,    28,     0,     0,     0,     0,     0,     0,     6,     0,
     120,    23,    24,   121,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
     110,     0,   111,     0,     0,   112,     0,     0,   122,     0,
       0,   134,     0,     0,     0,     0,   123,   129,     0,     0,
       0,     0,     0,     0,    86,     0,    91,     0,     0,     0,
       0,     0,     8,     7,    21,    17,    18,     0,    19,    20,
      12,     0,    72,    74,    73,     0,    11,     0,    75,    89,
      88,    14,    15,    16,    13,    10,     0,     0,     0,     0,
       0,     0,     0,   107,    86,     0,    91,   108,     0,     0,
      69,    78,   109,     0,    69,     0,     0,     0,     0,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    42,     0,     0,   131,    40,     0,    40,     0,     0,
      81,     0,    65,     0,    94,     0,    82,     0,     0,    71,
      76,    77,    70,    87,    90,   130,   127,   128,   124,   125,
     126,   106,     0,     0,     0,     0,   132,     0,     0,     0,
      68,     0,     0,   114,   115,   116,   117,   113,     0,     0,
      31,    32,     0,     0,    25,     0,     0,     0,     0,     0,
       0,    80,    79,    93,    92,     0,   105,   104,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,     0,     0,     0,    41,     0,     0,     0,     0,     0,
      54,     0,     0,    95,     0,    68,     0,     0,     0,   102,
       0,     0,   133,     0,    33,    34,    30,    35,    36,     0,
       0,     0,     0,     0,     0,    83,     0,     0,    67,    85,
      66,    84,     0,   133,     0,    58,     0,    57,    56,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    37,    38,    39,    63,     0,    64,     0,     0,
      83,    85,    84,    96,    67,    66,   101,    99,   100,    98,
      62,    61,    60,    59,     0,    52,     0,    53,    51,    43,
       0,     0,    47,    46,    45,    44,     0,    50,    49,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   -46,   -29,   -14,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   248,   -46,   -46,
     -46,   -46,   -46,   -44,   -46,   -34,   -46,   -46,   258,   -46,
     -46,   -25,   -31,   -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   202,   256,   259,   294,    46,    79,   299,    47,
      48,   276,    49,    50,    88,    51,    90,    52,    53,    54,
      55,    56,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   116,    89,    81,    83,    78,   160,    76,    77,    80,
     164,    91,   200,    67,   151,    61,    62,   315,   257,   295,
     132,   201,   136,    93,     3,    63,   258,   127,    75,   128,
     133,   121,   137,    94,   123,   161,    59,    60,   129,   165,
     151,   138,   143,   152,   181,   182,   316,   146,   296,    95,
     149,     5,     6,    68,    84,   134,    10,   169,   124,   125,
     126,   172,    91,   107,    93,   109,   110,   170,   162,   152,
      97,   133,   166,   173,   156,   317,   171,   318,   122,   297,
      96,   107,   174,   109,   110,    27,   144,   193,    30,    31,
     144,   175,   176,   177,   178,   179,   180,    98,   153,   107,
      32,   109,   110,    33,    99,    72,   111,   135,   112,    36,
     124,   130,   131,    87,   268,    64,    65,   145,   194,   198,
     199,   205,   113,   203,   208,    66,   145,   211,   114,   212,
     148,   116,   304,   198,   210,   155,   157,   158,   216,   215,
     213,   168,   214,   223,   223,   159,   183,   184,   217,   208,
     187,   188,   189,   224,   224,   220,   195,   218,   206,   219,
     196,   207,   219,   210,   221,    36,   225,   229,   226,   101,
     102,   103,   104,   232,   227,     5,     6,    68,    84,   134,
      10,   234,   249,   235,   236,     5,     6,    68,    69,    70,
      71,   247,   133,   238,   242,   244,   243,   105,   250,   251,
     248,    93,   190,   261,   260,   262,   253,   263,   264,    27,
     265,   270,    30,    31,   253,   266,   277,   267,    93,    27,
     271,   280,    30,    31,    32,   281,   278,    33,   272,    72,
     274,   222,   285,    36,    32,   279,   283,    33,   282,    72,
     284,   282,   116,   306,   286,   308,   115,   291,   116,   287,
     303,   288,   311,   133,   307,   133,   309,   289,   290,   298,
      93,   115,   312,   116,   300,   302,   305,   314,   319,   119,
     120,   313,   121,   117,   118,   119,   120,   323,   121,   321,
     322,   326,   327,    82,    74,   320,     0,   324,   117,   118,
     119,   120,   328,   121,     0,     0,   325,   154,    -2,     4,
       0,   329,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,   101,   102,   103,   104,    25,
      26,   101,   102,   103,   104,     0,    27,    28,    29,    30,
      31,   106,     0,     0,   107,   108,   109,   110,     0,     0,
       0,    32,     0,   105,    33,     0,    34,     0,    35,   105,
      36,    -3,    92,     0,   245,     5,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   107,   108,   109,   110,
     191,     0,    25,    26,   107,   108,   109,   110,   246,    27,
      28,    29,    30,    31,   107,     0,   109,   110,   163,   107,
       0,   109,   110,   185,    32,     0,     0,    33,     0,    34,
       0,    35,    92,    36,     0,     5,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   107,     0,   109,   110,
     237,     0,    25,    26,     0,     0,     0,   254,     0,    27,
      28,    29,    30,    31,     0,     0,   255,   107,   108,   109,
     110,     0,     0,     0,    32,     0,     0,    33,     0,    34,
       0,    35,    92,    36,     0,     5,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   101,   102,   103,   104,
       0,     0,    25,    26,     0,     0,     0,   292,     0,    27,
      28,    29,    30,    31,     0,     0,     0,   293,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    33,     0,    34,
       0,    35,    92,    36,     0,     5,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    33,     0,    34,
     150,    35,    92,    36,     0,     5,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,   240,     0,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    33,     0,    34,
     116,    35,     0,    36,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   117,   118,   119,   120,     0,
     121,    25,    26,     0,   186,     0,     0,     0,    27,    28,
      29,    30,    31,     5,     6,    68,    84,   134,    10,     0,
       0,     0,     0,    32,     0,     0,    33,   116,    34,     0,
      35,     0,    36,     0,     0,     5,     6,    68,    84,   134,
      10,     0,     0,     0,     0,     0,     0,    27,     0,   116,
      30,    31,   117,   118,   119,   120,   275,   121,     0,     0,
       0,   197,    32,     0,     0,    33,     0,    72,     0,    27,
       0,    36,    30,    31,   117,   118,   119,   120,   310,   121,
       0,     0,   116,   154,    32,     0,     0,    33,     0,    72,
       0,     0,     0,    36,     5,     6,    68,    84,    85,    86,
       0,     5,     6,    68,    84,   134,    10,   117,   118,   119,
     120,     0,   121,     0,     0,     0,   204,     0,     0,     0,
       5,     6,    68,    69,    70,    71,     0,     0,    27,     0,
       0,    30,    31,     0,     0,    27,     0,     0,    30,    31,
       0,     0,     0,    32,     0,     0,    33,     0,    72,     0,
      32,     0,    87,    33,    27,    72,     0,    30,    31,    36,
       5,     6,    68,    69,    70,    71,     0,     0,     0,    32,
       0,     0,    33,     0,    72,     0,   209,   116,     0,     0,
       0,     5,     6,    68,    69,    70,    71,     5,     6,    68,
     139,   140,   141,   142,    27,     0,     0,    30,    31,     0,
       0,     0,   117,   118,   119,   120,     0,   121,     0,    32,
       0,   230,    33,     0,    72,    27,   228,   116,    30,    31,
       0,    27,     0,     0,    30,    31,     0,   116,     0,     0,
      32,     0,     0,    33,     0,    72,    32,   264,   116,    33,
       0,    72,   117,   118,   119,   120,     0,   121,   116,     0,
       0,   252,   117,   118,   119,   120,   147,   121,   116,     0,
       0,   269,     0,   117,   118,   119,   120,   233,   121,   116,
       0,     0,   273,   117,   118,   119,   120,     0,   121,     0,
       0,     0,   301,   117,   118,   119,   120,   100,   121,     0,
     101,   102,   103,   104,   117,   118,   119,   120,   116,   121,
       0,     0,     0,   167,   116,     0,     0,     0,     0,   192,
     116,     0,     0,     0,     0,   231,   116,     0,   105,     0,
       0,   239,   116,   117,   118,   119,   120,   241,   121,   117,
     118,   119,   120,  -134,   121,   117,   118,   119,   120,   116,
     121,   117,   118,   119,   120,     0,   121,   117,   118,   119,
     120,     0,   121,     0,     0,     0,     0,     0,  -134,  -134,
    -134,  -134,     0,  -134,   117,   118,   119,   120,     0,   121,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22
};

static const yytype_int16 yycheck[] =
{
      25,    25,    36,    34,    35,    34,     1,    32,    33,    34,
       1,    36,    35,    58,     1,    48,    49,     1,    35,     1,
      64,    44,    66,    37,     0,    58,    43,    61,    58,    63,
      64,    55,    66,    23,    59,    30,    48,    49,    63,    30,
       1,    66,    67,    30,    48,    49,    30,    72,    30,    23,
      75,     4,     5,     6,     7,     8,     9,   101,     7,     8,
       9,   105,    87,    26,    78,    28,    29,   101,    63,    30,
      35,   105,    63,   107,    61,    59,   101,    61,     9,    61,
      23,    26,   107,    28,    29,    38,    58,    59,    41,    42,
      58,   116,   117,   118,   119,   120,   121,    23,    59,    26,
      53,    28,    29,    56,    23,    58,    23,    60,    23,    62,
       7,     8,     9,    62,    59,    48,    49,    58,    59,   144,
     145,   152,    23,   148,   158,    58,    58,   161,    23,   163,
      34,    25,    59,   158,   159,     9,     9,    58,   182,   168,
     165,    23,   167,   187,   188,    58,    58,    58,   182,   183,
      58,    58,    61,   187,   188,    60,    59,   182,    49,   184,
      59,    49,   187,   188,    48,    62,    30,   192,    48,    26,
      27,    28,    29,   202,    60,     4,     5,     6,     7,     8,
       9,     9,   226,    10,    37,     4,     5,     6,     7,     8,
       9,   225,   226,    61,    61,    61,   221,    54,    61,    61,
     225,   215,    59,     9,    60,    60,   231,    30,    60,    38,
      59,    59,    41,    42,   239,    30,   260,    60,   232,    38,
      59,    58,    41,    42,    53,    61,   260,    56,    48,    58,
     259,    60,   266,    62,    53,   260,    61,    56,   263,    58,
      48,   266,    25,   287,    61,   289,    23,   272,    25,    48,
     284,    48,   296,   287,   288,   289,   290,    48,    48,    60,
     274,    23,   296,    25,    59,    59,    59,   298,     9,    52,
      53,   296,    55,    50,    51,    52,    53,   321,    55,    49,
       9,    49,   326,    35,    26,   316,    -1,   321,    50,    51,
      52,    53,   326,    55,    -1,    -1,   321,    59,     0,     1,
      -1,   326,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    26,    27,    28,    29,    31,
      32,    26,    27,    28,    29,    -1,    38,    39,    40,    41,
      42,    23,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    53,    -1,    54,    56,    -1,    58,    -1,    60,    54,
      62,     0,     1,    -1,    59,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    26,    27,    28,    29,
      30,    -1,    31,    32,    26,    27,    28,    29,    30,    38,
      39,    40,    41,    42,    26,    -1,    28,    29,    30,    26,
      -1,    28,    29,    30,    53,    -1,    -1,    56,    -1,    58,
      -1,    60,     1,    62,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    26,    -1,    28,    29,
      30,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    45,    26,    27,    28,
      29,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,
      -1,    60,     1,    62,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    26,    27,    28,    29,
      -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,
      -1,    60,     1,    62,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,
      59,    60,     1,    62,    -1,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,
      25,    60,    -1,    62,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    50,    51,    52,    53,    -1,
      55,    31,    32,    -1,    59,    -1,    -1,    -1,    38,    39,
      40,    41,    42,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    56,    25,    58,    -1,
      60,    -1,    62,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    25,
      41,    42,    50,    51,    52,    53,    47,    55,    -1,    -1,
      -1,    59,    53,    -1,    -1,    56,    -1,    58,    -1,    38,
      -1,    62,    41,    42,    50,    51,    52,    53,    47,    55,
      -1,    -1,    25,    59,    53,    -1,    -1,    56,    -1,    58,
      -1,    -1,    -1,    62,     4,     5,     6,     7,     8,     9,
      -1,     4,     5,     6,     7,     8,     9,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    -1,    -1,    38,    -1,
      -1,    41,    42,    -1,    -1,    38,    -1,    -1,    41,    42,
      -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,    -1,
      53,    -1,    62,    56,    38,    58,    -1,    41,    42,    62,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    53,
      -1,    -1,    56,    -1,    58,    -1,    60,    25,    -1,    -1,
      -1,     4,     5,     6,     7,     8,     9,     4,     5,     6,
       7,     8,     9,    10,    38,    -1,    -1,    41,    42,    -1,
      -1,    -1,    50,    51,    52,    53,    -1,    55,    -1,    53,
      -1,    59,    56,    -1,    58,    38,    60,    25,    41,    42,
      -1,    38,    -1,    -1,    41,    42,    -1,    25,    -1,    -1,
      53,    -1,    -1,    56,    -1,    58,    53,    60,    25,    56,
      -1,    58,    50,    51,    52,    53,    -1,    55,    25,    -1,
      -1,    59,    50,    51,    52,    53,    23,    55,    25,    -1,
      -1,    59,    -1,    50,    51,    52,    53,    23,    55,    25,
      -1,    -1,    59,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    59,    50,    51,    52,    53,    23,    55,    -1,
      26,    27,    28,    29,    50,    51,    52,    53,    25,    55,
      -1,    -1,    -1,    30,    25,    -1,    -1,    -1,    -1,    30,
      25,    -1,    -1,    -1,    -1,    30,    25,    -1,    54,    -1,
      -1,    30,    25,    50,    51,    52,    53,    30,    55,    50,
      51,    52,    53,    25,    55,    50,    51,    52,    53,    25,
      55,    50,    51,    52,    53,    -1,    55,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    -1,    55,    50,    51,    52,    53,    -1,    55,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,     1,     4,     5,     6,     7,     8,
       9,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    31,    32,    38,    39,    40,
      41,    42,    53,    56,    58,    60,    62,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    80,    83,    84,    86,
      87,    89,    91,    92,    93,    94,    95,    96,    97,    48,
      49,    48,    49,    58,    48,    49,    58,    58,     6,     7,
       8,     9,    58,    95,    92,    58,    95,    95,    67,    81,
      95,    96,    81,    96,     7,     8,     9,    62,    88,    89,
      90,    95,     1,    68,    23,    23,    23,    35,    23,    23,
      23,    26,    27,    28,    29,    54,    23,    26,    27,    28,
      29,    23,    23,    23,    23,    23,    25,    50,    51,    52,
      53,    55,     9,    95,     7,     8,     9,    89,    89,    95,
       8,     9,    87,    89,     8,    60,    87,    89,    95,     7,
       8,     9,    10,    95,    58,    58,    95,    23,    34,    95,
      59,     1,    30,    59,    59,     9,    61,     9,    58,    58,
       1,    30,    63,    30,     1,    30,    63,    30,    23,    87,
      89,    95,    87,    89,    95,    95,    95,    95,    95,    95,
      95,    48,    49,    58,    58,    30,    59,    58,    58,    61,
      59,    30,    30,    59,    59,    59,    59,    59,    95,    95,
      35,    44,    76,    95,    59,    96,    49,    49,    89,    60,
      95,    89,    89,    95,    95,    67,    87,    89,    95,    95,
      60,    48,    60,    87,    89,    30,    48,    60,    60,    95,
      59,    30,    67,    23,     9,    10,    37,    30,    61,    30,
      36,    30,    61,    95,    61,    59,    30,    89,    95,    87,
      61,    61,    59,    95,    36,    45,    77,    35,    43,    78,
      60,     9,    60,    30,    60,    59,    30,    60,    59,    59,
      59,    59,    48,    59,    67,    47,    85,    87,    89,    95,
      58,    61,    95,    61,    48,    89,    61,    48,    48,    48,
      48,    95,    36,    46,    79,     1,    30,    61,    60,    82,
      59,    59,    59,    89,    59,    59,    87,    89,    87,    89,
      47,    87,    89,    95,    96,     1,    30,    59,    61,     9,
      96,    49,     9,    87,    89,    95,    49,    87,    89,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    70,    71,    72,    73,    74,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      81,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     1,     1,     4,     1,     1,     1,     1,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       2,     4,     2,     3,     5,     5,     5,     4,     6,     6,
       6,     2,     2,     9,     5,     1,     1,     1,     1,     3,
       3,     3,     3,     2,     8,     3,     7,     7,     4,     1,
       3,     3,     2,     2,     2,     2,     3,     3,     1,     3,
       3,     2,     3,     7,     7,     7,     1,     3,     2,     2,
       3,     1,     3,     3,     2,     6,     9,     8,     9,     9,
       9,     9,     6,     4,     4,     4,     3,     3,     3,     3,
       2,     2,     2,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     2,     3,     3,     3,     3,     3,     2,
       3,     3,     4,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 1484 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 5: /* INTEGER  */
#line 55 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).intPtr);}
#line 1490 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 6: /* VARIABLE  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1496 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 7: /* VVARIABLE  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1502 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 8: /* MVARIABLE  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1508 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 9: /* VAR  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1514 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 10: /* FVARIABLE  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1520 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 92: /* declaration  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1526 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 93: /* assignment  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1532 "interpreter.tab.c" /* yacc.c:1257  */
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
#line 62 "interpreter.y" /* yacc.c:1652  */
    {outputOut(); exit(0);}
#line 1824 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 66 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyvsp[0].ptr)->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 1837 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 74 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl; 
                                    yyerrok;
                                }
#line 1846 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 78 "interpreter.y" /* yacc.c:1652  */
    {}
#line 1852 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 82 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1858 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 83 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1869 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 89 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                    yyerrok;
                                }
#line 1878 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 96 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1887 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 100 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1893 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 101 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1899 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 102 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1905 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 103 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1911 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 104 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1917 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 105 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1923 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 106 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1929 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 107 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1935 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 108 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1941 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 109 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1947 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 110 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1953 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 111 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1959 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 112 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1965 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 116 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1971 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 117 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1977 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 121 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {   
                                        std::vector<Interpreter::Node*> kids;
                                        kids.push_back((yyvsp[-1].ptr));
                                        (yyval.ptr) = new Interpreter::OperationNode(move, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 1992 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 134 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {        
                                        std::vector<Interpreter::Node*> kids;
                                        (yyval.ptr) = new Interpreter::OperationNode(right, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 2006 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 146 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        std::vector<Interpreter::Node*> kids;
                                        (yyval.ptr) = new Interpreter::OperationNode(left, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 2020 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 158 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {        
                                        std::vector<Interpreter::Node*> kids;
                                        (yyval.ptr) = new Interpreter::OperationNode(wall, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 2034 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 170 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        std::vector<Interpreter::Node*> kids;
                                        (yyval.ptr) = new Interpreter::OperationNode(exxit, kids);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 2048 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 182 "interpreter.y" /* yacc.c:1652  */
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
#line 2064 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 196 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2070 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 197 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2076 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 201 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2082 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 202 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2088 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 206 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2094 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 207 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2100 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 211 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2106 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 212 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2112 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 216 "interpreter.y" /* yacc.c:1652  */
    {  
                                                                    try {
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
#line 2129 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 231 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    (yyval.ptr) = new Interpreter::return_func({(yyvsp[-1].vtype), *(yyvsp[0].varName)});
                                                                }
#line 2137 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 234 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    try {
                                                                        dynamic_cast<Interpreter::return_func*>((yyvsp[-3].ptr))->rets.push_back({(yyvsp[-1].vtype), *(yyvsp[0].varName)});
                                                                        (yyval.ptr) = (yyvsp[-3].ptr);
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
#line 2151 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 243 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl; 
                                                                    std::cerr << "Incorrect value in return variables" << std::endl;
                                                                    yyerrok;
                                                                }
#line 2161 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 251 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-1].vtype), *(yyvsp[0].varName));}
#line 2167 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 252 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));}
#line 2173 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 253 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));}
#line 2179 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 254 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));}
#line 2185 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 255 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>((yyvsp[-3].ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>((yyvsp[-3].ptr))->addNonDefault((yyvsp[-1].vtype), *(yyvsp[0].varName));
                                                                                (yyval.ptr) = (yyvsp[-3].ptr);
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }
                                                                        }
#line 2200 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 265 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->addDefault((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                                                (yyval.ptr) = (yyvsp[-5].ptr);
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
#line 2215 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 275 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->addDefault((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                                                (yyval.ptr) = (yyvsp[-5].ptr);
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
#line 2230 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 285 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            try {
                                                                                if (dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->isClosed) yyerror("Invalid arguments initialization!");
                                                                                dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->addDefault((yyvsp[-3].vtype), *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                                                (yyval.ptr) = (yyvsp[-5].ptr);
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
#line 2245 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 295 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            try {
                                                                                dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->isClosed = true;
                                                                                (yyval.ptr) = (yyvsp[-1].ptr);
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }                                                                        
                                                                        }
#line 2259 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 304 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl; 
                                                                            std::cerr << "Incorrect parameter in function description" << std::endl;
                                                                            yyerrok;
                                                                        }
#line 2269 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 312 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            try {
                                                                                auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::return_func*>((yyvsp[-7].ptr))->rets,
                                                                                    dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->args,
                                                                                    dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->def_args, *(yyvsp[-3].varName));
                                                                                Interpreter::funcStorage.insert_or_assign(*(yyvsp[-3].varName), plug);
                                                                                (yyval.ptr) = plug;
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }
                                                                        }
#line 2286 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 327 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            try {
                                                                                dynamic_cast<Interpreter::func_descript*>((yyvsp[-4].ptr))->toExec = (yyvsp[-1].ptr);
                                                                                Interpreter::storagePtr = &Interpreter::varStorage;
                                                                                Interpreter::isConstPtr = &Interpreter::isConst;
                                                                                (yyval.ptr) = (yyvsp[-4].ptr);
                                                                            }
                                                                            catch (const char* error) {
                                                                                std::cerr << error << std::endl;
                                                                            }
                                                                        }
#line 2302 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 341 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(expR, (yyvsp[0].ptr));
                                        }
#line 2310 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 344 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(vectoR, (yyvsp[0].ptr));
                                        }
#line 2318 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 347 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(matriX, (yyvsp[0].ptr));
                                        }
#line 2326 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 350 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::callfunc_args(defaulT, nullptr); 
                                        }
#line 2334 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 353 "interpreter.y" /* yacc.c:1652  */
    {   
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(expR, (yyvsp[0].ptr));
                                                (yyval.ptr) = (yyvsp[-2].ptr);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
#line 2348 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 362 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(vectoR, (yyvsp[0].ptr)); 
                                                (yyval.ptr) = (yyvsp[-2].ptr);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
#line 2362 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 371 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(matriX, (yyvsp[0].ptr)); 
                                                (yyval.ptr) = (yyvsp[-2].ptr);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
#line 2376 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 380 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(defaulT, nullptr); 
                                                (yyval.ptr) = (yyvsp[-2].ptr);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            } 
                                        }
#line 2390 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 389 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            std::cerr << "Incorrect parameter in function call" << std::endl;
                                            yyerrok;
                                        }
#line 2400 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 397 "interpreter.y" /* yacc.c:1652  */
    {   
                                                                        try {
                                                                            (yyval.ptr) = new Interpreter::callfunc(*(yyvsp[-3].varName), dynamic_cast<Interpreter::return_func*>((yyvsp[-6].ptr))->rets, 
                                                                            dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-1].ptr))->args);
                                                                        }
                                                                        catch (const char* error) {
                                                                            std::cerr << error << std::endl;
                                                                        }
                                                                    }
#line 2414 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 409 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2420 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 410 "interpreter.y" /* yacc.c:1652  */
    {   
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex, *(yyvsp[-6].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2435 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 420 "interpreter.y" /* yacc.c:1652  */
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
#line 2450 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 430 "interpreter.y" /* yacc.c:1652  */
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
#line 2465 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 440 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, getmat, *(yyvsp[0].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2479 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 449 "interpreter.y" /* yacc.c:1652  */
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
#line 2495 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 460 "interpreter.y" /* yacc.c:1652  */
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
#line 2511 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 471 "interpreter.y" /* yacc.c:1652  */
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
#line 2526 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 481 "interpreter.y" /* yacc.c:1652  */
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
#line 2541 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 491 "interpreter.y" /* yacc.c:1652  */
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
#line 2556 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 501 "interpreter.y" /* yacc.c:1652  */
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
#line 2571 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 511 "interpreter.y" /* yacc.c:1652  */
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
#line 2587 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 522 "interpreter.y" /* yacc.c:1652  */
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
#line 2603 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 533 "interpreter.y" /* yacc.c:1652  */
    {
                                                    std::cerr << "Variable \"" << *(yyvsp[0].varName) << "\" is not declared!" << std::endl;
                                                    exit(1);     
                                                }
#line 2612 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 540 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                                dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2626 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 549 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                (yyval.ptr) = (yyvsp[-2].ptr);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2640 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 558 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            std::cerr << "Incorrect vector! It will be skipped." << std::endl;
                                            yyerrok;
                                        }
#line 2650 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 566 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2656 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 567 "interpreter.y" /* yacc.c:1652  */
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
#line 2671 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 577 "interpreter.y" /* yacc.c:1652  */
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
#line 2686 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 587 "interpreter.y" /* yacc.c:1652  */
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
#line 2701 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 597 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, getvec, *(yyvsp[0].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2715 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 606 "interpreter.y" /* yacc.c:1652  */
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
#line 2731 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 617 "interpreter.y" /* yacc.c:1652  */
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
#line 2746 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 627 "interpreter.y" /* yacc.c:1652  */
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
#line 2761 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 637 "interpreter.y" /* yacc.c:1652  */
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
#line 2777 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 648 "interpreter.y" /* yacc.c:1652  */
    {
                                                    std::cerr << "Variable \"" << *(yyvsp[0].varName) << "\" is not declared!" << std::endl;
                                                    exit(1);     
                                                }
#line 2786 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 655 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                        dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 2800 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 664 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr))->addData((yyvsp[0].ptr));
                                        (yyval.ptr) = (yyvsp[-2].ptr);
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 2814 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 673 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    std::cerr << "Incorrect expression in initializing expression! It will be skipped" << std::endl;
                                    yyerrok;
                                }
#line 2824 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 681 "interpreter.y" /* yacc.c:1652  */
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
#line 2847 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 699 "interpreter.y" /* yacc.c:1652  */
    {
                                                                try {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
#line 2868 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 715 "interpreter.y" /* yacc.c:1652  */
    {
                                                                try {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
#line 2891 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 733 "interpreter.y" /* yacc.c:1652  */
    {
                                                                try {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
#line 2912 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 749 "interpreter.y" /* yacc.c:1652  */
    {
                                                                try {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
#line 2933 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 765 "interpreter.y" /* yacc.c:1652  */
    {
                                                                try {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
#line 2954 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 781 "interpreter.y" /* yacc.c:1652  */
    {
                                                                try {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
#line 2975 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 797 "interpreter.y" /* yacc.c:1652  */
    {
                                                                try {
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
                                                                catch (const char* error) {
                                                                    std::cerr << error << std::endl;
                                                                }
                                                            }
#line 2996 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 816 "interpreter.y" /* yacc.c:1652  */
    {        
                                                    try {
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
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 3021 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 836 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                            auto plug = new Interpreter::AbstractVectorNode();
                                                            Interpreter::storagePtr->insert_or_assign(*(yyvsp[-2].varName), plug);
                                                            if ((yyvsp[-3].vtype) == Interpreter::CVBOOL || (yyvsp[-3].vtype) == Interpreter::CVINT) Interpreter::isConstPtr->insert_or_assign(*(yyvsp[-2].varName), true);
                                                            (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                        }
                                                        else yyerror("Type mismatch!");
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 3040 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 850 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                            auto plug = new Interpreter::AbstractMatrixNode();
                                                            Interpreter::storagePtr->insert_or_assign(*(yyvsp[-2].varName), plug);
                                                            if ((yyvsp[-3].vtype) == Interpreter::CMBOOL || (yyvsp[-3].vtype) == Interpreter::CMINT) Interpreter::isConstPtr->insert_or_assign(*(yyvsp[-2].varName), true);
                                                            (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                        }
                                                        else yyerror("Type mismatch!");
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 3059 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 864 "interpreter.y" /* yacc.c:1652  */
    {
                                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                    std::cerr << "Invalid form of assigning/declaration of variable " << *(yyvsp[-1].varName)  << std::endl; 
                                                    std::cerr << "Invalid form of assigning, maybe you expected declaration as \"=\"" << std::endl;
                                                    exit(1);
                                                }
#line 3070 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 873 "interpreter.y" /* yacc.c:1652  */
    {
                                                try {
                                                    if (!(*Interpreter::isConstPtr)[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
#line 3087 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 885 "interpreter.y" /* yacc.c:1652  */
    {
                                                try {
                                                    if (!(*Interpreter::isConstPtr)[*(yyvsp[-2].varName)]) {
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
#line 3106 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 899 "interpreter.y" /* yacc.c:1652  */
    {
                                                try {
                                                    if (!(*Interpreter::isConstPtr)[*(yyvsp[-2].varName)]) {
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else {
                                                        std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                        yyerror(tmp.c_str());
                                                    }
                                                }
                                                catch (const char* error) {
                                                    std::cerr << error << std::endl;
                                                }
                                            }
#line 3125 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 913 "interpreter.y" /* yacc.c:1652  */
    {
                                                std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                std::cerr << "Invalid form of assigning/declaration of variable " << *(yyvsp[-1].varName)  << std::endl; 
                                                std::cerr << "Invalid form of declaration, maybe you expected assignment as \"<-\"" << std::endl;
                                                exit(1);
                                            }
#line 3136 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 919 "interpreter.y" /* yacc.c:1652  */
    {
                                                std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                std::cerr << "Invalid form of assigning/declaration of variable " << *(yyvsp[-1].varName)  << std::endl; 
                                                std::cerr << "Invalid form of declaration, maybe you expected assignment as \"<-\"" << std::endl;
                                                exit(1);
                                            }
#line 3147 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 925 "interpreter.y" /* yacc.c:1652  */
    {
                                                std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                std::cerr << "Invalid form of assigning/declaration of variable " << *(yyvsp[-1].varName)  << std::endl; 
                                                std::cerr << "Invalid form of declaration, maybe you expected assignment as \"<-\"" << std::endl;
                                                exit(1);
                                            }
#line 3158 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 934 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        std::vector<Interpreter::Node*> kids; 
                                        kids.push_back((yyvsp[-1].ptr));
                                        (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 3173 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 944 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 3186 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 952 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 3199 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 960 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                    std::cerr << "Can not print not initialised variable" << std::endl;
                                    yyerrok;
                                }
#line 3209 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 965 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                    std::cerr << "Can not print function, you should call it" << std::endl;
                                    yyerrok;
                                }
#line 3219 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 973 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3225 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 974 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3231 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 975 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3237 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 976 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3243 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 977 "interpreter.y" /* yacc.c:1652  */
    {   
                                            try {
                                                (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3256 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 985 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3271 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 995 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[-2].ptr)); 
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3287 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 1006 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[-2].ptr)); 
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3303 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 1017 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[-2].ptr)); 
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3319 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 1028 "interpreter.y" /* yacc.c:1652  */
    {  
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[-2].ptr)); 
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3335 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 128:
#line 1039 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[-2].ptr)); 
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3351 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 129:
#line 1050 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3366 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 130:
#line 1060 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids; 
                                                kids.push_back((yyvsp[-2].ptr));
                                                kids.push_back((yyvsp[0].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3382 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 131:
#line 1071 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 3388 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 132:
#line 1072 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back((yyvsp[-1].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(vgetexp, *(yyvsp[-3].varName), kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3403 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 133:
#line 1082 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back((yyvsp[-3].ptr));
                                                kids.push_back((yyvsp[-1].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(mgetexp, *(yyvsp[-5].varName), kids);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 3419 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 134:
#line 1093 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Variable \"" << *(yyvsp[0].varName) << "\" is not declared!" << std::endl;
                                            exit(1);     
                                        }
#line 3428 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 135:
#line 1100 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3434 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 136:
#line 1101 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3440 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 137:
#line 1102 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3446 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 138:
#line 1103 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3452 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 139:
#line 1104 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3458 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 140:
#line 1105 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3464 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 141:
#line 1106 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3470 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 142:
#line 1107 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3476 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 143:
#line 1108 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3482 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 144:
#line 1109 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3488 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 145:
#line 1110 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3494 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 146:
#line 1111 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3500 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 147:
#line 1115 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 3506 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 148:
#line 1116 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 3512 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 3516 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 1119 "interpreter.y" /* yacc.c:1918  */


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
