/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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
#line 34 "parser.y"

#include <stdio.h>
#include <stdlib.h>

#include "mindycomp.h"
#include "header.h"
#include "parser-inc.h"
#include "lexer-inc.h"
#include "feature.h"
#include "literal.h"
#include "src.h"
#include "sym.h"

struct token_list {
    int token;
    struct token_list *next;
} *yacc_recovery_list = NULL;

static void yyerror(char *);
static boolean verify_symbol_aux(struct id *id, struct token *against);
static void yacc_recover();
static void push_yacc_recovery(int token);
static void pop_yacc_recoveries(int count);

#define verify_symbol(id,sym) if (verify_symbol_aux(id,sym)) YYERROR



/* Line 189 of yacc.c  */
#line 101 "parser.c"

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
     HEADER_KEY = 258,
     HEADER_VAL = 259,
     HEADER_END = 260,
     DEF = 261,
     BOGUS = 262,
     SYMBOL = 263,
     KEYWORD = 264,
     SYMBOL_LITERAL = 265,
     SHARP_T = 266,
     SHARP_F = 267,
     STRING = 268,
     CHARACTER = 269,
     INTEGER = 270,
     FLOAT = 271,
     BINARY_OPERATOR = 272,
     LPAREN = 273,
     RPAREN = 274,
     COMMA = 275,
     DOT = 276,
     SEMI = 277,
     LBRACKET = 278,
     RBRACKET = 279,
     LBRACE = 280,
     RBRACE = 281,
     COLON_COLON = 282,
     MINUS = 283,
     TILDE = 284,
     EQUAL = 285,
     EQUAL_EQUAL = 286,
     ARROW = 287,
     SHARP_PAREN = 288,
     SHARP_BRACKET = 289,
     NEXT = 290,
     REST = 291,
     KEY = 292,
     ALL_KEYS = 293,
     ABOVE = 294,
     ABSTRACT = 295,
     DBEGIN = 296,
     BELOW = 297,
     BLOCK = 298,
     BY = 299,
     CASE = 300,
     CLASS = 301,
     CLEANUP = 302,
     CONCRETE = 303,
     CONSTANT = 304,
     DEFINE = 305,
     DOMAIN = 306,
     EACH_SUBCLASS = 307,
     ELSE = 308,
     ELSEIF = 309,
     END = 310,
     EXCEPTION = 311,
     FINALLY = 312,
     FOR = 313,
     FREE = 314,
     FROM = 315,
     FUNCTION = 316,
     GENERIC = 317,
     HANDLER = 318,
     IF = 319,
     IN = 320,
     INHERITED = 321,
     INLINE = 322,
     INSTANCE = 323,
     KEYED_BY = 324,
     KEYWORD_RESERVED_WORD = 325,
     LET = 326,
     LOCAL = 327,
     METHOD = 328,
     OPEN = 329,
     OTHERWISE = 330,
     PRIMARY = 331,
     REQUIRED = 332,
     SEALED = 333,
     SELECT = 334,
     SLOT = 335,
     THEN = 336,
     TO = 337,
     UNLESS = 338,
     UNTIL = 339,
     USING = 340,
     VARIABLE = 341,
     VIRTUAL = 342,
     WHILE = 343,
     MODULE = 344,
     LIBRARY = 345,
     EXPORT = 346,
     CREATE = 347,
     USE = 348,
     ALL = 349,
     PREFIX_KEYWORD = 350,
     IMPORT_KEYWORD = 351,
     EXCLUDE_KEYWORD = 352,
     EXPORT_KEYWORD = 353,
     RENAME_KEYWORD = 354,
     UNTIL_KEYWORD = 355,
     WHILE_KEYWORD = 356,
     FEATURE_IF = 357,
     FEATURE_ELSE_IF = 358,
     FEATURE_ELSE = 359,
     FEATURE_ENDIF = 360
   };
#endif
/* Tokens.  */
#define HEADER_KEY 258
#define HEADER_VAL 259
#define HEADER_END 260
#define DEF 261
#define BOGUS 262
#define SYMBOL 263
#define KEYWORD 264
#define SYMBOL_LITERAL 265
#define SHARP_T 266
#define SHARP_F 267
#define STRING 268
#define CHARACTER 269
#define INTEGER 270
#define FLOAT 271
#define BINARY_OPERATOR 272
#define LPAREN 273
#define RPAREN 274
#define COMMA 275
#define DOT 276
#define SEMI 277
#define LBRACKET 278
#define RBRACKET 279
#define LBRACE 280
#define RBRACE 281
#define COLON_COLON 282
#define MINUS 283
#define TILDE 284
#define EQUAL 285
#define EQUAL_EQUAL 286
#define ARROW 287
#define SHARP_PAREN 288
#define SHARP_BRACKET 289
#define NEXT 290
#define REST 291
#define KEY 292
#define ALL_KEYS 293
#define ABOVE 294
#define ABSTRACT 295
#define DBEGIN 296
#define BELOW 297
#define BLOCK 298
#define BY 299
#define CASE 300
#define CLASS 301
#define CLEANUP 302
#define CONCRETE 303
#define CONSTANT 304
#define DEFINE 305
#define DOMAIN 306
#define EACH_SUBCLASS 307
#define ELSE 308
#define ELSEIF 309
#define END 310
#define EXCEPTION 311
#define FINALLY 312
#define FOR 313
#define FREE 314
#define FROM 315
#define FUNCTION 316
#define GENERIC 317
#define HANDLER 318
#define IF 319
#define IN 320
#define INHERITED 321
#define INLINE 322
#define INSTANCE 323
#define KEYED_BY 324
#define KEYWORD_RESERVED_WORD 325
#define LET 326
#define LOCAL 327
#define METHOD 328
#define OPEN 329
#define OTHERWISE 330
#define PRIMARY 331
#define REQUIRED 332
#define SEALED 333
#define SELECT 334
#define SLOT 335
#define THEN 336
#define TO 337
#define UNLESS 338
#define UNTIL 339
#define USING 340
#define VARIABLE 341
#define VIRTUAL 342
#define WHILE 343
#define MODULE 344
#define LIBRARY 345
#define EXPORT 346
#define CREATE 347
#define USE 348
#define ALL 349
#define PREFIX_KEYWORD 350
#define IMPORT_KEYWORD 351
#define EXCLUDE_KEYWORD 352
#define EXPORT_KEYWORD 353
#define RENAME_KEYWORD 354
#define UNTIL_KEYWORD 355
#define WHILE_KEYWORD 356
#define FEATURE_IF 357
#define FEATURE_ELSE_IF 358
#define FEATURE_ELSE 359
#define FEATURE_ENDIF 360




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 62 "parser.y"

    struct _nothing *nothing;
    struct token *token;
    struct body *body;
    struct constituent *constituent;
    struct expr *expr;
    struct bindings *bindings;
    struct param_list *param_list;
    struct param *param;
    struct keyword_param *keyword_param;
    struct id *id;
    struct local_methods *local_methods;
    struct method *method;
    struct binop_series *binop_series;
    struct binop *binop;
    struct literal *literal;
    struct arglist *arglist;
    struct argument *argument;
    struct plist *plist;
    struct return_type_list *return_type_list;
    struct literal_list *literal_list;
    struct block_epilog *block_epilog;
    struct condition_body *condition_body;
    struct incomplete_condition_body *incomplete_condition_body;
    struct condition_clause *condition_clause;
    struct for_header *for_header;
    struct exception_clauses *exception_clauses;
    struct exception_clause *exception_clause;
    struct for_clause *for_clause;
    struct to_part *to_part;
    struct superclass_list *superclass_list;
    struct class_guts *class_guts;
    struct slot_spec *slot_spec;
    struct initarg_spec *initarg_spec;
    boolean bool;
    struct inherited_spec *inherited_spec;
    enum slot_allocation slot_allocation;
    struct gf_suffix *gf_suffix;
    flags_t flags;
    struct else_part *else_part;

    struct defnamespace_constituent *defnamespace_constituent;
    struct variable_names *variable_names;
    struct use_clause *use_clause;
    struct use_options *use_options;
    struct use_option *use_option;
    struct import_option *import_option;
    struct renamings *renamings;



