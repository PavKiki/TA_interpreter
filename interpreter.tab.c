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
#define YYNSTATES  336

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
     290,   291,   292,   293,   294,   295,   296,   297,   302,   309,
     311,   319,   320,   329,   339,   349,   358,   369,   380,   390,
     400,   410,   420,   431,   442,   447,   452,   460,   464,   465,
     472,   473,   483,   493,   503,   512,   523,   533,   543,   554,
     558,   566,   570,   571,   578,   596,   607,   620,   631,   642,
     653,   664,   678,   693,   702,   714,   721,   730,   742,   747,
     750,   756,   757,   758,   759,   760,   764,   769,   775,   781,
     787,   793,   799,   804,   810,   811,   816,   822,   830,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   840,   841,
     845,   846
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

#define YYPACT_NINF -47

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-47)))

#define YYTABLE_NINF -69

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -47,    16,   520,   -47,   457,   -47,   -47,   -18,   -46,   -35,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -39,  1198,  1325,   -20,   -47,   -47,   -47,
     -47,  1198,  1198,   943,  1325,  1073,   583,   -47,    17,   -47,
     -47,   -47,   -47,   -47,    21,    29,    24,    27,    52,    68,
     202,   423,    79,    82,    93,    95,  1218,   116,   -47,  1112,
     -47,    70,    83,   -47,  1198,    41,   325,   119,   133,  1198,
      10,  1073,    14,   985,  1219,  1198,   101,   106,  1230,    96,
     129,  1198,   112,   112,   643,   823,   110,     2,   131,  1073,
     113,  1198,     3,   179,     5,  1010,   385,   -47,   -47,   -47,
     -47,   -47,  1325,   143,   145,   -47,   -47,   -47,  1112,   -47,
     -47,   -47,    14,   -47,  1073,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,  1198,  1198,  1198,  1198,  1198,  1198,   121,
    1073,  1011,   218,   972,   -47,    13,   325,   119,   133,   133,
    1073,   117,   118,    67,   185,   235,  1112,   136,   325,   119,
     130,    80,   236,  1249,     0,    31,   256,   133,  1198,  1198,
       6,  1198,   121,   274,   -47,   -47,   140,   -47,    67,   133,
    1135,   -47,    10,   -47,    10,   -47,  1198,   -47,  1198,   186,
     139,   943,   325,   119,   133,   206,    67,   133,   133,   -16,
     -16,    26,    26,   112,  1112,   223,   291,   156,   123,   456,
    1263,   -47,  1050,   -47,   133,    10,  1135,   158,   171,   133,
    1011,   191,   175,   182,  1156,   -47,   -47,   -47,  1273,   -47,
     -47,   943,  1239,   -47,   209,   196,    67,    67,   133,   133,
     -47,    41,   883,   325,   119,   133,   187,   -47,   242,   -47,
     215,  1177,   -47,   325,   119,   133,  1280,   222,  1198,  1073,
      14,   231,   232,   310,  1198,   703,    -9,   267,   249,    23,
     -47,   234,  1073,   239,   240,   322,   224,   237,   133,    72,
    1034,   325,   238,   244,   257,   -47,   -47,   -47,   -47,   -47,
     943,   246,  1198,   -47,   253,    85,  1096,   255,   258,   -47,
     271,   272,   273,   283,   284,  1198,   763,     4,   -47,   -47,
     -47,   -47,   -47,    10,    14,    10,    14,    10,   133,   -47,
     -47,   -47,   -47,  1325,    56,    67,   325,    67,   325,    67,
     327,   -47,  1325,   -47,   -47,   285,   328,  1112,   296,   325,
     119,   133,  1112,   325,   119,   133
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
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
     125,    94,    75,    24,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,    22,    18,
      19,    44,     0,     0,     0,    20,    21,    13,     0,    78,
      80,    79,     0,    12,     0,    81,    97,    96,    15,    16,
      17,    14,    11,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,    62,     0,    61,    60,    59,   115,
       0,    94,     0,   116,     0,     0,     0,    75,   117,     0,
       0,     0,     0,     0,     0,     0,     0,   137,     0,     0,
       0,     0,     0,     0,    23,   134,     0,    42,    99,   100,
       0,    89,     0,    71,     0,   103,     0,    90,     0,     0,
       0,     0,    77,    82,    83,    76,    95,    98,   133,   130,
     131,   127,   128,   129,     0,     0,     0,     0,     0,     0,
       0,    67,     0,    70,   100,     0,     0,     0,   135,    86,
       0,     0,    74,     0,     0,   119,   120,   118,     0,    33,
      34,     0,     0,    27,     0,     0,    88,    87,   102,   101,
      43,     0,     0,   114,   113,   112,     0,   135,     0,    74,
       0,     0,    66,    65,    64,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,   104,     0,
       0,   111,     0,     0,   136,    35,    36,    32,    37,    38,
       0,     0,     0,    69,     0,     0,     0,     0,     0,   136,
      91,    73,    93,    72,    92,     0,     0,     0,    91,    73,
      93,    72,    92,     0,     0,     0,     0,     0,   106,    39,
      40,    41,    55,     0,     0,   105,   110,   108,   109,   107,
       0,    54,     0,    56,    53,    45,     0,     0,    49,    48,
      47,    46,     0,    52,    51,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -47,   -47,   -47,   -25,   -29,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   306,   -47,   -47,
     -47,   124,   -47,   128,   -47,   108,   -47,   -47,   323,   -47,
     -47,    -4,   -24,   -47
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    36,    37,    38,    39,    40,    41,    42,
      43,    44,   221,   277,   280,   311,    45,    46,   314,    47,
      48,   135,    49,    50,    92,    51,    94,    52,    53,    54,
      55,    56,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    80,    70,   101,   171,   312,   175,    97,    85,   123,
      88,   140,    71,    72,   201,   146,     3,   141,   142,    74,
      78,   141,   147,    73,   201,   101,   278,    82,    83,    86,
      69,    95,   102,   172,   279,   176,   126,   127,    81,   128,
      98,   219,   133,   202,    99,     5,     6,    60,    61,    62,
     220,   123,   100,   202,   102,    68,    97,   321,   158,   215,
     132,   138,   104,   166,   313,   139,   173,   145,   177,   153,
     156,   157,    91,   103,   203,   105,    35,   163,   179,    26,
      68,   128,    29,    30,   283,   169,   322,    95,   134,   159,
     216,   106,    68,   114,    31,   116,   117,    32,   114,    64,
     116,   117,   118,    35,   184,   119,   108,   109,   110,   111,
     187,   114,    67,   116,   117,   323,   120,   324,   121,   188,
     189,   190,   191,   192,   193,   129,   196,   200,   130,    68,
     161,   291,    66,   122,   112,   123,   204,   123,   162,   212,
     167,   131,   209,    93,   299,   114,   115,   116,   117,   108,
     109,   110,   111,   180,   196,   218,   232,   222,   123,   158,
     124,   125,   126,   127,   159,   128,   200,    67,   181,   165,
     194,   170,   228,   137,   229,   205,   206,   112,   143,   144,
     149,   152,   239,   124,   125,   126,   127,    66,   128,   224,
     235,   211,    67,   136,   210,   230,   255,   168,   245,   231,
     148,   151,   246,    97,    67,   114,   246,   116,   117,   174,
     253,   114,    66,   116,   117,   207,   183,   238,   247,   248,
     149,   249,   186,   250,    66,   107,    97,   138,   108,   109,
     110,   111,   108,   109,   110,   111,   182,   265,   195,   199,
     185,    67,   251,   123,   268,   270,   257,   261,   168,   114,
     265,   116,   117,   236,    67,   296,   112,   258,   286,   198,
     123,    66,   114,   115,   116,   117,   213,    97,   124,   125,
     126,   127,   262,   128,    66,   263,   281,   165,   286,   282,
     226,   123,   227,   267,   264,   124,   125,   126,   127,   320,
     128,   308,   272,   273,   208,   284,   290,   293,   326,   123,
     287,   288,   234,   294,   297,   295,   124,   125,   126,   127,
     244,   128,   298,   195,   301,   217,   123,   302,   199,   303,
     304,   305,   233,   331,   124,   125,   126,   127,   335,   128,
     243,   306,   307,   223,   327,   123,   325,   328,   198,   137,
      87,   124,   125,   126,   127,   332,   128,   123,    79,     0,
     237,   108,   109,   110,   111,   259,     0,   269,   149,   136,
     124,   125,   126,   127,     0,   128,     0,     0,     0,   274,
     285,     0,   124,   125,   126,   127,     0,   128,   271,   112,
       0,   289,     0,     0,     0,    -8,    59,     0,     0,     5,
       6,    60,    61,    62,     0,     0,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    63,    -8,
       0,   315,   149,   317,   149,   319,    -8,    -8,     0,     0,
     -57,    -8,     0,    26,    -8,    -8,    29,    30,     0,     0,
      -8,    -8,   316,     0,   318,   330,     0,     0,    31,     0,
     334,    32,     0,    64,    -8,    65,   113,    35,     0,   114,
     115,   116,   117,     0,     0,   329,     0,    -4,    59,     0,
     333,     5,     6,    60,    61,    62,     0,     0,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      63,    -4,   114,   115,   116,   117,   240,     0,    -4,    -4,
       0,     0,   -57,     0,     0,    26,    -4,    -4,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,    32,     0,    64,     0,    65,     0,    35,
      -2,     4,     0,     0,     5,     6,     7,     8,     9,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,    24,    25,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,    32,     0,    33,     0,
      34,     0,    35,    -3,    96,     0,     0,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    33,     0,    34,    59,    35,     0,     5,     6,    60,
      61,    62,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    63,    -9,     0,     0,
       0,     0,     0,     0,    -9,    -9,     0,     0,   -57,    -9,
       0,    26,    -9,    -9,    29,    30,     0,     0,    -9,    -9,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    64,    -9,    65,    96,    35,     0,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,   275,
       0,    26,    27,    28,    29,    30,     0,     0,   276,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    33,     0,    34,    96,    35,     0,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,   309,
       0,    26,    27,    28,    29,    30,     0,     0,     0,   310,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    33,     0,    34,    96,    35,     0,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    33,   164,    34,    96,    35,     0,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,   260,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    33,     0,    34,    84,    35,     0,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,    59,    24,    25,     5,     6,    60,    61,
      62,    26,    27,    28,    29,    30,    59,     0,     0,     5,
       6,    60,    61,    62,     0,     0,    31,     0,     0,    32,
       0,    33,   -68,    34,     0,    35,     0,     0,     0,     0,
      26,     0,    59,    29,    30,     5,     6,    60,    61,    62,
       0,     0,     0,    26,     0,    31,    29,    30,    32,     0,
      64,     0,     0,   -68,    35,   123,     0,     0,    31,     0,
     178,    32,     0,    64,     0,   150,     0,    35,     0,    26,
       0,    59,    29,    30,     5,     6,    60,    61,    62,   123,
     124,   125,   126,   127,    31,   128,     0,    32,     0,    64,
       0,   197,     0,    35,    89,     0,     0,     5,     6,    60,
      61,    90,     0,     0,   124,   125,   126,   127,    26,   128,
       0,    29,    30,   292,     0,     0,     0,   242,     0,     0,
       0,     0,     0,    31,     0,     0,    32,     0,    64,     0,
       0,    26,    35,    59,    29,    30,     5,     6,    60,    61,
      62,   123,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    64,     0,     0,     0,    91,    75,     0,     0,     5,
       6,    60,    76,    77,     0,     0,   124,   125,   126,   127,
      26,   128,     0,    29,    30,   300,     0,    75,     0,     0,
       5,     6,    60,    76,    77,    31,     0,     0,    32,     0,
      64,     0,     0,    26,    35,     0,    29,    30,    75,     0,
       0,     5,     6,    60,    76,    77,     0,     0,    31,     0,
       0,    32,     0,    64,    26,   225,     0,    29,    30,    75,
       0,     0,     5,     6,    60,    76,    77,     0,     0,    31,
       0,     0,    32,     0,    64,    26,   252,     0,    29,    30,
      75,     0,     0,     5,     6,    60,   154,   155,     0,     0,
      31,     0,     0,    32,     0,    64,    26,   264,     0,    29,
      30,   122,     0,   123,     0,     0,     0,     0,     0,     0,
       0,    31,     0,   160,    32,   123,    64,    26,     0,     0,
      29,    30,   256,     0,   123,     0,     0,     0,   124,   125,
     126,   127,    31,   128,   123,    32,     0,    64,     0,   214,
     124,   125,   126,   127,     0,   128,     0,     0,   123,   124,
     125,   126,   127,   241,   128,     0,     0,     0,   123,   124,
     125,   126,   127,   254,   128,   123,     0,     0,     0,     0,
     266,     0,     0,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,   124,   125,   126,   127,     0,   128,     0,
     124,   125,   126,   127,     0,   128,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       4,    25,    48,     1,     1,     1,     1,    36,    33,    25,
      34,     1,    58,    48,     1,     1,     0,     7,     8,    58,
      24,     7,     8,    58,     1,     1,    35,    31,    32,    33,
      48,    35,    30,    30,    43,    30,    52,    53,    58,    55,
      23,    35,     1,    30,    23,     4,     5,     6,     7,     8,
      44,    25,    23,    30,    30,    59,    85,     1,    58,    59,
      64,    65,    35,    61,    60,    69,    63,    71,    63,    73,
      74,    75,    62,    49,    61,    23,    62,    81,   102,    38,
      84,    55,    41,    42,    61,    89,    30,    91,    47,    58,
      59,    23,    96,    26,    53,    28,    29,    56,    26,    58,
      28,    29,    23,    62,   108,    23,    26,    27,    28,    29,
     114,    26,     4,    28,    29,    59,    23,    61,    23,   123,
     124,   125,   126,   127,   128,     9,   130,   131,    58,   133,
      34,    59,     4,    23,    54,    25,   140,    25,     9,    59,
       9,    58,   146,    35,    59,    26,    27,    28,    29,    26,
      27,    28,    29,    10,   158,   159,   181,   161,    25,    58,
      50,    51,    52,    53,    58,    55,   170,    59,    23,    59,
      49,    58,   176,    65,   178,    58,    58,    54,    70,    71,
      72,    73,    59,    50,    51,    52,    53,    59,    55,    49,
     194,    61,    84,    65,    58,     9,   221,    89,   202,    60,
      72,    73,   206,   232,    96,    26,   210,    28,    29,    30,
     214,    26,    84,    28,    29,    30,   108,    61,    60,    48,
     112,    30,   114,    48,    96,    23,   255,   231,    26,    27,
      28,    29,    26,    27,    28,    29,   108,   241,   130,   131,
     112,   133,    60,    25,   248,   249,    37,    60,   140,    26,
     254,    28,    29,    30,   146,   280,    54,    61,   262,   131,
      25,   133,    26,    27,    28,    29,    30,   296,    50,    51,
      52,    53,    30,    55,   146,    60,     9,    59,   282,    30,
     172,    25,   174,    61,    60,    50,    51,    52,    53,   313,
      55,   295,    61,    61,    59,    61,    59,    59,   322,    25,
      61,    61,   194,    59,    58,    48,    50,    51,    52,    53,
     202,    55,    59,   205,    59,    59,    25,    59,   210,    48,
      48,    48,   194,   327,    50,    51,    52,    53,   332,    55,
     202,    48,    48,    59,    49,    25,     9,     9,   210,   231,
      34,    50,    51,    52,    53,    49,    55,    25,    25,    -1,
      59,    26,    27,    28,    29,   231,    -1,   249,   250,   231,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    59,
     262,    -1,    50,    51,    52,    53,    -1,    55,   250,    54,
      -1,    59,    -1,    -1,    -1,     0,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,   303,   304,   305,   306,   307,    31,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,   304,    -1,   306,   327,    -1,    -1,    53,    -1,
     332,    56,    -1,    58,    59,    60,    23,    62,    -1,    26,
      27,    28,    29,    -1,    -1,   327,    -1,     0,     1,    -1,
     332,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    26,    27,    28,    29,    30,    -1,    31,    32,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    56,    -1,    58,    -1,    60,    -1,    62,
       0,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,    -1,
      60,    -1,    62,     0,     1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    -1,    60,     1,    62,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    59,    60,     1,    62,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    -1,    60,     1,    62,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    -1,    60,     1,    62,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    59,    60,     1,    62,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    -1,    60,     1,    62,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,     1,    31,    32,     4,     5,     6,     7,
       8,    38,    39,    40,    41,    42,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    30,    60,    -1,    62,    -1,    -1,    -1,    -1,
      38,    -1,     1,    41,    42,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    38,    -1,    53,    41,    42,    56,    -1,
      58,    -1,    -1,    61,    62,    25,    -1,    -1,    53,    -1,
      30,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    38,
      -1,     1,    41,    42,     4,     5,     6,     7,     8,    25,
      50,    51,    52,    53,    53,    55,    -1,    56,    -1,    58,
      -1,    60,    -1,    62,     1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    50,    51,    52,    53,    38,    55,
      -1,    41,    42,    59,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    56,    -1,    58,    -1,
      -1,    38,    62,     1,    41,    42,     4,     5,     6,     7,
       8,    25,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    58,    -1,    -1,    -1,    62,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    50,    51,    52,    53,
      38,    55,    -1,    41,    42,    59,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,    53,    -1,    -1,    56,    -1,
      58,    -1,    -1,    38,    62,    -1,    41,    42,     1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    53,    -1,
      -1,    56,    -1,    58,    38,    60,    -1,    41,    42,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    53,
      -1,    -1,    56,    -1,    58,    38,    60,    -1,    41,    42,
       1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      53,    -1,    -1,    56,    -1,    58,    38,    60,    -1,    41,
      42,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    23,    56,    25,    58,    38,    -1,    -1,
      41,    42,    23,    -1,    25,    -1,    -1,    -1,    50,    51,
      52,    53,    53,    55,    25,    56,    -1,    58,    -1,    30,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    25,    50,
      51,    52,    53,    30,    55,    -1,    -1,    -1,    25,    50,
      51,    52,    53,    30,    55,    25,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    -1,    55,    -1,
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
      71,    72,    73,    74,    75,    80,    81,    83,    84,    86,
      87,    89,    91,    92,    93,    94,    95,    96,    97,     1,
       6,     7,     8,    23,    58,    60,    87,    89,    95,    48,
      48,    58,    48,    58,    58,     1,     7,     8,    95,    92,
      96,    58,    95,    95,     1,    67,    95,    81,    96,     1,
       8,    62,    88,    89,    90,    95,     1,    68,    23,    23,
      23,     1,    30,    49,    35,    23,    23,    23,    26,    27,
      28,    29,    54,    23,    26,    27,    28,    29,    23,    23,
      23,    23,    23,    25,    50,    51,    52,    53,    55,     9,
      58,    58,    95,     1,    47,    85,    87,    89,    95,    95,
       1,     7,     8,    89,    89,    95,     1,     8,    87,    89,
      60,    87,    89,    95,     7,     8,    95,    95,    58,    58,
      23,    34,     9,    95,    59,    59,    61,     9,    89,    95,
      58,     1,    30,    63,    30,     1,    30,    63,    30,    96,
      10,    23,    87,    89,    95,    87,    89,    95,    95,    95,
      95,    95,    95,    95,    49,    89,    95,    60,    87,    89,
      95,     1,    30,    61,    95,    58,    58,    30,    59,    95,
      58,    61,    59,    30,    30,    59,    59,    59,    95,    35,
      44,    76,    95,    59,    49,    60,    89,    89,    95,    95,
       9,    60,    67,    87,    89,    95,    30,    59,    61,    59,
      30,    30,    47,    87,    89,    95,    95,    60,    48,    30,
      48,    60,    60,    95,    30,    67,    23,    37,    61,    85,
      36,    60,    30,    60,    60,    95,    30,    61,    95,    89,
      95,    87,    61,    61,    59,    36,    45,    77,    35,    43,
      78,     9,    30,    61,    61,    89,    95,    61,    61,    59,
      59,    59,    59,    59,    59,    48,    67,    58,    59,    59,
      59,    59,    59,    48,    48,    48,    48,    48,    95,    36,
      46,    79,     1,    60,    82,    89,    87,    89,    87,    89,
      96,     1,    30,    59,    61,     9,    96,    49,     9,    87,
      89,    95,    49,    87,    89,    95
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
       1,     1,     1,     3,     3,     3,     3,     2,     1,     6,
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
                                                                            Interpreter::varStorage = *Interpreter::tmpStorage;
                                                                            Interpreter::isConst = *Interpreter::tmpIsConst;
                                                                            (yyval.ptr) = (yyvsp[-4].ptr);
                                                                        }
