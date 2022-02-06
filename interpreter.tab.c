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
#define YYLAST   1286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  325

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
     151,   158,   165,   179,   180,   184,   185,   189,   190,   194,
     195,   199,   213,   248,   283,   290,   291,   292,   296,   303,
     313,   320,   324,   325,   326,   327,   328,   329,   330,   335,
     342,   343,   350,   351,   362,   374,   386,   397,   408,   419,
     429,   439,   449,   459,   470,   481,   485,   489,   496,   500,
     501,   508,   509,   521,   533,   545,   556,   567,   577,   587,
     598,   602,   610,   614,   615,   622,   641,   653,   667,   679,
     691,   703,   715,   730,   745,   754,   766,   773,   782,   794,
     799,   802,   808,   809,   810,   811,   812,   816,   821,   827,
     833,   839,   845,   851,   856,   862,   863,   870,   878,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   900,   901
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
  "BEGFOR", "BEGIF", "ENDIF", "ENDFOR", "ASSIGN", "DECLARE", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "'('", "')'", "'['", "']'",
  "'{'", "'}'", "$accept", "program", "func", "stmts", "stmt",
  "robotactions", "robotmove", "robotright", "robotleft", "robotwall",
  "robotexit", "iff", "begif", "endif", "begfor", "endfor", "forr",
  "return_func", "args_func", "function_head", "function_body", "function",
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

