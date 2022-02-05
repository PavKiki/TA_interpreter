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
    BEGIF = 286,
    ENDIF = 287,
    BEGFOR = 288,
    ENDFOR = 289,
    ER = 290,
    DOUBLEDOT = 291,
    B = 292,
    E = 293,
    FUNC = 294,
    MOVE = 295,
    RIGHT = 296,
    LEFT = 297,
    ROBEX = 298,
    WALL = 299,
    ASSIGN = 300,
    DECLARE = 301,
    UMINUS = 302
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

#line 193 "interpreter.tab.c" /* yacc.c:352  */
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
#define YYLAST   1341

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  320

#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
       2,     2,     2,    55,     2,     2,     2,     2,     2,    27,
      57,    58,    53,    51,    30,    52,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,     2,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    62,     2,     2,     2,     2,
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
      47,    48,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    67,    75,    78,    82,    83,    89,    93,
     100,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   124,   125,   129,   137,   144,
     151,   158,   165,   176,   183,   194,   201,   236,   271,   278,
     279,   280,   284,   291,   299,   306,   307,   308,   309,   310,
     311,   312,   316,   323,   324,   331,   332,   339,   346,   353,
     359,   365,   371,   376,   381,   386,   391,   397,   403,   407,
     411,   418,   422,   423,   430,   431,   438,   445,   452,   458,
     464,   469,   474,   480,   484,   492,   496,   497,   504,   518,
     530,   544,   556,   568,   580,   592,   607,   622,   631,   643,
     650,   659,   671,   676,   679,   685,   686,   687,   688,   689,
     693,   698,   704,   710,   716,   722,   728,   733,   739,   740,
     747,   755,   762,   763,   764,   765,   766,   767,   768,   769,
     770,   771,   772,   773,   777,   778
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
  "'\\''", "LEFTSHIFT", "RIGHTSHIFT", "','", "IF", "FORR", "BEGIF",
  "ENDIF", "BEGFOR", "ENDFOR", "ER", "DOUBLEDOT", "B", "E", "FUNC", "MOVE",
  "RIGHT", "LEFT", "ROBEX", "WALL", "ASSIGN", "DECLARE", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "'('", "')'", "'['", "']'",
  "'{'", "'}'", "$accept", "program", "func", "stmts", "stmt",
  "robotactions", "robotmove", "robotright", "robotleft", "robotwall",
  "robotexit", "iff", "forr", "return_func", "args_func", "function",
  "callfunc_args", "callfunction", "matrix", "listexprs", "vector",
  "exprs", "vmdeclaration", "declaration", "assignment", "print", "expr",
  "type", "const", YY_NULLPTR
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
     293,   294,   295,   296,   297,   298,   299,   300,   301,    60,
      62,    43,    45,    42,    47,    33,   302,    40,    41,    91,
      93,   123,   125
};
# endif

#define YYPACT_NINF -45

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-45)))