#line 2466 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 289 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(expR, (yyvsp[0].ptr));}
#line 2472 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 290 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(vectoR, (yyvsp[0].ptr));}
#line 2478 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 291 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(matriX, (yyvsp[0].ptr));}
#line 2484 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 292 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(defaulT, nullptr);}
#line 2490 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 293 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(expR, (yyvsp[0].ptr)); (yyval.ptr) = (yyvsp[-2].ptr);}
#line 2496 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 294 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(vectoR, (yyvsp[0].ptr)); (yyval.ptr) = (yyvsp[-2].ptr);}
#line 2502 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 295 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(matriX, (yyvsp[0].ptr)); (yyval.ptr) = (yyvsp[-2].ptr);}
#line 2508 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 296 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-2].ptr))->addArg(defaulT, nullptr); (yyval.ptr) = (yyvsp[-2].ptr);}
#line 2514 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 297 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            delete (yyvsp[-1].ptr);
                                            if (!(yyval.ptr)) delete (yyval.ptr); 
                                        }
#line 2524 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 302 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            if (!(yyval.ptr)) delete (yyval.ptr);
                                        }
#line 2533 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 309 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc(*(yyvsp[-3].varName), dynamic_cast<Interpreter::return_func*>((yyvsp[-5].ptr))->rets, 
                                                                                                        dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-1].ptr))->args);}