#define YYPACT_NINF -51

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-51)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -51,    42,   588,   -51,   650,   -51,   -51,   -38,    -3,     1,
     -12,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,    -1,  1162,  1264,     2,   -51,   -51,
     -51,   -51,  1162,  1162,  1066,  1264,   339,   712,   -51,    26,
     -51,   -51,   -51,   -51,   -51,    53,    61,    18,    64,    72,
     135,   224,    87,    90,    92,   106,   447,    98,   -51,   405,
     -51,    36,    89,   -51,  1162,   423,   465,   493,   251,  1162,
      17,   339,    30,   113,   423,  1217,  1162,    93,    95,   456,
     109,  1162,   124,   124,   771,   948,    86,     5,   144,   339,
      99,  1162,     9,   254,    10,   239,   526,   -51,   -51,   -51,
     -51,   137,   -51,   -51,   -51,   -51,   405,   -51,   -51,   -51,
      30,   -51,   339,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,  1162,  1162,  1162,  1162,  1162,  1162,   118,   339,   172,
     132,    22,    13,   465,   493,   251,   251,   339,   114,   128,
      75,   333,   150,   405,   134,   465,   493,   136,    70,   525,
    1094,    56,   -50,    84,   168,   251,  1162,  1162,   -32,  1162,
     186,   -51,   -51,   -51,  1264,   149,   -51,    75,   251,  1095,
     -51,    17,   -51,    17,   -51,  1162,   -51,  1162,  1066,   465,
     493,   251,   587,    75,   251,   251,    80,    80,    -8,    -8,
     124,   405,   369,   209,   145,   296,   547,  1177,   -51,   405,
     -51,   251,    17,  1095,   133,   159,   251,   172,   179,   165,
     162,  1134,   -51,   -51,   -51,   -51,  1185,   -51,   -51,  1066,
     462,   -51,   216,   191,   170,    75,    75,   251,   251,  1007,
     465,   493,   251,   173,   -51,   213,   -51,   180,  1154,   465,
     493,   251,  1213,   185,  1162,   339,    30,   188,   195,   281,
    1162,   830,    -2,   -51,   248,   235,   -51,   206,   339,   208,
     211,   335,   214,   217,   251,   -13,   367,   465,   227,   229,
     225,   -51,   -51,   -51,   -51,   -51,  1066,   242,  1162,   234,
      -7,   383,   249,   250,   -51,   264,   265,   266,   280,   290,
    1162,   889,    35,   -51,   -51,   -51,   -51,   -51,    17,    30,
      17,    30,    17,   251,   -51,   -51,   -51,   -51,  1264,     4,
      75,   465,    75,   465,    75,   319,   -51,   279,   -51,   282,
    1264,   -51,   341,   288,   -51
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,   142,   141,   116,    85,    66,
       0,   130,   131,   132,   129,   133,   134,   135,   136,   137,
     138,   139,   140,    10,     0,     0,     0,     0,    28,    29,
      31,    30,     0,     0,     0,     0,     0,     0,     6,     0,
     114,    25,    26,   115,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
     116,    85,    66,    24,     0,     0,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,    22,    18,
      19,     0,    51,    20,    21,    13,     0,    69,    71,    70,
       0,    12,     0,    72,    88,    87,    15,    16,    17,    14,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    53,    52,   106,     0,    85,     0,
     107,     0,     0,     0,    66,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,     0,     0,     0,     0,
       0,    23,   125,    44,     0,     0,    42,    90,    91,     0,
      80,     0,    62,     0,    94,     0,    81,     0,     0,    68,
      73,    74,    67,    86,    89,   124,   121,   122,   118,   119,
     120,     0,     0,     0,     0,     0,     0,     0,    58,     0,
      61,    91,     0,     0,     0,   126,    77,     0,     0,    65,
       0,     0,    60,   110,   111,   109,     0,    33,    34,     0,
       0,    27,     0,     0,     0,    79,    78,    93,    92,     0,
     105,   104,   103,     0,   126,     0,    65,     0,     0,    57,
      56,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,    95,     0,     0,   102,     0,     0,
     127,    35,    36,    32,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,   127,    82,    64,    84,    63,    83,
       0,     0,     0,    82,    64,    84,    63,    83,     0,     0,
       0,     0,     0,    97,    39,    40,    41,    48,     0,     0,
      96,   101,    99,   100,    98,     0,    47,     0,    49,     0,
       0,    45,     0,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,   -51,   -51,   -30,   -35,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   278,   -51,    16,   -51,    -4,   -51,   -51,   327,
     -51,   -51,   245,   -34,   -51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   219,   273,   276,   306,    46,    87,   309,    47,
     102,    48,   132,    49,    50,    92,    51,    94,    52,    53,
      54,    55,    56,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    88,    97,   217,    85,   316,   163,   156,   213,    69,
     170,   174,   218,   112,   198,   114,   115,   121,   137,   112,
      66,   114,   115,    59,   138,   139,     5,     6,    60,    61,
      62,   143,    93,   274,   317,   164,   307,   138,   144,   171,
     175,   275,     3,   199,    70,   286,   126,    74,    72,    98,
      97,   294,   -59,   101,    71,    67,    75,   198,    73,    81,
      27,   134,   318,    30,    31,   165,   140,   141,   146,   149,
     134,   172,   176,   200,    32,    66,    99,    33,    91,    64,
      67,   133,   -59,    36,   100,   167,   199,   103,   145,   148,
     133,    36,    67,   128,   308,   104,   106,   107,   108,   109,
      66,   112,   180,   114,   115,   121,   146,   127,   183,   120,
     116,   121,    66,   117,    59,   118,   212,     5,     6,    60,
      61,    62,   179,   110,   192,   196,   182,    67,   209,   119,
     222,   124,   125,   167,   126,   122,   123,   124,   125,    67,
     126,   157,   214,   159,   162,   195,   129,    66,   229,   121,
     156,    27,   157,   166,    30,    31,   169,   121,   105,    66,
     178,   106,   107,   108,   109,    32,   191,   225,    33,   226,
      64,   202,   147,    59,    36,   121,     5,     6,    60,    61,
      62,   122,   123,   124,   125,   203,   126,   231,   110,   251,
     162,   207,   243,   121,    97,   240,   208,   223,   192,   122,
     123,   124,   125,   196,   126,   235,   244,   230,   205,   245,
      27,   121,   246,    30,    31,   239,    97,   122,   123,   124,
     125,   247,   126,   195,    32,   253,   215,    33,   254,    64,
     255,   194,   257,    36,   121,   122,   123,   124,   125,   259,
     126,   265,   146,   258,   221,   263,   291,   111,   268,    68,
     112,   113,   114,   115,   280,   269,    97,   277,   122,   123,
     124,   125,   267,   126,   121,   278,   279,   234,   282,   177,
      79,   283,   290,   260,   315,   285,   121,    82,    83,    86,
     112,    95,   114,   115,   173,   288,   322,   289,   122,   123,
     124,   125,   293,   126,   310,   146,   312,   146,   314,   292,
     122,   123,   124,   125,    68,   126,   121,   296,   297,   130,
     135,   298,   299,   300,   136,   311,   142,   313,   150,   135,
     154,   155,   106,   107,   108,   109,   160,   301,   319,    68,
     122,   123,   124,   125,   168,   126,    95,   302,   320,   270,
      89,    68,   321,     5,     6,    60,    61,    90,   324,   110,
     323,   181,   151,    80,   236,     0,     0,   184,     0,   112,
     121,   114,   115,   204,     0,     0,   185,   186,   187,   188,
     189,   190,     0,   193,   197,     0,    68,    27,     0,     0,
      30,    31,   201,     0,   122,   123,   124,   125,   206,   126,
       0,    32,   121,   284,    33,   112,    64,   114,   115,   233,
      91,   193,   216,     0,   220,     0,    59,     0,   121,     5,
       6,    60,    61,    62,   197,     0,   122,   123,   124,   125,
     227,   126,   228,     0,   131,   287,     0,     5,     6,    60,
      61,    62,   122,   123,   124,   125,   232,   126,     0,     0,
       0,   295,     0,    27,   241,     0,    30,    31,   242,     0,
       0,     0,   242,     0,     0,     0,   249,    32,     0,     0,
      33,    27,    64,     0,    30,    31,    36,     0,     0,     0,
     120,     0,   121,     0,     0,    32,     0,     0,    33,   158,
      64,   121,     0,   261,    36,   252,     0,   121,     0,   264,
     266,   106,   107,   108,   109,   261,   122,   123,   124,   125,
       0,   126,     0,   281,     0,   122,   123,   124,   125,     0,
     126,   122,   123,   124,   125,     0,   126,     0,   110,   112,
     113,   114,   115,   281,     0,     0,    -8,    59,     0,     0,
       5,     6,    60,    61,    62,   303,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    63,
      -8,   112,   113,   114,   115,   210,     0,    -8,    -8,     0,
       0,     0,    -8,     0,    27,    -8,    -8,    30,    31,     0,
       0,    -8,    -8,   112,   113,   114,   115,   237,    32,     0,
       0,    33,     0,    64,    -8,    65,     0,    36,    -2,     4,
       0,     0,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   106,   107,   108,   109,     0,     0,    25,
      26,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    33,     0,    34,     0,    35,     0,    36,
      -4,    59,     0,     0,     5,     6,    60,    61,    62,     0,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    63,    -4,     0,     0,     0,     0,     0,
       0,    -4,    -4,     0,     0,     0,     0,     0,    27,    -4,
      -4,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    33,     0,    64,     0,    65,
       0,    36,    -3,    96,     0,     0,     5,     6,     7,     8,
       9,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
      27,    28,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    33,     0,    34,
       0,    35,    59,    36,     0,     5,     6,    60,    61,    62,
       0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    63,    -9,     0,     0,     0,     0,
       0,     0,    -9,    -9,     0,     0,     0,    -9,     0,    27,
      -9,    -9,    30,    31,     0,     0,    -9,    -9,     0,     0,
       0,     0,     0,    32,     0,     0,    33,     0,    64,    -9,
      65,    96,    36,     0,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,   271,     0,    27,    28,
      29,    30,    31,     0,     0,   272,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    33,     0,    34,     0,    35,
      96,    36,     0,     5,     6,     7,     8,     9,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,   304,     0,    27,    28,    29,
      30,    31,     0,     0,     0,   305,     0,     0,     0,     0,
       0,    32,     0,     0,    33,     0,    34,     0,    35,    96,
      36,     0,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    33,     0,    34,   161,    35,    96,    36,
       0,     5,     6,     7,     8,     9,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,   256,     0,    27,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,    33,     0,    34,     0,    35,    84,    36,     0,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,    76,    25,    26,     5,
       6,    60,    77,    78,    27,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,   121,
       0,    33,     0,    34,   211,    35,     0,    36,     0,     0,
       0,     0,     0,    27,     0,    76,    30,    31,     5,     6,
      60,    77,    78,   122,   123,   124,   125,    32,   126,     0,
      33,     0,    64,     0,   224,    76,     0,     0,     5,     6,
      60,    77,    78,    76,     0,     0,     5,     6,    60,    77,
      78,     0,    27,     0,     0,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,    33,
       0,    64,    27,   248,     0,    30,    31,     0,     0,     0,
      27,     0,   121,    30,    31,     0,    32,   238,     0,    33,
     121,    64,     0,   260,    32,   250,     0,    33,    76,    64,
       0,     5,     6,    60,   152,   153,   122,   123,   124,   125,
       0,   126,     0,     0,   122,   123,   124,   125,   121,   126,
       0,     0,     0,   262,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    30,    31,
       0,     0,   122,   123,   124,   125,     0,   126,     0,    32,
       0,     0,    33,     0,    64,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       4,    35,    37,    35,    34,     1,     1,    57,    58,    47,
       1,     1,    44,    26,     1,    28,    29,    25,     1,    26,
       4,    28,    29,     1,     7,     8,     4,     5,     6,     7,
       8,     1,    36,    35,    30,    30,     1,     7,     8,    30,
      30,    43,     0,    30,    47,    58,    54,    59,    47,    23,
      85,    58,    30,    35,    57,    59,    57,     1,    57,    57,
      38,    65,    58,    41,    42,    60,    70,    71,    72,    73,
      74,    62,    62,    60,    52,    59,    23,    55,    61,    57,
      84,    65,    60,    61,    23,    89,    30,    23,    72,    73,
      74,    61,    96,    57,    59,    23,    26,    27,    28,    29,
      84,    26,   106,    28,    29,    25,   110,     9,   112,    23,
      23,    25,    96,    23,     1,    23,    60,     4,     5,     6,
       7,     8,   106,    53,   128,   129,   110,   131,    58,    23,
     164,    51,    52,   137,    54,    49,    50,    51,    52,   143,
      54,    57,    58,    34,    58,   129,    57,   131,   178,    25,
      57,    38,    57,     9,    41,    42,    57,    25,    23,   143,
      23,    26,    27,    28,    29,    52,    48,   171,    55,   173,
      57,    57,    59,     1,    61,    25,     4,     5,     6,     7,
       8,    49,    50,    51,    52,    57,    54,   191,    53,   219,
      58,    57,    59,    25,   229,   199,    60,    48,   202,    49,
      50,    51,    52,   207,    54,    60,    47,   191,    58,    30,
      38,    25,    47,    41,    42,   199,   251,    49,    50,    51,
      52,    59,    54,   207,    52,     9,    58,    55,    37,    57,
      60,    59,    59,    61,    25,    49,    50,    51,    52,    59,
      54,   245,   246,    30,    58,    60,   276,    23,    60,     4,
      26,    27,    28,    29,   258,    60,   291,     9,    49,    50,
      51,    52,   246,    54,    25,    30,    60,    58,    60,    30,
      25,    60,    47,    59,   308,    58,    25,    32,    33,    34,
      26,    36,    28,    29,    30,    58,   320,    58,    49,    50,
      51,    52,    58,    54,   298,   299,   300,   301,   302,    57,
      49,    50,    51,    52,    59,    54,    25,    58,    58,    64,
      65,    47,    47,    47,    69,   299,    71,   301,    73,    74,
      75,    76,    26,    27,    28,    29,    81,    47,     9,    84,
      49,    50,    51,    52,    89,    54,    91,    47,    59,    58,
       1,    96,    60,     4,     5,     6,     7,     8,    60,    53,
       9,   106,    74,    26,    58,    -1,    -1,   112,    -1,    26,
      25,    28,    29,    30,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,    -1,   131,    38,    -1,    -1,
      41,    42,   137,    -1,    49,    50,    51,    52,   143,    54,
      -1,    52,    25,    58,    55,    26,    57,    28,    29,    30,
      61,   156,   157,    -1,   159,    -1,     1,    -1,    25,     4,
       5,     6,     7,     8,   169,    -1,    49,    50,    51,    52,
     175,    54,   177,    -1,     1,    58,    -1,     4,     5,     6,
       7,     8,    49,    50,    51,    52,   191,    54,    -1,    -1,
      -1,    58,    -1,    38,   199,    -1,    41,    42,   203,    -1,
      -1,    -1,   207,    -1,    -1,    -1,   211,    52,    -1,    -1,
      55,    38,    57,    -1,    41,    42,    61,    -1,    -1,    -1,
      23,    -1,    25,    -1,    -1,    52,    -1,    -1,    55,    23,
      57,    25,    -1,   238,    61,    23,    -1,    25,    -1,   244,
     245,    26,    27,    28,    29,   250,    49,    50,    51,    52,
      -1,    54,    -1,   258,    -1,    49,    50,    51,    52,    -1,
      54,    49,    50,    51,    52,    -1,    54,    -1,    53,    26,
      27,    28,    29,   278,    -1,    -1,     0,     1,    -1,    -1,
       4,     5,     6,     7,     8,   290,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    26,    27,    28,    29,    30,    -1,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    45,    46,    26,    27,    28,    29,    30,    52,    -1,
      -1,    55,    -1,    57,    58,    59,    -1,    61,     0,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    26,    27,    28,    29,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    57,    -1,    59,    -1,    61,
       0,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,
      -1,    61,     0,     1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    57,
      -1,    59,     1,    61,    -1,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    57,    58,
      59,     1,    61,    -1,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,
       1,    61,    -1,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    36,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,     1,
      61,    -1,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    57,    58,    59,     1,    61,
      -1,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    36,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,     1,    61,    -1,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,     1,    31,    32,     4,
       5,     6,     7,     8,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    25,
      -1,    55,    -1,    57,    30,    59,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    38,    -1,     1,    41,    42,     4,     5,
       6,     7,     8,    49,    50,    51,    52,    52,    54,    -1,
      55,    -1,    57,    -1,    59,     1,    -1,    -1,     4,     5,
       6,     7,     8,     1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    57,    38,    59,    -1,    41,    42,    -1,    -1,    -1,
      38,    -1,    25,    41,    42,    -1,    52,    30,    -1,    55,
      25,    57,    -1,    59,    52,    30,    -1,    55,     1,    57,
      -1,     4,     5,     6,     7,     8,    49,    50,    51,    52,
      -1,    54,    -1,    -1,    49,    50,    51,    52,    25,    54,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    42,
      -1,    -1,    49,    50,    51,    52,    -1,    54,    -1,    52,
      -1,    -1,    55,    -1,    57,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    65,     0,     1,     4,     5,     6,     7,     8,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    31,    32,    38,    39,    40,
      41,    42,    52,    55,    57,    59,    61,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    79,    82,    84,    86,
      87,    89,    91,    92,    93,    94,    95,    96,    97,     1,
       6,     7,     8,    23,    57,    59,    87,    89,    95,    47,
      47,    57,    47,    57,    59,    57,     1,     7,     8,    95,
      92,    57,    95,    95,     1,    66,    95,    80,    96,     1,
       8,    61,    88,    89,    90,    95,     1,    67,    23,    23,
      23,    35,    83,    23,    23,    23,    26,    27,    28,    29,
      53,    23,    26,    27,    28,    29,    23,    23,    23,    23,
      23,    25,    49,    50,    51,    52,    54,     9,    57,    57,
      95,     1,    85,    87,    89,    95,    95,     1,     7,     8,
      89,    89,    95,     1,     8,    87,    89,    59,    87,    89,
      95,    85,     7,     8,    95,    95,    57,    57,    23,    34,
      95,    58,    58,     1,    30,    60,     9,    89,    95,    57,
       1,    30,    62,    30,     1,    30,    62,    30,    23,    87,
      89,    95,    87,    89,    95,    95,    95,    95,    95,    95,
      95,    48,    89,    95,    59,    87,    89,    95,     1,    30,
      60,    95,    57,    57,    30,    58,    95,    57,    60,    58,
      30,    30,    60,    58,    58,    58,    95,    35,    44,    75,
      95,    58,    96,    48,    59,    89,    89,    95,    95,    66,
      87,    89,    95,    30,    58,    60,    58,    30,    30,    87,
      89,    95,    95,    59,    47,    30,    47,    59,    59,    95,
      30,    66,    23,     9,    37,    60,    36,    59,    30,    59,
      59,    95,    30,    60,    95,    89,    95,    87,    60,    60,
      58,    36,    45,    76,    35,    43,    77,     9,    30,    60,
      89,    95,    60,    60,    58,    58,    58,    58,    58,    58,
      47,    66,    57,    58,    58,    58,    58,    58,    47,    47,
      47,    47,    47,    95,    36,    46,    78,     1,    59,    81,
      89,    87,    89,    87,    89,    96,     1,    30,    58,     9,
      59,    60,    96,     9,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    71,
      72,    73,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      83,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    93,    93,    93,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     1,     1,     4,     1,     1,
       1,     1,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     2,     4,     2,     4,     6,     2,     1,     9,
       4,     2,     1,     1,     1,     3,     3,     3,     2,     1,
       4,     4,     3,     7,     7,     4,     1,     3,     3,     2,
       2,     2,     2,     3,     3,     2,     2,     2,     3,     3,
       2,     3,     7,     7,     7,     1,     3,     2,     2,     3,
       2,     2,     3,     3,     2,     6,     9,     8,     9,     9,
       9,     9,     6,     4,     4,     4,     3,     3,     3,     4,
       4,     4,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     3,     2,     3,     3,     4,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 1525 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 5: /* INTEGER  */
