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

extern FILE* yyin;
extern std::unordered_map<std::string, bool> Interpreter::isConst;
extern std::unordered_map<std::string, Interpreter::Node*> Interpreter::varStorage;

int yylex(void);
void yyerror(const char*);


#line 92 "interpreter.tab.c" /* yacc.c:337  */
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
    ASSIGN = 295,
    DECLARE = 296,
    UMINUS = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "interpreter.y" /* yacc.c:352  */

    Interpreter::BoolNode* boolPtr;
    Interpreter::IntegerNode* intPtr;
    Interpreter::Node* ptr;
    std::string* varName;
    Interpreter::VariableOperationNode* varOpPtr;
    Interpreter::varType vtype;

#line 187 "interpreter.tab.c" /* yacc.c:352  */
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
#define YYLAST   766

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
       2,     2,     2,    50,     2,     2,     2,     2,     2,    27,
      52,    53,    48,    46,    30,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,     2,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      37,    38,    39,    40,    41,    42,    43,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    60,    68,    72,    73,    82,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     101,   110,   120,   150,   183,   184,   185,   186,   190,   199,
     200,   201,   202,   203,   204,   208,   212,   213,   220,   227,
     234,   239,   245,   251,   256,   261,   266,   272,   278,   287,
     291,   295,   296,   303,   310,   317,   322,   328,   333,   338,
     348,   352,   356,   370,   382,   396,   408,   420,   432,   444,
     459,   472,   480,   491,   498,   507,   519,   524,   527,   533,
     534,   538,   543,   549,   555,   561,   567,   573,   578,   584,
     585,   597,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   628,   629
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
  "ENDIF", "BEGFOR", "ENDFOR", "ER", "DOUBLEDOT", "B", "E", "FUNC",
  "ASSIGN", "DECLARE", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'!'",
  "UMINUS", "'('", "')'", "'['", "']'", "'{'", "'}'", "$accept", "program",
  "func", "stmts", "stmt", "iff", "forr", "return_func", "args_func",
  "function", "callfunc_args", "callfunction", "matrix", "listexprs",
  "vector", "exprs", "vmdeclaration", "declaration", "assignment", "print",
  "expr", "type", "const", YY_NULLPTR
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
     293,   294,   295,   296,    60,    62,    43,    45,    42,    47,
      33,   297,    40,    41,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -43

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-43)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -43,     5,   518,   -43,   -43,   -43,   -30,   -41,    -2,   -12,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -32,   271,   744,   271,   271,   518,    62,
     518,   -43,    30,    34,     6,    41,    48,   224,   307,    51,
      55,    65,    69,   612,    53,   -43,   271,    20,    62,    31,
       9,    25,   390,   -43,    42,    61,   271,   618,    77,   110,
      95,    95,   293,    78,    74,    80,   271,    -9,   216,    22,
     643,   -43,   -43,   -43,   744,    89,   -43,   -43,   -43,    92,
     -43,   -43,   -43,    31,   -43,    62,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   271,   271,   271,   271,   271,   271,
      93,   685,    83,    85,    76,   421,   236,    91,   187,   480,
      94,    66,   127,   324,   650,    92,    96,   187,   480,   685,
     -34,    32,   531,   271,   271,   541,   114,   271,    93,   -43,
     -43,    62,   189,    20,   -43,    20,   271,   -43,   271,   140,
     149,   187,   480,   685,   517,    76,   685,   685,   125,   125,
     -15,   -15,    95,    92,    20,   189,   109,   122,    39,    39,
     136,   128,   113,   353,   187,   480,   685,   -43,   -43,   -43,
     -43,   554,   656,   518,   625,   437,   121,   668,    76,    76,
     685,   685,   -43,   126,   187,   480,   685,   679,   132,   271,
     135,   360,   464,    62,    31,   143,   145,   564,   -43,   271,
     359,   142,   134,   161,   448,   724,   148,   150,   685,   177,
     -43,   155,    54,   577,   187,   158,   164,   179,   587,   -43,
     518,   167,   271,   178,   744,   166,   -43,   225,   195,    62,
     194,   212,   213,   217,   220,   271,   -43,   412,   205,   600,
     210,   -43,   257,   228,    93,    20,   112,   215,    31,    20,
      31,    20,   685,   -43,   -43,   -43,   -43,    93,   247,    76,
     -43,   -43,   187,    76,   187,    76,   518,   465,   -43
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,   105,   104,    80,    55,    40,     0,
      93,    94,    95,    92,    96,    97,    98,    99,   100,   101,
     102,   103,     7,     0,     0,     0,     0,     0,     0,     0,
       3,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
      81,    87,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     6,    15,    16,     0,     0,    17,    18,    10,     0,
      43,    45,    44,     0,     9,     0,    46,    58,    57,    12,
      13,    14,    11,     8,     0,     0,     0,     0,     0,     0,
      22,    73,    55,     0,    74,     0,     0,    40,    75,     0,
      40,     0,     0,     0,     0,     0,     0,    31,    30,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
      89,     0,     0,     0,    36,     0,     0,    51,     0,     0,
       0,    42,    47,    48,    41,    56,    59,    88,    85,    86,
      82,    83,    84,     0,     0,     0,     0,    90,     0,     0,
       0,    39,     0,     0,    34,    33,    32,    35,    77,    78,
      76,     0,     0,     0,     0,     0,     0,     0,    50,    49,
      61,    60,    23,     0,    72,    71,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,     0,
      39,     0,     0,     0,    69,     0,     0,    91,     0,    20,
       0,     0,     0,     0,     0,     0,    24,     0,    52,     0,
       0,    38,    54,    37,    53,     0,    91,     0,     0,     0,
       0,    26,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    64,    21,    52,    54,    53,    27,     0,    63,
      38,    37,    68,    66,    67,    65,     0,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -43,   -43,   -43,   -28,   -27,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -42,   -43,   -25,   -43,   -43,   -19,   -43,   -43,
     133,   -23,   -43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    30,    31,    32,    33,    34,   225,    35,
     116,    36,    37,    67,    38,    69,    39,    40,    41,    42,
      43,    44,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      62,    47,    59,    71,    68,     3,    58,   108,   112,   117,
      94,    48,    46,     4,     5,    53,    64,   110,   123,   168,
      52,   133,   104,   105,   109,   113,   118,   102,   103,     4,
       5,    53,    64,   110,    99,    71,    74,   141,   102,   107,
      49,   144,    51,     4,     5,    53,    64,   110,   134,    75,
      50,   139,   136,    72,   142,   115,    26,    73,   109,    27,
     145,    56,   100,   111,    76,    29,     4,     5,    53,    64,
      65,    77,    26,   164,    89,    27,    66,    56,    90,   137,
      85,    29,    87,    88,   124,   169,    26,    29,    91,    27,
     165,    56,    92,   190,   123,    29,     4,     5,    53,    64,
     110,    93,    85,    94,    87,    88,   175,   231,   178,    26,
     179,   184,    27,   124,    56,   127,   191,   191,    66,   128,
      94,   160,    95,    96,    97,    98,   131,    99,   185,   175,
     140,   130,   132,   192,   192,   154,   153,   155,    85,    26,
      87,    88,    27,   158,    56,   200,   159,   173,    29,   182,
      94,   167,   214,    79,    80,    81,    82,    57,   183,    60,
      61,    63,    70,   188,   189,   260,   193,   195,   212,   109,
     194,    97,    98,    71,    99,    83,   203,   220,   205,   101,
     161,   106,   227,   114,   119,   122,   226,   207,   221,   125,
     209,   222,   237,     4,     5,    53,    54,    55,   215,    70,
     216,   242,   223,   228,   246,   241,   262,   229,   264,   230,
      71,   233,   143,    79,    80,    81,    82,   234,   146,   243,
     259,   235,   238,   109,   263,   109,   265,   147,   148,   149,
     150,   151,   152,   240,   244,    83,    26,   245,   267,    27,
      71,    56,    85,   176,    87,    88,   135,    78,   166,   247,
      79,    80,    81,    82,   248,   249,   171,   172,   254,   250,
     174,    94,   251,   256,   171,   177,   257,   258,   261,   180,
     266,   181,    83,     0,     0,     4,     5,    53,    54,    55,
      95,    96,    97,    98,     0,    99,   186,     0,   187,   157,
       0,   187,   177,     0,     0,     0,   197,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    26,     0,
       0,    27,   208,    56,    24,    25,   213,     0,     0,     0,
      84,     0,   218,    85,    86,    87,    88,   218,     0,     0,
      26,     0,     0,    27,     0,    28,   129,     0,     0,    29,
      85,    86,    87,    88,   162,   239,     0,     4,     5,    53,
      54,    55,   239,     4,     5,     6,     7,     8,   252,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,    79,    80,    81,    82,
      24,    25,     0,   219,     4,     5,    53,   120,   121,     0,
      26,     0,     0,    27,     0,    56,    26,   196,    83,    27,
       0,    28,     0,   210,     0,    29,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    26,     0,     0,
      27,     0,    56,    24,    25,     0,     0,    85,   253,    87,
      88,   156,     4,     5,    53,    54,    55,     0,     0,    26,
       0,     0,    27,    85,    28,    87,    88,   202,    29,     4,
       5,     6,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      85,    86,    87,    88,   211,    26,    24,    25,    27,     0,
      56,     0,   223,     0,     0,   268,    85,    86,    87,    88,
       0,     0,    26,     0,     0,    27,     0,    28,     0,     0,
       0,    29,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    79,    80,    81,    82,     0,     0,    24,
      25,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    94,     0,    27,     0,
      28,     0,     0,     0,    29,    95,    96,    97,    98,    94,
      99,     0,     0,     0,   170,    95,    96,    97,    98,    94,
      99,     0,     0,     0,   130,     0,     0,     0,    95,    96,
      97,    98,    94,    99,     0,     0,     0,   198,    95,    96,
      97,    98,    94,    99,     0,     0,     0,   217,     0,     0,
       0,    95,    96,    97,    98,    94,    99,     0,     0,     0,
     232,    95,    96,    97,    98,    93,    99,    94,     0,     0,
     236,   126,     0,    94,    95,    96,    97,    98,   201,    99,
      94,     0,     0,   255,     0,     0,    95,    96,    97,    98,
       0,    99,    95,    96,    97,    98,     0,    99,    94,    95,
      96,    97,    98,   138,    99,    94,     0,     0,     0,     0,
     163,    94,     0,     0,     0,     0,   199,    95,    96,    97,
      98,     0,    99,    94,    95,    96,    97,    98,   204,    99,
      95,    96,    97,    98,    94,    99,     0,     0,     0,   206,
      94,     0,    95,    96,    97,    98,     0,    99,     0,     0,
       0,     0,     0,    95,    96,    97,    98,     0,    99,    95,
      96,    97,    98,     0,    99,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,   224,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      28,    42,    25,    30,    29,     0,    25,    49,    50,    51,
      25,    52,    42,     4,     5,     6,     7,     8,    52,    53,
      52,    30,    47,    48,    49,    50,    51,     7,     8,     4,
       5,     6,     7,     8,    49,    62,    30,    79,     7,     8,
      42,    83,    54,     4,     5,     6,     7,     8,    57,    43,
      52,    74,    30,    23,    79,    30,    47,    23,    83,    50,
      85,    52,     9,    54,    23,    56,     4,     5,     6,     7,
       8,    23,    47,   115,    23,    50,    56,    52,    23,    57,
      26,    56,    28,    29,    52,    53,    47,    56,    23,    50,
     115,    52,    23,    54,    52,    56,     4,     5,     6,     7,
       8,    23,    26,    25,    28,    29,   131,    53,   133,    47,
     135,   153,    50,    52,    52,    38,   158,   159,    56,     9,
      25,    55,    44,    45,    46,    47,    52,    49,   153,   154,
      41,    53,    52,   158,   159,    52,    43,    52,    26,    47,
      28,    29,    50,    52,    52,   173,    52,    33,    56,     9,
      25,    55,   194,    26,    27,    28,    29,    24,     9,    26,
      27,    28,    29,    54,    42,    53,    30,    54,   193,   194,
      42,    46,    47,   200,    49,    48,    55,    35,    52,    46,
      53,    48,   205,    50,    51,    52,   205,    55,    54,    56,
      55,    30,   220,     4,     5,     6,     7,     8,    55,    66,
      55,   224,    54,    53,   229,   224,   248,    30,   250,    54,
     237,    53,    79,    26,    27,    28,    29,    53,    85,    53,
     245,    42,    55,   248,   249,   250,   251,    94,    95,    96,
      97,    98,    99,    55,     9,    48,    47,    42,   266,    50,
     267,    52,    26,    54,    28,    29,    30,    23,   115,    55,
      26,    27,    28,    29,    42,    42,   123,   124,    53,    42,
     127,    25,    42,    53,   131,   132,     9,    39,    53,   136,
      23,   138,    48,    -1,    -1,     4,     5,     6,     7,     8,
      44,    45,    46,    47,    -1,    49,   153,    -1,   155,    53,
      -1,   158,   159,    -1,    -1,    -1,   163,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    47,    -1,
      -1,    50,   189,    52,    31,    32,   193,    -1,    -1,    -1,
      23,    -1,   199,    26,    27,    28,    29,   204,    -1,    -1,
      47,    -1,    -1,    50,    -1,    52,    53,    -1,    -1,    56,
      26,    27,    28,    29,    30,   222,    -1,     4,     5,     6,
       7,     8,   229,     4,     5,     6,     7,     8,   235,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    26,    27,    28,    29,
      31,    32,    -1,    34,     4,     5,     6,     7,     8,    -1,
      47,    -1,    -1,    50,    -1,    52,    47,    54,    48,    50,
      -1,    52,    -1,    53,    -1,    56,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    47,    -1,    -1,
      50,    -1,    52,    31,    32,    -1,    -1,    26,    36,    28,
      29,    30,     4,     5,     6,     7,     8,    -1,    -1,    47,
      -1,    -1,    50,    26,    52,    28,    29,    30,    56,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      26,    27,    28,    29,    30,    47,    31,    32,    50,    -1,
      52,    -1,    54,    -1,    -1,    40,    26,    27,    28,    29,
      -1,    -1,    47,    -1,    -1,    50,    -1,    52,    -1,    -1,
      -1,    56,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    26,    27,    28,    29,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    25,    -1,    50,    -1,
      52,    -1,    -1,    -1,    56,    44,    45,    46,    47,    25,
      49,    -1,    -1,    -1,    53,    44,    45,    46,    47,    25,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    44,    45,
      46,    47,    25,    49,    -1,    -1,    -1,    53,    44,    45,
      46,    47,    25,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    44,    45,    46,    47,    25,    49,    -1,    -1,    -1,
      53,    44,    45,    46,    47,    23,    49,    25,    -1,    -1,
      53,    23,    -1,    25,    44,    45,    46,    47,    23,    49,
      25,    -1,    -1,    53,    -1,    -1,    44,    45,    46,    47,
      -1,    49,    44,    45,    46,    47,    -1,    49,    25,    44,
      45,    46,    47,    30,    49,    25,    -1,    -1,    -1,    -1,
      30,    25,    -1,    -1,    -1,    -1,    30,    44,    45,    46,
      47,    -1,    49,    25,    44,    45,    46,    47,    30,    49,
      44,    45,    46,    47,    25,    49,    -1,    -1,    -1,    30,
      25,    -1,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    -1,    49,    44,
      45,    46,    47,    -1,    49,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,     0,     4,     5,     6,     7,     8,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    31,    32,    47,    50,    52,    56,
      61,    62,    63,    64,    65,    67,    69,    70,    72,    74,
      75,    76,    77,    78,    79,    80,    42,    42,    52,    42,
      52,    54,    52,     6,     7,     8,    52,    78,    75,    79,
      78,    78,    61,    78,     7,     8,    56,    71,    72,    73,
      78,    62,    23,    23,    30,    43,    23,    23,    23,    26,
      27,    28,    29,    48,    23,    26,    27,    28,    29,    23,
      23,    23,    23,    23,    25,    44,    45,    46,    47,    49,
       9,    78,     7,     8,    72,    72,    78,     8,    70,    72,
       8,    54,    70,    72,    78,    30,    68,    70,    72,    78,
       7,     8,    78,    52,    52,    78,    23,    38,     9,    53,
      53,    52,    52,    30,    57,    30,    30,    57,    30,    79,
      41,    70,    72,    78,    70,    72,    78,    78,    78,    78,
      78,    78,    78,    43,    52,    52,    30,    53,    52,    52,
      55,    53,    30,    30,    70,    72,    78,    55,    53,    53,
      53,    78,    78,    33,    78,    72,    54,    78,    72,    72,
      78,    78,     9,     9,    70,    72,    78,    78,    54,    42,
      54,    70,    72,    30,    42,    54,    54,    78,    53,    30,
      61,    23,    30,    55,    30,    52,    30,    55,    78,    55,
      53,    30,    72,    78,    70,    55,    55,    53,    78,    34,
      35,    54,    30,    54,    30,    66,    75,    79,    53,    30,
      54,    53,    53,    53,    53,    42,    53,    61,    55,    78,
      55,    75,    79,    53,     9,    42,    72,    55,    42,    42,
      42,    42,    78,    36,    53,    53,    53,     9,    39,    72,
      53,    53,    70,    72,    70,    72,    23,    61,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    64,    65,    65,    66,    66,    66,    66,    67,    68,
      68,    68,    68,    68,    68,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    76,    76,    76,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       6,     8,     2,     4,     1,     2,     2,     3,    11,     1,
       1,     1,     2,     2,     2,     4,     3,     7,     7,     4,
       1,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     7,     7,     7,     1,     3,     2,     2,     3,
       3,     3,     6,     9,     8,     9,     9,     9,     9,     6,
       4,     4,     4,     3,     3,     3,     4,     4,     4,     1,
       1,     2,     3,     3,     3,     3,     3,     2,     3,     3,
       4,     6,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 56 "interpreter.y" /* yacc.c:1652  */
    {outputOut(); exit(0);}
