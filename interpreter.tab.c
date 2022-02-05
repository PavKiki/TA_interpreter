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
#define YYLAST   853

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

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
       0,    57,    57,    61,    69,    73,    74,    83,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   103,   104,   108,   116,   123,   130,   137,   144,   153,
     163,   193,   226,   227,   231,   242,   243,   244,   245,   246,
     247,   251,   255,   256,   263,   270,   277,   282,   288,   294,
     299,   304,   309,   315,   321,   330,   334,   338,   339,   346,
     353,   360,   365,   371,   376,   381,   391,   395,   399,   413,
     425,   439,   451,   463,   475,   487,   502,   515,   523,   534,
     541,   550,   562,   567,   570,   576,   577,   578,   579,   580,
     584,   589,   595,   601,   607,   613,   619,   624,   630,   631,
     643,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   674,   675
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

#define YYPACT_NINF -38

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,    22,   501,   -38,   -38,   -38,   -23,    30,    32,   -32,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -19,   616,   831,     2,   -38,   -38,   -38,
     -38,   616,   616,   501,   831,   200,   501,   -38,    23,   -38,
     -38,   -38,   -38,   -38,    40,    53,    58,    62,   116,   172,
      67,    69,    74,    76,   719,    92,   -38,   616,     7,   200,
       9,     5,   530,   624,   -38,    56,    57,   616,   729,    78,
     616,    99,    99,   269,   586,   -12,   117,    68,    80,   616,
     -29,    77,    10,   747,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   530,   -38,   -38,   -38,     9,   -38,   200,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   616,   616,   616,   616,
     616,   616,    85,   253,    81,    91,    15,   184,    44,    96,
     134,   326,    97,    89,    94,   268,   757,   -11,   134,   326,
     253,   -37,    52,   639,   616,   616,   649,   101,   616,   659,
     -38,   -38,   831,   103,   -38,   200,   544,     7,   -38,     7,
     616,   -38,   616,   134,   326,   253,   336,    15,   253,   253,
     -17,   -17,    17,    17,    99,   530,     7,   544,    98,   111,
     522,   522,   135,   121,   105,   600,   530,   -38,   -38,   -38,
     -38,   669,   770,   501,   739,   -38,   161,   131,   237,   119,
     780,    15,    15,   253,   253,   134,   326,   253,   787,   122,
     616,   125,   211,   290,   200,     9,   130,   133,   679,   134,
     326,   253,   -38,   616,   327,   141,   -38,   168,   144,   151,
     608,   150,   136,   253,   186,   -38,   158,   -22,   689,   134,
     162,   164,   176,   699,   -38,   501,   169,   159,   616,   171,
     188,   200,   173,   189,   196,   197,   202,   616,   -38,   385,
     194,   198,   709,   213,     7,    -3,   241,     9,     7,     9,
       7,   253,   -38,   831,    28,   -38,   -38,   -38,    15,   -38,
     -38,   134,    15,   134,    15,   238,   195,   219,   246,   831,
     285,   -38,   251,   501,   249,   443,   -38,   -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,   114,   113,    89,    61,    46,     0,
     102,   103,   104,   101,   105,   106,   107,   108,   109,   110,
     111,   112,     7,     0,     0,     0,     0,    24,    25,    27,
      26,     0,     0,     0,     0,     0,     3,     5,     0,    87,
      21,    22,    88,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,    90,    96,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,     0,     6,    19,    15,    16,    17,    18,
      10,     0,    49,    51,    50,     0,     9,     0,    52,    64,
      63,    12,    13,    14,    11,     8,     0,     0,     0,     0,
       0,     0,     0,    79,    61,     0,    80,     0,     0,    46,
      81,     0,    46,     0,     0,     0,     0,     0,    37,    36,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    98,     0,     0,    30,     0,     0,     0,    42,     0,
       0,    57,     0,    48,    53,    54,    47,    62,    65,    97,
      94,    95,    91,    92,    93,     0,     0,     0,     0,    99,
       0,     0,     0,    45,     0,     0,     0,    41,    83,    84,
      82,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,    56,    55,    67,    66,    78,    77,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      39,    38,    99,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,    68,     0,    45,     0,     0,     0,    75,
       0,     0,   100,     0,    28,     0,     0,     0,     0,     0,
      58,     0,     0,    44,    60,    43,    59,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    29,     0,     0,    58,    60,    59,    69,    44,
      43,    74,    72,    73,    71,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,    33,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   -38,   -33,   -34,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,    13,   -38,
     -30,   -38,   -38,   297,   -38,   -38,    21,   -31,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    75,   264,    46,   127,    47,    48,    80,
      49,    82,    50,    51,    52,    53,    54,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      73,   147,    84,    76,    97,    81,    99,   100,   106,     4,
       5,    64,    77,   122,   114,   115,   114,   119,   142,   176,
     134,   178,     3,    97,    57,    99,   100,    62,   116,   117,
     121,   125,   129,   148,   109,   110,   243,   111,    63,    84,
     150,    97,   106,    99,   100,    68,    85,    26,   143,   177,
      29,    30,    71,    72,    74,   269,    83,    31,   276,    70,
      32,   154,    67,    86,   123,   121,    35,   157,    79,   106,
      35,   111,   151,   120,   124,   128,    87,    58,   113,    60,
     118,    88,   126,   130,   133,    89,   277,    59,   136,    61,
     101,   139,   102,   107,   108,   109,   110,   103,   111,   104,
      83,   112,   169,    97,   153,    99,   100,   149,   156,   135,
     179,   186,   155,   134,   135,   188,   138,   191,   158,   192,
      91,    92,    93,    94,   106,   145,   144,   159,   160,   161,
     162,   163,   164,   165,   183,   196,   188,   146,   166,    90,
     203,   203,    91,    92,    93,    94,   210,    95,   167,   172,
     214,   187,   173,   170,   171,   181,   182,   199,   200,   184,
      91,    92,    93,    94,   206,   204,   181,   190,   205,    95,
     216,   193,   217,   194,   227,   121,   235,   236,   195,   219,
      84,   238,   222,   202,   202,   224,   197,    95,   198,   209,
     230,   198,   190,   231,   240,    96,   208,   211,    97,    98,
      99,   100,   249,   237,     4,     5,    64,    77,    78,   239,
      97,   255,    99,   100,   168,    84,   241,   242,   229,   251,
     245,   223,   246,   247,   268,   228,   250,   121,   272,   121,
     274,   253,   275,   256,   233,   254,   257,    91,    92,    93,
      94,   233,    26,   258,   259,    29,    30,   278,   282,   260,
     285,    84,    31,   263,   279,    32,   265,    67,   280,   252,
     284,    79,   252,    97,    95,    99,   100,   218,   261,   225,
     271,   267,   273,     4,     5,     6,     7,     8,   106,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    97,    98,    99,   100,   174,   270,
      24,    25,   107,   108,   109,   110,   281,   111,   283,   286,
       0,    26,    27,    28,    29,    30,    97,    98,    99,   100,
     226,    31,    69,     0,    32,     0,    33,   140,    34,     0,
      35,     4,     5,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    97,    98,    99,   100,     0,     0,    24,    25,
       0,   234,    91,    92,    93,    94,     0,     0,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,    31,
       0,     0,    32,     0,    33,     0,    34,     0,    35,     4,
       5,     6,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,    24,    25,     0,     0,
       0,   262,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    33,     0,    34,     0,    35,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,   287,     0,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    31,     0,     0,    32,     0,
      33,     0,    34,     0,    35,     4,     5,     6,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     4,     5,    64,    77,
     122,     0,    24,    25,     4,     5,    64,    77,   122,     0,
       0,     0,     0,    26,    27,    28,    29,    30,     4,     5,
      64,    65,    66,    31,     0,     0,    32,     0,    33,     0,
      34,     0,    35,     0,    26,     0,     0,    29,    30,     0,
       0,     0,    26,     0,    31,    29,    30,    32,     0,    67,
       0,   201,    31,    35,     0,    32,    26,    67,     0,    29,
      30,    35,     0,     0,     0,     0,    31,     0,     0,    32,
       0,    67,     0,   189,     4,     5,    64,    65,    66,   105,
       0,   106,     4,     5,    64,    65,    66,     0,     0,     0,
       4,     5,    64,    65,    66,     0,     0,     0,     4,     5,
      64,   131,   132,     0,     0,   107,   108,   109,   110,     0,
     111,     0,    26,     0,   141,    29,    30,     0,     0,     0,
      26,     0,    31,    29,    30,    32,     0,    67,    26,   207,
      31,    29,    30,    32,   106,    67,    26,   239,    31,    29,
      30,    32,     0,    67,   106,     0,    31,     0,     0,    32,
       0,    67,     0,     0,   106,     0,     0,     0,   107,   108,
     109,   110,     0,   111,   106,     0,     0,   180,   107,   108,
     109,   110,     0,   111,   106,     0,     0,   141,   107,   108,
     109,   110,     0,   111,   106,     0,     0,   185,   107,   108,
     109,   110,     0,   111,   106,     0,     0,   212,   107,   108,
     109,   110,     0,   111,   106,     0,     0,   232,   107,   108,
     109,   110,   105,   111,   106,     0,     0,   244,   107,   108,
     109,   110,   137,   111,   106,     0,     0,   248,   107,   108,
     109,   110,   215,   111,   106,     0,     0,   266,   107,   108,
     109,   110,   106,   111,     0,     0,     0,   152,   107,   108,
     109,   110,   106,   111,     0,     0,     0,   175,   107,   108,
     109,   110,     0,   111,     0,   106,   107,   108,   109,   110,
     213,   111,     0,     0,     0,   106,   107,   108,   109,   110,
     220,   111,   106,     0,     0,     0,     0,   221,     0,   107,
     108,   109,   110,     0,   111,     0,     0,     0,     0,   107,
     108,   109,   110,     0,   111,     0,   107,   108,   109,   110,
       0,   111,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      33,    30,    36,    34,    26,    35,    28,    29,    25,     4,
       5,     6,     7,     8,     7,     8,     7,     8,    30,    30,
      57,    58,     0,    26,    47,    28,    29,    59,    58,    59,
      60,    61,    62,    62,    51,    52,    58,    54,    57,    73,
      30,    26,    25,    28,    29,    24,    23,    42,    60,    60,
      45,    46,    31,    32,    33,    58,    35,    52,    30,    57,
      55,    91,    57,    23,    59,    95,    61,    97,    61,    25,
      61,    54,    62,    60,    61,    62,    23,    47,    57,    47,
      59,    23,    61,    62,    63,    23,    58,    57,    67,    57,
      23,    70,    23,    49,    50,    51,    52,    23,    54,    23,
      79,     9,    58,    26,    91,    28,    29,    30,    95,    57,
      58,   142,    91,    57,    57,   145,    38,   147,    97,   149,
      26,    27,    28,    29,    25,    57,     9,   106,   107,   108,
     109,   110,   111,    48,    33,   165,   166,    57,    57,    23,
     170,   171,    26,    27,    28,    29,   176,    53,    57,    60,
     183,    48,    58,    57,    57,   134,   135,    59,    47,   138,
      26,    27,    28,    29,    59,    30,   145,   146,    47,    53,
       9,   150,    41,   152,   204,   205,    35,     9,   165,    60,
     214,    30,    60,   170,   171,    60,   165,    53,   167,   176,
      60,   170,   171,    60,    58,    23,   175,   176,    26,    27,
      28,    29,   235,    59,     4,     5,     6,     7,     8,    59,
      26,   241,    28,    29,    30,   249,    30,    59,   205,    60,
      58,   200,    58,    47,   254,   204,    57,   257,   258,   259,
     260,    60,   263,    60,   213,    47,    47,    26,    27,    28,
      29,   220,    42,    47,    47,    45,    46,     9,   279,    47,
     283,   285,    52,    59,    59,    55,    58,    57,    39,   238,
       9,    61,   241,    26,    53,    28,    29,    30,   247,    58,
     257,    58,   259,     4,     5,     6,     7,     8,    25,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    26,    27,    28,    29,    30,    58,
      31,    32,    49,    50,    51,    52,    60,    54,    23,    60,
      -1,    42,    43,    44,    45,    46,    26,    27,    28,    29,
      30,    52,    25,    -1,    55,    -1,    57,    58,    59,    -1,
      61,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    26,    27,    28,    29,    -1,    -1,    31,    32,
      -1,    34,    26,    27,    28,    29,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,    -1,    61,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      57,    -1,    59,    -1,    61,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     4,     5,     6,     7,
       8,    -1,    31,    32,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,     4,     5,
       6,     7,     8,    52,    -1,    -1,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    42,    -1,    52,    45,    46,    55,    -1,    57,
      -1,    59,    52,    61,    -1,    55,    42,    57,    -1,    45,
      46,    61,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    57,    -1,    59,     4,     5,     6,     7,     8,    23,
      -1,    25,     4,     5,     6,     7,     8,    -1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    42,    -1,    58,    45,    46,    -1,    -1,    -1,
      42,    -1,    52,    45,    46,    55,    -1,    57,    42,    59,
      52,    45,    46,    55,    25,    57,    42,    59,    52,    45,
      46,    55,    -1,    57,    25,    -1,    52,    -1,    -1,    55,
      -1,    57,    -1,    -1,    25,    -1,    -1,    -1,    49,    50,
      51,    52,    -1,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    -1,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    -1,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    -1,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    -1,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    23,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    23,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    23,    54,    25,    -1,    -1,    58,    49,    50,
      51,    52,    25,    54,    -1,    -1,    -1,    30,    49,    50,
      51,    52,    25,    54,    -1,    -1,    -1,    30,    49,    50,
      51,    52,    -1,    54,    -1,    25,    49,    50,    51,    52,
      30,    54,    -1,    -1,    -1,    25,    49,    50,    51,    52,
      30,    54,    25,    -1,    -1,    -1,    -1,    30,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    49,    50,    51,    52,
      -1,    54,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    65,     0,     4,     5,     6,     7,     8,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    31,    32,    42,    43,    44,    45,
      46,    52,    55,    57,    59,    61,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    78,    80,    81,    83,
      85,    86,    87,    88,    89,    90,    91,    47,    47,    57,
      47,    57,    59,    57,     6,     7,     8,    57,    89,    86,
      57,    89,    89,    66,    89,    76,    90,     7,     8,    61,
      82,    83,    84,    89,    67,    23,    23,    23,    23,    23,
      23,    26,    27,    28,    29,    53,    23,    26,    27,    28,
      29,    23,    23,    23,    23,    23,    25,    49,    50,    51,
      52,    54,     9,    89,     7,     8,    83,    83,    89,     8,
      81,    83,     8,    59,    81,    83,    89,    79,    81,    83,
      89,     7,     8,    89,    57,    57,    89,    23,    38,    89,
      58,    58,    30,    60,     9,    57,    57,    30,    62,    30,
      30,    62,    30,    81,    83,    89,    81,    83,    89,    89,
      89,    89,    89,    89,    89,    48,    57,    57,    30,    58,
      57,    57,    60,    58,    30,    30,    30,    60,    58,    58,
      58,    89,    89,    33,    89,    58,    90,    48,    83,    59,
      89,    83,    83,    89,    89,    81,    83,    89,    89,    59,
      47,    59,    81,    83,    30,    47,    59,    59,    89,    81,
      83,    89,    58,    30,    66,    23,     9,    41,    30,    60,
      30,    30,    60,    89,    60,    58,    30,    83,    89,    81,
      60,    60,    58,    89,    34,    35,     9,    59,    30,    59,
      58,    30,    59,    58,    58,    58,    58,    47,    58,    66,
      57,    60,    89,    60,    47,    83,    60,    47,    47,    47,
      47,    89,    36,    59,    77,    58,    58,    58,    83,    58,
      58,    81,    83,    81,    83,    90,    30,    58,     9,    59,
      39,    60,    90,    23,     9,    66,    60,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    76,    77,    77,    78,    79,    79,    79,    79,    79,
      79,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    87,
      87,    87,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     1,     1,     4,     1,     1,     1,     1,     6,     8,
       2,     4,     4,     6,    13,     1,     1,     1,     3,     3,
       3,     4,     3,     7,     7,     4,     1,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     7,     7,
       7,     1,     3,     2,     2,     3,     3,     3,     6,     9,
       8,     9,     9,     9,     9,     6,     4,     4,     4,     3,
       3,     3,     4,     4,     4,     1,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     2,     3,     3,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 57 "interpreter.y" /* yacc.c:1652  */
    {outputOut(); exit(0);}