#line 55 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).intPtr);}
#line 1531 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 6: /* VARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1537 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 7: /* VVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1543 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 8: /* MVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1549 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 9: /* VAR  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1555 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 10: /* FVARIABLE  */
#line 57 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varName);}
#line 1561 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 66: /* stmts  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1567 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 67: /* stmt  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1573 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 68: /* robotactions  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1579 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 69: /* robotmove  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1585 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 70: /* robotright  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1591 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 71: /* robotleft  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1597 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 72: /* robotwall  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1603 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 73: /* robotexit  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1609 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 74: /* iff  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1615 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 79: /* forr  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1621 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 80: /* return_func  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1627 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 81: /* args_func  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1633 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 82: /* function_head  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1639 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 83: /* function_body  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1645 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 84: /* function  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1651 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 85: /* callfunc_args  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1657 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 86: /* callfunction  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1663 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 87: /* matrix  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1669 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 88: /* listexprs  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1675 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 89: /* vector  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1681 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 90: /* exprs  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1687 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 91: /* vmdeclaration  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1693 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 92: /* declaration  */
#line 58 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1699 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 93: /* assignment  */
#line 58 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).varOpPtr);}
#line 1705 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 94: /* print  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1711 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 95: /* expr  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1717 "interpreter.tab.c" /* yacc.c:1257  */
        break;

    case 97: /* const  */