#line 1660 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 60 "interpreter.y" /* yacc.c:1652  */
    {
                                    try {
                                        (yyvsp[0].ptr)->execute();
                                    }
                                    catch (const char* error) {
                                        std::cerr << error << std::endl;
                                    }
                                }
#line 1673 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 72 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 1679 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 73 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    kids.push_back((yyvsp[-1].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1690 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 82 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids;
                                    (yyval.ptr) = new Interpreter::OperationNode(newline, kids);
                                }
#line 1699 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 86 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1705 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 87 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1711 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 88 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1717 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 89 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1723 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 90 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1729 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 91 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1735 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 92 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].varOpPtr);}
#line 1741 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 93 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1747 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 94 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1753 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 95 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1759 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 96 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1765 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 97 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1771 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 101 "interpreter.y" /* yacc.c:1652  */
    {
                                                std::vector<Interpreter::Node*> kids;
                                                kids.push_back((yyvsp[-4].ptr));
                                                kids.push_back((yyvsp[-1].ptr));
                                                (yyval.ptr) = new Interpreter::OperationNode(iff, kids);
                                            }
#line 1782 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 110 "interpreter.y" /* yacc.c:1652  */
    {
                                                                    std::vector<Interpreter::Node*> kids;
                                                                    kids.push_back((yyvsp[-6].varOpPtr));
                                                                    kids.push_back((yyvsp[-4].ptr));
                                                                    kids.push_back((yyvsp[-1].ptr));
                                                                    (yyval.ptr) = new Interpreter::OperationNode(forr, kids);
                                                                }