/* Line 214 of yacc.c  */
#line 399 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 411 "parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  150
/* YYNRULES -- Number of rules.  */
#define YYNRULES  396
/* YYNRULES -- Number of states.  */
#define YYNSTATES  650

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   360

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    18,    19,    22,
      25,    26,    28,    30,    34,    36,    38,    40,    42,    47,
      51,    55,    60,    65,    70,    75,    78,    82,    86,    89,
      93,    96,    97,   100,   103,   106,   109,   112,   115,   118,
     121,   127,   136,   139,   143,   149,   151,   153,   157,   159,
     163,   165,   167,   169,   171,   173,   175,   177,   179,   181,
     183,   185,   187,   189,   191,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   215,   217,   219,   221,
     223,   225,   227,   229,   231,   233,   237,   240,   242,   244,
     246,   248,   250,   252,   254,   256,   258,   260,   263,   266,
     270,   272,   274,   276,   278,   281,   284,   286,   288,   290,
     295,   300,   302,   306,   310,   312,   313,   315,   317,   321,
     323,   326,   328,   330,   332,   334,   336,   338,   340,   344,
     348,   352,   354,   357,   361,   362,   364,   366,   370,   372,
     374,   375,   381,   382,   392,   393,   399,   400,   410,   411,
     421,   422,   432,   433,   442,   443,   452,   453,   462,   463,
     465,   469,   471,   473,   476,   479,   482,   485,   487,   491,
     492,   494,   496,   499,   503,   510,   519,   523,   526,   530,
     534,   537,   541,   545,   549,   553,   559,   567,   571,   577,
     583,   591,   597,   600,   603,   606,   609,   616,   617,   620,
     623,   626,   635,   637,   641,   642,   645,   647,   649,   651,
     655,   659,   663,   671,   672,   675,   678,   679,   682,   683,
     686,   691,   693,   694,   700,   701,   703,   705,   707,   709,
     710,   712,   716,   721,   726,   732,   734,   738,   744,   745,
     748,   750,   751,   755,   758,   760,   764,   766,   769,   770,
     773,   775,   777,   781,   785,   789,   792,   797,   803,   809,
     815,   821,   826,   832,   836,   842,   843,   846,   848,   853,
     855,   859,   861,   865,   866,   869,   871,   872,   876,   879,
     881,   885,   889,   891,   895,   897,   900,   902,   906,   908,
     911,   914,   915,   918,   920,   922,   926,   930,   935,   941,
     942,   944,   945,   948,   949,   952,   958,   959,   961,   962,
     964,   967,   969,   971,   973,   977,   981,   985,   988,   991,
     995,   996,  1000,  1002,  1004,  1006,  1008,  1010,  1013,  1016,
    1021,  1022,  1024,  1026,  1030,  1034,  1040,  1043,  1046,  1049,
    1053,  1058,  1062,  1068,  1071,  1075,  1077,  1081,  1087,  1088,
    1090,  1091,  1093,  1096,  1098,  1100,  1104,  1108,  1109,  1111,
    1112,  1114,  1115,  1117,  1118,  1120,  1121,  1123,  1124,  1126,
    1127,  1129,  1130,  1132,  1133,  1135,  1136,  1138,  1139,  1141,
    1142,  1144,  1145,  1147,  1148,  1150,  1151,  1153,  1154,  1156,
    1157,  1159,  1160,  1162,  1163,  1165,  1166
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     107,     0,    -1,   108,   110,    -1,     5,    -1,   109,     5,
      -1,     3,     4,    -1,   109,     3,     4,    -1,    -1,   111,
     113,    -1,   114,   248,    -1,    -1,   112,    -1,   115,    -1,
     114,    22,   115,    -1,   116,    -1,   118,    -1,   127,    -1,
       1,    -1,    50,   117,    46,   167,    -1,   117,    46,   167,
      -1,    50,    49,   119,    -1,    50,   117,    51,   181,    -1,
      50,   117,    62,   182,    -1,    50,   117,    61,   192,    -1,
      50,   117,    73,   193,    -1,     6,   193,    -1,    50,    86,
     119,    -1,    50,    89,   213,    -1,    89,   213,    -1,    50,
      90,   232,    -1,    90,   232,    -1,    -1,   117,    78,    -1,
     117,    74,    -1,   117,    40,    -1,   117,    48,    -1,   117,
      76,    -1,   117,    59,    -1,   117,    67,    -1,    71,   119,
      -1,    71,    63,   122,    30,   127,    -1,    71,    63,    18,
     127,   179,    19,    30,   127,    -1,    72,   124,    -1,   121,
      30,   127,    -1,    18,   120,    19,    30,   127,    -1,   205,
      -1,   121,    -1,   121,    20,   120,    -1,   122,    -1,   122,
      27,   130,    -1,   123,    -1,    61,    -1,     8,    -1,    39,
      -1,    40,    -1,    44,    -1,    46,    -1,    48,    -1,    49,
      -1,    51,    -1,    52,    -1,    59,    -1,    60,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    74,    -1,    76,    -1,    78,    -1,    80,    -1,    81,
      -1,    82,    -1,    85,    -1,    86,    -1,    87,    -1,    89,
      -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,
      -1,   125,    -1,   124,    20,   125,    -1,   247,   193,    -1,
       9,    -1,    95,    -1,    96,    -1,    97,    -1,    98,    -1,
      99,    -1,   100,    -1,   101,    -1,   126,    -1,   130,    -1,
     130,   128,    -1,   129,   130,    -1,   128,   129,   130,    -1,
      17,    -1,    28,    -1,    30,    -1,    31,    -1,    28,   130,
      -1,    29,   130,    -1,   131,    -1,   135,    -1,   122,    -1,
     131,    23,   132,    24,    -1,   131,    18,   132,    19,    -1,
     191,    -1,   131,    21,   122,    -1,    18,   127,    19,    -1,
     141,    -1,    -1,   133,    -1,   134,    -1,   133,    20,   134,
      -1,   127,    -1,   126,   127,    -1,    11,    -1,    12,    -1,
     136,    -1,    14,    -1,    15,    -1,    16,    -1,    10,    -1,
      33,   137,    19,    -1,    33,   138,    19,    -1,    34,   138,
      24,    -1,    13,    -1,   136,    13,    -1,   139,    21,   140,
      -1,    -1,   139,    -1,   140,    -1,   139,    20,   140,    -1,
     135,    -1,   126,    -1,    -1,    41,   142,   113,    55,   236,
      -1,    -1,    43,    18,   251,    19,   143,   112,   151,    55,
     237,    -1,    -1,    45,   144,   153,    55,   238,    -1,    -1,
      64,    18,   127,    19,   145,   112,   254,    55,   239,    -1,
      -1,    58,    18,   154,    19,   146,   113,   255,    55,   240,
      -1,    -1,    79,    18,   127,   253,    19,   147,   153,    55,
     241,    -1,    -1,    83,    18,   127,    19,   148,   112,    55,
     242,    -1,    -1,    84,    18,   127,    19,   149,   113,    55,
     243,    -1,    -1,    88,    18,   127,    19,   150,   113,    55,
     244,    -1,    -1,   152,    -1,   155,   163,   155,    -1,   156,
      -1,   158,    -1,    84,   127,    -1,   100,   127,    -1,    88,
     127,    -1,   101,   127,    -1,   161,    -1,   161,    20,   154,
      -1,    -1,   156,    -1,   157,    -1,   156,   157,    -1,    56,
     122,   112,    -1,    56,    18,   127,   179,    19,   112,    -1,
      56,    18,   122,    27,   127,   179,    19,   112,    -1,    75,
     249,   112,    -1,   160,   248,    -1,   160,    22,   158,    -1,
     160,    22,   159,    -1,   115,   248,    -1,   115,    22,   158,
      -1,   115,    22,   159,    -1,   127,    32,   115,    -1,   127,
      20,   160,    -1,   121,    30,   127,    81,   127,    -1,    18,
     120,    19,    30,   127,    81,   127,    -1,   121,    65,   127,
      -1,   121,    69,   121,    65,   127,    -1,   121,    65,   127,
      85,   121,    -1,   121,    69,   121,    65,   127,    85,   121,
      -1,   121,    60,   127,   166,   253,    -1,    44,   127,    -1,
      47,   112,    -1,    57,   112,    -1,    53,   112,    -1,    54,
      18,   127,    19,   112,   254,    -1,    -1,    82,   127,    -1,
      39,   127,    -1,    42,   127,    -1,   122,    18,   168,    19,
     169,    55,   245,   250,    -1,   127,    -1,   168,    20,   127,
      -1,    -1,   170,   248,    -1,   171,    -1,   175,    -1,   177,
      -1,   170,    22,   171,    -1,   170,    22,   175,    -1,   170,
      22,   177,    -1,   172,   178,    80,   122,   174,   173,   179,
      -1,    -1,   117,    78,    -1,   117,    49,    -1,    -1,    30,
     127,    -1,    -1,    27,   130,    -1,   176,    70,     9,   179,
      -1,    77,    -1,    -1,    66,    80,   122,   173,   179,    -1,
      -1,    68,    -1,    46,    -1,    52,    -1,    87,    -1,    -1,
     180,    -1,    20,   126,   127,    -1,   180,    20,   126,   127,
      -1,   122,    18,   132,    19,    -1,   122,    18,   184,    19,
     183,    -1,   179,    -1,    32,   198,   179,    -1,    32,    18,
     196,    19,   179,    -1,    -1,   201,   185,    -1,   186,    -1,
      -1,    20,   201,   185,    -1,    20,   186,    -1,   205,    -1,
     205,    20,   187,    -1,   187,    -1,    37,   188,    -1,    -1,
      20,    38,    -1,   189,    -1,   190,    -1,   190,    20,    38,
      -1,   190,    20,   189,    -1,   126,   251,   211,    -1,   122,
     211,    -1,    73,   194,    55,   247,    -1,   122,   194,    55,
      61,    61,    -1,   122,   194,    55,   246,   252,    -1,   122,
     194,    55,   247,   251,    -1,    18,   199,    19,   195,   112,
      -1,    18,   199,    19,   195,    -1,    18,   199,    19,   248,
     113,    -1,    32,   196,    22,    -1,    32,    18,   196,    19,
     248,    -1,    -1,    36,   198,    -1,   197,    -1,   197,    20,
      36,   198,    -1,   198,    -1,   197,    20,   198,    -1,   122,
      -1,   122,    27,   127,    -1,    -1,   201,   200,    -1,   202,
      -1,    -1,    20,   201,   200,    -1,    20,   202,    -1,   122,
      -1,   122,    27,   127,    -1,   122,    31,   127,    -1,   203,
      -1,   203,    20,   204,    -1,   204,    -1,    35,   122,    -1,
     205,    -1,   205,    20,   206,    -1,   206,    -1,    36,   122,
      -1,    37,   207,    -1,    -1,    20,    38,    -1,   208,    -1,
     209,    -1,   209,    20,    38,    -1,   209,    20,   208,    -1,
     210,   122,   211,   212,    -1,   210,   122,    18,   127,    19,
      -1,    -1,   126,    -1,    -1,    27,   130,    -1,    -1,    30,
     127,    -1,   122,   215,    55,   214,   250,    -1,    -1,    89,
      -1,    -1,   216,    -1,   216,    22,    -1,   219,    -1,   217,
      -1,   218,    -1,   216,    22,   219,    -1,   216,    22,   217,
      -1,   216,    22,   218,    -1,    91,   231,    -1,    92,   231,
      -1,    93,   122,   220,    -1,    -1,   220,    20,   221,    -1,
     222,    -1,   223,    -1,   226,    -1,   228,    -1,   227,    -1,
      95,    13,    -1,    96,    94,    -1,    96,    25,   224,    26,
      -1,    -1,   225,    -1,   122,    -1,   122,    32,   122,    -1,
     225,    20,   122,    -1,   225,    20,   122,    32,   122,    -1,
      97,   230,    -1,    98,    94,    -1,    98,   230,    -1,    99,
      25,    26,    -1,    99,    25,   229,    26,    -1,   122,    32,
     122,    -1,   229,    20,   122,    32,   122,    -1,    25,    26,
      -1,    25,   231,    26,    -1,   122,    -1,   231,    20,   122,
      -1,   122,   234,    55,   233,   250,    -1,    -1,    90,    -1,
      -1,   235,    -1,   235,    22,    -1,   219,    -1,   217,    -1,
     235,    22,   219,    -1,   235,    22,   217,    -1,    -1,    41,
      -1,    -1,    43,    -1,    -1,    45,    -1,    -1,    64,    -1,
      -1,    58,    -1,    -1,    79,    -1,    -1,    83,    -1,    -1,
      84,    -1,    -1,    88,    -1,    -1,    46,    -1,    -1,    61,
      -1,    -1,    73,    -1,    -1,    22,    -1,    -1,    32,    -1,
      -1,     8,    -1,    -1,   122,    -1,    -1,   123,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   164,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   294,   294,   298,   299,   303,   305,   310,   310,   315,
     319,   320,   325,   327,   332,   333,   334,   335,   339,   341,
     343,   345,   347,   349,   351,   353,   355,   357,   359,   361,
     363,   368,   369,   370,   371,   372,   373,   374,   375,   379,
     381,   385,   389,   394,   396,   401,   403,   405,   410,   411,
     416,   417,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   456,   457,   462,   466,   467,   468,
     469,   470,   471,   472,   473,   477,   478,   479,   484,   485,
     489,   490,   491,   492,   496,   497,   498,   502,   503,   504,
     506,   508,   509,   513,   514,   518,   519,   523,   524,   528,
     529,   534,   535,   536,   537,   538,   539,   540,   541,   543,
     545,   550,   551,   555,   561,   562,   567,   568,   573,   574,
     578,   578,   583,   582,   591,   591,   595,   595,   600,   600,
     605,   605,   609,   609,   614,   614,   619,   619,   628,   629,
     633,   635,   640,   644,   647,   649,   653,   655,   657,   662,
     663,   667,   669,   674,   682,   686,   694,   699,   701,   703,
     708,   710,   712,   717,   719,   724,   727,   730,   732,   734,
     736,   738,   742,   743,   744,   747,   748,   756,   757,   758,
     759,   763,   772,   774,   779,   780,   784,   786,   788,   790,
     792,   794,   799,   810,   811,   812,   816,   817,   821,   822,
     826,   831,   832,   836,   846,   847,   848,   849,   850,   854,
     855,   859,   861,   866,   873,   880,   882,   888,   893,   894,
     896,   901,   902,   904,   909,   911,   913,   918,   922,   923,
     925,   929,   931,   934,   939,   941,   946,   951,   956,   964,
     972,   976,   980,   987,   989,   995,   996,   998,  1000,  1005,
    1007,  1012,  1015,  1019,  1020,  1021,  1026,  1027,  1029,  1034,
    1036,  1038,  1044,  1046,  1048,  1053,  1057,  1059,  1061,  1066,
    1070,  1075,  1076,  1078,  1082,  1084,  1087,  1092,  1095,  1104,
    1105,  1109,  1110,  1114,  1115,  1119,  1134,  1135,  1139,  1140,
    1141,  1145,  1147,  1149,  1151,  1153,  1155,  1160,  1164,  1168,
    1173,  1174,  1179,  1180,  1181,  1182,  1183,  1187,  1192,  1194,
    1199,  1200,  1204,  1206,  1208,  1210,  1215,  1220,  1222,  1227,
    1230,  1235,  1237,  1242,  1243,  1248,  1250,  1255,  1270,  1271,
    1275,  1276,  1277,  1281,  1283,  1285,  1287,  1292,  1292,  1293,
    1293,  1294,  1294,  1295,  1295,  1296,  1296,  1297,  1297,  1298,
    1298,  1299,  1299,  1300,  1300,  1301,  1301,  1302,  1302,  1303,
    1303,  1304,  1304,  1305,  1305,  1307,  1307,  1308,  1308,  1310,
    1311,  1314,  1314,  1315,  1315,  1316,  1316
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HEADER_KEY", "HEADER_VAL", "HEADER_END",
  "DEF", "BOGUS", "SYMBOL", "KEYWORD", "SYMBOL_LITERAL", "SHARP_T",
  "SHARP_F", "STRING", "CHARACTER", "INTEGER", "FLOAT", "BINARY_OPERATOR",
  "LPAREN", "RPAREN", "COMMA", "DOT", "SEMI", "LBRACKET", "RBRACKET",
  "LBRACE", "RBRACE", "COLON_COLON", "MINUS", "TILDE", "EQUAL",
  "EQUAL_EQUAL", "ARROW", "SHARP_PAREN", "SHARP_BRACKET", "NEXT", "REST",
  "KEY", "ALL_KEYS", "ABOVE", "ABSTRACT", "DBEGIN", "BELOW", "BLOCK", "BY",
  "CASE", "CLASS", "CLEANUP", "CONCRETE", "CONSTANT", "DEFINE", "DOMAIN",
  "EACH_SUBCLASS", "ELSE", "ELSEIF", "END", "EXCEPTION", "FINALLY", "FOR",
  "FREE", "FROM", "FUNCTION", "GENERIC", "HANDLER", "IF", "IN",
  "INHERITED", "INLINE", "INSTANCE", "KEYED_BY", "KEYWORD_RESERVED_WORD",
  "LET", "LOCAL", "METHOD", "OPEN", "OTHERWISE", "PRIMARY", "REQUIRED",
  "SEALED", "SELECT", "SLOT", "THEN", "TO", "UNLESS", "UNTIL", "USING",
  "VARIABLE", "VIRTUAL", "WHILE", "MODULE", "LIBRARY", "EXPORT", "CREATE",
  "USE", "ALL", "PREFIX_KEYWORD", "IMPORT_KEYWORD", "EXCLUDE_KEYWORD",
  "EXPORT_KEYWORD", "RENAME_KEYWORD", "UNTIL_KEYWORD", "WHILE_KEYWORD",
  "FEATURE_IF", "FEATURE_ELSE_IF", "FEATURE_ELSE", "FEATURE_ENDIF",
  "$accept", "dylan_file", "dylan_headers", "header_list", "dylan_program",
  "$@1", "body", "body_opt", "constituents", "constituent",
  "defining_form", "flags", "local_declaration", "bindings", "variables",
  "variable", "variable_name", "any_variable_name_except_function",
  "local_methods", "local_method", "keyword", "expression", "binop_series",
  "binop", "operand", "leaf", "arguments_opt", "arguments", "argument",
  "constant", "concat_string", "dotted_list", "literals_opt", "literals",
  "literal", "statement", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "block_epilog_opt", "block_epilog", "condition_body",
  "for_header", "exception_clauses_opt", "exception_clauses",
  "exception_clause", "complete_condition_clauses",
  "incomplete_condition_clauses", "condition_clause", "for_clause",
  "by_part", "cleanup_part", "final_part", "else_part", "to_part_opt",
  "class_definition", "superclasses", "class_guts_opt", "class_guts",
  "slot_spec", "slot_adjectives", "slot_init_expr_opt", "slot_type_opt",
  "initarg_spec", "required_opt", "inherited_spec", "allocation",
  "property_list_opt", "property_list", "sealed_domain",
  "generic_function_definition", "gf_suffix", "gf_parameters",
  "more_gf_parameters", "gf_rest_parameters", "gf_keyword_parameters_list",
  "gf_keyword_parameters_opt", "gf_keyword_parameters",
  "gf_keyword_parameter", "anonymous_method", "named_function",
  "named_method", "method_description", "return_type", "return_type_list",
  "return_type_list_head", "return_type_element", "parameters",
  "more_parameters", "positional_parameter", "next_parameters",
  "next_parameter", "rest_parameters", "rest_parameter",
  "keyword_parameters_list", "keyword_parameters_opt",
  "keyword_parameters", "keyword_parameter", "keyword_opt",
  "keyword_parameter_type", "keyword_parameter_default",
  "module_definition", "module_opt", "module_clauses_opt",
  "module_clauses", "export_clause", "create_clause", "use_clause",
  "module_use_options", "module_use_option", "prefix_option",
  "import_option", "imports_opt", "imports", "exclude_option",
  "export_option", "rename_option", "rename_specs", "variable_name_set",
  "variable_names", "library_definition", "library_opt",
  "library_clauses_opt", "library_clauses", "begin_opt", "block_opt",
  "case_opt", "if_opt", "for_opt", "select_opt", "unless_opt", "until_opt",
  "while_opt", "class_opt", "function_opt", "method_opt", "semi_opt",
  "arrow_opt", "symbol_opt", "variable_name_opt",
  "any_variable_name_except_function_opt", "by_part_opt", "else_part_opt",
  "final_part_opt", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   108,   108,   109,   109,   111,   110,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   118,   119,   119,   120,   120,   120,   121,   121,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   129,   129,   130,   130,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   137,   138,   138,   139,   139,   140,   140,
     142,   141,   143,   141,   144,   141,   145,   141,   146,   141,
     147,   141,   148,   141,   149,   141,   150,   141,   151,   151,
     152,   152,   153,   154,   154,   154,   154,   154,   154,   155,
     155,   156,   156,   157,   157,   157,   158,   158,   158,   158,
     159,   159,   159,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   162,   163,   164,   165,   165,   166,   166,   166,
     166,   167,   168,   168,   169,   169,   170,   170,   170,   170,
     170,   170,   171,   172,   172,   172,   173,   173,   174,   174,
     175,   176,   176,   177,   178,   178,   178,   178,   178,   179,
     179,   180,   180,   181,   182,   183,   183,   183,   184,   184,
     184,   185,   185,   185,   186,   186,   186,   187,   188,   188,
     188,   189,   189,   189,   190,   190,   191,   192,   192,   193,
     194,   194,   194,   195,   195,   196,   196,   196,   196,   197,
     197,   198,   198,   199,   199,   199,   200,   200,   200,   201,
     201,   201,   202,   202,   202,   203,   204,   204,   204,   205,
     206,   207,   207,   207,   208,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   214,   214,   215,   215,
     215,   216,   216,   216,   216,   216,   216,   217,   218,   219,
     220,   220,   221,   221,   221,   221,   221,   222,   223,   223,
     224,   224,   225,   225,   225,   225,   226,   227,   227,   228,
     228,   229,   229,   230,   230,   231,   231,   232,   233,   233,
     234,   234,   234,   235,   235,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   250,   251,   251,   252,
     252,   253,   253,   254,   254,   255,   255
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     3,     0,     2,     2,
       0,     1,     1,     3,     1,     1,     1,     1,     4,     3,
       3,     4,     4,     4,     4,     2,     3,     3,     2,     3,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       5,     8,     2,     3,     5,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     4,
       4,     1,     3,     3,     1,     0,     1,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     2,     3,     0,     1,     1,     3,     1,     1,
       0,     5,     0,     9,     0,     5,     0,     9,     0,     9,
       0,     9,     0,     8,     0,     8,     0,     8,     0,     1,
       3,     1,     1,     2,     2,     2,     2,     1,     3,     0,
       1,     1,     2,     3,     6,     8,     3,     2,     3,     3,
       2,     3,     3,     3,     3,     5,     7,     3,     5,     5,
       7,     5,     2,     2,     2,     2,     6,     0,     2,     2,
       2,     8,     1,     3,     0,     2,     1,     1,     1,     3,
       3,     3,     7,     0,     2,     2,     0,     2,     0,     2,
       4,     1,     0,     5,     0,     1,     1,     1,     1,     0,
       1,     3,     4,     4,     5,     1,     3,     5,     0,     2,
       1,     0,     3,     2,     1,     3,     1,     2,     0,     2,
       1,     1,     3,     3,     3,     2,     4,     5,     5,     5,
       5,     4,     5,     3,     5,     0,     2,     1,     4,     1,
       3,     1,     3,     0,     2,     1,     0,     3,     2,     1,
       3,     3,     1,     3,     1,     2,     1,     3,     1,     2,
       2,     0,     2,     1,     1,     3,     3,     4,     5,     0,
       1,     0,     2,     0,     2,     5,     0,     1,     0,     1,
       2,     1,     1,     1,     3,     3,     3,     2,     2,     3,
       0,     3,     1,     1,     1,     1,     1,     2,     2,     4,
       0,     1,     1,     3,     3,     5,     2,     2,     2,     3,
       4,     3,     5,     2,     3,     1,     3,     5,     0,     1,
       0,     1,     2,     1,     1,     3,     3,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     3,     0,     7,     0,     5,     1,     2,     0,
       0,     4,    17,     0,    52,    87,   127,   121,   122,   131,
     124,   125,   126,     0,     0,     0,   134,   134,    53,    54,
     140,     0,    55,   144,    56,    57,    58,    31,    59,    60,
       0,    61,    62,    51,     0,    63,    64,    65,    66,    67,
      68,     0,   379,     0,    69,    70,    71,     0,    72,    73,
      74,     0,     0,    75,    76,    77,     0,    78,    79,    80,
      81,    82,    83,    88,    89,    90,    91,    92,    93,    94,
      11,     8,   381,    12,    14,     0,    15,   108,    50,    95,
      16,    96,   106,   107,   123,   114,   111,     6,    78,    79,
       0,    25,     0,   104,   105,   139,   138,     0,     0,   135,
     136,     0,   135,     0,   387,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,    48,   380,    42,
      84,     0,   273,     0,     0,     0,     0,     0,   308,    28,
     350,    30,     0,     9,    34,     0,    35,    37,    38,    33,
      36,    32,   100,   101,   102,   103,    97,     0,   115,     0,
     115,   132,     0,   113,   128,   129,     0,     0,   130,     0,
     388,     0,   383,     0,     0,   162,   381,    20,    26,    27,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,    46,    45,     0,
       0,     0,     0,   379,    86,     0,   299,   279,     0,   276,
     275,   282,   284,   286,   288,   379,   391,     0,     0,     0,
       0,     0,     0,     0,   309,   312,   313,   311,   354,   353,
       0,   351,    13,     0,    19,     0,    98,    95,   119,     0,
     116,   117,   112,     0,   379,   137,   133,   357,   142,   384,
       0,     0,     0,   361,     0,   177,    18,     0,    21,     0,
      23,     0,    22,    24,     0,   163,   165,   164,   166,     0,
       0,     0,     0,   148,     0,   146,   289,     0,     0,   229,
       0,    43,    49,    85,   285,     0,   300,   290,   293,   294,
       0,     0,     0,   381,     0,   274,     0,     0,   256,     0,
     392,     0,   152,   154,   156,   345,   317,   318,   320,   306,
     310,   348,   352,     0,    99,   120,   110,     0,   109,   387,
     358,   141,     0,   176,   184,   183,   362,   145,   381,    16,
     178,   179,   115,     0,   238,     0,     0,   197,   187,     0,
       0,   168,     0,     0,    47,     0,     0,   230,    40,   292,
     299,   301,   280,   281,   382,   265,     0,     0,   276,   278,
     283,   287,   192,   150,     0,     0,     0,     0,   319,   307,
     385,   315,   316,   314,   349,   385,   356,   355,   202,     0,
     118,   259,   158,     0,   180,     0,   377,   248,     0,   240,
     246,   241,   244,     0,     0,     0,     0,     0,   391,     0,
       0,   395,   393,    44,     0,     0,     0,   295,   296,     0,
       0,   303,   265,     0,   271,     0,   267,   269,   260,   262,
     277,     0,     0,     0,     0,   346,     0,   386,   305,   347,
      31,     0,     0,     0,   159,     0,   161,   171,   181,   182,
     233,   378,   389,     0,   301,   387,   247,   250,   251,   229,
       0,   239,     0,     0,   185,   199,   200,   198,   191,   189,
     188,     0,   396,     0,     0,     0,   394,     0,   231,     0,
       0,     0,   302,     0,   297,     0,   266,     0,   263,     0,
       0,   369,   371,   373,     0,     0,     0,     0,     0,   321,
     322,   323,   324,   326,   325,     0,   221,     0,     0,   381,
     206,   224,   207,     0,   208,   203,     0,     0,   359,     0,
     169,   172,   257,   390,   258,   249,   255,   301,     0,     0,
     235,   234,   243,   241,   245,     0,     0,   194,   365,   195,
       0,   363,    41,   232,   298,   304,   381,   272,     0,   270,
     367,   370,   153,   372,   155,   374,   157,   327,   330,   328,
       0,   336,   337,   338,     0,     0,   215,    32,   375,    31,
     205,   226,   227,   225,   228,     0,     0,   108,   229,   173,
     360,   143,   193,   160,   170,   254,   252,   253,   265,   229,
     242,   186,   190,   366,   149,     0,   364,   147,   264,   268,
     368,   151,   332,     0,   331,   343,     0,   339,     0,     0,
     216,   376,   385,   209,   210,   211,     0,   229,     0,     0,
       0,   236,     0,     0,   329,     0,   344,     0,     0,   340,
       0,   229,   201,   218,   220,   229,     0,   229,   393,   333,
     334,   341,     0,   217,   223,     0,   216,     0,   174,   237,
     196,     0,     0,   219,   229,     0,   335,   342,   212,   175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     8,     9,    80,    81,    82,    83,
      84,    85,    86,   125,   196,   126,    87,    88,   129,   130,
      89,    90,   156,   157,    91,    92,   239,   240,   241,    93,
      94,   107,   108,   109,   110,    95,   113,   322,   115,   342,
     340,   421,   364,   365,   366,   433,   434,   174,   192,   435,
     436,   437,   175,   331,   176,   193,   300,   510,   462,   466,
     398,   234,   379,   498,   499,   500,   501,   621,   636,   502,
     503,   504,   565,   346,   347,   258,   262,   521,   388,   451,
     389,   390,   446,   447,   448,    96,   260,   101,   133,   356,
     415,   416,   417,   208,   295,   209,   210,   211,   212,   198,
     214,   287,   288,   289,   290,   411,   474,   139,   370,   223,
     224,   225,   226,   227,   368,   489,   490,   491,   593,   594,
     492,   493,   494,   599,   551,   306,   141,   375,   230,   231,
     321,   571,   327,   587,   584,   591,   542,   544,   546,   602,
     442,   131,   143,   250,   428,   171,   514,   301,   467,   463
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -427
static const yytype_int16 yypact[] =
{
      55,    36,  -427,    44,  -427,   111,  -427,  -427,  -427,   778,
      75,  -427,  -427,  2624,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  1471,  1788,  1788,   449,   449,  -427,  -427,
    -427,    64,  -427,  -427,  -427,  -427,  -427,    50,  -427,  -427,
      95,  -427,  -427,  -427,   126,  -427,  -427,  -427,  -427,  -427,
    -427,  1916,    84,   141,  -427,  -427,  -427,   149,  -427,  -427,
    -427,   169,   172,  -427,  -427,  -427,   175,  2624,  2624,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,   191,  -427,  -427,   242,  -427,  -427,  -427,  -427,
    -427,    98,   173,  -427,   204,  -427,  -427,  -427,  -427,  -427,
     141,  -427,   207,  -427,  -427,  -427,  -427,   208,   213,   117,
    -427,    93,   222,  1081,  2624,  1377,  2109,  2109,  2624,  2624,
     329,  1694,  1471,   575,  2174,  -427,   214,   216,  -427,   225,
    -427,  2624,  1851,   192,  1471,  1471,  1471,  1471,    73,  -427,
      54,  -427,   676,  -427,  -427,  2624,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,    98,  1788,  1471,  2624,
    1471,  -427,   193,  -427,  -427,  -427,   449,   449,  -427,   194,
    -427,   227,   218,    14,   196,  -427,   230,  -427,  -427,  -427,
    -427,  2624,  2624,  2624,  2624,  2624,   575,  1471,  1471,  1471,
    1471,    27,   234,   235,   238,  2624,   243,   244,  -427,  1471,
     224,  1471,  1788,    84,  -427,  2624,   251,    10,   249,   252,
    -427,   253,  -427,   255,  -427,    84,   219,   250,   259,   260,
    2624,  2624,  2624,   229,   258,  -427,  -427,  -427,  -427,  -427,
     231,   263,  -427,   269,  -427,  1788,  -427,  1471,  -427,   270,
     271,  -427,  -427,   272,    84,  -427,  -427,   254,  -427,  -427,
    1283,  1471,  1283,   248,   879,  -427,  -427,   276,  -427,   141,
    -427,   279,  -427,  -427,   283,  -427,  -427,  -427,  -427,  1471,
    1471,  1471,  2624,  -427,  1694,  -427,  -427,   268,   575,   284,
    1471,  -427,  -427,  -427,  -427,   265,  -427,  -427,  -427,   285,
    2624,  1471,  1471,    39,  1851,  -427,    57,   273,  -427,  1471,
    -427,   288,  -427,  -427,  -427,  -427,   297,   297,  -427,   233,
      73,   237,    54,  1471,  -427,  -427,  -427,  1471,  -427,  2624,
    -427,  -427,  1283,  -427,  -427,  -427,  -427,  -427,   286,    14,
    -427,  -427,  1471,   264,  1979,   293,   257,    -7,   239,   266,
     980,  -427,  1283,  1471,  -427,   124,   306,   309,  -427,  -427,
     139,    18,  -427,  -427,  -427,  2044,  1182,  1081,   252,  -427,
    -427,  -427,  -427,  -427,  1283,  1081,  1081,  2624,   312,  -427,
     326,  -427,  -427,  -427,  -427,   326,  -427,  -427,  -427,   178,
    -427,  -427,    51,   879,  -427,   317,   278,  1565,   322,  -427,
    -427,   323,   324,  1471,  1471,  1471,  1471,  1471,   219,  2624,
    1471,   296,   157,  -427,  1471,   315,   124,  -427,  -427,  1471,
    1788,   325,  2237,  2624,   330,   334,   338,  -427,  -427,  -427,
    -427,  1377,   304,   305,   307,  -427,   107,  -427,  -427,  -427,
      -4,  1471,  2302,   313,  -427,   314,    65,  -427,  -427,  -427,
    -427,   310,  2680,   335,   345,  2624,  -427,  -427,   361,    58,
    1979,  -427,   346,   301,  -427,  -427,  -427,  -427,  -427,  -427,
     299,  1283,  -427,   337,  1283,   367,  -427,   339,  -427,  1471,
    1471,   376,  -427,  1471,  -427,   379,  -427,  1471,  -427,  2365,
     349,   318,   327,   320,   393,     3,   384,     8,   388,  -427,
    -427,  -427,  -427,  -427,  -427,   336,  -427,   375,   362,   396,
    -427,     4,  -427,   350,  -427,  -427,  1471,  1283,   378,  1283,
     366,  -427,  -427,  -427,  -427,  -427,  -427,   345,  1629,  2430,
    -427,  -427,  -427,   323,  -427,  1471,  2624,  -427,   368,  -427,
    1471,   363,  -427,  -427,  -427,  -427,   403,  -427,  2624,  -427,
     351,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  2624,  -427,
    2499,  -427,  -427,  -427,  2568,  2624,  -427,     1,   383,    -3,
    -427,  -427,  -427,  -427,  -427,   353,   426,   409,   284,  -427,
    -427,  -427,  -427,  -427,   366,  -427,  -427,  -427,  2237,   284,
    -427,  -427,  -427,  -427,  -427,   419,  -427,  -427,  -427,  -427,
    -427,  -427,   407,   414,   421,  -427,    60,  -427,   411,   104,
     415,  -427,   326,  -427,  -427,  -427,  2624,   284,  1471,   425,
     431,  -427,  1283,  2624,  -427,  2624,  -427,  2624,  2624,  -427,
    1471,   284,  -427,   427,  -427,   284,  1283,   284,   157,  -427,
     420,  -427,   423,  -427,  -427,  1788,   415,   437,  -427,  -427,
    -427,  2624,  2624,  -427,   284,  1283,  -427,  -427,  -427,  -427
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -427,  -427,  -427,  -427,  -427,  -427,  -233,   -99,  -427,  -127,
    -427,   -33,  -427,    99,  -156,  -116,   -13,    25,  -427,   267,
     -17,   177,  -427,   316,   -23,  -427,  -147,  -427,   154,    -6,
    -427,  -427,   446,   447,    63,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,    56,   201,   -32,
     -31,  -411,  -232,    97,   236,  -427,  -427,  -427,  -427,  -427,
    -427,   300,  -427,  -427,  -427,   -75,  -427,  -151,  -427,   -73,
    -427,   -71,  -427,  -426,  -427,  -427,  -427,  -427,  -427,   -34,
      41,    40,  -427,   -22,  -427,  -427,  -427,  -100,   -76,  -427,
    -394,  -427,  -384,  -427,   137,  -275,   203,  -427,   202,  -120,
     205,  -427,   150,  -427,  -427,  -417,  -427,   381,  -427,  -427,
    -427,  -132,   197,  -124,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,    16,  -210,   385,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -176,  -173,  -427,  -369,  -293,  -427,   110,  -118,  -427
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -383
static const yytype_int16 yytable[] =
{
     100,   103,   104,   255,   120,   191,   429,   197,   228,   105,
     105,   307,   213,   243,   169,   232,   229,   323,   475,   358,
     106,   106,   330,   520,   162,   511,   381,   516,   548,   476,
     264,   204,   395,   550,   251,   396,   409,   291,   127,   298,
       6,   292,  -213,  -213,     7,   410,   252,  -214,  -213,  -213,
     561,  -204,  -382,  -214,   138,   140,   562,   269,     1,   391,
       2,   354,   495,   495,  -213,  -213,  -222,  -222,   319,  -214,
     197,   355,   563,   496,   496,   397,  -213,  -213,   345,    97,
     367,  -214,   114,  -213,  -213,   263,   616,   270,  -214,   382,
     519,   564,   271,   195,   206,   539,   272,   549,  -169,   116,
     575,   170,   552,   127,   127,   138,   140,   432,   127,   402,
     127,   200,  -170,   121,    10,   152,    11,   168,   100,   207,
     357,   432,   344,   418,   618,   325,   153,   328,   154,   155,
     619,   422,   233,    15,   236,   579,   117,   166,   167,   118,
     119,   237,   609,   237,   122,   220,   242,   222,    15,   105,
     105,   438,   517,   611,   589,   384,   339,   128,   191,   132,
     106,   106,   197,   511,   220,   221,   222,   134,   233,   257,
     259,   261,   100,   127,   213,   523,   213,   407,   371,   282,
     376,   624,   276,   333,   610,   385,   373,   135,   377,   286,
     136,   158,   284,   137,   159,   634,   160,   430,   431,   637,
     102,   639,   484,   485,   486,   487,   488,   305,   305,   308,
     464,   465,   314,   142,   392,   177,   178,   161,   648,    73,
      74,    75,    76,    77,    78,    79,   163,   164,   527,   245,
     246,   529,   165,   622,    73,    74,    75,    76,    77,    78,
      79,   401,   166,   202,   201,   203,   248,   215,   244,   247,
     249,   253,   254,   273,   280,   274,   328,   275,   419,   127,
      15,   127,   277,   299,   278,   127,   423,   424,   293,   302,
    -291,   285,   294,   296,   569,   297,   572,   351,   303,   304,
     310,   207,   144,   459,   309,   312,   311,   313,   145,   316,
     146,   317,   173,   326,   332,   320,   318,   334,   343,   194,
     237,   147,   335,   349,   345,   350,   170,   363,   383,   148,
     206,   216,   217,   218,   219,   237,   149,   367,   150,   386,
     151,   207,   369,   393,   399,   405,   560,   374,   404,   406,
     392,   400,   426,   286,   427,   238,   440,   238,   394,   441,
     596,   449,   414,   450,   452,   469,    73,    74,    75,    76,
      77,    78,    79,   461,   425,   473,   478,   477,   479,   481,
     482,   509,   483,   588,   265,   266,   267,   268,   508,   144,
     445,   512,   410,   515,   444,   181,   279,   146,   281,   628,
     182,   518,   525,   387,   526,   530,   127,   472,   147,   470,
     183,   184,   528,   638,   531,   534,   148,   497,   536,   414,
     414,   541,   185,   149,   540,   150,   547,   151,   545,   550,
     582,   543,   649,   554,   315,   144,   555,   558,   559,   507,
     566,   570,   432,   146,   556,   354,   583,   586,   173,   601,
     590,   329,   170,   606,   147,   607,   608,   207,   612,   613,
     614,   615,   148,   617,   626,   620,   336,   337,   338,   149,
     627,   150,   641,   557,   635,   642,   645,   348,    15,    16,
      17,    18,    19,    20,    21,    22,   414,   513,   352,   353,
     283,   380,   235,   111,   112,   341,   362,   480,   573,   574,
     439,   256,    26,    27,   603,   644,   604,   324,   605,   580,
     378,   522,   524,   567,   238,   420,   577,   359,   360,   179,
     408,   445,   361,   553,   180,   444,   414,   372,   458,   238,
     640,     0,     0,   127,     0,     0,     0,     0,     0,     0,
     403,     0,     0,     0,     0,   414,   497,     0,     0,     0,
       0,     0,     0,     0,     0,   592,     0,   305,     0,     0,
       0,   598,   600,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,     0,   414,     0,     0,     0,     0,
     453,   454,   455,   456,   457,     0,     0,   460,     0,     0,
       0,   468,     0,    14,     0,     0,   471,     0,     0,     0,
       0,     0,     0,   623,     0,     0,     0,     0,   173,     0,
     629,     0,   630,     0,   631,   632,     0,     0,   505,     0,
       0,   195,   643,     0,    28,    29,     0,     0,     0,    32,
       0,    34,     0,    35,    36,     0,    38,    39,   646,   647,
       0,     0,     0,     0,    41,    42,    43,     0,     0,     0,
      45,    46,    47,    48,    49,    50,   532,   533,     0,    54,
     535,    55,     0,    56,   537,    58,    59,    60,     0,     0,
      63,    64,    65,     0,    98,    99,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,  -382,    12,     0,     0,
       0,     0,    13,   568,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,   581,     0,    24,    25,     0,   585,     0,    26,
      27,     0,     0,     0,     0,    28,    29,    30,     0,    31,
      32,    33,    34,  -382,    35,    36,    37,    38,    39,  -382,
    -382,  -382,  -382,  -382,    40,    41,    42,    43,     0,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,   -10,    12,
       0,     0,     0,     0,    13,   625,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    23,   633,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,     0,
       0,    26,    27,     0,     0,     0,     0,    28,    29,    30,
       0,    31,    32,    33,    34,     0,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,    40,    41,    42,    43,
       0,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,    27,     0,     0,     0,     0,    28,    29,
      30,     0,    31,    32,    33,    34,     0,    35,    36,    37,
      38,    39,     0,     0,  -382,     0,     0,    40,    41,    42,
      43,     0,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   172,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
       0,     0,     0,    26,    27,     0,     0,     0,     0,    28,
      29,    30,     0,    31,    32,    33,    34,     0,    35,    36,
      37,    38,    39,     0,     0,   -10,     0,   -10,    40,    41,
      42,    43,     0,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,    55,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,     0,     0,     0,    26,    27,     0,     0,     0,     0,
      28,    29,    30,     0,    31,    32,    33,    34,     0,    35,
      36,    37,    38,    39,     0,     0,   -10,     0,     0,    40,
      41,    42,    43,     0,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,    28,    29,    30,     0,    31,    32,    33,    34,     0,
      35,    36,    37,    38,    39,     0,     0,  -261,     0,     0,
      40,    41,    42,    43,     0,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,     0,     0,     0,    26,    27,     0,     0,
       0,     0,    28,    29,    30,     0,    31,    32,    33,    34,
       0,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,    40,    41,    42,    43,     0,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
      26,    27,     0,     0,     0,     0,    28,    29,    30,     0,
      31,    32,    33,    34,     0,    35,    36,     0,    38,    39,
       0,     0,     0,     0,     0,    40,    41,    42,    43,     0,
       0,    44,    45,    46,    47,    48,    49,    50,     0,     0,
      53,    54,   172,    55,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    98,    99,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,     0,     0,     0,    26,    27,     0,     0,     0,     0,
      28,    29,    30,     0,    31,    32,    33,    34,     0,    35,
      36,     0,    38,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,     0,     0,    44,    45,    46,    47,    48,
      49,    50,     0,     0,    53,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      98,    99,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,     0,     0,     0,    32,
       0,    34,     0,    35,    36,     0,    38,    39,     0,     0,
       0,     0,     0,     0,    41,    42,    43,     0,     0,     0,
      45,    46,    47,    48,    49,    50,     0,    14,    15,    54,
       0,    55,     0,    56,     0,    58,    59,    60,     0,     0,
      63,    64,    65,     0,    98,    99,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   576,    28,    29,
       0,     0,     0,    32,     0,    34,     0,    35,    36,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    41,    42,
      43,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,     0,    14,    54,     0,    55,     0,    56,     0,    58,
      59,    60,   186,     0,    63,    64,    65,     0,    98,    99,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,    28,    29,     0,     0,     0,    32,     0,
      34,     0,    35,    36,     0,    38,    39,     0,     0,     0,
       0,     0,     0,    41,    42,    43,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    54,     0,
      55,     0,    56,     0,    58,    59,    60,     0,   187,    63,
      64,    65,   188,    98,    99,    69,    70,    71,    72,     0,
       0,     0,     0,     0,   189,   190,    14,     0,    16,    17,
      18,    19,    20,    21,    22,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,     0,
       0,    26,    27,     0,     0,     0,     0,    28,    29,    30,
       0,    31,    32,    33,    34,     0,    35,    36,     0,    38,
      39,     0,     0,     0,     0,     0,    40,    41,    42,    43,
       0,     0,    44,    45,    46,    47,    48,    49,    50,    14,
       0,    53,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    98,    99,    69,
      70,    71,    72,     0,     0,     0,   205,   195,   206,     0,
      28,    29,     0,     0,     0,    32,     0,    34,     0,    35,
      36,     0,    38,    39,     0,     0,     0,     0,     0,     0,
      41,    42,    43,     0,     0,     0,    45,    46,    47,    48,
      49,    50,     0,     0,    14,    54,     0,    55,     0,    56,
       0,    58,    59,    60,   123,     0,    63,    64,    65,     0,
      98,    99,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,     0,
      32,     0,    34,     0,    35,    36,     0,    38,    39,     0,
       0,     0,     0,     0,     0,    41,    42,    43,     0,   124,
       0,    45,    46,    47,    48,    49,    50,    14,     0,     0,
      54,     0,    55,     0,    56,     0,    58,    59,    60,     0,
       0,    63,    64,    65,     0,    98,    99,    69,    70,    71,
      72,     0,     0,     0,     0,   195,   387,     0,    28,    29,
       0,     0,     0,    32,     0,    34,     0,    35,    36,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    41,    42,
      43,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,     0,    14,    54,     0,    55,     0,    56,     0,    58,
      59,    60,   412,     0,    63,    64,    65,     0,    98,    99,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
     413,     0,     0,    28,    29,     0,     0,     0,    32,     0,
      34,     0,    35,    36,     0,    38,    39,     0,     0,     0,
       0,     0,     0,    41,    42,    43,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,     0,    14,    54,     0,
      55,     0,    56,     0,    58,    59,    60,   123,     0,    63,
      64,    65,     0,    98,    99,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,     0,    32,     0,    34,     0,    35,    36,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    41,    42,
      43,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,     0,    14,    54,     0,    55,     0,    56,     0,    58,
      59,    60,   199,     0,    63,    64,    65,     0,    98,    99,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,     0,    32,     0,
      34,     0,    35,    36,     0,    38,    39,     0,     0,     0,
       0,     0,     0,    41,    42,    43,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    14,     0,     0,    54,     0,
      55,     0,    56,     0,    58,    59,    60,     0,     0,    63,
      64,    65,     0,    98,    99,    69,    70,    71,    72,     0,
       0,     0,     0,   413,     0,     0,    28,    29,     0,     0,
       0,    32,     0,    34,     0,    35,    36,     0,    38,    39,
       0,     0,     0,     0,     0,     0,    41,    42,    43,     0,
       0,     0,    45,    46,    47,    48,    49,    50,     0,     0,
      14,    54,     0,    55,     0,    56,     0,    58,    59,    60,
     506,     0,    63,    64,    65,     0,    98,    99,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,     0,    32,     0,    34,     0,
      35,    36,     0,    38,    39,     0,     0,     0,     0,     0,
       0,    41,    42,    43,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    14,     0,     0,    54,     0,    55,     0,
      56,     0,    58,    59,    60,     0,     0,    63,    64,    65,
       0,    98,    99,    69,    70,    71,    72,     0,     0,     0,
       0,   538,     0,     0,    28,    29,     0,     0,     0,    32,
       0,    34,     0,    35,    36,     0,    38,    39,     0,     0,
       0,     0,     0,     0,    41,    42,    43,     0,     0,     0,
      45,    46,    47,    48,    49,    50,     0,     0,    14,    54,
       0,    55,     0,    56,     0,    58,    59,    60,   578,     0,
      63,    64,    65,     0,    98,    99,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,    32,     0,    34,     0,    35,    36,
       0,    38,    39,     0,     0,     0,     0,     0,     0,    41,
      42,    43,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,     0,     0,    54,     0,    55,    14,    56,     0,
      58,    59,    60,     0,     0,    63,    64,    65,     0,    98,
      99,    69,    70,    71,    72,   595,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,     0,    32,     0,    34,     0,    35,    36,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    41,    42,
      43,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,     0,     0,    54,     0,    55,    14,    56,     0,    58,
      59,    60,     0,     0,    63,    64,    65,     0,    98,    99,
      69,    70,    71,    72,   597,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,    32,     0,    34,     0,    35,    36,     0,    38,
      39,     0,     0,     0,     0,     0,     0,    41,    42,    43,
       0,     0,    14,    45,    46,    47,    48,    49,    50,     0,
       0,     0,    54,     0,    55,     0,    56,     0,    58,    59,
      60,     0,     0,    63,    64,    65,     0,    98,    99,    69,
      70,    71,    72,    28,    29,     0,     0,     0,    32,     0,
      34,     0,    35,    36,     0,    38,    39,     0,     0,     0,
       0,     0,     0,    41,    42,    43,     0,     0,    14,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    54,     0,
      55,     0,    56,     0,    58,    59,    60,     0,     0,    63,
      64,    65,     0,    98,    99,    69,    70,    71,    72,    28,
      29,     0,     0,     0,    32,     0,    34,     0,    35,    36,
       0,    38,    39,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,     0,     0,    54,     0,    55,     0,    56,     0,
      58,    59,    60,     0,     0,    63,    64,    65,     0,    98,
      99,    69,    70,    71,    72
};

static const yytype_int16 yycheck[] =
{
      13,    24,    25,   176,    37,   121,   375,   123,   140,    26,
      27,   221,   132,   160,   113,   142,   140,   250,   412,   294,
      26,    27,   254,   449,   100,   436,   319,   444,    25,   413,
     186,   131,    39,    25,    20,    42,    18,    27,    51,   215,
       4,    31,    46,    46,     0,    27,    32,    46,    52,    52,
      46,    55,    55,    52,    67,    68,    52,    30,     3,   334,
       5,    22,    66,    66,    68,    68,    70,    70,   244,    68,
     186,    32,    68,    77,    77,    82,    80,    80,    20,     4,
      20,    80,    18,    87,    87,   185,    26,    60,    87,   322,
      32,    87,    65,    36,    37,   479,    69,    94,    47,    49,
     517,   114,    94,   116,   117,   118,   119,    56,   121,   342,
     123,   124,    47,    18,     3,    17,     5,    24,   131,   132,
     293,    56,   278,   356,    20,   252,    28,   254,    30,    31,
      26,   364,   145,     9,   157,   519,    86,    20,    21,    89,
      90,   158,   568,   160,    18,    91,   159,    93,     9,   166,
     167,   383,   445,   579,   538,   328,   272,    73,   274,    18,
     166,   167,   278,   574,    91,    92,    93,    18,   181,   182,
     183,   184,   185,   186,   294,   450,   296,    38,   310,   202,
     312,   607,   195,   259,   578,   332,   310,    18,   312,   206,
      18,    18,   205,    18,    21,   621,    23,    19,    20,   625,
      23,   627,    95,    96,    97,    98,    99,   220,   221,   222,
      53,    54,   235,    22,   334,   116,   117,    13,   644,    95,
      96,    97,    98,    99,   100,   101,    19,    19,   461,   166,
     167,   464,    19,   602,    95,    96,    97,    98,    99,   100,
     101,   340,    20,    27,    30,    20,    19,    55,    55,    55,
      32,    55,    22,    19,    30,    20,   383,    19,   357,   272,
       9,   274,    19,    44,    20,   278,   365,   366,    19,    19,
      19,    20,    20,    20,   507,    20,   509,   290,    19,    19,
      22,   294,    40,   399,    55,    22,    55,    18,    46,    19,
      48,    20,   115,    45,    18,    41,    24,    18,    30,   122,
     317,    59,    19,    38,    20,    20,   319,    19,    22,    67,
      37,   134,   135,   136,   137,   332,    74,    20,    76,    55,
      78,   334,    89,    30,    85,    19,   499,    90,   345,    20,
     450,    65,    20,   350,     8,   158,    19,   160,    81,    61,
     550,    19,   355,    20,    20,    30,    95,    96,    97,    98,
      99,   100,   101,    57,   367,    30,    22,    27,    20,    55,
      55,    47,    55,   536,   187,   188,   189,   190,    55,    40,
     387,    61,    27,    38,   387,    46,   199,    48,   201,   612,
      51,    20,    81,    37,    85,    18,   399,   410,    59,   406,
      61,    62,    55,   626,    55,    19,    67,   430,    19,   412,
     413,    83,    73,    74,    55,    76,    13,    78,    88,    25,
     526,    84,   645,    25,   237,    40,    80,    55,    22,   432,
      70,    43,    56,    48,    49,    22,    58,    64,   251,    46,
      79,   254,   445,    80,    59,     9,    27,   450,    19,    32,
      26,    20,    67,    32,    19,    30,   269,   270,   271,    74,
      19,    76,    32,    78,    27,    32,    19,   280,     9,    10,
      11,    12,    13,    14,    15,    16,   479,   442,   291,   292,
     203,   317,   156,    27,    27,   274,   299,   421,   510,   510,
     383,   181,    33,    34,   559,   636,   559,   251,   559,   523,
     313,   450,   452,   506,   317,   358,   518,   294,   296,   118,
     350,   518,   297,   487,   119,   518,   519,   310,   398,   332,
     628,    -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,
     343,    -1,    -1,    -1,    -1,   538,   559,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   548,    -1,   550,    -1,    -1,
      -1,   554,   555,    -1,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     383,    -1,    -1,    -1,    -1,   578,    -1,    -1,    -1,    -1,
     393,   394,   395,   396,   397,    -1,    -1,   400,    -1,    -1,
      -1,   404,    -1,     8,    -1,    -1,   409,    -1,    -1,    -1,
      -1,    -1,    -1,   606,    -1,    -1,    -1,    -1,   421,    -1,
     613,    -1,   615,    -1,   617,   618,    -1,    -1,   431,    -1,
      -1,    36,   635,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    46,    -1,    48,    49,    -1,    51,    52,   641,   642,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,   469,   470,    -1,    74,
     473,    76,    -1,    78,   477,    80,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    89,    90,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,
      -1,    -1,     6,   506,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   525,    -1,    28,    29,    -1,   530,    -1,    33,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,     0,     1,
      -1,    -1,    -1,    -1,     6,   608,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,   620,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,     1,    -1,    -1,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     1,    -1,    -1,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    60,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     1,    -1,    -1,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    45,    46,    -1,    48,    49,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      73,    74,    75,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    45,    46,    -1,    48,
      49,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    46,    -1,    48,    49,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    -1,     8,     9,    74,
      -1,    76,    -1,    78,    -1,    80,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    38,    39,    40,
      -1,    -1,    -1,    44,    -1,    46,    -1,    48,    49,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    -1,     8,    74,    -1,    76,    -1,    78,    -1,    80,
      81,    82,    18,    -1,    85,    86,    87,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      46,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      76,    -1,    78,    -1,    80,    81,    82,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,   100,   101,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    45,    46,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,     8,
      -1,    73,    74,    -1,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    44,    -1,    46,    -1,    48,
      49,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    -1,    -1,     8,    74,    -1,    76,    -1,    78,
      -1,    80,    81,    82,    18,    -1,    85,    86,    87,    -1,
      89,    90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      44,    -1,    46,    -1,    48,    49,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,
      -1,    65,    66,    67,    68,    69,    70,     8,    -1,    -1,
      74,    -1,    76,    -1,    78,    -1,    80,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    46,    -1,    48,    49,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    -1,     8,    74,    -1,    76,    -1,    78,    -1,    80,
      81,    82,    18,    -1,    85,    86,    87,    -1,    89,    90,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      46,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    -1,    -1,     8,    74,    -1,
      76,    -1,    78,    -1,    80,    81,    82,    18,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    46,    -1,    48,    49,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    -1,     8,    74,    -1,    76,    -1,    78,    -1,    80,
      81,    82,    18,    -1,    85,    86,    87,    -1,    89,    90,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      46,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,     8,    -1,    -1,    74,    -1,
      76,    -1,    78,    -1,    80,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    39,    40,    -1,    -1,
      -1,    44,    -1,    46,    -1,    48,    49,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    -1,    -1,
       8,    74,    -1,    76,    -1,    78,    -1,    80,    81,    82,
      18,    -1,    85,    86,    87,    -1,    89,    90,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    44,    -1,    46,    -1,
      48,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,     8,    -1,    -1,    74,    -1,    76,    -1,
      78,    -1,    80,    81,    82,    -1,    -1,    85,    86,    87,
      -1,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    46,    -1,    48,    49,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    -1,    -1,     8,    74,
      -1,    76,    -1,    78,    -1,    80,    81,    82,    18,    -1,
      85,    86,    87,    -1,    89,    90,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    44,    -1,    46,    -1,    48,    49,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    76,     8,    78,    -1,
      80,    81,    82,    -1,    -1,    85,    86,    87,    -1,    89,
      90,    91,    92,    93,    94,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    46,    -1,    48,    49,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    76,     8,    78,    -1,    80,
      81,    82,    -1,    -1,    85,    86,    87,    -1,    89,    90,
      91,    92,    93,    94,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    44,    -1,    46,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    -1,     8,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    76,    -1,    78,    -1,    80,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    89,    90,    91,
      92,    93,    94,    39,    40,    -1,    -1,    -1,    44,    -1,
      46,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    -1,     8,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      76,    -1,    78,    -1,    80,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    39,
      40,    -1,    -1,    -1,    44,    -1,    46,    -1,    48,    49,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,    -1,
      80,    81,    82,    -1,    -1,    85,    86,    87,    -1,    89,
      90,    91,    92,    93,    94
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,   107,   108,   109,     4,     0,   110,   111,
       3,     5,     1,     6,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    18,    28,    29,    33,    34,    39,    40,
      41,    43,    44,    45,    46,    48,    49,    50,    51,    52,
      58,    59,    60,    61,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    76,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     112,   113,   114,   115,   116,   117,   118,   122,   123,   126,
     127,   130,   131,   135,   136,   141,   191,     4,    89,    90,
     122,   193,   127,   130,   130,   126,   135,   137,   138,   139,
     140,   138,   139,   142,    18,   144,    49,    86,    89,    90,
     117,    18,    18,    18,    63,   119,   121,   122,    73,   124,
     125,   247,    18,   194,    18,    18,    18,    18,   122,   213,
     122,   232,    22,   248,    40,    46,    48,    59,    67,    74,
      76,    78,    17,    28,    30,    31,   128,   129,    18,    21,
      23,    13,   194,    19,    19,    19,    20,    21,    24,   113,
     122,   251,    75,   127,   153,   158,   160,   119,   119,   213,
     232,    46,    51,    61,    62,    73,    18,    84,    88,   100,
     101,   121,   154,   161,   127,    36,   120,   121,   205,    18,
     122,    30,    27,    20,   193,    35,    37,   122,   199,   201,
     202,   203,   204,   205,   206,    55,   127,   127,   127,   127,
      91,    92,    93,   215,   216,   217,   218,   219,   217,   219,
     234,   235,   115,   122,   167,   129,   130,   126,   127,   132,
     133,   134,   122,   132,    55,   140,   140,    55,    19,    32,
     249,    20,    32,    55,    22,   248,   167,   122,   181,   122,
     192,   122,   182,   193,   120,   127,   127,   127,   127,    30,
      60,    65,    69,    19,    20,    19,   122,    19,    20,   127,
      30,   127,   130,   125,   122,    20,   126,   207,   208,   209,
     210,    27,    31,    19,    20,   200,    20,    20,   247,    44,
     162,   253,    19,    19,    19,   122,   231,   231,   122,    55,
      22,    55,    22,    18,   130,   127,    19,    20,    24,   247,
      41,   236,   143,   112,   160,   115,    45,   238,   115,   127,
     158,   159,    18,   194,    18,    19,   127,   127,   127,   121,
     146,   154,   145,    30,   120,    20,   179,   180,   127,    38,
      20,   122,   127,   127,    22,    32,   195,   248,   201,   202,
     204,   206,   127,    19,   148,   149,   150,    20,   220,    89,
     214,   217,   218,   219,    90,   233,   217,   219,   127,   168,
     134,   251,   112,    22,   248,   132,    55,    37,   184,   186,
     187,   201,   205,    30,    81,    39,    42,    82,   166,    85,
      65,   113,   112,   127,   126,    19,    20,    38,   208,    18,
      27,   211,    18,    36,   122,   196,   197,   198,   112,   113,
     200,   147,   112,   113,   113,   122,    20,     8,   250,   250,
      19,    20,    56,   151,   152,   155,   156,   157,   158,   159,
      19,    61,   246,    20,   122,   126,   188,   189,   190,    19,
      20,   185,    20,   127,   127,   127,   127,   127,   253,   121,
     127,    57,   164,   255,    53,    54,   165,   254,   127,    30,
     126,   127,   130,    30,   212,   196,   198,    27,    22,    20,
     153,    55,    55,    55,    95,    96,    97,    98,    99,   221,
     222,   223,   226,   227,   228,    66,    77,   117,   169,   170,
     171,   172,   175,   176,   177,   127,    18,   122,    55,    47,
     163,   157,    61,   123,   252,    38,   211,   251,    20,    32,
     179,   183,   186,   201,   187,    81,    85,   112,    55,   112,
      18,    55,   127,   127,    19,   127,    19,   127,    36,   198,
      55,    83,   242,    84,   243,    88,   244,    13,    25,    94,
      25,   230,    94,   230,    25,    80,    49,    78,    55,    22,
     248,    46,    52,    68,    87,   178,    70,   122,   127,   112,
      43,   237,   112,   155,   156,   211,    38,   189,    18,   198,
     185,   127,   121,    58,   240,   127,    64,   239,   248,   198,
      79,   241,   122,   224,   225,    26,   231,    26,   122,   229,
     122,    46,   245,   171,   175,   177,    80,     9,    27,   179,
     196,   179,    19,    32,    26,    20,    26,    32,    20,    26,
      30,   173,   250,   122,   179,   127,    19,    19,   112,   122,
     122,   122,   122,   127,   179,    27,   174,   179,   112,   179,
     254,    32,    32,   130,   173,    19,   122,   122,   179,   112
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
        case 3:

/* Line 1464 of yacc.c  */
#line 298 "parser.y"
    { process_header(NULL, NULL); free((yyvsp[(1) - (1)].token)); }
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 299 "parser.y"
    { process_header(NULL, NULL); free((yyvsp[(2) - (2)].token)); }
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 304 "parser.y"
    { process_header((char *)(yyvsp[(1) - (2)].token)->chars, (char *)(yyvsp[(2) - (2)].token)->chars); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 306 "parser.y"
    { process_header((char *)(yyvsp[(2) - (3)].token)->chars, (char *)(yyvsp[(3) - (3)].token)->chars); free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 310 "parser.y"
    { push_yacc_recovery(SEMI); }
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 311 "parser.y"
    { Program = (yyvsp[(2) - (2)].body); (yyval.nothing) = NULL; }
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 315 "parser.y"
    { (yyval.body) = (yyvsp[(1) - (2)].body); }
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 319 "parser.y"
    { (yyval.body) = make_body(); }
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 320 "parser.y"
    { (yyval.body) = (yyvsp[(1) - (1)].body); }
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 326 "parser.y"
    { (yyval.body) = add_constituent(make_body(), (yyvsp[(1) - (1)].constituent)); }
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 328 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.body) = add_constituent((yyvsp[(1) - (3)].body), (yyvsp[(3) - (3)].constituent)); }
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 332 "parser.y"
    { (yyval.constituent) = (yyvsp[(1) - (1)].constituent); }
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 333 "parser.y"
    { (yyval.constituent) = (yyvsp[(1) - (1)].constituent); }
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 334 "parser.y"
    { (yyval.constituent) = make_expr_constituent((yyvsp[(1) - (1)].expr)); }
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 335 "parser.y"
    { (yyval.constituent) = make_error_constituent(); }
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 340 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(3) - (4)].token)); (yyval.constituent) = set_class_flags((yyvsp[(2) - (4)].flags), (yyvsp[(4) - (4)].constituent)); }
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 342 "parser.y"
    { free((yyvsp[(1) - (3)].flags)) ; (yyval.constituent) = set_class_flags((yyvsp[(1) - (3)].flags), (yyvsp[(3) - (3)].constituent)) ; }
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 344 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.constituent) = make_define_constant((yyvsp[(2) - (3)].token)->line, (yyvsp[(3) - (3)].bindings)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 346 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(3) - (4)].token)); (yyval.constituent) = set_sealed_domain_flags((yyvsp[(2) - (4)].flags), (yyvsp[(4) - (4)].constituent)); }
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 348 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(3) - (4)].token)); (yyval.constituent) = set_generic_flags((yyvsp[(2) - (4)].flags), (yyvsp[(4) - (4)].constituent)); }
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 350 "parser.y"
    { free((yyvsp[(1) - (4)].token)); (yyval.constituent) = make_define_function((yyvsp[(3) - (4)].token)->line, (yyvsp[(4) - (4)].method)); free((yyvsp[(3) - (4)].token)); }
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 352 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(3) - (4)].token)); (yyval.constituent) = make_define_method((yyvsp[(2) - (4)].flags), (yyvsp[(4) - (4)].method)); }
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 354 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = make_define_method(0, (yyvsp[(2) - (2)].method)) ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 356 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.constituent) = make_define_variable((yyvsp[(2) - (3)].token)->line, (yyvsp[(3) - (3)].bindings)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 358 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(2) - (3)].token)); (yyval.constituent) = (yyvsp[(3) - (3)].constituent); }
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 360 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = (yyvsp[(2) - (2)].constituent); }
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 362 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(2) - (3)].token)); (yyval.constituent) = (yyvsp[(3) - (3)].constituent); }
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 364 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = (yyvsp[(2) - (2)].constituent); }
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 368 "parser.y"
    { (yyval.flags) = 0; }
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 369 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_SEALED; }
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 370 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_OPEN; }
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 371 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_ABSTRACT; }
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 372 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_CONCRETE; }
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 373 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_PRIMARY; }
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 374 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_FREE; }
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 375 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags); /* ignore inline directive */ }
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 380 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = make_let((yyvsp[(2) - (2)].bindings)); }
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 382 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token));
	  (yyval.constituent) = make_handler(make_varref(make_id((yyvsp[(3) - (5)].token))), (yyvsp[(5) - (5)].expr), NULL);
	}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 386 "parser.y"
    { free((yyvsp[(1) - (8)].token)); free((yyvsp[(2) - (8)].token)); free((yyvsp[(3) - (8)].token)); free((yyvsp[(6) - (8)].token)); free((yyvsp[(7) - (8)].token));
	  (yyval.constituent) = make_handler((yyvsp[(4) - (8)].expr), (yyvsp[(8) - (8)].expr), (yyvsp[(5) - (8)].plist));
	}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 390 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = make_local_constituent((yyvsp[(2) - (2)].local_methods)); }
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 395 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.bindings) = make_bindings(push_param((yyvsp[(1) - (3)].param),make_param_list()), (yyvsp[(3) - (3)].expr)); }
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 397 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(3) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.bindings) = make_bindings((yyvsp[(2) - (5)].param_list), (yyvsp[(5) - (5)].expr)); }
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 402 "parser.y"
    { (yyval.param_list) = set_rest_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 404 "parser.y"
    { (yyval.param_list) = push_param((yyvsp[(1) - (1)].param), make_param_list()); }
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 406 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = push_param((yyvsp[(1) - (3)].param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 410 "parser.y"
    { (yyval.param) = make_param(make_id((yyvsp[(1) - (1)].token)), NULL); }
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 412 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param) = make_param(make_id((yyvsp[(1) - (3)].token)), (yyvsp[(3) - (3)].expr)); }
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 456 "parser.y"
    { (yyval.local_methods) = add_local_method(make_local_methods(), (yyvsp[(1) - (1)].method)); }
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 458 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.local_methods) = add_local_method((yyvsp[(1) - (3)].local_methods), (yyvsp[(3) - (3)].method)); }
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 462 "parser.y"
    { (yyval.method) = (yyvsp[(2) - (2)].method); }
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 477 "parser.y"
    { (yyval.expr) = make_literal_ref(parse_keyword_token((yyvsp[(1) - (1)].token))); }
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 478 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 480 "parser.y"
    { (yyval.expr) = make_binop_series_expr((yyvsp[(1) - (2)].expr), (yyvsp[(2) - (2)].binop_series)); }
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 484 "parser.y"
    { (yyval.binop_series) = add_binop(make_binop_series(), (yyvsp[(1) - (2)].binop), (yyvsp[(2) - (2)].expr)); }
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 485 "parser.y"
    { (yyval.binop_series) = add_binop((yyvsp[(1) - (3)].binop_series), (yyvsp[(2) - (3)].binop), (yyvsp[(3) - (3)].expr)); }
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 489 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 490 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 491 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 492 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 496 "parser.y"
    { (yyval.expr) = make_negate((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 497 "parser.y"
    { (yyval.expr) = make_not((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 498 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 502 "parser.y"
    { (yyval.expr) = make_literal_ref((yyvsp[(1) - (1)].literal)); }
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 503 "parser.y"
    { (yyval.expr) = make_varref(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 505 "parser.y"
    { free((yyvsp[(4) - (4)].token)); (yyval.expr) = make_aref_or_element((yyvsp[(2) - (4)].token)->line, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].arglist)); free((yyvsp[(2) - (4)].token)); }
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 507 "parser.y"
    { free((yyvsp[(2) - (4)].token)); free((yyvsp[(4) - (4)].token)); (yyval.expr) = make_function_call((yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].arglist)); }
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 508 "parser.y"
    { (yyval.expr) = make_method_ref((yyvsp[(1) - (1)].method)); }
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 510 "parser.y"
    { free((yyvsp[(2) - (3)].token));
	  (yyval.expr) = make_dot_operation((yyvsp[(1) - (3)].expr), make_varref(make_id((yyvsp[(3) - (3)].token))));
	}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 513 "parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 514 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 518 "parser.y"
    { (yyval.arglist) = make_argument_list(); }
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 519 "parser.y"
    { (yyval.arglist) = (yyvsp[(1) - (1)].arglist); }
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 523 "parser.y"
    { (yyval.arglist) = add_argument(make_argument_list(), (yyvsp[(1) - (1)].argument)); }
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 524 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.arglist) = add_argument((yyvsp[(1) - (3)].arglist), (yyvsp[(3) - (3)].argument)); }
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 528 "parser.y"
    { (yyval.argument) = make_argument((yyvsp[(1) - (1)].expr)); }
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 530 "parser.y"
    { (yyval.argument) = make_keyword_argument((yyvsp[(1) - (2)].token), (yyvsp[(2) - (2)].expr)); }
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 534 "parser.y"
    { (yyval.literal) = parse_true_token((yyvsp[(1) - (1)].token)); }
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 535 "parser.y"
    { (yyval.literal) = parse_false_token((yyvsp[(1) - (1)].token)); }
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 536 "parser.y"
    { (yyval.literal) = (yyvsp[(1) - (1)].literal); }
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 537 "parser.y"
    { (yyval.literal) = parse_character_token((yyvsp[(1) - (1)].token)); }
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 538 "parser.y"
    { (yyval.literal) = parse_integer_token((yyvsp[(1) - (1)].token)); }
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 539 "parser.y"
    { (yyval.literal) = parse_float_token((yyvsp[(1) - (1)].token)); }
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 540 "parser.y"
    { (yyval.literal) = parse_keyword_token((yyvsp[(1) - (1)].token)); }
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 542 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.literal) = (yyvsp[(2) - (3)].literal); }
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 544 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.literal) = make_list_literal((yyvsp[(2) - (3)].literal_list)); }
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 546 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.literal) = make_vector_literal((yyvsp[(2) - (3)].literal_list)); }
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 550 "parser.y"
    { (yyval.literal) = parse_string_token((yyvsp[(1) - (1)].token)); }
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 551 "parser.y"
    { (yyval.literal) = concat_string_token((yyvsp[(1) - (2)].literal), (yyvsp[(2) - (2)].token)); }
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 556 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.literal) = make_dotted_list_literal((yyvsp[(1) - (3)].literal_list), (yyvsp[(3) - (3)].literal)); }
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 561 "parser.y"
    { (yyval.literal_list) = make_literal_list(); }
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 563 "parser.y"
    { (yyval.literal_list) = (yyvsp[(1) - (1)].literal_list); }
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 567 "parser.y"
    { (yyval.literal_list) = add_literal(make_literal_list(), (yyvsp[(1) - (1)].literal)); }
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 569 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.literal_list) = add_literal((yyvsp[(1) - (3)].literal_list), (yyvsp[(3) - (3)].literal)); }
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 573 "parser.y"
    { (yyval.literal) = (yyvsp[(1) - (1)].literal); }
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 574 "parser.y"
    { (yyval.literal) = parse_keyword_token((yyvsp[(1) - (1)].token)); }
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 578 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 580 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(4) - (5)].token)); free((yyvsp[(5) - (5)].nothing)); (yyval.expr) = make_body_expr((yyvsp[(3) - (5)].body));
          pop_yacc_recoveries(1); }
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 583 "parser.y"
    { push_yacc_recovery(END);
	  push_yacc_recovery(CLEANUP);
	  push_yacc_recovery(EXCEPTION); }
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 587 "parser.y"
    { free((yyvsp[(2) - (9)].token)); free((yyvsp[(4) - (9)].token)); free((yyvsp[(8) - (9)].token)); pop_yacc_recoveries(3); 
	  (yyval.expr) = make_block((yyvsp[(1) - (9)].token)->line, (yyvsp[(3) - (9)].token) ? make_id((yyvsp[(3) - (9)].token)) : NULL, (yyvsp[(6) - (9)].body), (yyvsp[(7) - (9)].block_epilog));
	  free((yyvsp[(1) - (9)].token));
	}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 591 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 593 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.expr) = make_case((yyvsp[(3) - (5)].condition_body));
          pop_yacc_recoveries(1); }
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 595 "parser.y"
    { push_yacc_recovery(END);
				      push_yacc_recovery(ELSE); }
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 598 "parser.y"
    { free((yyvsp[(1) - (9)].token)); free((yyvsp[(2) - (9)].token)); free((yyvsp[(4) - (9)].token)); free((yyvsp[(8) - (9)].token)); (yyval.expr) = make_if((yyvsp[(3) - (9)].expr), (yyvsp[(6) - (9)].body), (yyvsp[(7) - (9)].else_part));
          pop_yacc_recoveries(2); }
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 600 "parser.y"
    { push_yacc_recovery(END);
				       push_yacc_recovery(FINALLY); }
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 603 "parser.y"
    { free((yyvsp[(1) - (9)].token)); free((yyvsp[(2) - (9)].token)); free((yyvsp[(4) - (9)].token)); free((yyvsp[(8) - (9)].token)); (yyval.expr) = make_for((yyvsp[(3) - (9)].for_header), (yyvsp[(6) - (9)].body), (yyvsp[(7) - (9)].body));
          pop_yacc_recoveries(2); }
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 605 "parser.y"
    {push_yacc_recovery(END);}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 607 "parser.y"
    { free((yyvsp[(1) - (9)].token));free((yyvsp[(2) - (9)].token));free((yyvsp[(5) - (9)].token));free((yyvsp[(8) - (9)].token)); (yyval.expr) = make_select((yyvsp[(3) - (9)].expr), (yyvsp[(4) - (9)].expr), (yyvsp[(7) - (9)].condition_body));
          pop_yacc_recoveries(1); }
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 609 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 611 "parser.y"
    { free((yyvsp[(1) - (8)].token));free((yyvsp[(2) - (8)].token));free((yyvsp[(4) - (8)].token));free((yyvsp[(7) - (8)].token));
	  (yyval.expr) = make_if((yyvsp[(3) - (8)].expr), NULL, make_else(0, (yyvsp[(6) - (8)].body)));
          pop_yacc_recoveries(1); }
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 614 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 616 "parser.y"
    { free((yyvsp[(1) - (8)].token));free((yyvsp[(2) - (8)].token));free((yyvsp[(4) - (8)].token));free((yyvsp[(7) - (8)].token)); pop_yacc_recoveries(1);
	  (yyval.expr) = make_for(make_for_header((yyvsp[(3) - (8)].expr)), (yyvsp[(6) - (8)].body), NULL);
	}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 619 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 621 "parser.y"
    { free((yyvsp[(2) - (8)].token));free((yyvsp[(4) - (8)].token));free((yyvsp[(7) - (8)].token));pop_yacc_recoveries(1);
	  (yyval.expr) = make_for(make_for_header(make_not((yyvsp[(1) - (8)].token)->line, (yyvsp[(3) - (8)].expr))), (yyvsp[(6) - (8)].body), NULL);
	  free((yyvsp[(1) - (8)].token));
	}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 628 "parser.y"
    { (yyval.block_epilog) = NULL; }
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 629 "parser.y"
    { (yyval.block_epilog) = (yyvsp[(1) - (1)].block_epilog); }
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 634 "parser.y"
    { (yyval.block_epilog) = make_block_epilog((yyvsp[(1) - (3)].exception_clauses), (yyvsp[(2) - (3)].body), (yyvsp[(3) - (3)].exception_clauses)); }
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 636 "parser.y"
    { (yyval.block_epilog) = make_block_epilog((yyvsp[(1) - (1)].exception_clauses), NULL, NULL); }
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 640 "parser.y"
    { (yyval.condition_body) = (yyvsp[(1) - (1)].condition_body); }
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 645 "parser.y"
    { warn((yyvsp[(1) - (2)].token)->line, "Use UNTIL: instead of UNTIL inside for loop");
	  free((yyvsp[(1) - (2)].token)); (yyval.for_header) = make_for_header((yyvsp[(2) - (2)].expr)); }
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 648 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.for_header) = make_for_header((yyvsp[(2) - (2)].expr)); }
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 650 "parser.y"
    { warn((yyvsp[(1) - (2)].token)->line, "Use WHILE: instead of WHILE in for loop");
	  (yyval.for_header) = make_for_header(make_not((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr))); free((yyvsp[(1) - (2)].token)); 
        }
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 654 "parser.y"
    { (yyval.for_header) = make_for_header(make_not((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr))); free((yyvsp[(1) - (2)].token)); }
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 656 "parser.y"
    { (yyval.for_header) = push_for_clause((yyvsp[(1) - (1)].for_clause), make_for_header(NULL)); }
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 658 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.for_header) = push_for_clause((yyvsp[(1) - (3)].for_clause), (yyvsp[(3) - (3)].for_header)); }
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 662 "parser.y"
    { (yyval.exception_clauses) = NULL; }
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 663 "parser.y"
    { (yyval.exception_clauses) = (yyvsp[(1) - (1)].exception_clauses); }
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 668 "parser.y"
    { (yyval.exception_clauses) = add_exception_clause(make_exception_clauses(), (yyvsp[(1) - (1)].exception_clause)); }
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 670 "parser.y"
    { (yyval.exception_clauses) = add_exception_clause((yyvsp[(1) - (2)].exception_clauses), (yyvsp[(2) - (2)].exception_clause)); }
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 675 "parser.y"
    { 
	  warn((yyvsp[(1) - (3)].token)->line, "Token following EXCEPTION must be surrounded "
	       "by parentheses");
	  free((yyvsp[(1) - (3)].token));
	  (yyval.exception_clause) = make_exception_clause(make_varref(make_id((yyvsp[(2) - (3)].token))),
				     NULL, NULL, (yyvsp[(3) - (3)].body));
	}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 683 "parser.y"
    { free((yyvsp[(1) - (6)].token)); free((yyvsp[(2) - (6)].token)); free((yyvsp[(5) - (6)].token));
	  (yyval.exception_clause) = make_exception_clause((yyvsp[(3) - (6)].expr), NULL, (yyvsp[(4) - (6)].plist), (yyvsp[(6) - (6)].body));
	}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 688 "parser.y"
    { free((yyvsp[(1) - (8)].token)); free((yyvsp[(2) - (8)].token)); free((yyvsp[(4) - (8)].token)); free((yyvsp[(7) - (8)].token));
	  (yyval.exception_clause) = make_exception_clause((yyvsp[(5) - (8)].expr), make_id((yyvsp[(3) - (8)].token)), (yyvsp[(6) - (8)].plist), (yyvsp[(8) - (8)].body));
	}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 695 "parser.y"
    { free((yyvsp[(1) - (3)].token));
	  (yyval.condition_body) = push_condition_clause(make_otherwise_condition_clause((yyvsp[(3) - (3)].body)),
				     NULL);
	}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 700 "parser.y"
    { (yyval.condition_body) = push_condition_clause((yyvsp[(1) - (2)].condition_clause), NULL); }
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 702 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_body) = push_condition_clause((yyvsp[(1) - (3)].condition_clause), (yyvsp[(3) - (3)].condition_body)); }
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 704 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_body) = complete_condition_clauses((yyvsp[(1) - (3)].condition_clause), (yyvsp[(3) - (3)].incomplete_condition_body)); }
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 709 "parser.y"
    { (yyval.incomplete_condition_body) = make_incomplete_condition_clauses((yyvsp[(1) - (2)].constituent), NULL); }
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 711 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.incomplete_condition_body) = make_incomplete_condition_clauses((yyvsp[(1) - (3)].constituent), (yyvsp[(3) - (3)].condition_body)); }
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 713 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.incomplete_condition_body) = push_condition_constituent((yyvsp[(1) - (3)].constituent), (yyvsp[(3) - (3)].incomplete_condition_body)); }
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 718 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_clause) = push_condition((yyvsp[(1) - (3)].expr), make_condition_clause((yyvsp[(3) - (3)].constituent))); }
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 720 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_clause) = push_condition((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].condition_clause)); }
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 725 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token));
	(yyval.for_clause)=make_equal_then_for_clause(push_param((yyvsp[(1) - (5)].param),make_param_list()),(yyvsp[(3) - (5)].expr),(yyvsp[(5) - (5)].expr));}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 728 "parser.y"
    { free((yyvsp[(1) - (7)].token)); free((yyvsp[(3) - (7)].token)); free((yyvsp[(4) - (7)].token)); free((yyvsp[(6) - (7)].token));
	  (yyval.for_clause) = make_equal_then_for_clause((yyvsp[(2) - (7)].param_list), (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].expr)); }
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 731 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (3)].param), NULL, (yyvsp[(3) - (3)].expr), NULL); }
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 733 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (5)].param), (yyvsp[(3) - (5)].param), (yyvsp[(5) - (5)].expr), NULL); }
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 735 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (5)].param), NULL, (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].param)); }
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 737 "parser.y"
    { free((yyvsp[(2) - (7)].token)); free((yyvsp[(4) - (7)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (7)].param), (yyvsp[(3) - (7)].param), (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].param)); }
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 739 "parser.y"
    { free((yyvsp[(2) - (5)].token)); (yyval.for_clause) = make_from_for_clause((yyvsp[(1) - (5)].param), (yyvsp[(3) - (5)].expr), (yyvsp[(4) - (5)].to_part), (yyvsp[(5) - (5)].expr)); }
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 742 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 743 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.body) = (yyvsp[(2) - (2)].body); }
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 744 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.body) = (yyvsp[(2) - (2)].body); }
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 747 "parser.y"
    { (yyval.else_part) = make_else((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].body)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 749 "parser.y"
    { free((yyvsp[(2) - (6)].token)); free((yyvsp[(4) - (6)].token));
	  (yyval.else_part) = make_else((yyvsp[(1) - (6)].token)->line, make_expr_body(make_if((yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].body), (yyvsp[(6) - (6)].else_part))));
	  free((yyvsp[(1) - (6)].token)); 
	}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 756 "parser.y"
    { (yyval.to_part) = NULL; }
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 757 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.to_part) = make_to((yyvsp[(2) - (2)].expr)); }
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 758 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.to_part) = make_above((yyvsp[(2) - (2)].expr)); }
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 759 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.to_part) = make_below((yyvsp[(2) - (2)].expr)); }
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 765 "parser.y"
    { struct id *id = make_id((yyvsp[(1) - (8)].token));
	  verify_symbol(id, (yyvsp[(8) - (8)].token)); free((yyvsp[(2) - (8)].token)); free((yyvsp[(4) - (8)].token)); free((yyvsp[(6) - (8)].token));
	  (yyval.constituent) = make_class_definition(id, (yyvsp[(3) - (8)].superclass_list), (yyvsp[(5) - (8)].class_guts));
	}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 773 "parser.y"
    { (yyval.superclass_list) = add_superclass(make_superclass_list(), (yyvsp[(1) - (1)].expr)); }
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 775 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.superclass_list) = add_superclass((yyvsp[(1) - (3)].superclass_list), (yyvsp[(3) - (3)].expr)); }
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 779 "parser.y"
    { (yyval.class_guts) = NULL; }
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 780 "parser.y"
    { (yyval.class_guts) = (yyvsp[(1) - (2)].class_guts); }
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 785 "parser.y"
    { (yyval.class_guts) = add_slot_spec(make_class_guts(), (yyvsp[(1) - (1)].slot_spec)); }
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 787 "parser.y"
    { (yyval.class_guts) = add_initarg_spec(make_class_guts(), (yyvsp[(1) - (1)].initarg_spec)); }
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 789 "parser.y"
    { (yyval.class_guts) = add_inherited_spec(make_class_guts(), (yyvsp[(1) - (1)].inherited_spec)); }
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 791 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.class_guts) = add_slot_spec((yyvsp[(1) - (3)].class_guts), (yyvsp[(3) - (3)].slot_spec)); }
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 793 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.class_guts) = add_initarg_spec((yyvsp[(1) - (3)].class_guts), (yyvsp[(3) - (3)].initarg_spec)); }
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 795 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.class_guts) = add_inherited_spec((yyvsp[(1) - (3)].class_guts), (yyvsp[(3) - (3)].inherited_spec)); }
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 801 "parser.y"
    {
	    int line = (yyvsp[(3) - (7)].token)->line;
	    free((yyvsp[(3) - (7)].token));
	    (yyval.slot_spec) = make_slot_spec(line, (yyvsp[(1) - (7)].flags), (yyvsp[(2) - (7)].slot_allocation), (yyvsp[(4) - (7)].token) ? make_id((yyvsp[(4) - (7)].token)) : NULL, 
				(yyvsp[(5) - (7)].expr), (yyvsp[(6) - (7)].expr), (yyvsp[(7) - (7)].plist));
	}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 810 "parser.y"
    { (yyval.flags) = 0; }
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 811 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_SEALED; }
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 812 "parser.y"
    { free((yyvsp[(2) - (2)].token)); (yyval.flags) = (yyvsp[(1) - (2)].flags) | flag_CONSTANT; }
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 816 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 817 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 821 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 822 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 827 "parser.y"
    { free((yyvsp[(2) - (4)].token)); (yyval.initarg_spec) = make_initarg_spec((yyvsp[(1) - (4)].bool), (yyvsp[(3) - (4)].token), (yyvsp[(4) - (4)].plist)); }
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 831 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.bool) = TRUE; }
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 832 "parser.y"
    { (yyval.bool) = FALSE; }
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 837 "parser.y"
    { 	    
	    int line = (yyvsp[(3) - (5)].token)->line;
	    free((yyvsp[(1) - (5)].token)); free((yyvsp[(2) - (5)].token)); 
	    (yyval.inherited_spec) = make_inherited_spec(line, make_id((yyvsp[(3) - (5)].token)), (yyvsp[(4) - (5)].expr), (yyvsp[(5) - (5)].plist)); 
	}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 846 "parser.y"
    { (yyval.slot_allocation) = alloc_INSTANCE; }
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 847 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.slot_allocation) = alloc_INSTANCE; }
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 848 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.slot_allocation) = alloc_CLASS; }
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 849 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.slot_allocation) = alloc_EACH_SUBCLASS; }
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 850 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.slot_allocation) = alloc_VIRTUAL; }
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 854 "parser.y"
    { (yyval.plist) = make_property_list(); }
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 855 "parser.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); }
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 860 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.plist) = add_property(make_property_list(), (yyvsp[(2) - (3)].token), (yyvsp[(3) - (3)].expr)); }
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 862 "parser.y"
    { free((yyvsp[(2) - (4)].token)); (yyval.plist) = add_property((yyvsp[(1) - (4)].plist), (yyvsp[(3) - (4)].token), (yyvsp[(4) - (4)].expr)); }
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 867 "parser.y"
    { free((yyvsp[(2) - (4)].token)); free((yyvsp[(4) - (4)].token));
	  (yyval.constituent) = make_sealed_domain(make_id((yyvsp[(1) - (4)].token)), (yyvsp[(3) - (4)].arglist));
	}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 874 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token));
	  (yyval.constituent) = make_define_generic(make_id((yyvsp[(1) - (5)].token)), (yyvsp[(3) - (5)].param_list), (yyvsp[(5) - (5)].gf_suffix));
	}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 881 "parser.y"
    { (yyval.gf_suffix) = make_gf_suffix(NULL, (yyvsp[(1) - (1)].plist)); }
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 883 "parser.y"
    { free((yyvsp[(1) - (3)].token));
	  (yyval.gf_suffix) = make_gf_suffix
	          (add_return_type(make_return_type_list(FALSE, NULL), (yyvsp[(2) - (3)].expr)),
		   (yyvsp[(3) - (3)].plist));
	}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 889 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.gf_suffix) = make_gf_suffix((yyvsp[(3) - (5)].return_type_list), (yyvsp[(5) - (5)].plist)); }
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 893 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 895 "parser.y"
    { (yyval.param_list) = push_param((yyvsp[(1) - (2)].param), (yyvsp[(2) - (2)].param_list)); }
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 896 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 901 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 903 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.param_list) = push_param((yyvsp[(2) - (3)].param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 905 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 910 "parser.y"
    { (yyval.param_list) = set_rest_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 912 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = set_rest_param((yyvsp[(3) - (3)].param_list), (yyvsp[(1) - (3)].id)); }
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 914 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 918 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 922 "parser.y"
    { (yyval.param_list) = allow_keywords(make_param_list()); }
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 924 "parser.y"
    { free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); (yyval.param_list) = allow_all_keywords(make_param_list()); }
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 925 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 930 "parser.y"
    { (yyval.param_list) = push_keyword_param((yyvsp[(1) - (1)].keyword_param), allow_keywords(make_param_list())); }
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 932 "parser.y"
    { free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token));
	  (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), allow_all_keywords(make_param_list())); }
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 935 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 940 "parser.y"
    { (yyval.keyword_param) = make_keyword_param((yyvsp[(1) - (3)].token), (yyvsp[(2) - (3)].token) ? make_id((yyvsp[(2) - (3)].token)) : NULL, (yyvsp[(3) - (3)].expr), NULL); }
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 942 "parser.y"
    { (yyval.keyword_param) = make_keyword_param(NULL, make_id((yyvsp[(1) - (2)].token)), (yyvsp[(2) - (2)].expr), NULL); }
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 947 "parser.y"
    { free((yyvsp[(3) - (4)].token)); (yyval.method) = set_method_source((yyvsp[(1) - (4)].token), (yyvsp[(2) - (4)].method)); }
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 952 "parser.y"
    { struct id *id = make_id((yyvsp[(1) - (5)].token));
	  free((yyvsp[(3) - (5)].token)); free((yyvsp[(4) - (5)].token)); verify_symbol(id, (yyvsp[(5) - (5)].token));
	  (yyval.method) = set_method_name(id, (yyvsp[(2) - (5)].method));
	}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 957 "parser.y"
    { struct id *id = make_id((yyvsp[(1) - (5)].token));
	  free((yyvsp[(3) - (5)].token)); verify_symbol(id, (yyvsp[(5) - (5)].token));
	  (yyval.method) = set_method_name(id, (yyvsp[(2) - (5)].method));
	}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 965 "parser.y"
    { struct id *id = make_id((yyvsp[(1) - (5)].token));
	  free((yyvsp[(3) - (5)].token)); verify_symbol(id, (yyvsp[(5) - (5)].token));
	  (yyval.method) = set_method_name(id, (yyvsp[(2) - (5)].method));
	}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 973 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(3) - (5)].token));
	  (yyval.method) = make_method_description((yyvsp[(2) - (5)].param_list), (yyvsp[(4) - (5)].return_type_list), (yyvsp[(5) - (5)].body));
	}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 977 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(3) - (4)].token));
	  (yyval.method) = make_method_description((yyvsp[(2) - (4)].param_list), (yyvsp[(4) - (4)].return_type_list), make_body());
	}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 981 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(3) - (5)].token));
	  (yyval.method) = make_method_description((yyvsp[(2) - (5)].param_list), NULL, (yyvsp[(5) - (5)].body));
	}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 988 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.return_type_list) = (yyvsp[(2) - (3)].return_type_list); }
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 990 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.return_type_list) = (yyvsp[(3) - (5)].return_type_list); }
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 995 "parser.y"
    { (yyval.return_type_list) = make_return_type_list(FALSE, NULL); }
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 997 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.return_type_list) = make_return_type_list(TRUE, (yyvsp[(2) - (2)].expr)); }
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 999 "parser.y"
    { (yyval.return_type_list) = (yyvsp[(1) - (1)].return_type_list); }
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 1001 "parser.y"
    { free((yyvsp[(2) - (4)].token)); free((yyvsp[(3) - (4)].token)); (yyval.return_type_list) = set_return_type_rest_type((yyvsp[(1) - (4)].return_type_list), (yyvsp[(4) - (4)].expr)); }
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 1006 "parser.y"
    { (yyval.return_type_list) = add_return_type(make_return_type_list(FALSE, NULL), (yyvsp[(1) - (1)].expr)); }
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 1008 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.return_type_list) = add_return_type((yyvsp[(1) - (3)].return_type_list), (yyvsp[(3) - (3)].expr)); }
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 1013 "parser.y"
    { warn((yyvsp[(1) - (1)].token)->line, "Return value has name but no type");
	  free((yyvsp[(1) - (1)].token)); (yyval.expr) = NULL; }
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 1015 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(2) - (3)].token)); (yyval.expr) = (yyvsp[(3) - (3)].expr); }
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 1019 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 1020 "parser.y"
    { (yyval.param_list) = push_param((yyvsp[(1) - (2)].param), (yyvsp[(2) - (2)].param_list)); }
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 1021 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 1026 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1028 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.param_list) = push_param((yyvsp[(2) - (3)].param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 1030 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 1035 "parser.y"
    { (yyval.param) = make_param(make_id((yyvsp[(1) - (1)].token)), NULL); }
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1037 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param) = make_param(make_id((yyvsp[(1) - (3)].token)), (yyvsp[(3) - (3)].expr)); }
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1039 "parser.y"
    { (yyval.param) = make_param(make_id((yyvsp[(1) - (3)].token)), make_singleton((yyvsp[(2) - (3)].token)->line, (yyvsp[(3) - (3)].expr)));
	  free((yyvsp[(2) - (3)].token)); }
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 1045 "parser.y"
    { (yyval.param_list) = set_next_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1047 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = set_next_param((yyvsp[(3) - (3)].param_list), (yyvsp[(1) - (3)].id)); }
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 1049 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1053 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.id) = make_id((yyvsp[(2) - (2)].token)); }
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1058 "parser.y"
    { (yyval.param_list) = set_rest_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1060 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = set_rest_param((yyvsp[(3) - (3)].param_list), (yyvsp[(1) - (3)].id)); }
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1062 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1066 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.id) = make_id((yyvsp[(2) - (2)].token)); }
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1071 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1075 "parser.y"
    { (yyval.param_list) = allow_keywords(make_param_list()); }
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 1077 "parser.y"
    { free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); (yyval.param_list) = allow_all_keywords(make_param_list()); }
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1078 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 1083 "parser.y"
    { (yyval.param_list) = push_keyword_param((yyvsp[(1) - (1)].keyword_param), allow_keywords(make_param_list())); }
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1085 "parser.y"
    { free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token));
	  (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), allow_all_keywords(make_param_list())); }
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1088 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1094 "parser.y"
    { (yyval.keyword_param) = make_keyword_param((yyvsp[(1) - (4)].token), make_id((yyvsp[(2) - (4)].token)), (yyvsp[(3) - (4)].expr), (yyvsp[(4) - (4)].expr)); }
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1096 "parser.y"
    { warn((yyvsp[(2) - (5)].token)->line,
	       "``foo (val)'' keyword default syntax obsolete.  "
	       "Use ``foo = val'' instead.");
	  free((yyvsp[(3) - (5)].token)); free((yyvsp[(5) - (5)].token));
	  (yyval.keyword_param) = make_keyword_param((yyvsp[(1) - (5)].token), make_id((yyvsp[(2) - (5)].token)), NULL, (yyvsp[(4) - (5)].expr)); }
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1104 "parser.y"
    { (yyval.token) = NULL; }
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 1105 "parser.y"
    { (yyval.token) = (yyvsp[(1) - (1)].token); }
    break;

  case 301:

