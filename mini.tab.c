
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 14 "mini.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "quadruplet.h"

extern FILE* yyin;
extern int nbligne ;
extern int numcol;
extern  **hach_table;
extern  yytext;
int k1=0;
char savvvve[100];
int k=0;
int error=0;
int qct;
int i=0;
int j;
char savee_idef[100];
typedef struct{
	char idef[20];
  char type[20];
  int  taille;
	char val_idef;
}chaine_idef;
chaine_idef sauv_idef[100];
typedef struct{
	char nature[20];
}chaine_nature;
chaine_nature nature_idef[100];

char sauverType[7];
char sauvidef[1000];


/* Line 189 of yacc.c  */
#line 109 "mini.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     aqualatte_ouvr = 258,
     aqualatte_ferm = 259,
     END = 260,
     PROGRAM = 261,
     debut = 262,
     point_virgule = 263,
     virgule = 264,
     deux_point = 265,
     IF = 266,
     ELSE = 267,
     THEN = 268,
     ENDIF = 269,
     FOR = 270,
     ENDFOR = 271,
     DO = 272,
     CASE = 273,
     DEFAULT = 274,
     SO = 275,
     CHECK = 276,
     et = 277,
     ou = 278,
     neg = 279,
     sup = 280,
     inf = 281,
     egal = 282,
     egal_cond = 283,
     deff = 284,
     sup_egal = 285,
     inf_egal = 286,
     plus = 287,
     minus = 288,
     multi = 289,
     divv = 290,
     puiss = 291,
     Entien = 292,
     Entien_neg = 293,
     Entien_reel = 294,
     Entien_reel_neg = 295,
     car = 296,
     comment = 297,
     INT = 298,
     FLT = 299,
     CHR = 300,
     CONSTANT = 301,
     part_ouvr = 302,
     part_ferm = 303,
     idef = 304,
     ENDCASE = 305,
     ENDCHECK = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 49 "mini.y"

char *chaine;
int entien;
double reel;
char carectere;

struct cond{
	int sauv_fin;
	int sauv_deb;

}cond;

struct stuc{
	char t[15];
	int val ;
	char* nom;

	int sauv_fin;
	int sauv_deb;
} struc;