#line 1794 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 120 "interpreter.y" /* yacc.c:1652  */
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
#line 1829 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 150 "interpreter.y" /* yacc.c:1652  */
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
#line 1864 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 183 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[0].varOpPtr));}
#line 1870 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 184 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::args_func((yyvsp[-1].vtype), *(yyvsp[0].varName));}
#line 1876 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 185 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addByNode((yyvsp[0].varOpPtr));}
#line 1882 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 186 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::args_func*>((yyval.ptr))->addByVTypeandName((yyvsp[-1].vtype), *(yyvsp[0].varName));}
#line 1888 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 190 "interpreter.y" /* yacc.c:1652  */
    {
                                                                            auto plug = new Interpreter::func_descript(dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->localStorage, dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->localisConst, 
                                                                            dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-10].ptr))->container, dynamic_cast<Interpreter::return_funcNode*>((yyvsp[-10].ptr))->retVarNames,
                                                                            (yyvsp[-1].ptr), *(yyvsp[-7].varName), dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->types, dynamic_cast<Interpreter::args_func*>((yyvsp[-5].ptr))->names);
                                                                            Interpreter::varStorage.insert_or_assign(*(yyvsp[-7].varName), plug);
                                                                        }
#line 1899 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 199 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(expR, (yyvsp[0].ptr));}
#line 1905 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 200 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(vectoR, (yyvsp[0].ptr));}
#line 1911 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 201 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc_args(matriX, (yyvsp[0].ptr));}
#line 1917 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 202 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(expR, (yyvsp[0].ptr));}
#line 1923 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 203 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(vectoR, (yyvsp[0].ptr));}
#line 1929 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 204 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::callfunc_args*>((yyval.ptr))->addArg(matriX, (yyvsp[0].ptr));}
#line 1935 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 208 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = new Interpreter::callfunc(*(yyvsp[-3].varName), dynamic_cast<Interpreter::callfunc_args*>((yyvsp[-1].ptr))->args);}
#line 1941 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 212 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 1947 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 213 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mveccolumnindex);
                                                }