#line 56 "interpreter.y" /* yacc.c:1257  */
      {delete ((*yyvaluep).ptr);}
#line 1723 "interpreter.tab.c" /* yacc.c:1257  */
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
#line 2015 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 2028 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 75 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                }
#line 2036 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 82 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2042 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 83 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 2053 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 89 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyvsp[-1].ptr); delete (yyval.ptr);
                                }
#line 2062 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 93 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyval.ptr);
                                }
#line 2071 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 100 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 2080 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 104 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2086 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 105 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2092 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 106 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2098 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 107 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2104 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 108 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2110 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 109 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 2116 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 110 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 2122 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 111 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2128 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 112 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2134 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 113 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2140 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 114 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2146 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 115 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2152 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 116 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2158 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 117 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                    delete (yyval.ptr);
                                }
#line 2167 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 124 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2173 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 125 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2179 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 129 "interpreter.y" /* yacc.c:1652  */
    {   
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(move, kids);
                                }
#line 2189 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 137 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(right, kids);
                                }
#line 2198 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 144 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(left, kids);
                                }
#line 2207 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 151 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(wall, kids);
                                }
#line 2216 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 158 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(exxit, kids);
                                }
#line 2225 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 2241 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 179 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2247 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 180 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2253 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 184 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2259 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 185 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2265 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 189 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2271 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 190 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2277 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 194 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2283 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 195 "interpreter.y" /* yacc.c:1652  */
    {}