#line 2540 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 311 "interpreter.y" /* yacc.c:1652  */
    {
                                                                std::cerr << "Error at line " << (yylsp[-3]).first_line << std::endl;
                                                                delete (yyvsp[-1].ptr);
                                                                if (!(yyval.ptr)) delete (yyval.ptr);
                                                            }
#line 2550 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 319 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2556 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 320 "interpreter.y" /* yacc.c:1652  */
    {   try {
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex, *(yyvsp[-6].varName));
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2570 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 329 "interpreter.y" /* yacc.c:1652  */
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
#line 2585 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 339 "interpreter.y" /* yacc.c:1652  */
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
#line 2600 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 349 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, getmat, *(yyvsp[0].varName));
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2614 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 358 "interpreter.y" /* yacc.c:1652  */
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
#line 2630 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 369 "interpreter.y" /* yacc.c:1652  */
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
#line 2646 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 380 "interpreter.y" /* yacc.c:1652  */
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
#line 2661 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 390 "interpreter.y" /* yacc.c:1652  */
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
#line 2676 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 400 "interpreter.y" /* yacc.c:1652  */
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
#line 2691 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 410 "interpreter.y" /* yacc.c:1652  */
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
#line 2706 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 420 "interpreter.y" /* yacc.c:1652  */
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
#line 2722 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 431 "interpreter.y" /* yacc.c:1652  */
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
#line 2738 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 442 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                        if (!(yyval.ptr)) delete (yyval.ptr);
                                    }