/* Line 214 of yacc.c  */
#line 221 "mini.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 233 "mini.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    14,    17,    18,    23,    25,    27,
      29,    35,    37,    39,    41,    43,    47,    51,    55,    59,
      61,    66,    73,    75,    79,    82,    85,    88,    91,    92,
      97,   102,   107,   109,   114,   119,   123,   127,   129,   131,
     135,   139,   141,   145,   147,   149,   154,   159,   161,   163,
     165,   167,   171,   175,   179,   183,   189,   193,   199,   201,
     205,   211,   213,   216,   221,   223,   227,   231,   235,   239,
     243,   247,   253,   259,   265,   271,   277,   283,   287,   291,
     295,   299,   303,   307,   312,   316,   321,   322,   329,   330,
     338,   343,   347,   353,   355,   359,   365,   367,   370,   375,
     377,   380,   383,   386,   389,   392,   395,   400,   405,   410,
     415,   420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,     6,    49,    54,     7,    60,     5,    49,
      -1,    55,    54,    -1,    57,    54,    -1,    -1,    59,    10,
      56,     8,    -1,    43,    -1,    44,    -1,    45,    -1,    46,
      49,    27,    58,     8,    -1,    37,    -1,    38,    -1,    39,
      -1,    40,    -1,    47,    37,    48,    -1,    47,    38,    48,
      -1,    47,    39,    48,    -1,    47,    40,    48,    -1,    41,
      -1,    49,     3,    37,     4,    -1,    49,     3,    37,     4,
       9,    59,    -1,    49,    -1,    49,     9,    59,    -1,    61,
      60,    -1,    67,    60,    -1,    75,    60,    -1,    79,    60,
      -1,    -1,    62,    27,    63,     8,    -1,    62,    32,    32,
       8,    -1,    62,    33,    33,     8,    -1,    49,    -1,    49,
       3,    37,     4,    -1,    49,     3,    49,     4,    -1,    64,
      32,    63,    -1,    64,    33,    63,    -1,    64,    -1,    41,
      -1,    65,    34,    64,    -1,    65,    35,    64,    -1,    65,
      -1,    66,    36,    65,    -1,    66,    -1,    49,    -1,    49,
       3,    49,     4,    -1,    49,     3,    37,     4,    -1,    37,
      -1,    40,    -1,    38,    -1,    39,    -1,    47,    63,    48,
      -1,    68,    60,    14,    -1,    69,    60,    14,    -1,    69,
      60,    12,    -1,    11,    47,    70,    48,    13,    -1,    71,
      23,    70,    -1,    47,    71,    23,    70,    48,    -1,    71,
      -1,    72,    22,    71,    -1,    47,    72,    22,    71,    48,
      -1,    72,    -1,    24,    72,    -1,    47,    24,    72,    48,
      -1,    73,    -1,    63,    25,    63,    -1,    63,    30,    63,
      -1,    63,    26,    63,    -1,    63,    31,    63,    -1,    63,
      28,    63,    -1,    63,    29,    63,    -1,    47,    63,    25,
      63,    48,    -1,    47,    63,    30,    63,    48,    -1,    47,
      63,    26,    63,    48,    -1,    47,    63,    31,    63,    48,
      -1,    47,    63,    28,    63,    48,    -1,    47,    63,    29,
      63,    48,    -1,    62,    27,    63,    -1,    62,    32,    32,
      -1,    62,    33,    33,    -1,    76,    60,    16,    -1,    77,
      74,    48,    -1,    78,    70,     9,    -1,    15,    47,    74,
       9,    -1,    80,    81,    50,    -1,    18,    47,    49,    48,
      -1,    -1,    84,    20,    60,    51,    82,    81,    -1,    -1,
      84,    20,    60,    51,    83,    19,    60,    -1,    21,    47,
      85,    48,    -1,    86,    23,    85,    -1,    47,    86,    23,
      85,    48,    -1,    86,    -1,    87,    22,    86,    -1,    47,
      87,    22,    86,    48,    -1,    87,    -1,    24,    87,    -1,
      47,    24,    87,    48,    -1,    88,    -1,    25,    63,    -1,
      30,    63,    -1,    26,    63,    -1,    31,    63,    -1,    28,
      63,    -1,    29,    63,    -1,    47,    25,    63,    48,    -1,
      47,    30,    63,    48,    -1,    47,    26,    63,    48,    -1,
      47,    31,    63,    48,    -1,    47,    28,    63,    48,    -1,
      47,    29,    63,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   129,   129,   136,   137,   139,   140,   176,   177,   178,
     181,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     215,   232,   252,   262,   272,   273,   274,   275,   276,   279,
     303,   331,   358,   383,   409,   444,   475,   500,   501,   503,
     529,   565,   567,   600,   603,   629,   656,   683,   684,   685,
     686,   687,   695,   699,   707,   716,   733,   754,   776,   778,
     802,   823,   825,   846,   866,   868,   888,   906,   921,   936,
     951,   966,   981,   996,  1011,  1026,  1041,  1058,  1078,  1099,
    1121,  1131,  1145,  1156,  1165,  1174,  1201,  1201,  1202,  1202,
    1203,  1209,  1230,  1252,  1255,  1277,  1299,  1303,  1322,  1340,
    1342,  1356,  1368,  1381,  1392,  1403,  1415,  1427,  1438,  1450,
    1461,  1472
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "aqualatte_ouvr", "aqualatte_ferm",
  "END", "PROGRAM", "debut", "point_virgule", "virgule", "deux_point",
  "IF", "ELSE", "THEN", "ENDIF", "FOR", "ENDFOR", "DO", "CASE", "DEFAULT",
  "SO", "CHECK", "et", "ou", "neg", "sup", "inf", "egal", "egal_cond",
  "deff", "sup_egal", "inf_egal", "plus", "minus", "multi", "divv",
  "puiss", "Entien", "Entien_neg", "Entien_reel", "Entien_reel_neg", "car",
  "comment", "INT", "FLT", "CHR", "CONSTANT", "part_ouvr", "part_ferm",
  "idef", "ENDCASE", "ENDCHECK", "$accept", "s", "dec", "dec_simple",
  "type_var", "dec_cons", "valeur", "tab", "inst", "aff",
  "type_affectation", "expression", "expression1", "expression2",
  "expression3", "if_cond", "first_if", "second_if", "condition",
  "condition1", "condition2", "condition3", "aff1", "for_inst", "th_for",
  "sc_for", "pr_for", "switch_inst", "switch_inst1", "block_switch", "$@1",
  "$@2", "block_switch1", "condition_switch", "condition_switch1",
  "condition_switch2", "condition_switch3", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    55,    56,    56,    56,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    61,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    68,    69,    70,    70,    70,    71,
      71,    71,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    76,    77,    78,    79,    80,    82,    81,    83,    81,
      84,    85,    85,    85,    86,    86,    86,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     2,     0,     4,     1,     1,     1,
       5,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       4,     6,     1,     3,     2,     2,     2,     2,     0,     4,
       4,     4,     1,     4,     4,     3,     3,     1,     1,     3,
       3,     1,     3,     1,     1,     4,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     3,     5,     1,     3,
       5,     1,     2,     4,     1,     3,     3,     3,     3,     3,
       3,     5,     5,     5,     5,     5,     5,     3,     3,     3,
       3,     3,     3,     4,     3,     4,     0,     6,     0,     7,
       4,     3,     5,     1,     3,     5,     1,     2,     4,     1,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     4,
       4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     1,     0,    22,     0,     5,     5,
       0,     0,     0,     0,    28,     3,     4,     0,     0,     0,
      23,     0,     0,     0,    32,     0,    28,     0,    28,    28,
      28,    28,    28,     0,     0,    28,     0,     7,     8,     9,
       0,    11,    12,    13,    14,    19,     0,     0,    20,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    25,     0,
       0,    26,     0,     0,     0,     0,    47,    49,    50,    48,
      38,     0,    44,     0,    37,    41,    43,     0,    58,    61,
      64,    27,     0,     0,     0,     6,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,    52,    54,    53,    80,     0,     0,     0,    81,
       0,    62,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,    84,    28,    15,    16,    17,    18,    21,
       0,    83,    85,    33,    34,     0,    29,    30,    31,    77,
      78,    79,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,    65,    67,    69,
      70,    66,    68,    35,    36,    39,    40,    42,    56,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      96,    99,     0,    55,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    65,    67,    69,    70,    66,    68,     0,
      59,    46,    45,     0,    97,   100,   102,   104,   105,   101,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    90,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    71,    73,    75,    76,    72,    74,    57,    60,
       0,     0,     0,     0,     0,     0,     0,    97,   100,   102,
     104,   105,   101,   103,     0,     0,     0,    91,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,   106,
     108,   110,   111,   107,   109,     0,     0,    94,    87,    28,
       0,    92,    95,    89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    40,     9,    47,    10,    25,    26,
      27,    73,    74,    75,    76,    28,    29,    30,    77,    78,
      79,    80,    64,    31,    32,    33,    34,    35,    36,    83,
     269,   270,    84,   188,   189,   190,   191
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -223
static const yytype_int16 yypact[] =
{
      20,    -9,    50,     8,  -223,    14,    39,    78,     8,     8,
      62,    60,    74,    52,     0,  -223,  -223,    38,   231,   115,
    -223,    76,    87,   112,   159,   162,     0,    93,     0,     0,
       0,     0,     0,   136,    -2,     0,   143,  -223,  -223,  -223,
     182,  -223,  -223,  -223,  -223,  -223,   155,   188,   197,    -2,
     136,   165,   -17,   170,  -223,   210,   189,   198,  -223,   206,
      19,  -223,   225,   106,   174,    75,  -223,  -223,  -223,  -223,
    -223,   111,   249,    64,    65,    83,   217,   245,   233,   236,
    -223,  -223,   213,   211,   253,  -223,   229,   234,   239,   240,
    -223,    52,   241,   266,   242,   287,   288,  -223,   210,   285,
     286,   289,  -223,  -223,  -223,  -223,   210,   263,   265,  -223,
     116,  -223,    75,   137,   207,   273,   277,     4,   210,   210,
     210,   210,   210,   210,   210,   210,   227,   227,   227,  -223,
      -2,   142,    -1,  -223,     0,  -223,  -223,  -223,  -223,  -223,
     290,  -223,  -223,  -223,  -223,   252,  -223,  -223,  -223,  -223,
    -223,  -223,    75,   214,   254,   279,   210,   210,   210,   210,
     210,   210,  -223,    -2,   142,   300,   301,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
      49,   210,   210,   210,   210,   210,   210,   179,   258,   284,
     291,  -223,   257,  -223,   254,   210,   210,   210,   210,   210,
     210,  -223,   142,   261,   262,   264,   267,   268,   269,   270,
     271,  -223,  -223,   255,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,    49,   210,   210,   210,   210,   210,   210,   187,   297,
     292,  -223,    -1,   199,   302,   261,   262,   264,   267,   268,
     269,   271,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
      49,   210,   210,   210,   210,   210,   210,   274,   275,   276,
     278,   280,   281,   282,   303,    -1,   199,  -223,  -223,   143,
     308,   274,   275,   276,   278,   280,   281,   282,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   199,   283,   293,  -223,     0,
     293,  -223,  -223,  -223
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,   128,  -223,  -223,  -223,  -223,    -5,   -26,  -223,
       1,   -54,    61,   183,  -223,  -223,  -223,  -223,   -42,   -55,
     -52,  -223,   294,  -223,  -223,  -223,  -223,  -223,  -223,    63,
    -223,  -223,  -223,  -222,  -175,  -166,  -223
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -89
static const yytype_int16 yytable[] =
{
      54,    99,    58,    59,    60,    61,    62,    92,    20,    81,
     267,    21,   229,   111,   214,    22,   115,   114,    23,   116,
      95,   230,    65,   180,   181,   182,     1,   183,   184,   185,
     186,   103,    96,   104,    63,    66,    67,    68,    69,    70,
       3,   165,    12,   286,   145,    71,   187,    72,    13,    24,
       4,    63,   149,   166,     5,   257,   153,     6,   268,   114,
     154,   155,   264,    11,   167,   168,   169,   170,   171,   172,
     173,   174,    17,   180,   181,   182,   179,   183,   184,   185,
     186,    37,    38,    39,   271,    14,   139,    18,   178,   118,
     119,   287,   120,   121,   122,   123,   213,   124,   125,    65,
     194,     6,   203,   204,   205,   206,   207,   208,   192,   210,
     290,    19,    66,    67,    68,    69,    70,   126,   127,    48,
      55,   209,   110,    49,    72,    56,    57,   215,   216,   217,
     218,   219,   220,   106,    50,   112,    15,    16,   107,   108,
     152,   235,   236,   237,   238,   239,   240,   241,    66,    67,
      68,    69,    70,    66,    67,    68,    69,    70,   113,    51,
      72,   112,    52,    98,    82,    72,    65,    53,   258,   259,
     260,   261,   262,   263,    66,    67,    68,    69,    70,    66,
      67,    68,    69,    70,   110,    24,    72,   175,   176,   113,
      85,    72,    86,    87,    88,    89,    90,   272,   273,   274,
     275,   276,   277,   221,   222,   223,    91,   224,   225,   226,
     227,   221,   222,   223,    94,   224,   225,   226,   227,    97,
     102,   100,   109,   180,   181,   182,   228,   183,   184,   185,
     186,   101,   156,   157,   213,   158,   159,   160,   161,   195,
     196,   105,   197,   198,   199,   200,   228,    66,    67,    68,
      69,    70,   117,   128,   129,   162,   130,    98,   131,    72,
     132,   133,   162,   293,    66,    67,    68,    69,    41,    42,
      43,    44,    45,   134,    98,   141,    72,   135,    46,   250,
     251,   252,   136,   253,   254,   255,   256,   137,   138,   140,
     142,   143,   144,   146,   147,   150,   163,   148,   151,   164,
     162,   202,   201,   193,   211,   212,   231,   232,   234,   242,
     243,   177,   244,   233,   266,   245,   246,   247,   248,   249,
     265,   -88,   278,   279,   280,   285,   281,   289,   282,   283,
     284,   291,   288,     0,     0,     0,     0,     0,     0,     0,
       0,   292,     0,     0,    93
};

static const yytype_int16 yycheck[] =
{
      26,    55,    28,    29,    30,    31,    32,    49,    13,    35,
     232,    11,   187,    65,   180,    15,    71,    71,    18,    71,
      37,   187,    24,    24,    25,    26,     6,    28,    29,    30,
      31,    12,    49,    14,    33,    37,    38,    39,    40,    41,
      49,    37,     3,   265,    98,    47,    47,    49,     9,    49,
       0,    50,   106,    49,    46,   221,   110,    49,   233,   113,
     112,   113,   228,    49,   118,   119,   120,   121,   122,   123,
     124,   125,    10,    24,    25,    26,   131,    28,    29,    30,
      31,    43,    44,    45,   250,     7,    91,    27,   130,    25,
      26,   266,    28,    29,    30,    31,    47,    32,    33,    24,
     152,    49,   156,   157,   158,   159,   160,   161,   134,   164,
     285,    37,    37,    38,    39,    40,    41,    34,    35,     4,
      27,   163,    47,    47,    49,    32,    33,   181,   182,   183,
     184,   185,   186,    27,    47,    24,     8,     9,    32,    33,
      24,   195,   196,   197,   198,   199,   200,   202,    37,    38,
      39,    40,    41,    37,    38,    39,    40,    41,    47,    47,
      49,    24,     3,    47,    21,    49,    24,     5,   222,   223,
     224,   225,   226,   227,    37,    38,    39,    40,    41,    37,
      38,    39,    40,    41,    47,    49,    49,   126,   127,    47,
       8,    49,    37,    38,    39,    40,     8,   251,   252,   253,
     254,   255,   256,    24,    25,    26,     9,    28,    29,    30,
      31,    24,    25,    26,    49,    28,    29,    30,    31,    49,
      14,    32,    48,    24,    25,    26,    47,    28,    29,    30,
      31,    33,    25,    26,    47,    28,    29,    30,    31,    25,
      26,    16,    28,    29,    30,    31,    47,    37,    38,    39,
      40,    41,     3,    36,     9,    48,    23,    47,    22,    49,
      47,    50,    48,   289,    37,    38,    39,    40,    37,    38,
      39,    40,    41,    20,    47,     9,    49,    48,    47,    24,
      25,    26,    48,    28,    29,    30,    31,    48,    48,    48,
      48,     4,     4,     8,     8,    32,    23,     8,    33,    22,
      48,    22,    48,    13,     4,     4,    48,    23,    51,    48,
      48,   128,    48,    22,    22,    48,    48,    48,    48,    48,
      23,    19,    48,    48,    48,    22,    48,    19,    48,    48,
      48,    48,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    53,    49,     0,    46,    49,    54,    55,    57,
      59,    49,     3,     9,     7,    54,    54,    10,    27,    37,
      59,    11,    15,    18,    49,    60,    61,    62,    67,    68,
      69,    75,    76,    77,    78,    79,    80,    43,    44,    45,
      56,    37,    38,    39,    40,    41,    47,    58,     4,    47,
      47,    47,     3,     5,    60,    27,    32,    33,    60,    60,
      60,    60,    60,    62,    74,    24,    37,    38,    39,    40,
      41,    47,    49,    63,    64,    65,    66,    70,    71,    72,
      73,    60,    21,    81,    84,     8,    37,    38,    39,    40,
       8,     9,    70,    74,    49,    37,    49,    49,    47,    63,
      32,    33,    14,    12,    14,    16,    27,    32,    33,    48,
      47,    72,    24,    47,    63,    71,    72,     3,    25,    26,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     9,
      23,    22,    47,    50,    20,    48,    48,    48,    48,    59,
      48,     9,    48,     4,     4,    63,     8,     8,     8,    63,
      32,    33,    24,    63,    72,    72,    25,    26,    28,    29,
      30,    31,    48,    23,    22,    37,    49,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    65,    70,    71,
      24,    25,    26,    28,    29,    30,    31,    47,    85,    86,
      87,    88,    60,    13,    72,    25,    26,    28,    29,    30,
      31,    48,    22,    63,    63,    63,    63,    63,    63,    70,
      71,     4,     4,    47,    87,    63,    63,    63,    63,    63,
      63,    24,    25,    26,    28,    29,    30,    31,    47,    86,
      87,    48,    23,    22,    51,    63,    63,    63,    63,    63,
      63,    71,    48,    48,    48,    48,    48,    48,    48,    48,
      24,    25,    26,    28,    29,    30,    31,    87,    63,    63,
      63,    63,    63,    63,    87,    23,    22,    85,    86,    82,
      83,    87,    63,    63,    63,    63,    63,    63,    48,    48,
      48,    48,    48,    48,    48,    22,    85,    86,    81,    19,
      86,    48,    48,    60
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 129 "mini.y"
    {

  if(!strcmp((yyvsp[(2) - (7)].chaine),(yyvsp[(7) - (7)].chaine))){
      printf("\nProgramme syntaxiquement correcte. \n");   ajoutquad("FIN","","",""); YYACCEPT;
  }else  printf("Nom program erronné %s - ligne %d, colonne %d \n",(yyvsp[(2) - (7)].chaine),nbligne,numcol);

;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 136 "mini.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 137 "mini.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 139 "mini.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 140 "mini.y"
    {
  for(j=0;j<i;j++){


    if(declarer(sauv_idef[j].idef)==0){//declarer
         yyerror("erreur semantique double declaration");
         YYABORT;
         error++;
      }else{
				int k5=0;
      //  for(k5=0;k5<=j;k5++){
        inserer_nature(sauv_idef[j].idef,nature_idef[j].nature);
        inserer_type(sauv_idef[j].idef,sauv_idef[i-1].type);
        inserer_taille(sauv_idef[j].idef,sauv_idef[j].taille);
      /*  if(strcmp(nature_idef[j].nature,"tableau")){
					k=temporaire();
					char tem[20];

					char tem1[20];
					sprintf(tem,"T%d",k);
					sprintf(tem1,"%d",sauv_idef[j].taille);
					ajoutquad("BOUND",tem1,"",tem);
					k=temporaire();
					sprintf(tem,"T%d",k);
					ajoutquad("ADEC",sauv_idef[j].idef,"",tem);

				}*/

			// }
      }

			// printf("la nature %s",nature_idef[j].nature);
  }
  i=0;

;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 176 "mini.y"
    {strcpy(sauv_idef[i-1].type,"INT");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 177 "mini.y"
    {strcpy(sauv_idef[i-1].type,"FLT");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 178 "mini.y"
    {strcpy(sauv_idef[i-1].type,"CHR");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 181 "mini.y"
    {
   strcpy(sauv_idef[i].idef,(yyvsp[(2) - (5)].chaine));
   i++;
   for(j=0;j<i;j++){
     if(declarer(sauv_idef[j].idef)==0){//declarer
          yyerror("erreur semantique double declaration");
         YYABORT;
         error++;
       }else{
         inserer_nature(sauv_idef[j].idef,"constante");
         inserer_type(sauv_idef[j].idef,sauv_idef[j].type);
         inserer_taille(sauv_idef[j].idef,1);
				// printf("save const %s\n",savvvve);
				 inserer_val(sauv_idef[j].idef,savvvve);
       }
   }

i=0;

;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 201 "mini.y"
    {strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", (yyvsp[(1) - (1)].entien));strcpy(savvvve,str);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 202 "mini.y"
    {strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", (yyvsp[(1) - (1)].entien));strcpy(savvvve,str);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 203 "mini.y"
    {strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", (yyvsp[(1) - (1)].reel));strcpy(savvvve,str);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 204 "mini.y"
    {strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", (yyvsp[(1) - (1)].reel));strcpy(savvvve,str);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 205 "mini.y"
    {strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", (yyvsp[(2) - (3)].entien));strcpy(savvvve,str);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 206 "mini.y"
    {strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", (yyvsp[(2) - (3)].entien));strcpy(savvvve,str);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 207 "mini.y"
    {strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", (yyvsp[(2) - (3)].reel));strcpy(savvvve,str);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 208 "mini.y"
    {strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", (yyvsp[(2) - (3)].reel));strcpy(savvvve,str);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 209 "mini.y"
    {strcpy(sauv_idef[j].type,"CHR");strcpy(savvvve,(yyvsp[(1) - (1)].chaine));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 215 "mini.y"
    {

  strcpy(sauv_idef[i].idef,(yyvsp[(1) - (4)].chaine));
  sauv_idef[i].taille=(yyvsp[(3) - (4)].entien);
  strcpy(nature_idef[i].nature,"tableau");
  i++;
	k=temporaire();
	char tem[20];

	char tem1[20];
	sprintf(tem,"T%d",k);
	sprintf(tem1,"%d",(yyvsp[(3) - (4)].entien));
	ajoutquad("BOUND",tem1,"",tem);
	ajout(qc-1,(yyvsp[(1) - (4)].chaine));
	ajoutquad("ADEC",(yyvsp[(1) - (4)].chaine),"",tem);

;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 232 "mini.y"
    {

  strcpy(sauv_idef[i].idef,(yyvsp[(1) - (6)].chaine));
  sauv_idef[i].taille=(yyvsp[(3) - (6)].entien);
  strcpy(nature_idef[i].nature,"tableau");
  i++;

	k=temporaire();
	char tem[20];

	char tem1[20];
	sprintf(tem,"T%d",k);
	sprintf(tem1,"%d",(yyvsp[(3) - (6)].entien));
	ajoutquad("BOUND",tem1,"",tem);
	ajout(qc-1,(yyvsp[(1) - (6)].chaine));
	ajoutquad("ADEC",(yyvsp[(1) - (6)].chaine),"",tem);



;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 252 "mini.y"
    {

  strcpy(sauv_idef[i].idef,(yyvsp[(1) - (1)].chaine));
  sauv_idef[i].taille=1;
  strcpy(nature_idef[i].nature,"variable");
  i++;



;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 262 "mini.y"
    {
  strcpy(sauv_idef[i].idef,(yyvsp[(1) - (3)].chaine));
  sauv_idef[i].taille=1;
  strcpy(nature_idef[i].nature,"variable");
  i++;
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 272 "mini.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 273 "mini.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 274 "mini.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 275 "mini.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 276 "mini.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 279 "mini.y"
    {

	if (strcmp((yyvsp[(1) - (4)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy((yyval.struc).t,(yyvsp[(1) - (4)].struc).t);
		//ajoutquad("=",$3.nom," ",$1.nom);



		char c[10];char c1[10];
		depiler(&maPile,c);
		depiler(&maPile,c1);

		ajoutquad("=",c,"",c1);
		quad[qc-1].is_exp=1;


	}



;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 303 "mini.y"
    {

	if (strcmp((yyvsp[(1) - (4)].struc).t,"CHR")==0){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
			strcpy((yyval.struc).t,(yyvsp[(1) - (4)].struc).t);

			k=temporaire();
			char tem[20];
			sprintf(tem,"T%d",k);

			char c[10];
			depiler(&maPile,c);

			ajoutquad("+",c,"1",tem);
		 quad[qc-1].is_exp=1;
			ajoutquad("=",tem,"",c);
     quad[qc-1].is_exp=1;




	}



;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 331 "mini.y"
    {

	if (strcmp((yyvsp[(1) - (4)].struc).t,"CHR")==0 ){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy((yyval.struc).t,(yyvsp[(1) - (4)].struc).t);

		k=temporaire();
		char tem[20];
		sprintf(tem,"T%d",k);

		char c[10];
		depiler(&maPile,c);

		ajoutquad("-",c,"1",tem);
		 quad[qc-1].is_exp=1;
		ajoutquad("=",tem,"",c);
		 quad[qc-1].is_exp=1;

	}




;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 358 "mini.y"
    {
	if(declarer((yyvsp[(1) - (1)].chaine))==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }else if(is_var_cons((yyvsp[(1) - (1)].chaine))==1 || is_tableau((yyvsp[(1) - (1)].chaine))==1){
		   if(is_var_cons((yyvsp[(1) - (1)].chaine))==1) yyerror("erreur semantique on ne peut affecter une constante");
			// if(is_tableau($1)==1) yyerror("erreur semantique la variable est de nature tableau ");
			  YYABORT;
	 }else{
		  get_type((yyvsp[(1) - (1)].chaine),sauverType);

		   strcpy((yyval.struc).t,sauverType);
         use_idf((yyvsp[(1) - (1)].chaine));

			 //$$.nom=$1;

			 empiler(&maPile,(yyvsp[(1) - (1)].chaine));
			 strcpy(savee_idef,(yyvsp[(1) - (1)].chaine));

	 }



;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 383 "mini.y"
    {
	if(declarer((yyvsp[(1) - (4)].chaine))==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }else if(is_var_cons((yyvsp[(1) - (4)].chaine))==1 || is_variable((yyvsp[(1) - (4)].chaine))==1){
		   if(is_var_cons((yyvsp[(1) - (4)].chaine))==1) yyerror("erreur semantique on ne peut affecter une constante");
			 //if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			  YYABORT;
	 }else if(depardement_tableau((yyvsp[(1) - (4)].chaine),(yyvsp[(3) - (4)].entien))==0){
		 yyerror("erreur semantique dépardement de tableau  ");
		  YYABORT;
	 }else{
		 use_idf((yyvsp[(1) - (4)].chaine));
		 get_type((yyvsp[(1) - (4)].chaine),sauverType);

			strcpy((yyval.struc).t,sauverType);
			char tab[10];
			char str[10]; sprintf(str, "%d", (yyvsp[(3) - (4)].entien));
			strcpy(tab,cree_tableau(strdup((yyvsp[(1) - (4)].chaine)),strdup(str)));
		 empiler(&maPile,tab);
		  strcpy(savee_idef,(yyvsp[(1) - (4)].chaine));
	 }


;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 409 "mini.y"
    {

	if(declarer((yyvsp[(1) - (4)].chaine))==1 ||  declarer((yyvsp[(3) - (4)].chaine))==1 ){//declarer
			yyerror("erreur semantique variable non declarer");
			YYABORT;
			error++;
	 }else if(is_var_cons((yyvsp[(1) - (4)].chaine))==1 || is_variable((yyvsp[(1) - (4)].chaine))==1 ||  is_tableau((yyvsp[(3) - (4)].chaine))==1){
			 if(is_var_cons((yyvsp[(1) - (4)].chaine))==1) yyerror("erreur semantique on ne peut affecter une constante");
			 //if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			// if(is_tableau($3)==1) yyerror("erreur semantique l'indice ne peut pas etre un tableau ");
				YYABORT;
	 }else{
		 use_idf((yyvsp[(1) - (4)].chaine));
		 use_idf((yyvsp[(3) - (4)].chaine));
		 get_type((yyvsp[(1) - (4)].chaine),sauverType);

		   strcpy((yyval.struc).t,sauverType);

			 char tab[10];
 			char str[10]; sprintf(str, "%d", (yyvsp[(3) - (4)].chaine));
 			strcpy(tab,cree_tableau(strdup((yyvsp[(1) - (4)].chaine)),strdup(str)));
 		 empiler(&maPile,tab);
		  strcpy(savee_idef,(yyvsp[(1) - (4)].chaine));
	 }



;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 444 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
	         yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
	         YYABORT;
	}else{


		if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
		else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);

	 k=temporaire();
	 char tem[20];
	 sprintf(tem,"T%d",k);

   char c[10];char c1[10];
	 depiler(&maPile,c);
	 	depiler(&maPile,c1);

   ajoutquad("+",c1,c,tem);
	 quad[qc].is_exp=1;
	 empiler(&maPile,tem);






	}


;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 475 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	 else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);

	 k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	 char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);

	 ajoutquad("-",c1,c,tem);
	 quad[qc].is_exp=1;
	empiler(&maPile,tem);



 }

;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 500 "mini.y"
    { strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t); (yyval.struc).val = (yyvsp[(1) - (1)].struc).val;;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 501 "mini.y"
    {strcpy((yyval.struc).t,"CHR");empiler(&maPile,(yyvsp[(1) - (1)].chaine));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 503 "mini.y"
    {

	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
	         yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
	         YYABORT;
	}else{
		if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
		else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);

		k=temporaire();
		char tem[20];
		sprintf(tem,"T%d",k);

		char c[10];char c1[10];
		depiler(&maPile,c);
		 depiler(&maPile,c1);

		ajoutquad("*",c1,c,tem);
		quad[qc].is_exp=1;
		empiler(&maPile,tem);




	}
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 529 "mini.y"
    {


	/*if ($3.val==0){
	 yyerror("Erreur semantique : Division par ZERO- ");
	 YYERROR;
	 }else*///{

  if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
	         yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
	         YYABORT;
	}else{
		if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
		else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);

		k=temporaire();
		char tem[20];
		sprintf(tem,"T%d",k);

		char c[10];char c1[10];
		depiler(&maPile,c);
		 depiler(&maPile,c1);

		ajoutquad("/",c1,c,tem);
		quad[qc].is_exp=1;
		empiler(&maPile,tem);







	}
	// }
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 565 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t);(yyval.struc).val = (yyvsp[(1) - (1)].struc).val;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 567 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
	 printf("Erreur semantique:Exposante de Puissance doit etre de type entier");
	 YYERROR;
	 }else{

		 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
 		else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);

			k=temporaire();
			char tem[20];
			sprintf(tem,"T%d",k);

			char c[10];char c1[10];
			depiler(&maPile,c);
			 depiler(&maPile,c1);

			ajoutquad("^",c1,c,tem);
			quad[qc].is_exp=1;
			empiler(&maPile,tem);







	 }




;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 600 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t);(yyval.struc).val = (yyvsp[(1) - (1)].struc).val;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 603 "mini.y"
    {

	if(declarer((yyvsp[(1) - (1)].chaine))==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }/*else if(is_var_cons($1)==1 || is_tableau($1)==1){
		   if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 if(is_tableau($1)==1) yyerror("erreur semantique la variable est de nature tableau ");
			  YYABORT;
	 }*/else{
	// printf("hellodate %s\n",savee_idef);
	 if(strcmp(savee_idef,(yyvsp[(1) - (1)].chaine)))
		 use_idf((yyvsp[(1) - (1)].chaine));
		 get_type((yyvsp[(1) - (1)].chaine),sauverType);

		   strcpy((yyval.struc).t,sauverType);

			 empiler(&maPile,(yyvsp[(1) - (1)].chaine));



	 }


;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 629 "mini.y"
    {

	if(declarer((yyvsp[(1) - (4)].chaine))==1 ||  declarer((yyvsp[(3) - (4)].chaine))==1 ){//declarer
			yyerror("erreur semantique variable non declarer");
			YYABORT;
			error++;
	 }/*else if(is_var_cons($1)==1 || is_variable($1)==1 ||  is_tableau($3)==1){
			 if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			 if(is_tableau($3)==1) yyerror("erreur semantique l'indice ne peut pas etre un tableau ");
				YYABORT;
	 }*/else{

	 if(strcmp(savee_idef,(yyvsp[(1) - (4)].chaine)))
		 use_idf((yyvsp[(1) - (4)].chaine));
		 if(strcmp(savee_idef,(yyvsp[(3) - (4)].chaine)))
		   use_idf((yyvsp[(3) - (4)].chaine));
		 get_type((yyvsp[(1) - (4)].chaine),sauverType);

		   strcpy((yyval.struc).t,sauverType);
			 char tab[10];
			 char str[10]; sprintf(str, "%d", (yyvsp[(3) - (4)].chaine));
			 strcpy(tab,cree_tableau(strdup((yyvsp[(1) - (4)].chaine)),strdup((yyvsp[(3) - (4)].chaine))));
			empiler(&maPile,tab);
	 }

;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 656 "mini.y"
    {

	if(declarer((yyvsp[(1) - (4)].chaine))==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }/*else if(is_var_cons($1)==1 || is_variable($1)==1){
		   if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			  YYABORT;
	 }*/else if(depardement_tableau((yyvsp[(1) - (4)].chaine),(yyvsp[(3) - (4)].entien))==0){
		 yyerror("erreur semantique dépardement de tableau  ");
		  YYABORT;
	 }else{
		if(strcmp(savee_idef,(yyvsp[(1) - (4)].chaine)))
		    use_idf((yyvsp[(1) - (4)].chaine));
		 get_type((yyvsp[(1) - (4)].chaine),sauverType);

			strcpy((yyval.struc).t,sauverType);
			 	//$$.nom=cree_tableau(strdup($1),strdup($3));
				char tab[10];
				char str[10]; sprintf(str, "%d", (yyvsp[(3) - (4)].entien));
				strcpy(tab,cree_tableau(strdup((yyvsp[(1) - (4)].chaine)),strdup(str)));
			 empiler(&maPile,tab);
	 }

;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 683 "mini.y"
    {strcpy((yyval.struc).t,"INT");char str[100]; sprintf(str, "%d", (yyvsp[(1) - (1)].entien));/*strcpy($$.t,"INT");char *str; sprintf(str, "%d", $1);*/empiler(&maPile,str);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 684 "mini.y"
    {strcpy((yyval.struc).t,"FLT");(yyval.struc).val = (yyvsp[(1) - (1)].reel);char str[100]; sprintf(str, "%f", (yyvsp[(1) - (1)].reel));/*;char str[100]; sprintf(str, "%f", $1);*/empiler(&maPile,str);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 685 "mini.y"
    {strcpy((yyval.struc).t,"INT");(yyval.struc).val = (yyvsp[(1) - (1)].entien);char str[100]; sprintf(str, "%d", (yyvsp[(1) - (1)].entien));/*char *str; sprintf(str, "%d", $1);*/empiler(&maPile,str);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 686 "mini.y"
    {strcpy((yyval.struc).t,"FLT");(yyval.struc).val = (yyvsp[(1) - (1)].reel);char str[100]; sprintf(str, "%f", (yyvsp[(1) - (1)].reel));empiler(&maPile,str);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 687 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(2) - (3)].struc).t); (yyval.struc).val = (yyvsp[(2) - (3)].struc).val;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 695 "mini.y"
    {
													// END if_instruction --> update BR
													strcpy(quad[(yyvsp[(1) - (3)].cond).sauv_fin].op1,Cnum(qc)) ;
												;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 699 "mini.y"
    {


								strcpy(quad[(yyvsp[(1) - (3)].cond).sauv_deb].op1 ,Cnum(qc));//on met le mis a jour de bz


							;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 707 "mini.y"
    {
													(yyval.cond).sauv_fin = qc ;
													ajoutquad("BR","","","");
													strcpy(quad[(yyvsp[(1) - (3)].cond).sauv_deb].op1 ,Cnum(qc));

													// BEGIN of ELSE so -> update condition jump
													//strcpy(quadruplet[$1.sauv_deb].operant1 ,Cnum(qc));
												;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 716 "mini.y"
    {
													(yyval.cond).sauv_deb = qc ;
													char c1[10];
													depiler(&maPile,c1);
													ajoutquad("BZ","",c1,"");

												;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 733 "mini.y"
    {

	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);
	 k=temporaire();
	 char tem[20];
	 sprintf(tem,"T%d",k);

   char c[10];char c1[10];
	 depiler(&maPile,c);
	 	depiler(&maPile,c1);
		genrer_quad_logique(1,c1,c,tem);

	 empiler(&maPile,tem);

 }
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 754 "mini.y"
    {

	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);


	 k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	 char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(1,c1,c,tem);

	empiler(&maPile,tem);
 }
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 776 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 778 "mini.y"
    {

	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);


	 k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	 char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(2,c1,c,tem);

	empiler(&maPile,tem);
 }


;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 802 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);


	 k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	 char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(2,c1,c,tem);

	empiler(&maPile,tem);
 }
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 823 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 825 "mini.y"
    {

	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;

	}else{
	strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);
	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	//depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
  }

;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 846 "mini.y"
    {
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;

	}else{
	strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);

	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	//depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
}
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 866 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 868 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);


 	char c[10];char c1[10];
 	depiler(&maPile,c);
 	 depiler(&maPile,c1);
 	 generer_quad_comparaison("BP",c1,c);




 }

;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 888 "mini.y"
    {

	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);


	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BPZ",c1,c);


 }
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 906 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BM",c1,c);


 }
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 921 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BMZ",c1,c);


 }
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 936 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BZ",c1,c);


 }
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 951 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BNZ",c1,c);


 }
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 966 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BP",c1,c);


 }
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 981 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BPZ",c1,c);


 }
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 996 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BM",c1,c);


 }
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1011 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BMZ",c1,c);


 }
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1026 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BZ",c1,c);


 }
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1041 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);
	 char c[10];char c1[10];
  	 depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BNZ",c1,c);


 }
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1058 "mini.y"
    {

	if ((strcmp((yyvsp[(1) - (3)].struc).t,(yyvsp[(3) - (3)].struc).t)!=0)){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
		//ajoutquad("=",$3.nom," ",$1.nom);



		char c[10];char c1[10];
		depiler(&maPile,c);
		depiler(&maPile,c1);
		ajoutquad_for("=",c,"",c1);
	}



;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1078 "mini.y"
    {

	if ((strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0)){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);

		k=temporaire();
		char tem[20];
		sprintf(tem,"T%d",k);

		char c[10];
		depiler(&maPile,c);
		ajoutquad_for("+",c,"1",tem);
		ajoutquad_for("=",tem,"",c);
	}



;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1099 "mini.y"
    {

	if ((strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0)){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
}else{
	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);

	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];
	depiler(&maPile,c);
	ajoutquad_for("-",c,"1",tem);
	ajoutquad_for("=",tem,"",c);

}

;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1121 "mini.y"
    {

	char str[15];
   sprintf(str, "%d", ((yyvsp[(1) - (3)].cond).sauv_fin+2));
   ajoutquad("BR",str,"","");
		strcpy(quad[(yyvsp[(1) - (3)].cond).sauv_fin].op1,Cnum(qc)) ;



;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1131 "mini.y"
    {

	if(strcmp((yyvsp[(2) - (3)].struc).t,"INT")){
				 yyerror("Erreur semantique :identificateur doit etre un integer ");
				 YYABORT;
	}else {
		char str[15];
		sprintf(str, "%d",((yyvsp[(1) - (3)].cond).sauv_deb));
		ajoutquad("BR",str,"","");
	  strcpy(quad[(yyvsp[(1) - (3)].cond).sauv_fin+1].op1,Cnum(qc)) ;
	}


;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1145 "mini.y"
    {

 	(yyval.cond).sauv_fin = qc ;
	char c1[10];
	depiler(&maPile,c1);
	ajoutquad("BZ","",c1,"");

  ajoutquad("BR","","","");


;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1156 "mini.y"
    {
	if(strcmp((yyvsp[(3) - (4)].struc).t,"INT")){
				 yyerror("Erreur semantique :identificateur doit etre un integer ");
				 YYABORT;
	}else {
		(yyval.cond).sauv_deb=qc;
	}
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1165 "mini.y"
    {
	/*get_type($1,sauverType);*/
	if ((strcmp(sauverType,(yyvsp[(2) - (3)].struc).t)!=0)){
		 yyerror("Erreur semantique :Incompatible type ");
		 YYABORT;
	}
	k1--;

;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1174 "mini.y"
    {
	(yyval.struc).nom=(yyvsp[(3) - (4)].chaine);
	char strtype[50];
	get_type((yyvsp[(3) - (4)].chaine),strtype);
	if(declarer((yyvsp[(3) - (4)].chaine))==1){//declarer
		 yyerror("erreur semantique variable non declarer");
		 YYABORT;
		 error++;
	 }else if(is_var_cons((yyvsp[(3) - (4)].chaine))==1 || is_tableau((yyvsp[(3) - (4)].chaine))==1){
			if(is_var_cons((yyvsp[(3) - (4)].chaine))==1) yyerror("erreur semantique on ne peut affecter une constante");
			if(is_tableau((yyvsp[(3) - (4)].chaine))==1) yyerror("erreur semantique la variable est de nature tableau ");
			 YYABORT;
	}else{
		use_idf((yyvsp[(3) - (4)].chaine));
		// sauv_idef[k1].idef		=	malloc(sizeof(char*));
	strcpy(sauv_idef[k1].idef,(yyvsp[(3) - (4)].chaine));
  strcpy(sauv_idef[k1].type,strtype);
		k1++;

	}





;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1201 "mini.y"
    {qct=qc;ajoutquad("BR","","","");strcpy(quad[(yyvsp[(1) - (4)].struc).sauv_fin].op1,Cnum(qc)) ;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1201 "mini.y"
    {strcpy(quad[qct].op1,Cnum(qc)) ;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1202 "mini.y"
    {qct=qc;ajoutquad("BR","","","");	strcpy(quad[(yyvsp[(1) - (4)].struc).sauv_fin].op1,Cnum(qc)) ;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1202 "mini.y"
    {strcpy(quad[qct].op1,Cnum(qc)) ;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1203 "mini.y"
    { strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);

	 (yyval.struc).sauv_fin=qc;	 ajoutquad("BZ","","","");

;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1209 "mini.y"
    {
	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);
	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(1,c1,c,tem);

 empiler(&maPile,tem);

 }

;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1230 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
  else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);

	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(1,c1,c,tem);

 empiler(&maPile,tem);
 }


;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1252 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t)
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1255 "mini.y"
    {

	if(strcmp((yyvsp[(1) - (3)].struc).t,"CHR")==0 || strcmp((yyvsp[(3) - (3)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(1) - (3)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(1) - (3)].struc).t);
  else strcpy((yyval.struc).t,(yyvsp[(3) - (3)].struc).t);
	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(2,c1,c,tem);

 empiler(&maPile,tem);
 }


;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1277 "mini.y"
    {

	if(strcmp((yyvsp[(2) - (5)].struc).t,"CHR")==0 || strcmp((yyvsp[(4) - (5)].struc).t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp((yyvsp[(2) - (5)].struc).t,"FLT")==0) 	strcpy((yyval.struc).t,(yyvsp[(2) - (5)].struc).t);
	else strcpy((yyval.struc).t,(yyvsp[(4) - (5)].struc).t);
	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(2,c1,c,tem);

 empiler(&maPile,tem);
 }


;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1299 "mini.y"
    {
	strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t);
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1303 "mini.y"
    {

	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;
	}else{
	strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);
	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
  }
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1322 "mini.y"
    {
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;
	}else{
	strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);
	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
}
;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1340 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(1) - (1)].struc).t);
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1342 "mini.y"
    {
	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{

	strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);

	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BP",sauv_idef[k1-1].idef,c);
  }
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1356 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);
	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BPZ",sauv_idef[k1-1].idef,c);
  }

;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1368 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);
	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{

	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BM",sauv_idef[k1-1].idef,c);

  }
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1381 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);
	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BMZ",sauv_idef[k1-1].idef,c);
	}
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1392 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);
	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BZ",sauv_idef[k1-1].idef,c);
  }
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1403 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(2) - (2)].struc).t);
	if(strcmp((yyvsp[(2) - (2)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BNZ",sauv_idef[k1-1].idef,c);
  }

;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1415 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BP",sauv_idef[k1-1].idef,c);

  }
;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1427 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BPZ",sauv_idef[k1-1].idef,c);
  }
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1438 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BM",sauv_idef[k1-1].idef,c);
  }