#line 1697 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 61 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyvsp[0].ptr)->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 1710 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 73 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1716 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 74 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1727 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 83 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1736 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 87 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1742 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 88 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1748 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 89 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1754 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 90 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1760 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 91 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1766 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 92 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1772 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 93 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1778 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 94 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1784 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 95 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1790 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 96 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1796 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 97 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1802 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 98 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1808 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 99 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1814 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 103 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1820 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 104 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1826 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 108 "interpreter.y" /* yacc.c:1652  */
    {   
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(move, kids);
                                }
#line 1836 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 116 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(right, kids);
                                }
#line 1845 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 123 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(left, kids);
                                }
#line 1854 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 130 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(wall, kids);
                                }
#line 1863 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 137 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(exxit, kids);
                                }
#line 1872 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 144 "interpreter.y" /* yacc.c:1652  */
    {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back((yyvsp[-4].ptr));
                                                kids.push_back((yyvsp[-1].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(iff, kids);
                                            }
#line 1883 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 153 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].varOpPtr));
                                                                    kids.push_back((yyvsp[-4].ptr));
                                                                    kids.push_back((yyvsp[-1].ptr));
                                                                    (yyval.ptr) = new Interpreter::OperationNode(forr, kids);
                                                                }
#line 1895 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 163 "interpreter.y" /* yacc.c:1652  */
    {
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
#line 1930 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 193 "interpreter.y" /* yacc.c:1652  */
    {
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
#line 1965 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 226 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-2].vtype), *(yyvsp[-1].varName));}
#line 1971 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 227 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addByVTypeandName((yyvsp[-2].vtype), *(yyvsp[-1].varName));}
#line 1977 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 231 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->localStorage, dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->localisConst, 
                                                                            dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-11].ptr))->container, dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-11].ptr))->retVarNames,
                                                                            (yyvsp[-1].ptr), *(yyvsp[-7].varName), dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->types, dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->names);
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[-7].varName), plug);
                                                                            Interpreter::tmpStorage.clear();
                                                                            (yyval.ptr) = plug;
                                                                        }