#line 1959 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 220 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mvecrowindex);
                                                }
#line 1971 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 227 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-3].varName));
                                                    std::vector<Interpreter::ContainerMatrixNode*> kids;
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerMatrixNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmatindex);
                                                }
#line 1983 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 234 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                        auto tmp = dynamic_cast<Interpreter::AbstractMatrixNode*>(search->second)->copy();
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeX(), dynamic_cast<Interpreter::AbstractMatrixNode*>(tmp)->getSizeY());
                                    }
#line 1993 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 239 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mmultiply);
                                    }
#line 2004 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 245 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, melemmultiply);
                                    }
#line 2015 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 251 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 2025 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 256 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftright);
                                    }
#line 2035 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 261 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-1].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 2045 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 266 "interpreter.y" /* yacc.c:1652  */
    {
                                        auto kid = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>(kid));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mtransposition);
                                    }
#line 2056 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 272 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, mcycshiftleft);
                                    }
#line 2067 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 278 "interpreter.y" /* yacc.c:1652  */
    {
                                        std::vector<Interpreter::ContainerMatrixNode*> kids;
                                        kids.push_back(dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[-2].ptr)));
                                        kids.push_back(static_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                        (yyval.ptr) = new Interpreter::ContainerMatrixNode(kids, MEMexpr);
                                    }