;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1450 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BMZ",sauv_idef[k1-1].idef,c);
  }
;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1461 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BZ",sauv_idef[k1-1].idef,c);
  }
;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1472 "mini.y"
    {strcpy((yyval.struc).t,(yyvsp[(3) - (4)].struc).t);
	if(strcmp((yyvsp[(3) - (4)].struc).t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BNZ",sauv_idef[k1-1].idef,c);
  }
;}
    break;



/* Line 1455 of yacc.c  */
#line 3639 "mini.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1485 "mini.y"



int  yyerror(char *msg){

   printf(" %s a la ligne %d a la colonne %d de l'entite lexical %s\n",msg,nbligne,numcol,yytext);
    return 1;
}


int main(){
 create_table_hachage();
 yyin=fopen("test.txt","r");
 yyparse();
    printf("-----------------------------------Avant l'optimisation---------------------------------------\n");
		afficher_tables_symboles(hach_table);
     affichQuad();
		 printf("-----------------------------------Avant l'optimisation---------------------------------------\n");
		  printf("-----------------------------------Après l'optimisation---------------------------------------\n");
				propagation_version1();
				delete_redondance_version1();

				delete_bound();
		    delete_inutile_code();
				delete_idef_non_used();
				afficher_tables_symboles(hach_table);
			  affichQuad();
         printf("-----------------------------------Après l'optimisation---------------------------------------\n");


				printf("\n -------------------------------code assembleur--------------------------------------------------- \n");
				find_and_sort();
				genetate_pile();
				generate_delcaration(hach_table);
				generate_instruction();
				printf("\n -------------------------------------------------------------------------------------------------------------\n");


getchar();

 return 0;
}