#line 1990 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 242 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(expR, (yyvsp[0].ptr));}
#line 1996 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 243 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(vectoR, (yyvsp[0].ptr));}
#line 2002 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 244 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(matriX, (yyvsp[0].ptr));}
#line 2008 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 245 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(expR, (yyvsp[0].ptr));}
#line 2014 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 246 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(vectoR, (yyvsp[0].ptr));}
#line 2020 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 247 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(matriX, (yyvsp[0].ptr));}
#line 2026 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 251 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc(*(yyvsp[-3].varName), dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-1].ptr))->args);}
#line 2032 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 255 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2038 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 256 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex);
                                                }
#line 2050 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 263 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mvecrowindex);
                                                }
#line 2062 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 270 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmatindex);
                                                }
#line 2074 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 277 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                        auto tmp = dynamic_cast<Interpreter::AbstractMatrixNode*>(search->second)->copy();
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeX(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeY());
                                    }
#line 2084 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 282 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                    }
#line 2095 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 288 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                    }
#line 2106 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 294 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 2116 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 299 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                    }
#line 2126 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 304 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 2136 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 309 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto kid = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>(kid));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 2147 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 315 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 2158 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 321 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                    }
#line 2169 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 330 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 2178 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 334 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 2184 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 338 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2190 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 339 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vvecindex);
                                                }