#line 2078 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 287 "interpreter.y" /* yacc.c:1652  */
    {
                                            (yyval.ptr) = new Interpreter::ContainerMatrixNode(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                        }
#line 2087 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 291 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerMatrixNode*>((yyval.ptr))->addData(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));}
#line 2093 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 295 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2099 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 296 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vvecindex);
                                                }
#line 2111 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 303 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[-4].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprcolumnindex);
                                                }
#line 2123 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 310 "interpreter.y" /* yacc.c:1652  */
    {
                                                    auto search = Interpreter::varStorage.find(*(yyvsp[-6].varName));
                                                    std::vector<Interpreter::ContainerVectorNode*> kids;
                                                    kids.push_back((Interpreter::ContainerVectorNode*)(search->second));
                                                    kids.push_back((Interpreter::ContainerVectorNode*)((yyvsp[-1].ptr)));
                                                    (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, mexprrowindex);
                                                }
#line 2135 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 317 "interpreter.y" /* yacc.c:1652  */
    {
                                            auto search = Interpreter::varStorage.find(*(yyvsp[0].varName));
                                            auto tmp = dynamic_cast<Interpreter::AbstractVectorNode*>(search->second)->copy();
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getData(), dynamic_cast<Interpreter::AbstractVectorNode*>(tmp)->getSize());
                                        }