#line 2289 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 2305 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 213 "interpreter.y" /* yacc.c:1652  */
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
#line 2345 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 248 "interpreter.y" /* yacc.c:1652  */
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
#line 2385 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 283 "interpreter.y" /* yacc.c:1652  */
    {
                                                                std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                delete (yyvsp[-1].ptr);
                                                            }
#line 2394 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 290 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-2].vtype), *(yyvsp[-1].varName));}
#line 2400 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 291 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addByVTypeandName((yyvsp[-2].vtype), *(yyvsp[-1].varName));}
#line 2406 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 292 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                            delete (yyvsp[-1].ptr); delete (yyval.ptr);
                                                                        }
#line 2415 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 296 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                                                            delete (yyval.ptr);
                                                                        }
#line 2424 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 303 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->localStorage, dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->localisConst, 
                                                                    dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-7].ptr))->container, dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-7].ptr))->retVarNames,
                                                                    nullptr, *(yyvsp[-3].varName), dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->types, dynamic_cast<Interpreter::args_func*>((yyvsp[-1].ptr))->names);
                                                                    Interpreter::funcStorage.insert_or_assign(*(yyvsp[-3].varName), plug);
                                                                    (yyval.ptr) = plug;
                                                                }
#line 2436 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 313 "interpreter.y" /* yacc.c:1652  */
    {   
                                                                    (yyval.ptr) = (yyvsp[-1].ptr);
                                                                    Interpreter::tmpStorage.clear();
                                                                }