#define YYTABLE_NINF -53

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -45,     8,   598,   -45,   536,   -45,   -45,   -44,   -41,     0,
     -37,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -29,  1189,  1307,   -27,   -45,   -45,
     -45,   -45,  1213,  1213,  1014,  1319,   369,   660,   -45,    18,
     -45,   -45,   -45,   -45,   -45,    20,    39,    52,    54,   195,
     375,    58,    62,    68,    70,   161,    25,   -45,   389,   -45,
     -18,    38,   -45,   -45,  1213,  1043,   252,   296,   312,  1213,
      11,   369,    13,    44,  1043,  1221,  1158,    43,    56,   292,
      86,    85,  1213,  1213,   101,   101,   719,   778,   -14,    16,
     127,   369,    71,  1213,     1,    81,     3,  1232,   474,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   389,   -45,   -45,   -45,
      13,   -45,   369,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,  1213,  1213,  1213,  1213,  1213,  1213,    92,   369,   174,
     151,   113,    23,   252,   296,   312,   312,   369,    77,    93,
      -3,   165,   205,   389,    95,   252,   296,    97,   103,   217,
    1239,    28,     2,    40,   216,   -45,   312,  1213,  1213,   131,
     -45,  1213,   281,   -45,   -45,   -45,  1319,   118,   -45,    -3,
     312,  1073,   -45,    11,   -45,    11,   -45,  1213,   -45,  1213,
     252,   296,   312,   390,    -3,   312,   312,    90,    90,   -12,
     -12,   101,   389,   247,   330,   107,   119,   439,  1247,   -45,
     389,   -45,   312,    11,  1073,   128,   142,   312,   174,   160,
     150,   148,  1101,   -45,   -45,   -45,   -45,  1255,  1014,  1042,
     -45,   199,   184,   167,    -3,    -3,   312,   312,   252,   296,
     312,   169,   -45,   204,   -45,   178,  1130,   252,   296,   312,
    1262,   182,  1213,   369,    13,   189,   198,   402,  1213,   837,
     203,   -45,   260,   242,   224,   369,   234,   235,  1062,   237,
     249,   312,   125,  1119,   252,   250,   251,   265,   -45,  1014,
     256,  1213,   258,   134,  1198,   262,   269,   -45,   271,   282,
     289,   291,   298,  1213,   896,    14,   -45,   -45,   -45,   -45,
     -45,    11,    13,    11,    13,    11,   312,   -45,   -45,  1319,
      26,    -3,   252,    -3,   252,    -3,   319,   -45,   288,   309,
     300,  1319,   335,   -45,   358,  1014,   308,   955,   -45,   -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,   135,   134,   109,    78,    59,
       0,   123,   124,   125,   122,   126,   127,   128,   129,   130,
     131,   132,   133,    10,     0,     0,     0,     0,    28,    29,
      31,    30,     0,     0,     0,     0,     0,     0,     6,     0,
     107,    25,    26,   108,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,   109,
      78,    59,    24,    44,     0,     0,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
      22,    18,    19,    20,    21,    13,     0,    62,    64,    63,
       0,    12,     0,    65,    81,    80,    15,    16,    17,    14,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    46,    45,    99,     0,    78,     0,
     100,     0,     0,     0,    59,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,   121,     0,     0,     0,
      35,     0,     0,    23,   118,    38,     0,     0,    36,    83,
      84,     0,    73,     0,    55,     0,    87,     0,    74,     0,
      61,    66,    67,    60,    79,    82,   117,   114,   115,   111,
     112,   113,     0,     0,     0,     0,     0,     0,     0,    51,
       0,    54,    84,     0,     0,     0,   119,    70,     0,     0,
      58,     0,     0,    53,   103,   104,   102,     0,     0,     0,
      27,     0,     0,     0,    72,    71,    86,    85,    98,    97,
      96,     0,   119,     0,    58,     0,     0,    50,    49,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,    95,     0,     0,   120,    32,     0,
       0,     0,     0,     0,     0,     0,     0,   120,    75,    57,
      77,    56,    76,     0,     0,     0,    75,    57,    77,    56,
      76,     0,     0,     0,     0,     0,    90,    34,    42,     0,
       0,    89,    94,    92,    93,    91,     0,    41,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,    40,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,   -45,   -33,   -32,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   295,   -45,     6,   -45,
      -4,   -45,   -45,   346,   -45,   -45,   228,   -28,   -45
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    89,   300,    47,   132,    48,    49,    94,
      50,    96,    51,    52,    53,    54,    55,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    87,   172,    69,   176,    99,    70,    90,     3,   120,
      66,   121,   137,   121,   143,   298,    71,   165,   138,   139,
     138,   144,    74,   112,   199,   114,   115,   307,    75,   199,
      82,   173,    95,   177,   127,   122,   123,   124,   125,   128,
     126,   100,   126,   101,   164,    58,   166,    72,     5,     6,
      59,    60,    61,   200,    67,    99,   308,    73,   200,   157,
     214,   134,   102,   174,    66,   178,   140,   141,   146,   149,
     134,   133,    93,   299,    36,   103,   167,   104,   145,   148,
     133,   116,    67,   201,   309,   117,    27,   169,   213,    30,
      31,   118,    66,   119,    67,   129,    32,   158,   215,    33,
     157,    64,   181,   147,    66,    36,   146,   112,   184,   114,
     115,   175,   180,   158,    58,   121,   183,     5,     6,    59,
      60,    61,   160,   161,   193,   197,   121,    67,   171,   106,
     107,   108,   109,   169,   203,   196,   168,    66,   221,    67,
     192,   124,   125,   -52,   126,   106,   107,   108,   109,    66,
     204,   112,   208,   114,   115,    27,   110,   209,    30,    31,
     112,   210,   114,   115,   218,    32,   222,   233,    33,   224,
      64,   225,   110,   -52,    36,    58,   121,   234,     5,     6,
      59,    60,    61,   279,   120,   249,   121,   241,   229,   242,
     243,   112,   287,   114,   115,   205,   238,   244,   228,   193,
     122,   123,   124,   125,   197,   126,   237,   245,   251,   164,
     122,   123,   124,   125,   196,   126,    27,    99,   105,    30,
      31,   106,   107,   108,   109,   252,    32,   253,   254,    33,
     121,    64,    68,   195,   255,    36,   284,   256,   269,   262,
     146,   121,   260,   112,   113,   114,   115,   211,   110,   265,
     264,   273,    99,    79,   122,   123,   124,   125,   266,   126,
      84,    85,    88,   206,    97,   122,   123,   124,   125,   270,
     126,   306,   271,   112,   216,   114,   115,   231,   106,   107,
     108,   109,   317,   314,   272,    99,    68,   301,   146,   303,
     146,   305,   130,   135,   275,   276,   257,   136,   302,   142,
     304,   150,   135,   154,   156,   110,   121,   278,   281,   282,
     162,   156,   283,   285,    68,   159,   286,   121,   291,   170,
     289,    97,   112,   113,   114,   115,    68,   290,   310,   292,
     122,   123,   124,   125,   182,   126,   293,   121,   294,   220,
     185,   122,   123,   124,   125,   295,   126,   311,   312,   186,
     187,   188,   189,   190,   191,   121,   194,   198,   315,    68,
     313,   122,   123,   124,   125,   202,   126,   316,   318,   151,
      91,   207,    81,     5,     6,    59,    60,    92,     0,   122,
     123,   124,   125,     0,   126,   194,   217,     0,   232,   219,
      58,     0,     0,     5,     6,    59,    60,    61,   111,   198,
       0,   112,   113,   114,   115,   226,     0,   227,     0,     0,
       0,    27,     0,     0,    30,    31,   106,   107,   108,   109,
     230,    32,     0,     0,    33,     0,    64,   121,   239,     0,
      93,    27,   240,     0,    30,    31,   240,     0,     0,     0,
     247,    32,     0,     0,    33,     0,    64,     0,     0,     0,
      36,   122,   123,   124,   125,     0,   126,     0,     0,     0,
     267,     0,     0,     0,   258,   112,   113,   114,   115,   235,
     261,   263,     0,     0,    -8,    58,   258,     0,     5,     6,
      59,    60,    61,   274,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    62,    -8,   274,
       0,     0,     0,     0,     0,    -8,    -8,     0,    -8,     0,
      -8,   296,     0,     0,    63,     0,    27,    -8,    -8,    30,
      31,     0,     0,     0,     0,     0,    32,     0,     0,    33,
       0,    64,    -8,    65,     0,    36,    -4,    58,     0,     0,
       5,     6,    59,    60,    61,     0,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    62,
      -4,     0,     0,     0,     0,     0,     0,    -4,    -4,     0,
       0,     0,     0,     0,     0,     0,    63,     0,    27,    -4,
      -4,    30,    31,     0,     0,     0,     0,     0,    32,     0,
       0,    33,     0,    64,     0,    65,     0,    36,    -2,     4,
       0,     0,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,    31,     0,     0,     0,     0,     0,
      32,     0,     0,    33,     0,    34,     0,    35,     0,    36,
      -3,    98,     0,     0,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,     0,     0,     0,
       0,     0,    32,     0,     0,    33,     0,    34,     0,    35,
      58,    36,     0,     5,     6,    59,    60,    61,     0,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    62,    -9,     0,     0,     0,     0,     0,     0,
      -9,    -9,     0,    -9,     0,    -9,     0,     0,     0,    63,
       0,    27,    -9,    -9,    30,    31,     0,     0,     0,     0,
       0,    32,     0,     0,    33,     0,    64,    -9,    65,    98,
      36,     0,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,    31,     0,     0,     0,     0,     0,
      32,     0,     0,    33,     0,    34,   163,    35,    98,    36,
       0,     5,     6,     7,     8,     9,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,    26,
       0,   268,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,    32,
       0,     0,    33,     0,    34,     0,    35,    98,    36,     0,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,   297,     0,     0,     0,     0,     0,    27,    28,
      29,    30,    31,     0,     0,     0,     0,     0,    32,     0,
       0,    33,     0,    34,     0,    35,    98,    36,     0,     5,
       6,     7,     8,     9,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,     0,     0,     0,     0,   319,     0,    27,    28,    29,
      30,    31,     0,     0,     0,     0,     0,    32,     0,     0,
      33,     0,    34,     0,    35,    86,    36,     0,     5,     6,
       7,     8,     9,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
       0,     0,     0,     0,   131,    25,    26,     5,     6,    59,
      60,    61,     0,     0,     0,     0,    27,    28,    29,    30,
      31,     0,     0,     0,     0,   250,    32,   121,     0,    33,
       0,    34,     0,    35,    83,    36,     0,     5,     6,    59,
      77,    78,     0,     0,     0,    27,     0,   121,    30,    31,
       0,   122,   123,   124,   125,    32,   126,     0,    33,     0,
      64,     0,    83,     0,    36,     5,     6,    59,    77,    78,
       0,   122,   123,   124,   125,    27,   126,     0,    30,    31,
     277,     0,     0,     0,     0,    32,     0,     0,    33,     0,
      64,    83,   223,     0,     5,     6,    59,    77,    78,     0,
       0,     0,     0,    27,   121,     0,    30,    31,     0,     0,
       0,     0,     0,    32,     0,     0,    33,     0,    64,    83,
     246,     0,     5,     6,    59,    77,    78,     0,   122,   123,
     124,   125,    27,   126,     0,    30,    31,   280,     0,     0,
       0,     0,    32,     0,     0,    33,     0,    64,     0,   257,
      76,     0,   155,     5,     6,    59,    77,    78,     0,     0,
      27,     0,     0,    30,    31,     0,     0,     0,     0,     0,
      32,     0,     0,    33,    83,    64,     0,     5,     6,    59,
      77,    78,    83,   121,     0,     5,     6,    59,   152,   153,
       0,    27,     0,     0,    30,    31,     0,     0,     0,     0,
       0,    32,     0,     0,    33,     0,    64,   122,   123,   124,
     125,     0,   126,     0,     0,    27,   288,   121,    30,    31,
       0,     0,   179,    27,   121,    32,    30,    31,    33,   212,
      64,     0,   121,    32,     0,     0,    33,   236,    64,     0,
     121,   122,   123,   124,   125,   248,   126,   121,   122,   123,
     124,   125,   259,   126,     0,     0,   122,   123,   124,   125,
       0,   126,     0,     0,   122,   123,   124,   125,    80,   126,
       0,   122,   123,   124,   125,     0,   126,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22
};