#line 2202 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 346 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex);
                                                }
#line 2214 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 353 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerVectorNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprrowindex);
                                                }
#line 2226 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 360 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                            auto tmp = dynamic_cast<Interpreter::AbstractVectorNode*>(search->second)->copy();
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getSize());
                                        }
#line 2236 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 365 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                        }
#line 2247 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 371 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                        }
#line 2257 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 376 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                        }
#line 2267 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 381 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, VEMexpr);
                                        }
#line 2278 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 391 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 2287 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 395 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 2293 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 399 "interpreter.y" /* yacc.c:1652  */
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
#line 2312 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 413 "interpreter.y" /* yacc.c:1652  */
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
#line 2329 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 425 "interpreter.y" /* yacc.c:1652  */
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
#line 2348 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 439 "interpreter.y" /* yacc.c:1652  */
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
#line 2365 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 451 "interpreter.y" /* yacc.c:1652  */
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
#line 2382 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 463 "interpreter.y" /* yacc.c:1652  */
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
#line 2399 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 475 "interpreter.y" /* yacc.c:1652  */
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
#line 2416 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 487 "interpreter.y" /* yacc.c:1652  */
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
#line 2433 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 502 "interpreter.y" /* yacc.c:1652  */
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
#line 2451 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 515 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2464 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 523 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2477 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 534 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2489 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 541 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2503 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 550 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2517 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 562 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 2527 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 567 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                }
#line 2535 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 570 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                }
#line 2543 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 576 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2549 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 577 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2555 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 578 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2561 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 579 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2567 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 580 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                }
#line 2575 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 584 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 2585 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 589 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 2596 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 595 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 2607 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 601 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 2618 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 607 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 2629 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 613 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 2640 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 619 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 2650 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 624 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 2661 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 630 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2667 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 631 "interpreter.y" /* yacc.c:1652  */
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
#line 2684 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 643 "interpreter.y" /* yacc.c:1652  */
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
#line 2702 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 659 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2708 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 660 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2714 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 661 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2720 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 662 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2726 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 663 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2732 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 664 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2738 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 665 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2744 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 666 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2750 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 667 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2756 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 668 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2762 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 669 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2768 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 670 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2774 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 674 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 2780 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 675 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 2786 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 2790 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 678 "interpreter.y" /* yacc.c:1918  */


void yyerror(const char* error) {
    std::cerr << error << std::endl;
}

int main(void) {
    yyin = std::fopen("test.txt", "r");
    yyparse();
    std::fclose(yyin);
    return 0;
}