#line 2445 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 320 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::func_descript*>((yyvsp[-1].ptr))->toExec = (yyvsp[0].ptr);}
#line 2451 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 324 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(expR, (yyvsp[0].ptr));}
#line 2457 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 325 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(vectoR, (yyvsp[0].ptr));}
#line 2463 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 326 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(matriX, (yyvsp[0].ptr));}
#line 2469 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 327 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(expR, (yyvsp[0].ptr));}
#line 2475 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 328 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(vectoR, (yyvsp[0].ptr));}
#line 2481 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 329 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(matriX, (yyvsp[0].ptr));}
#line 2487 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 330 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            delete (yyvsp[-1].ptr);
                                            if (!(yyval.ptr)) delete (yyval.ptr); 
                                        }
#line 2497 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 335 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            delete (yyval.ptr);
                                        }
#line 2506 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 342 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc(*(yyvsp[-3].varName), dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-1].ptr))->args);}
#line 2512 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 343 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-3]).first_line << std::endl;
                                               delete (yyvsp[-1].ptr); delete (yyval.ptr);
                                            }
#line 2521 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 350 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2527 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 351 "interpreter.y" /* yacc.c:1652  */
    {   try {
                                                        auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2543 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 362 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mvecrowindex);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2560 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 374 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                        kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmatindex);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2577 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 386 "interpreter.y" /* yacc.c:1652  */
    {
                                        try {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                            std::vector<Interpreter::ContainerMatrixNode*> kids;
                                            kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>(search->second));
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, getmat);
                                        }
                                        catch (const char* error) {
                                            std::cerr << error << std::endl;
                                        }
                                    }