static const yytype_int16 yycheck[] =
{
       4,    34,     1,    47,     1,    37,    47,    35,     0,    23,
       4,    25,     1,    25,     1,     1,    57,     1,     7,     8,
       7,     8,    59,    26,     1,    28,    29,     1,    57,     1,
      57,    30,    36,    30,     9,    49,    50,    51,    52,    57,
      54,    23,    54,    23,    58,     1,    30,    47,     4,     5,
       6,     7,     8,    30,    58,    87,    30,    57,    30,    57,
      58,    65,    23,    62,    58,    62,    70,    71,    72,    73,
      74,    65,    61,    59,    61,    23,    60,    23,    72,    73,
      74,    23,    86,    60,    58,    23,    42,    91,    60,    45,
      46,    23,    86,    23,    98,    57,    52,    57,    58,    55,
      57,    57,   106,    59,    98,    61,   110,    26,   112,    28,
      29,    30,   106,    57,     1,    25,   110,     4,     5,     6,
       7,     8,    36,    38,   128,   129,    25,   131,    57,    26,
      27,    28,    29,   137,    57,   129,     9,   131,   166,   143,
      48,    51,    52,    30,    54,    26,    27,    28,    29,   143,
      57,    26,    57,    28,    29,    42,    53,    60,    45,    46,
      26,    58,    28,    29,    33,    52,    48,    60,    55,   173,
      57,   175,    53,    60,    61,     1,    25,    58,     4,     5,
       6,     7,     8,    58,    23,   218,    25,    59,   192,    47,
      30,    26,    58,    28,    29,    30,   200,    47,   192,   203,
      49,    50,    51,    52,   208,    54,   200,    59,     9,    58,
      49,    50,    51,    52,   208,    54,    42,   249,    23,    45,
      46,    26,    27,    28,    29,    41,    52,    60,    59,    55,
      25,    57,     4,    59,    30,    61,   269,    59,    35,   243,
     244,    25,    60,    26,    27,    28,    29,    30,    53,    60,
     244,   255,   284,    25,    49,    50,    51,    52,    60,    54,
      32,    33,    34,    58,    36,    49,    50,    51,    52,     9,
      54,   299,    30,    26,    58,    28,    29,    30,    26,    27,
      28,    29,   315,   311,    60,   317,    58,   291,   292,   293,
     294,   295,    64,    65,    60,    60,    59,    69,   292,    71,
     294,    73,    74,    75,    76,    53,    25,    58,    58,    58,
      82,    83,    47,    57,    86,    23,    58,    25,    47,    91,
      58,    93,    26,    27,    28,    29,    98,    58,     9,    47,
      49,    50,    51,    52,   106,    54,    47,    25,    47,    58,
     112,    49,    50,    51,    52,    47,    54,    59,    39,   121,
     122,   123,   124,   125,   126,    25,   128,   129,    23,   131,
      60,    49,    50,    51,    52,   137,    54,     9,    60,    74,
       1,   143,    26,     4,     5,     6,     7,     8,    -1,    49,
      50,    51,    52,    -1,    54,   157,   158,    -1,    58,   161,
       1,    -1,    -1,     4,     5,     6,     7,     8,    23,   171,
      -1,    26,    27,    28,    29,   177,    -1,   179,    -1,    -1,
      -1,    42,    -1,    -1,    45,    46,    26,    27,    28,    29,
     192,    52,    -1,    -1,    55,    -1,    57,    25,   200,    -1,
      61,    42,   204,    -1,    45,    46,   208,    -1,    -1,    -1,
     212,    52,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      61,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      58,    -1,    -1,    -1,   236,    26,    27,    28,    29,    30,
     242,   243,    -1,    -1,     0,     1,   248,    -1,     4,     5,
       6,     7,     8,   255,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   271,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      36,   283,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    57,    58,    59,    -1,    61,     0,     1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,     0,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    57,    -1,    59,    -1,    61,
       0,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,
       1,    61,    -1,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    57,    58,    59,     1,
      61,    -1,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    57,    58,    59,     1,    61,
      -1,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,     1,    61,    -1,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    59,     1,    61,    -1,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    57,    -1,    59,     1,    61,    -1,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,     1,    31,    32,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    23,    52,    25,    -1,    55,
      -1,    57,    -1,    59,     1,    61,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    42,    -1,    25,    45,    46,
      -1,    49,    50,    51,    52,    52,    54,    -1,    55,    -1,
      57,    -1,     1,    -1,    61,     4,     5,     6,     7,     8,
      -1,    49,    50,    51,    52,    42,    54,    -1,    45,    46,
      58,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      57,     1,    59,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    42,    25,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    57,     1,
      59,    -1,     4,     5,     6,     7,     8,    -1,    49,    50,
      51,    52,    42,    54,    -1,    45,    46,    58,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,
       1,    -1,    34,     4,     5,     6,     7,     8,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,     1,    57,    -1,     4,     5,     6,
       7,     8,     1,    25,    -1,     4,     5,     6,     7,     8,
      -1,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    57,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    42,    58,    25,    45,    46,
      -1,    -1,    30,    42,    25,    52,    45,    46,    55,    30,
      57,    -1,    25,    52,    -1,    -1,    55,    30,    57,    -1,
      25,    49,    50,    51,    52,    30,    54,    25,    49,    50,
      51,    52,    30,    54,    -1,    -1,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    49,    50,    51,    52,     1,    54,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    65,     0,     1,     4,     5,     6,     7,     8,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    31,    32,    42,    43,    44,
      45,    46,    52,    55,    57,    59,    61,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    78,    80,    81,
      83,    85,    86,    87,    88,    89,    90,    91,     1,     6,
       7,     8,    23,    40,    57,    59,    81,    83,    89,    47,
      47,    57,    47,    57,    59,    57,     1,     7,     8,    89,
       1,    86,    57,     1,    89,    89,     1,    66,    89,    76,
      90,     1,     8,    61,    82,    83,    84,    89,     1,    67,
      23,    23,    23,    23,    23,    23,    26,    27,    28,    29,
      53,    23,    26,    27,    28,    29,    23,    23,    23,    23,
      23,    25,    49,    50,    51,    52,    54,     9,    57,    57,
      89,     1,    79,    81,    83,    89,    89,     1,     7,     8,
      83,    83,    89,     1,     8,    81,    83,    59,    81,    83,
      89,    79,     7,     8,    89,    34,    89,    57,    57,    23,
      36,    38,    89,    58,    58,     1,    30,    60,     9,    83,
      89,    57,     1,    30,    62,    30,     1,    30,    62,    30,
      81,    83,    89,    81,    83,    89,    89,    89,    89,    89,
      89,    89,    48,    83,    89,    59,    81,    83,    89,     1,
      30,    60,    89,    57,    57,    30,    58,    89,    57,    60,
      58,    30,    30,    60,    58,    58,    58,    89,    33,    89,
      58,    90,    48,    59,    83,    83,    89,    89,    81,    83,
      89,    30,    58,    60,    58,    30,    30,    81,    83,    89,
      89,    59,    47,    30,    47,    59,    59,    89,    30,    66,
      23,     9,    41,    60,    59,    30,    59,    59,    89,    30,
      60,    89,    83,    89,    81,    60,    60,    58,    34,    35,
       9,    30,    60,    83,    89,    60,    60,    58,    58,    58,
      58,    58,    58,    47,    66,    57,    58,    58,    58,    58,
      58,    47,    47,    47,    47,    47,    89,    36,     1,    59,
      77,    83,    81,    83,    81,    83,    90,     1,    30,    58,
       9,    59,    39,    60,    90,    23,     9,    66,    60,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    71,
      72,    73,    74,    74,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    87,
      87,    87,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     1,     1,     4,     1,     1,
       1,     1,     6,     3,     8,     3,     2,     4,     2,     4,
       6,     2,     1,    13,     2,     1,     1,     1,     3,     3,
       3,     2,     1,     4,     4,     3,     7,     7,     4,     1,
       3,     3,     2,     2,     2,     2,     3,     3,     2,     2,
       2,     3,     3,     2,     3,     7,     7,     7,     1,     3,
       2,     2,     3,     2,     2,     3,     3,     2,     6,     9,
       8,     9,     9,     9,     9,     6,     4,     4,     4,     3,
       3,     3,     4,     4,     4,     1,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     2,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 1528 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 5: /* INTEGER  */
#line 55 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).intPtr);}
#line 1534 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 6: /* VARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1540 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 7: /* VVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1546 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 8: /* MVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1552 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 9: /* VAR  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1558 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 10: /* FVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1564 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 66: /* stmts  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1570 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 67: /* stmt  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1576 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 68: /* robotactions  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1582 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 69: /* robotmove  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1588 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 70: /* robotright  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1594 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 71: /* robotleft  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1600 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 72: /* robotwall  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1606 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 73: /* robotexit  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1612 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 74: /* iff  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1618 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 75: /* forr  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1624 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 76: /* return_func  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1630 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 77: /* args_func  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1636 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 78: /* function  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1642 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 79: /* callfunc_args  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1648 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 80: /* callfunction  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1654 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 81: /* matrix  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1660 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 82: /* listexprs  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1666 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 83: /* vector  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1672 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 84: /* exprs  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1678 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 85: /* vmdeclaration  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1684 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 86: /* declaration  */
#line 58 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1690 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 87: /* assignment  */
#line 58 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1696 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 88: /* print  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1702 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 89: /* expr  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1708 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 91: /* const  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1714 "interpreter.tab.c" /* yacc.c:1257  */
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
#line 2006 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 2019 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 75 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                }
#line 2027 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 82 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2033 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 83 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 2044 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 89 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyvsp[-1].ptr); delete (yyval.ptr);
                                }