#line 2748 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 447 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                        if (!(yyval.ptr)) delete (yyval.ptr);
                                    }
#line 2758 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 452 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                        if (!(yyval.ptr)) delete (yyval.ptr);
                                    }
#line 2768 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 460 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 2777 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 464 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 2783 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 465 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            delete (yyvsp[-1].ptr);
                                        }
#line 2792 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 472 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2798 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 473 "interpreter.y" /* yacc.c:1652  */
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
#line 2813 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 483 "interpreter.y" /* yacc.c:1652  */
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
#line 2828 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 493 "interpreter.y" /* yacc.c:1652  */
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
#line 2843 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 503 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, getvec, *(yyvsp[0].varName));
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2857 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 512 "interpreter.y" /* yacc.c:1652  */
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
#line 2873 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 523 "interpreter.y" /* yacc.c:1652  */
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
#line 2888 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 533 "interpreter.y" /* yacc.c:1652  */
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
#line 2903 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 543 "interpreter.y" /* yacc.c:1652  */
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
#line 2919 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 554 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2928 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 558 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2937 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 566 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 2946 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 570 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 2952 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 571 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyvsp[-1].ptr);
                                }
#line 2961 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 578 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        if (!Interpreter::isConst[*(yyvsp[-5].varName)]) {
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
#line 2984 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 596 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(vvec, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3000 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 607 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!Interpreter::isConst[*(yyvsp[-7].varName)]) {
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
#line 3018 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 620 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprcolumn, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3034 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 631 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mexprrow, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3050 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 642 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mveccolumn, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3066 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 653 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!Interpreter::isConst[*(yyvsp[-8].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mvecrow, *(yyvsp[-8].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-8].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3082 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 664 "interpreter.y" /* yacc.c:1652  */
    {
                                                                if (!Interpreter::isConst[*(yyvsp[-5].varName)]) {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-3].ptr));
                                                                    (yyval.ptr) = new Interpreter::VecMatVariableOperationNode(mmat, *(yyvsp[-5].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)), kids);
                                                                }
                                                                else {
                                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-5].varName) + " can not be changed!";
                                                                    yyerror(tmp.c_str());
                                                                }
                                                            }