#line 2145 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 322 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, velemmultiply);
                                        }
#line 2156 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 328 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftright);
                                        }
#line 2166 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 333 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-1].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, vcycshiftleft);
                                        }
#line 2176 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 338 "interpreter.y" /* yacc.c:1652  */
    {
                                            std::vector<Interpreter::ContainerVectorNode*> kids;
                                            kids.push_back(dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[-2].ptr)));
                                            kids.push_back(static_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                            (yyval.ptr) = new Interpreter::ContainerVectorNode(kids, VEMexpr);
                                        }
#line 2187 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 348 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::ContainerVectorNode((yyvsp[-2].ptr));
                                    dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));
                                }
#line 2196 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 352 "interpreter.y" /* yacc.c:1652  */
    {dynamic_cast<Interpreter::ContainerVectorNode*>((yyval.ptr))->addData((yyvsp[0].ptr));}
#line 2202 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 356 "interpreter.y" /* yacc.c:1652  */
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
#line 2221 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 370 "interpreter.y" /* yacc.c:1652  */
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
#line 2238 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 382 "interpreter.y" /* yacc.c:1652  */
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
#line 2257 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 396 "interpreter.y" /* yacc.c:1652  */
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
#line 2274 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 408 "interpreter.y" /* yacc.c:1652  */
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
#line 2291 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 420 "interpreter.y" /* yacc.c:1652  */
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
#line 2308 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 432 "interpreter.y" /* yacc.c:1652  */
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
#line 2325 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 444 "interpreter.y" /* yacc.c:1652  */
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
#line 2342 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 459 "interpreter.y" /* yacc.c:1652  */
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
#line 2360 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 472 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::VINT || (yyvsp[-3].vtype) == Interpreter::CVINT || (yyvsp[-3].vtype) == Interpreter::VBOOL || (yyvsp[-3].vtype) == Interpreter::CVBOOL) {
                                                        auto plug = new Interpreter::AbstractVectorNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2373 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 480 "interpreter.y" /* yacc.c:1652  */
    {
                                                    if ((yyvsp[-3].vtype) == Interpreter::MINT || (yyvsp[-3].vtype) == Interpreter::CMINT || (yyvsp[-3].vtype) == Interpreter::MBOOL || (yyvsp[-3].vtype) == Interpreter::CMBOOL) {
                                                        auto plug = new Interpreter::AbstractMatrixNode();
                                                        Interpreter::varStorage.insert_or_assign(*(yyvsp[-2].varName), plug);
                                                        (yyval.varOpPtr) = new Interpreter::VariableOperationNode((yyvsp[-3].vtype), declare, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                    }
                                                    else yyerror("Type mismatch!");
                                                }
#line 2386 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 491 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), (yyvsp[0].ptr));
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2398 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 498 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerVectorNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2412 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 507 "interpreter.y" /* yacc.c:1652  */
    {
                                                if (!Interpreter::isConst[*(yyvsp[-2].varName)]) {
                                                    (yyval.varOpPtr) = new Interpreter::VariableOperationNode(Interpreter::ABSTRACT, assign, *(yyvsp[-2].varName), dynamic_cast<Interpreter::ContainerMatrixNode*>((yyvsp[0].ptr)));
                                                }
                                                else {
                                                    std::string tmp = std::string("Variable ") + *(yyvsp[-2].varName) + " doesn't exist or can not be changed!";
                                                    yyerror(tmp.c_str());
                                                }
                                            }
#line 2426 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 519 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-1].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, kids); 
                                }