#line 2053 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 93 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyval.ptr);
                                }
#line 2062 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 100 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 2071 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 104 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2077 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 105 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2083 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 106 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2089 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 107 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2095 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 108 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2101 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 109 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 2107 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 110 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 2113 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 111 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2119 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 112 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2125 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 113 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2131 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 114 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2137 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 115 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2143 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 116 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2149 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 117 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                    delete (yyval.ptr);
                                }
#line 2158 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 124 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2164 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 125 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2170 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 129 "interpreter.y" /* yacc.c:1652  */
    {   
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(move, kids);
                                }
#line 2180 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 137 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(right, kids);
                                }
#line 2189 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 144 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(left, kids);
                                }
#line 2198 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 151 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(wall, kids);
                                }
#line 2207 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 158 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(exxit, kids);
                                }
#line 2216 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 2232 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 176 "interpreter.y" /* yacc.c:1652  */
    {
                                                std::cerr << "Error at line " << (yylsp[-1]).first_line << "-" << std::endl;
                                                delete (yyval.ptr); 
                                            }
#line 2241 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 183 "interpreter.y" /* yacc.c:1652  */
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
#line 2257 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 194 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                                                    delete (yyval.ptr);
                                                                }
#line 2266 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 201 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    try {
                                                                        if ((yyvsp[-1].vtype) == Interpreter::INT) {
                                                                            auto plug = new Interpreter::IntegerNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::BOOL) {
                                                                            auto plug = new Interpreter::BoolNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::VINT) {
                                                                            auto plug = new Interpreter::IntegerVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::VBOOL) {
                                                                            auto plug = new Interpreter::BoolVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::MINT) {
                                                                            auto plug = new Interpreter::IntegerMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::MBOOL) {
                                                                            auto plug = new Interpreter::BoolMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else throw "Return parameters can not be const!";
                                                                        auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                                                        (yyval.ptr) = new Interpreter::return_funcNode({(yyvsp[-1].vtype), search->second});
                                                                        dynamic_cast<Interpreter::return_funcNode*>((yyval.ptr))->retVarNames.push_back(*(yyvsp[0].varName));
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
#line 2306 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 236 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    try {
                                                                        if ((yyvsp[-1].vtype) == Interpreter::INT) {
                                                                            auto plug = new Interpreter::IntegerNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::BOOL) {
                                                                            auto plug = new Interpreter::BoolNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::VINT) {
                                                                            auto plug = new Interpreter::IntegerVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::VBOOL) {
                                                                            auto plug = new Interpreter::BoolVectorNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::MINT) {
                                                                            auto plug = new Interpreter::IntegerMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else if ((yyvsp[-1].vtype) == Interpreter::MBOOL) {
                                                                            auto plug = new Interpreter::BoolMatrixNode();
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[0].varName), plug);
                                                                        }
                                                                        else throw "Return parameters can not be const!";
                                                                        auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                                                        dynamic_cast<Interpreter::return_funcNode*>((yyval.ptr))->container.push_back({(yyvsp[-1].vtype), search->second});
                                                                        dynamic_cast<Interpreter::return_funcNode*>((yyval.ptr))->retVarNames.push_back(*(yyvsp[0].varName));
                                                                    }
                                                                    catch (const char* error) {
                                                                        std::cerr << error << std::endl;
                                                                    }
                                                                }