#line 3098 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 678 "interpreter.y" /* yacc.c:1652  */
    {        
                                                    if ((yyvsp[-3].vtype) == Interpreter::INT || (yyvsp[-3].vtype) == Interpreter::CINT) {
                                                        auto plug = new Interpreter::IntegerNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CINT) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    }
                                                    else if ((yyvsp[-3].vtype) == Interpreter::BOOL || (yyvsp[-3].vtype) == Interpreter::CBOOL) {
                                                        auto plug = new Interpreter::BoolNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CBOOL) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3118 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 693 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CVBOOL || (yyvsp[-3].vtype) == Interpreter::CVINT) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3132 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 702 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CMBOOL || (yyvsp[-3].vtype) == Interpreter::CMINT) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3146 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 714 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3158 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 721 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3172 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 730 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3186 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 742 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 3196 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 747 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                }
#line 3204 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 750 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                }
#line 3212 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 756 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3218 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 757 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3224 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 758 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3230 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 759 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3236 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 760 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                }
#line 3244 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 764 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 3254 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 769 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 3265 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 128:
#line 775 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 3276 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 129:
#line 781 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 3287 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 130:
#line 787 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 3298 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 131:
#line 793 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 3309 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 132:
#line 799 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 3319 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 133:
#line 804 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 3330 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 134:
#line 810 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 3336 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 135:
#line 811 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(vgetexp, *(yyvsp[-3].varName), kids);
                                }
#line 3346 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 136:
#line 816 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::Node*> kids;
                                            kids.push_back((yyvsp[-3].ptr));
                                            kids.push_back((yyvsp[-1].ptr));
                                            (yyval.ptr) = new Interpreter::OperationNode(mgetexp, *(yyvsp[-5].varName), kids);
                                        }
#line 3357 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 137:
#line 822 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                            if (!(yyvsp[0].ptr)) delete (yyvsp[0].ptr);
                                            if (!(yyval.ptr)) delete (yyval.ptr);
                                        }
#line 3367 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 138:
#line 830 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3373 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 139:
#line 831 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3379 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 140:
#line 832 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3385 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 141:
#line 833 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3391 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 142:
#line 834 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3397 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 143:
#line 835 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3403 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 144:
#line 836 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3409 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 145:
#line 837 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3415 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 146:
#line 838 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3421 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 147:
#line 839 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3427 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 148:
#line 840 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3433 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 149:
#line 841 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3439 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 150:
#line 845 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 3445 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 151:
#line 846 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 3451 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 3455 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 849 "interpreter.y" /* yacc.c:1918  */


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