#line 2436 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 524 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName)); 
                                }
#line 2444 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 527 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(pprint, *(yyvsp[-1].varName));  
                                }
#line 2452 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 533 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2458 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 534 "interpreter.y" /* yacc.c:1652  */
    {
                                    (yyval.ptr) = new Interpreter::OperationNode(gscalar, *(yyvsp[0].varName));
                                }
#line 2466 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 538 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(uminus, kids);
                                }
#line 2476 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 543 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(plus, kids);
                                }
#line 2487 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 549 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(minus, kids);
                                }
#line 2498 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 555 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(divide, kids);
                                }
#line 2509 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 561 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(less, kids);
                                }
#line 2520 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 567 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr)); 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(greater, kids);
                                }
#line 2531 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 573 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(denial, kids); 
                                }
#line 2541 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 578 "interpreter.y" /* yacc.c:1652  */
    {
                                    std::vector<Interpreter::Node*> kids; 
                                    kids.push_back((yyvsp[-2].ptr));
                                    kids.push_back((yyvsp[0].ptr));
                                    (yyval.ptr) = new Interpreter::OperationNode(conjunction, kids);
                                }
#line 2552 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 584 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[-1].ptr);}
#line 2558 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 585 "interpreter.y" /* yacc.c:1652  */
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
#line 2575 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 597 "interpreter.y" /* yacc.c:1652  */
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
#line 2593 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 613 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2599 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 614 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2605 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 615 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2611 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 616 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2617 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 617 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2623 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 618 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2629 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 619 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2635 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 620 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2641 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 621 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2647 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 622 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2653 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 623 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2659 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 624 "interpreter.y" /* yacc.c:1652  */
    {(yyval.vtype) = (yyvsp[0].vtype);}
#line 2665 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 628 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].intPtr);}
#line 2671 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 629 "interpreter.y" /* yacc.c:1652  */
    {(yyval.ptr) = (yyvsp[0].boolPtr);}
#line 2677 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 2681 "interpreter.tab.c" /* yacc.c:1652  */
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
#line 632 "interpreter.y" /* yacc.c:1918  */


void yyerror(const char* error) {
    std::cerr << error << std::endl;
}

int main(void) {
    yyin = std::fopen("test.txt", "r");
    yyparse();
    std::fclose(yyin);
    return 0;
}