#line 2346 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 271 "interpreter.y" /* yacc.c:1652  */
    {
                                                                std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                delete (yyvsp[-1].ptr);
                                                            }
#line 2355 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 278 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-2].vtype), *(yyvsp[-1].varName));}
#line 2361 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 279 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addByVTypeandName((yyvsp[-2].vtype), *(yyvsp[-1].varName));}
#line 2367 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 280 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                            delete (yyvsp[-1].ptr); delete (yyval.ptr);
                                                                        }
#line 2376 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 284 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                            delete (yyval.ptr);
                                                                        }
#line 2385 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 291 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->localStorage, dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->localisConst, 
                                                                            dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-11].ptr))->container, dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-11].ptr))->retVarNames,
                                                                            (yyvsp[-1].ptr), *(yyvsp[-7].varName), dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->types, dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->names);
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[-7].varName), plug);
                                                                            Interpreter::tmpStorage.clear();
                                                                            (yyval.ptr) = plug;
                                                                        }
#line 2398 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 299 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                                                            delete (yyval.ptr);
                                                                        }
#line 2407 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 306 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(expR, (yyvsp[0].ptr));}
#line 2413 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 307 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(vectoR, (yyvsp[0].ptr));}
#line 2419 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 308 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(matriX, (yyvsp[0].ptr));}
#line 2425 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 309 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(expR, (yyvsp[0].ptr));}
#line 2431 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 310 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(vectoR, (yyvsp[0].ptr));}
#line 2437 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 311 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(matriX, (yyvsp[0].ptr));}
#line 2443 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 312 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                        delete (yyvsp[-1].ptr);
                                    }