#line 2593 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 397 "interpreter.y" /* yacc.c:1652  */
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
#line 2609 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 408 "interpreter.y" /* yacc.c:1652  */
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
#line 2625 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 419 "interpreter.y" /* yacc.c:1652  */
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
#line 2640 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 429 "interpreter.y" /* yacc.c:1652  */
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
#line 2655 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 439 "interpreter.y" /* yacc.c:1652  */
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
#line 2670 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 449 "interpreter.y" /* yacc.c:1652  */
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
#line 2685 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 459 "interpreter.y" /* yacc.c:1652  */
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
#line 2701 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 470 "interpreter.y" /* yacc.c:1652  */
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
#line 2717 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 481 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        delete (yyvsp[0].ptr);
                                    }
#line 2726 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 485 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        delete (yyvsp[0].ptr);
                                    }
#line 2735 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 489 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                        delete (yyvsp[0].ptr);
                                    }
#line 2744 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 496 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 2753 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 500 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 2759 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 501 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                            delete (yyvsp[-1].ptr);
                                        }
#line 2768 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 508 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2774 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 509 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                        kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vvecindex);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2791 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 521 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                        kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2808 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 533 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
                                                        auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                        std::vector<Interpreter::ContainerVectorNode*> kids;
                                                        kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                        kids.push_back((Interpreter::ContainerVectorNode*)((yyvsp[-1].ptr)));
                                                        (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprrowindex);
                                                    }
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                }
#line 2825 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 545 "interpreter.y" /* yacc.c:1652  */
    {
                                            try {
                                                auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                                std::vector<Interpreter::ContainerVectorNode*> kids;
                                                kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, getvec);
                                            }
                                            catch (const char* error) {
                                                std::cerr << error << std::endl;
                                            }
                                        }