/* Line 1464 of yacc.c  */
#line 1109 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 302:

/* Line 1464 of yacc.c  */
#line 1110 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 303:

/* Line 1464 of yacc.c  */
#line 1114 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 304:

/* Line 1464 of yacc.c  */
#line 1115 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 305:

/* Line 1464 of yacc.c  */
#line 1120 "parser.y"
    { if ((yyvsp[(5) - (5)].token)) {
	      if (strcasecmp((char *)(yyvsp[(1) - (5)].token)->chars, (char *)(yyvsp[(5) - (5)].token)->chars) != 0) {
		  error((yyvsp[(5) - (5)].token)->line, "mismatched name, ``%s'' isn't ``%s''",
			(yyvsp[(5) - (5)].token)->chars, (yyvsp[(1) - (5)].token)->chars);
		  yacc_recover();
	      }
	      free((yyvsp[(5) - (5)].token));
	  } 
	  free((yyvsp[(3) - (5)].token));
	  (yyval.constituent) = (struct constituent *) set_namespace_name((yyvsp[(2) - (5)].defnamespace_constituent), (yyvsp[(1) - (5)].token));
	}
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1134 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 1135 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 308:

/* Line 1464 of yacc.c  */
#line 1139 "parser.y"
    { (yyval.defnamespace_constituent) = make_define_module(); }
    break;

  case 310:

/* Line 1464 of yacc.c  */
#line 1141 "parser.y"
    { (yyval.defnamespace_constituent) = (yyvsp[(1) - (2)].defnamespace_constituent); free((yyvsp[(2) - (2)].token)); }
    break;

  case 311:

/* Line 1464 of yacc.c  */
#line 1146 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause(make_define_module(), (yyvsp[(1) - (1)].use_clause)); }
    break;

  case 312:

/* Line 1464 of yacc.c  */
#line 1148 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports(make_define_module(), (yyvsp[(1) - (1)].variable_names)); }
    break;

  case 313:

/* Line 1464 of yacc.c  */
#line 1150 "parser.y"
    { (yyval.defnamespace_constituent) = add_creates(make_define_module(), (yyvsp[(1) - (1)].variable_names)); }
    break;

  case 314:

/* Line 1464 of yacc.c  */
#line 1152 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].use_clause)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 1154 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].variable_names)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 1156 "parser.y"
    { (yyval.defnamespace_constituent) = add_creates((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].variable_names)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 1160 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.variable_names) = (yyvsp[(2) - (2)].variable_names); }
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 1164 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.variable_names) = (yyvsp[(2) - (2)].variable_names); }
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 1169 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.use_clause) = make_use_clause((yyvsp[(2) - (3)].token), (yyvsp[(3) - (3)].use_options)); }
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 1173 "parser.y"
    { (yyval.use_options) = make_use_options(); }
    break;

  case 321:

/* Line 1464 of yacc.c  */
#line 1175 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.use_options) = add_use_option((yyvsp[(1) - (3)].use_options), (yyvsp[(3) - (3)].use_option)); }
    break;

  case 327:

/* Line 1464 of yacc.c  */
#line 1188 "parser.y"
    { (yyval.use_option) = make_prefix_option((yyvsp[(2) - (2)].token)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 328:

/* Line 1464 of yacc.c  */
#line 1193 "parser.y"
    { (yyval.use_option) = make_use_option(useopt_IMPORT_ALL); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 329:

/* Line 1464 of yacc.c  */
#line 1195 "parser.y"
    { (yyval.use_option) = (struct use_option *) (yyvsp[(3) - (4)].import_option); free((yyvsp[(1) - (4)].token)); free((yyvsp[(2) - (4)].token)); free((yyvsp[(4) - (4)].token)); }
    break;

  case 330:

/* Line 1464 of yacc.c  */
#line 1199 "parser.y"
    { (yyval.import_option) = make_import_option(); }
    break;

  case 331:

/* Line 1464 of yacc.c  */
#line 1200 "parser.y"
    { (yyval.import_option) = (yyvsp[(1) - (1)].import_option); }
    break;

  case 332:

/* Line 1464 of yacc.c  */
#line 1205 "parser.y"
    { (yyval.import_option) = add_import(make_import_option(), (yyvsp[(1) - (1)].token), NULL); }
    break;

  case 333:

/* Line 1464 of yacc.c  */
#line 1207 "parser.y"
    { (yyval.import_option) = add_import(make_import_option(), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 334:

/* Line 1464 of yacc.c  */
#line 1209 "parser.y"
    { (yyval.import_option) = add_import((yyvsp[(1) - (3)].import_option), (yyvsp[(3) - (3)].token), NULL); free((yyvsp[(2) - (3)].token)); }
    break;

  case 335:

/* Line 1464 of yacc.c  */
#line 1211 "parser.y"
    { (yyval.import_option) = add_import((yyvsp[(1) - (5)].import_option), (yyvsp[(3) - (5)].token), (yyvsp[(5) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); }
    break;

  case 336:

/* Line 1464 of yacc.c  */
#line 1216 "parser.y"
    { (yyval.use_option) = make_exclude_option((yyvsp[(2) - (2)].variable_names)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 337:

/* Line 1464 of yacc.c  */
#line 1221 "parser.y"
    { (yyval.use_option) = make_use_option(useopt_EXPORT_ALL); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 338:

/* Line 1464 of yacc.c  */
#line 1223 "parser.y"
    { (yyval.use_option) = make_export_option((yyvsp[(2) - (2)].variable_names)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 339:

/* Line 1464 of yacc.c  */
#line 1228 "parser.y"
    { (yyval.use_option) = make_rename_option(make_renamings());
	  free((yyvsp[(1) - (3)].token)); free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 340:

/* Line 1464 of yacc.c  */
#line 1231 "parser.y"
    { (yyval.use_option) = make_rename_option((yyvsp[(3) - (4)].renamings)); free((yyvsp[(1) - (4)].token)); free((yyvsp[(2) - (4)].token)); free((yyvsp[(4) - (4)].token)); }
    break;

  case 341:

/* Line 1464 of yacc.c  */
#line 1236 "parser.y"
    { (yyval.renamings) = add_renaming(make_renamings(), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 342:

/* Line 1464 of yacc.c  */
#line 1238 "parser.y"
    { (yyval.renamings) = add_renaming((yyvsp[(1) - (5)].renamings), (yyvsp[(3) - (5)].token), (yyvsp[(5) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); }
    break;

  case 343:

/* Line 1464 of yacc.c  */
#line 1242 "parser.y"
    { (yyval.variable_names) = make_variable_names(); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 344:

/* Line 1464 of yacc.c  */
#line 1244 "parser.y"
    { (yyval.variable_names) = (yyvsp[(2) - (3)].variable_names); free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 345:

/* Line 1464 of yacc.c  */
#line 1249 "parser.y"
    { (yyval.variable_names) = add_variable_name(make_variable_names(), (yyvsp[(1) - (1)].token)); }
    break;

  case 346:

/* Line 1464 of yacc.c  */
#line 1251 "parser.y"
    { (yyval.variable_names) = add_variable_name((yyvsp[(1) - (3)].variable_names), (yyvsp[(3) - (3)].token)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 347:

/* Line 1464 of yacc.c  */
#line 1256 "parser.y"
    { if ((yyvsp[(5) - (5)].token)) {
	      if (strcasecmp((char *)(yyvsp[(1) - (5)].token)->chars, (char *)(yyvsp[(5) - (5)].token)->chars) != 0) {
		  error((yyvsp[(5) - (5)].token)->line, "mismatched name, ``%s'' isn't ``%s''",
			(yyvsp[(5) - (5)].token)->chars, (yyvsp[(1) - (5)].token)->chars);
		  yacc_recover();
	      }
	      free((yyvsp[(5) - (5)].token));
	  } 
	  free((yyvsp[(3) - (5)].token));
	  (yyval.constituent) = (struct constituent *) set_namespace_name((yyvsp[(2) - (5)].defnamespace_constituent), (yyvsp[(1) - (5)].token));
	}
    break;

  case 348:

/* Line 1464 of yacc.c  */
#line 1270 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 349:

/* Line 1464 of yacc.c  */
#line 1271 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 350:

/* Line 1464 of yacc.c  */
#line 1275 "parser.y"
    { (yyval.defnamespace_constituent) = make_define_library(); }
    break;

  case 352:

/* Line 1464 of yacc.c  */
#line 1277 "parser.y"
    { (yyval.defnamespace_constituent) = (yyvsp[(1) - (2)].defnamespace_constituent); free((yyvsp[(2) - (2)].token)); }
    break;

  case 353:

/* Line 1464 of yacc.c  */
#line 1282 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause(make_define_library(), (yyvsp[(1) - (1)].use_clause)); }
    break;

  case 354:

/* Line 1464 of yacc.c  */
#line 1284 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports(make_define_library(), (yyvsp[(1) - (1)].variable_names)); }
    break;

  case 355:

/* Line 1464 of yacc.c  */
#line 1286 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].use_clause)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 356:

/* Line 1464 of yacc.c  */
#line 1288 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].variable_names)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 357:

/* Line 1464 of yacc.c  */
#line 1292 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 358:

/* Line 1464 of yacc.c  */
#line 1292 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 359:

/* Line 1464 of yacc.c  */
#line 1293 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 360:

/* Line 1464 of yacc.c  */
#line 1293 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 361:

/* Line 1464 of yacc.c  */
#line 1294 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 362:

/* Line 1464 of yacc.c  */
#line 1294 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 363:

/* Line 1464 of yacc.c  */
#line 1295 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 364:

/* Line 1464 of yacc.c  */
#line 1295 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 365:

/* Line 1464 of yacc.c  */
#line 1296 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 366:

/* Line 1464 of yacc.c  */
#line 1296 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 367:

/* Line 1464 of yacc.c  */
#line 1297 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 368:

/* Line 1464 of yacc.c  */
#line 1297 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 369:

/* Line 1464 of yacc.c  */
#line 1298 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 370:

/* Line 1464 of yacc.c  */
#line 1298 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 371:

/* Line 1464 of yacc.c  */
#line 1299 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 372:

/* Line 1464 of yacc.c  */
#line 1299 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 373:

/* Line 1464 of yacc.c  */
#line 1300 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 374:

/* Line 1464 of yacc.c  */
#line 1300 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 375:

/* Line 1464 of yacc.c  */
#line 1301 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 376:

/* Line 1464 of yacc.c  */
#line 1301 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 377:

/* Line 1464 of yacc.c  */
#line 1302 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 378:

/* Line 1464 of yacc.c  */
#line 1302 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 379:

/* Line 1464 of yacc.c  */
#line 1303 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 380:

/* Line 1464 of yacc.c  */
#line 1303 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 381:

/* Line 1464 of yacc.c  */
#line 1304 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 382:

/* Line 1464 of yacc.c  */
#line 1304 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 383:

/* Line 1464 of yacc.c  */
#line 1305 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 384:

/* Line 1464 of yacc.c  */
#line 1305 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 385:

/* Line 1464 of yacc.c  */
#line 1307 "parser.y"
    { (yyval.token) = NULL; }
    break;

  case 386:

/* Line 1464 of yacc.c  */
#line 1307 "parser.y"
    { (yyval.token) = (yyvsp[(1) - (1)].token); }
    break;

  case 387:

/* Line 1464 of yacc.c  */
#line 1308 "parser.y"
    { (yyval.token) = NULL; }
    break;

  case 388:

/* Line 1464 of yacc.c  */
#line 1308 "parser.y"
    { (yyval.token) = (yyvsp[(1) - (1)].token); }
    break;

  case 389:

/* Line 1464 of yacc.c  */
#line 1310 "parser.y"
    { (yyval.token) = NULL; }
    break;

  case 390:

/* Line 1464 of yacc.c  */
#line 1311 "parser.y"
    { (yyval.token) = (yyvsp[(1) - (1)].token); }
    break;

  case 391:

/* Line 1464 of yacc.c  */
#line 1314 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 392:

/* Line 1464 of yacc.c  */
#line 1314 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 393:

/* Line 1464 of yacc.c  */
#line 1315 "parser.y"
    { (yyval.else_part) = NULL; }
    break;

  case 394:

/* Line 1464 of yacc.c  */
#line 1315 "parser.y"
    { (yyval.else_part) = (yyvsp[(1) - (1)].else_part); }
    break;

  case 395:

/* Line 1464 of yacc.c  */
#line 1316 "parser.y"
    { (yyval.body) = NULL; }
    break;

  case 396:

/* Line 1464 of yacc.c  */
#line 1316 "parser.y"
    { (yyval.body) = (yyvsp[(1) - (1)].body); }
    break;



/* Line 1464 of yacc.c  */
#line 5244 "parser.c"
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



/* Line 1684 of yacc.c  */
#line 1318 "parser.y"


static void yyerror(char *msg)
{
    if (yylval.token)
	error(yylval.token->line, "%s at or before `%s'\n",
	      msg, yylval.token->chars);
    else
	error(line_count, "%s at end-of-file\n", msg);
    yacc_recover();
}

static boolean verify_symbol_aux(struct id *id, struct token *token)
{
    if (token) {
	int line = token->line;
	char *ptr = (char *)token->chars;

	if (*ptr == '\\')
	    ptr++;

	if (strcasecmp((char *)id->symbol->name, ptr)) {
	    error(line, "mismatched name, ``%s'' isn't ``%s''",
		  token->chars, id->symbol->name);
	    free(token);
	    return TRUE;
	}
	else
	    free(token);
    }
    return FALSE;
}

static void yacc_recover()
{
    while (yychar) {
	struct token_list *rlist = yacc_recovery_list;
	while (rlist)
	    if (rlist->token == yychar)
		return;
	    else
		rlist = rlist->next;
	yychar = yylex();
    }
    yyclearin;
}

static void push_yacc_recovery(int token)
{
    struct token_list *newrec;

    newrec = malloc(sizeof(*newrec));
    newrec->token = token;
    newrec->next = yacc_recovery_list;
    yacc_recovery_list = newrec;
}

static void pop_yacc_recoveries(int count)
{
    for ( ; count-- > 0; )
	yacc_recovery_list = yacc_recovery_list->next;
}

struct token *make_token(char *ptr, int len)
{
    struct token *token = malloc(sizeof(struct token) 
				 + len + 1 - sizeof(token->chars));

    token->length = len;
    memcpy(token->chars, ptr, len);
    token->line = line_count;
    token->chars[len] = 0;

    return token;
}