#line 2452 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 316 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                        delete (yyval.ptr);
                                    }
#line 2461 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 323 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc(*(yyvsp[-3].varName), dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-1].ptr))->args);}
#line 2467 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 324 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-3]).first_line << std::endl;
                                               delete (yyvsp[-1].ptr); delete (yyval.ptr);
                                            }
#line 2476 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 331 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2482 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 332 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex);
                                                }
#line 2494 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 339 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mvecrowindex);
                                                }
#line 2506 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 346 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmatindex);
                                                }
#line 2518 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 353 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>(search->second));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, getmat);
                                    }
#line 2529 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 359 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                    }
#line 2540 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 365 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                    }
#line 2551 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 371 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 2561 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 376 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                    }
#line 2571 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 381 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 2581 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 386 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, vtransposition);
                                    }
#line 2591 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 391 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMvec);
                                    }
#line 2602 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 397 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                    }
#line 2613 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 403 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr);
                                            }
#line 2622 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 407 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr);
                                            }
#line 2631 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 411 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr);
                                            }
#line 2640 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 418 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 2649 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 422 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 2655 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 423 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                               delete (yyvsp[-1].ptr);
                                            }
#line 2664 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 430 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2670 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 431 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vvecindex);
                                                }
#line 2682 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 438 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex);
                                                }