#line 2841 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 556 "interpreter.y" /* yacc.c:1652  */
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
#line 2857 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 567 "interpreter.y" /* yacc.c:1652  */
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
#line 2872 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 577 "interpreter.y" /* yacc.c:1652  */
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
#line 2887 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 587 "interpreter.y" /* yacc.c:1652  */
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
#line 2903 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 598 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2912 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 602 "interpreter.y" /* yacc.c:1652  */
    {
                                               std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                               delete (yyvsp[0].ptr); delete (yyval.ptr);
                                            }
#line 2921 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 610 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 2930 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 614 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 2936 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 615 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::cerr << "Error at line " << (yylsp[0]).first_line << std::endl;
                                    delete (yyvsp[-1].ptr);
                                }
#line 2945 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 622 "interpreter.y" /* yacc.c:1652  */
    {
                                                    try {
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
                                                    catch (const char* error) {
                                                        std::cerr << error << std::endl;
                                                    }
                                                    
                                                }
#line 2969 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 641 "interpreter.y" /* yacc.c:1652  */
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
#line 2986 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 653 "interpreter.y" /* yacc.c:1652  */
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
#line 3005 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 667 "interpreter.y" /* yacc.c:1652  */
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
#line 3022 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 679 "interpreter.y" /* yacc.c:1652  */
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
#line 3039 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 691 "interpreter.y" /* yacc.c:1652  */
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
#line 3056 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 703 "interpreter.y" /* yacc.c:1652  */
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
#line 3073 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 715 "interpreter.y" /* yacc.c:1652  */
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
#line 3090 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 730 "interpreter.y" /* yacc.c:1652  */
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
#line 3110 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 745 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CVBOOL || (yyvsp[-3].vtype) == Interpreter::CVINT) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3124 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 754 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        if ((yyvsp[-3].vtype) == Interpreter::CMBOOL || (yyvsp[-3].vtype) == Interpreter::CMINT) Interpreter::isConst.insert_or_assign(*(yyvsp[-2].varName), true);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 3138 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 766 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3150 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 773 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3164 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 782 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 3178 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 794 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 3188 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 799 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                }
#line 3196 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 802 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                }
#line 3204 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 808 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3210 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 809 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3216 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 810 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3222 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 811 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3228 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 812 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                }
#line 3236 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 816 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 3246 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 821 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 3257 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 827 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 3268 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 833 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 3279 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 839 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 3290 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 845 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 3301 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 851 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 3311 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 856 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 3322 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 862 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 3328 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 863 "interpreter.y" /* yacc.c:1652  */
    {
                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back(search->second);
                                    (yyval.ptr) = new Interpreter::OperationNode(vgetexp, *(yyvsp[-3].varName), kids);
                                }
#line 3340 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 870 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[-5].varName));
                                            std::vector<Interpreter::Node*> kids;
                                            kids.push_back((yyvsp[-3].ptr));
                                            kids.push_back((yyvsp[-1].ptr));
                                            kids.push_back(search->second);
                                            (yyval.ptr) = new Interpreter::OperationNode(mgetexp, *(yyvsp[-5].varName), kids);
                                        }
#line 3353 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 128:
#line 878 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::cerr << "Error at line " << (yylsp[-1]).first_line << std::endl;
                                            delete (yyvsp[0].ptr);
                                        }
#line 3362 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 129:
#line 885 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3368 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 130:
#line 886 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3374 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 131:
#line 887 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3380 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 132:
#line 888 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3386 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 133:
#line 889 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3392 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 134:
#line 890 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3398 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 135:
#line 891 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3404 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 136:
#line 892 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3410 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 137:
#line 893 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3416 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 138:
#line 894 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3422 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 139:
#line 895 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3428 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 140:
#line 896 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 3434 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 141:
#line 900 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 3440 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 142:
#line 901 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 3446 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 3450 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 904 "interpreter.y" /* yacc.c:1918  */


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