#line 2694 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 445 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerVectorNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprrowindex);
                                                }
#line 2706 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 452 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, getvec);
                                        }
#line 2717 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 458 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                        }
#line 2728 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 464 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                        }
#line 2738 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 469 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                        }
#line 2748 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 474 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, VEMexpr);
                                        }
#line 2759 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 480 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2768 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 484 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2777 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 492 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 2786 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 496 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 2792 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 497 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyvsp[-1].ptr);
                                }
#line 2801 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 504 "interpreter.y" /* yacc.c:1652  */
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
#line 2820 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 518 "interpreter.y" /* yacc.c:1652  */
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
#line 2837 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 530 "interpreter.y" /* yacc.c:1652  */
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
#line 2856 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 544 "interpreter.y" /* yacc.c:1652  */
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
#line 2873 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 556 "interpreter.y" /* yacc.c:1652  */
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
#line 2890 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 568 "interpreter.y" /* yacc.c:1652  */
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
#line 2907 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 580 "interpreter.y" /* yacc.c:1652  */
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
#line 2924 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 592 "interpreter.y" /* yacc.c:1652  */
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
#line 2941 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 607 "interpreter.y" /* yacc.c:1652  */
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
#line 2961 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 622 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CVBOOL || (yyvsp[-3].vtype) == Interpreter::CVINT) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2975 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 631 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CMBOOL || (yyvsp[-3].vtype) == Interpreter::CMINT) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2989 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 643 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3001 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 650 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3015 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 659 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3029 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 671 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 3039 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 676 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                }
#line 3047 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 679 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                }
#line 3055 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 685 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3061 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 686 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3067 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 687 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3073 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 688 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3079 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 689 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                }
#line 3087 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 693 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 3097 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 698 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 3108 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 704 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 3119 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 710 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 3130 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 716 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 3141 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 722 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 3152 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 728 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 3162 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 733 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 3173 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 739 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 3179 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 740 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back(search->second);
                                    (yyval.ptr) = new Interpreter::OperationNode(vgetexp, *(yyvsp[-3].varName), kids);
                                }
#line 3191 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 747 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
                                            std::vector<Interpreter::Node*> kids;
                                            kids.push_back((yyvsp[-3].ptr));
                                            kids.push_back((yyvsp[-1].ptr));
                                            kids.push_back(search->second);
                                            (yyval.ptr) = new Interpreter::OperationNode(mgetexp, *(yyvsp[-5].varName), kids);
                                        }
#line 3204 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 755 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                            delete (yyvsp[0].ptr);
                                        }
#line 3213 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 762 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3219 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 763 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3225 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 764 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3231 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 765 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3237 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 766 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3243 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 767 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3249 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 128:
#line 768 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3255 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 129:
#line 769 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3261 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 130:
#line 770 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3267 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 131:
#line 771 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3273 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 132:
#line 772 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3279 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 133:
#line 773 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3285 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 134:
#line 777 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 3291 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 135:
#line 778 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 3297 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 3301 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 781 "interpreter.y" /* yacc.c:1918  */


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
