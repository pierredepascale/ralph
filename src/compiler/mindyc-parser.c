/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 34 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


/* Line 371 of yacc.c  */
#line 97 "mindyc-parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
     FN = 261,
     DEF = 262,
     BOGUS = 263,
     SYMBOL = 264,
     KEYWORD = 265,
     SYMBOL_LITERAL = 266,
     SHARP_T = 267,
     SHARP_F = 268,
     STRING = 269,
     CHARACTER = 270,
     INTEGER = 271,
     FLOAT = 272,
     BINARY_OPERATOR = 273,
     LPAREN = 274,
     RPAREN = 275,
     COMMA = 276,
     DOT = 277,
     SEMI = 278,
     LBRACKET = 279,
     RBRACKET = 280,
     LBRACE = 281,
     RBRACE = 282,
     COLON_COLON = 283,
     MINUS = 284,
     TILDE = 285,
     EQUAL = 286,
     EQUAL_EQUAL = 287,
     ARROW = 288,
     SHARP_PAREN = 289,
     SHARP_BRACKET = 290,
     NEXT = 291,
     REST = 292,
     KEY = 293,
     ALL_KEYS = 294,
     ABOVE = 295,
     ABSTRACT = 296,
     DBEGIN = 297,
     BELOW = 298,
     BLOCK = 299,
     BY = 300,
     CASE = 301,
     CLASS = 302,
     CLEANUP = 303,
     CONCRETE = 304,
     CONSTANT = 305,
     DEFINE = 306,
     DOMAIN = 307,
     EACH_SUBCLASS = 308,
     ELSE = 309,
     ELSEIF = 310,
     END = 311,
     EXCEPTION = 312,
     FINALLY = 313,
     FOR = 314,
     FREE = 315,
     FROM = 316,
     FUNCTION = 317,
     GENERIC = 318,
     HANDLER = 319,
     IF = 320,
     IN = 321,
     INHERITED = 322,
     INLINE = 323,
     INSTANCE = 324,
     KEYED_BY = 325,
     KEYWORD_RESERVED_WORD = 326,
     LET = 327,
     LOCAL = 328,
     METHOD = 329,
     OPEN = 330,
     OTHERWISE = 331,
     PRIMARY = 332,
     REQUIRED = 333,
     SEALED = 334,
     SELECT = 335,
     SLOT = 336,
     THEN = 337,
     TO = 338,
     UNLESS = 339,
     UNTIL = 340,
     USING = 341,
     VARIABLE = 342,
     VIRTUAL = 343,
     WHILE = 344,
     MODULE = 345,
     LIBRARY = 346,
     EXPORT = 347,
     CREATE = 348,
     USE = 349,
     ALL = 350,
     PREFIX_KEYWORD = 351,
     IMPORT_KEYWORD = 352,
     EXCLUDE_KEYWORD = 353,
     EXPORT_KEYWORD = 354,
     RENAME_KEYWORD = 355,
     UNTIL_KEYWORD = 356,
     WHILE_KEYWORD = 357,
     FEATURE_IF = 358,
     FEATURE_ELSE_IF = 359,
     FEATURE_ELSE = 360,
     FEATURE_ENDIF = 361
   };
#endif
/* Tokens.  */
#define HEADER_KEY 258
#define HEADER_VAL 259
#define HEADER_END 260
#define FN 261
#define DEF 262
#define BOGUS 263
#define SYMBOL 264
#define KEYWORD 265
#define SYMBOL_LITERAL 266
#define SHARP_T 267
#define SHARP_F 268
#define STRING 269
#define CHARACTER 270
#define INTEGER 271
#define FLOAT 272
#define BINARY_OPERATOR 273
#define LPAREN 274
#define RPAREN 275
#define COMMA 276
#define DOT 277
#define SEMI 278
#define LBRACKET 279
#define RBRACKET 280
#define LBRACE 281
#define RBRACE 282
#define COLON_COLON 283
#define MINUS 284
#define TILDE 285
#define EQUAL 286
#define EQUAL_EQUAL 287
#define ARROW 288
#define SHARP_PAREN 289
#define SHARP_BRACKET 290
#define NEXT 291
#define REST 292
#define KEY 293
#define ALL_KEYS 294
#define ABOVE 295
#define ABSTRACT 296
#define DBEGIN 297
#define BELOW 298
#define BLOCK 299
#define BY 300
#define CASE 301
#define CLASS 302
#define CLEANUP 303
#define CONCRETE 304
#define CONSTANT 305
#define DEFINE 306
#define DOMAIN 307
#define EACH_SUBCLASS 308
#define ELSE 309
#define ELSEIF 310
#define END 311
#define EXCEPTION 312
#define FINALLY 313
#define FOR 314
#define FREE 315
#define FROM 316
#define FUNCTION 317
#define GENERIC 318
#define HANDLER 319
#define IF 320
#define IN 321
#define INHERITED 322
#define INLINE 323
#define INSTANCE 324
#define KEYED_BY 325
#define KEYWORD_RESERVED_WORD 326
#define LET 327
#define LOCAL 328
#define METHOD 329
#define OPEN 330
#define OTHERWISE 331
#define PRIMARY 332
#define REQUIRED 333
#define SEALED 334
#define SELECT 335
#define SLOT 336
#define THEN 337
#define TO 338
#define UNLESS 339
#define UNTIL 340
#define USING 341
#define VARIABLE 342
#define VIRTUAL 343
#define WHILE 344
#define MODULE 345
#define LIBRARY 346
#define EXPORT 347
#define CREATE 348
#define USE 349
#define ALL 350
#define PREFIX_KEYWORD 351
#define IMPORT_KEYWORD 352
#define EXCLUDE_KEYWORD 353
#define EXPORT_KEYWORD 354
#define RENAME_KEYWORD 355
#define UNTIL_KEYWORD 356
#define WHILE_KEYWORD 357
#define FEATURE_IF 358
#define FEATURE_ELSE_IF 359
#define FEATURE_ELSE 360
#define FEATURE_ENDIF 361



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 63 "parser.y"

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
    struct gf_suffix *gf_suffix;
    struct else_part *else_part;

    struct defnamespace_constituent *defnamespace_constituent;
    struct variable_names *variable_names;
    struct use_clause *use_clause;
    struct use_options *use_options;
    struct use_option *use_option;
    struct import_option *import_option;
    struct renamings *renamings;


/* Line 387 of yacc.c  */
#line 401 "mindyc-parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 429 "mindyc-parser.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2682

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  332
/* YYNRULES -- Number of states.  */
#define YYNSTATES  562

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

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
     105,   106
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    18,    19,    22,
      25,    26,    28,    30,    34,    36,    38,    40,    42,    45,
      48,    51,    54,    57,    60,    63,    69,    78,    81,    85,
      91,    95,    97,    99,   103,   105,   109,   111,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   183,   185,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   205,   208,   211,   215,   217,   219,   221,
     223,   226,   229,   231,   233,   235,   240,   245,   247,   251,
     255,   257,   258,   260,   262,   266,   268,   271,   273,   275,
     277,   279,   281,   283,   285,   289,   293,   297,   299,   302,
     306,   307,   309,   311,   315,   317,   319,   320,   325,   326,
     335,   336,   341,   342,   351,   352,   361,   362,   371,   372,
     380,   381,   389,   390,   398,   399,   401,   405,   407,   409,
     412,   415,   418,   421,   423,   427,   428,   430,   432,   435,
     439,   446,   455,   459,   462,   466,   470,   473,   477,   481,
     485,   489,   495,   503,   507,   513,   519,   527,   533,   536,
     539,   542,   545,   552,   553,   556,   559,   562,   569,   571,
     575,   576,   579,   581,   585,   589,   590,   593,   594,   597,
     598,   600,   604,   609,   615,   617,   621,   627,   628,   631,
     633,   634,   638,   641,   643,   647,   649,   652,   653,   656,
     658,   660,   664,   668,   672,   675,   679,   683,   687,   693,
     698,   704,   708,   714,   715,   718,   720,   725,   727,   731,
     733,   737,   738,   741,   743,   744,   748,   751,   753,   757,
     761,   763,   767,   769,   772,   774,   778,   780,   783,   786,
     787,   790,   792,   794,   798,   802,   807,   813,   814,   816,
     817,   820,   821,   824,   828,   829,   831,   834,   836,   838,
     840,   844,   848,   852,   855,   858,   862,   863,   867,   869,
     871,   873,   875,   877,   880,   883,   888,   889,   891,   893,
     897,   901,   907,   910,   913,   916,   920,   925,   929,   935,
     938,   942,   944,   948,   952,   953,   955,   958,   960,   962,
     966,   970,   971,   973,   974,   976,   977,   979,   980,   982,
     983,   985,   986
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,   111,    -1,     5,    -1,   110,     5,
      -1,     3,     4,    -1,   110,     3,     4,    -1,    -1,   112,
     114,    -1,   115,   227,    -1,    -1,   113,    -1,   116,    -1,
     115,    23,   116,    -1,   117,    -1,   118,    -1,   127,    -1,
       1,    -1,    47,   167,    -1,    63,   176,    -1,     7,   186,
      -1,     7,   119,    -1,    90,   206,    -1,    91,   224,    -1,
      72,   119,    -1,    72,    64,   122,    31,   127,    -1,    72,
      64,    19,   127,   174,    20,    31,   127,    -1,    73,   124,
      -1,   121,    31,   127,    -1,    19,   120,    20,    31,   127,
      -1,   120,    31,   127,    -1,   198,    -1,   121,    -1,   121,
      21,   120,    -1,   122,    -1,   122,    28,   130,    -1,   123,
      -1,    62,    -1,     9,    -1,    40,    -1,    41,    -1,    45,
      -1,    47,    -1,    49,    -1,    50,    -1,    52,    -1,    53,
      -1,    60,    -1,    61,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,    70,    -1,    71,    -1,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    82,    -1,    83,    -1,    86,
      -1,    87,    -1,    88,    -1,    90,    -1,    91,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,   125,    -1,   124,
      21,   125,    -1,   186,    -1,    10,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,
      -1,   126,    -1,   130,    -1,   130,   128,    -1,   129,   130,
      -1,   128,   129,   130,    -1,    18,    -1,    29,    -1,    31,
      -1,    32,    -1,    29,   130,    -1,    30,   130,    -1,   131,
      -1,   135,    -1,   122,    -1,   131,    24,   132,    25,    -1,
     131,    19,   132,    20,    -1,   185,    -1,   131,    22,   122,
      -1,    19,   127,    20,    -1,   141,    -1,    -1,   133,    -1,
     134,    -1,   133,    21,   134,    -1,   127,    -1,   126,   127,
      -1,    12,    -1,    13,    -1,   136,    -1,    15,    -1,    16,
      -1,    17,    -1,    11,    -1,    34,   137,    20,    -1,    34,
     138,    20,    -1,    35,   138,    25,    -1,    14,    -1,   136,
      14,    -1,   139,    22,   140,    -1,    -1,   139,    -1,   140,
      -1,   139,    21,   140,    -1,   135,    -1,   126,    -1,    -1,
      42,   142,   114,    56,    -1,    -1,    44,    19,   229,    20,
     143,   113,   151,    56,    -1,    -1,    46,   144,   153,    56,
      -1,    -1,    65,    19,   127,    20,   145,   113,   231,    56,
      -1,    -1,    59,    19,   154,    20,   146,   114,   232,    56,
      -1,    -1,    80,    19,   127,   230,    20,   147,   153,    56,
      -1,    -1,    84,    19,   127,    20,   148,   113,    56,    -1,
      -1,    85,    19,   127,    20,   149,   114,    56,    -1,    -1,
      89,    19,   127,    20,   150,   114,    56,    -1,    -1,   152,
      -1,   155,   163,   155,    -1,   156,    -1,   158,    -1,    85,
     127,    -1,   101,   127,    -1,    89,   127,    -1,   102,   127,
      -1,   161,    -1,   161,    21,   154,    -1,    -1,   156,    -1,
     157,    -1,   156,   157,    -1,    57,   122,   113,    -1,    57,
      19,   127,   174,    20,   113,    -1,    57,    19,   122,    28,
     127,   174,    20,   113,    -1,    76,   228,   113,    -1,   160,
     227,    -1,   160,    23,   158,    -1,   160,    23,   159,    -1,
     116,   227,    -1,   116,    23,   158,    -1,   116,    23,   159,
      -1,   127,    33,   116,    -1,   127,    21,   160,    -1,   121,
      31,   127,    82,   127,    -1,    19,   120,    20,    31,   127,
      82,   127,    -1,   121,    66,   127,    -1,   121,    70,   121,
      66,   127,    -1,   121,    66,   127,    86,   121,    -1,   121,
      70,   121,    66,   127,    86,   121,    -1,   121,    61,   127,
     166,   230,    -1,    45,   127,    -1,    48,   113,    -1,    58,
     113,    -1,    54,   113,    -1,    55,    19,   127,    20,   113,
     231,    -1,    -1,    83,   127,    -1,    40,   127,    -1,    43,
     127,    -1,   122,    19,   168,    20,   169,    56,    -1,   127,
      -1,   168,    21,   127,    -1,    -1,   170,   227,    -1,   171,
      -1,   170,    23,   171,    -1,   122,   173,   172,    -1,    -1,
      31,   127,    -1,    -1,    28,   130,    -1,    -1,   175,    -1,
      21,   126,   127,    -1,   175,    21,   126,   127,    -1,   122,
      19,   178,    20,   177,    -1,   174,    -1,    33,   191,   174,
      -1,    33,    19,   189,    20,   174,    -1,    -1,   194,   179,
      -1,   180,    -1,    -1,    21,   194,   179,    -1,    21,   180,
      -1,   198,    -1,   198,    21,   181,    -1,   181,    -1,    38,
     182,    -1,    -1,    21,    39,    -1,   183,    -1,   184,    -1,
     184,    21,    39,    -1,   184,    21,   183,    -1,   126,   229,
     204,    -1,   122,   204,    -1,    74,   187,    56,    -1,     6,
     187,    56,    -1,   122,   187,    56,    -1,    19,   192,    20,
     188,   113,    -1,    19,   192,    20,   188,    -1,    19,   192,
      20,   227,   114,    -1,    33,   189,    23,    -1,    33,    19,
     189,    20,   227,    -1,    -1,    37,   191,    -1,   190,    -1,
     190,    21,    37,   191,    -1,   191,    -1,   190,    21,   191,
      -1,   122,    -1,   122,    28,   127,    -1,    -1,   194,   193,
      -1,   195,    -1,    -1,    21,   194,   193,    -1,    21,   195,
      -1,   122,    -1,   122,    28,   127,    -1,   122,    32,   127,
      -1,   196,    -1,   196,    21,   197,    -1,   197,    -1,    36,
     122,    -1,   198,    -1,   198,    21,   199,    -1,   199,    -1,
      37,   122,    -1,    38,   200,    -1,    -1,    21,    39,    -1,
     201,    -1,   202,    -1,   202,    21,    39,    -1,   202,    21,
     201,    -1,   203,   122,   204,   205,    -1,   203,   122,    19,
     127,    20,    -1,    -1,   126,    -1,    -1,    28,   130,    -1,
      -1,    31,   127,    -1,   122,   207,    56,    -1,    -1,   208,
      -1,   208,    23,    -1,   211,    -1,   209,    -1,   210,    -1,
     208,    23,   211,    -1,   208,    23,   209,    -1,   208,    23,
     210,    -1,    92,   223,    -1,    93,   223,    -1,    94,   122,
     212,    -1,    -1,   212,    21,   213,    -1,   214,    -1,   215,
      -1,   218,    -1,   220,    -1,   219,    -1,    96,    14,    -1,
      97,    95,    -1,    97,    26,   216,    27,    -1,    -1,   217,
      -1,   122,    -1,   122,    33,   122,    -1,   217,    21,   122,
      -1,   217,    21,   122,    33,   122,    -1,    98,   222,    -1,
      99,    95,    -1,    99,   222,    -1,   100,    26,    27,    -1,
     100,    26,   221,    27,    -1,   122,    33,   122,    -1,   221,
      21,   122,    33,   122,    -1,    26,    27,    -1,    26,   223,
      27,    -1,   122,    -1,   223,    21,   122,    -1,   122,   225,
      56,    -1,    -1,   226,    -1,   226,    23,    -1,   211,    -1,
     209,    -1,   226,    23,   211,    -1,   226,    23,   209,    -1,
      -1,    23,    -1,    -1,    33,    -1,    -1,   122,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   164,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   289,   289,   293,   294,   298,   300,   305,   305,   310,
     314,   315,   320,   322,   327,   328,   329,   332,   336,   338,
     340,   342,   344,   346,   351,   353,   357,   361,   366,   368,
     370,   375,   377,   379,   384,   385,   390,   391,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     430,   431,   436,   440,   441,   442,   443,   444,   445,   446,
     447,   451,   452,   453,   465,   466,   470,   471,   472,   473,
     477,   478,   479,   483,   484,   485,   487,   489,   490,   494,
     495,   499,   500,   504,   505,   509,   510,   515,   516,   517,
     518,   519,   520,   521,   522,   524,   526,   531,   532,   536,
     542,   543,   548,   549,   554,   555,   559,   559,   564,   563,
     572,   572,   576,   576,   581,   581,   586,   586,   590,   590,
     595,   595,   600,   600,   609,   610,   614,   616,   621,   625,
     628,   630,   634,   636,   638,   643,   644,   648,   650,   655,
     663,   667,   675,   680,   682,   684,   689,   691,   693,   698,
     700,   705,   708,   711,   713,   715,   717,   719,   723,   724,
     725,   728,   729,   737,   738,   739,   740,   744,   753,   755,
     760,   761,   765,   767,   772,   781,   782,   786,   787,   791,
     792,   796,   798,   803,   810,   812,   818,   823,   824,   826,
     831,   832,   834,   839,   841,   843,   848,   852,   853,   855,
     859,   861,   864,   869,   871,   876,   878,   883,   891,   895,
     899,   906,   908,   914,   915,   917,   919,   924,   926,   931,
     934,   938,   939,   940,   945,   946,   948,   953,   955,   957,
     963,   965,   967,   972,   976,   978,   980,   985,   989,   994,
     995,   997,  1001,  1003,  1006,  1011,  1014,  1023,  1024,  1028,
    1029,  1033,  1034,  1038,  1045,  1046,  1047,  1051,  1053,  1055,
    1057,  1059,  1061,  1066,  1070,  1074,  1079,  1080,  1085,  1086,
    1087,  1088,  1089,  1093,  1098,  1100,  1105,  1106,  1110,  1112,
    1114,  1116,  1121,  1126,  1128,  1133,  1136,  1141,  1143,  1148,
    1149,  1154,  1156,  1161,  1168,  1169,  1170,  1174,  1176,  1178,
    1180,  1185,  1185,  1186,  1186,  1188,  1188,  1190,  1190,  1191,
    1191,  1192,  1192
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HEADER_KEY", "HEADER_VAL", "HEADER_END",
  "FN", "DEF", "BOGUS", "SYMBOL", "KEYWORD", "SYMBOL_LITERAL", "SHARP_T",
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
  "defining_form", "local_declaration", "bindings", "variables",
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
  "slot_spec", "slot_init_expr_opt", "slot_type_opt", "property_list_opt",
  "property_list", "generic_function_definition", "gf_suffix",
  "gf_parameters", "more_gf_parameters", "gf_rest_parameters",
  "gf_keyword_parameters_list", "gf_keyword_parameters_opt",
  "gf_keyword_parameters", "gf_keyword_parameter", "anonymous_method",
  "named_method", "method_description", "return_type", "return_type_list",
  "return_type_list_head", "return_type_element", "parameters",
  "more_parameters", "positional_parameter", "next_parameters",
  "next_parameter", "rest_parameters", "rest_parameter",
  "keyword_parameters_list", "keyword_parameters_opt",
  "keyword_parameters", "keyword_parameter", "keyword_opt",
  "keyword_parameter_type", "keyword_parameter_default",
  "module_definition", "module_clauses_opt", "module_clauses",
  "export_clause", "create_clause", "use_clause", "module_use_options",
  "module_use_option", "prefix_option", "import_option", "imports_opt",
  "imports", "exclude_option", "export_option", "rename_option",
  "rename_specs", "variable_name_set", "variable_names",
  "library_definition", "library_clauses_opt", "library_clauses",
  "semi_opt", "arrow_opt", "variable_name_opt", "by_part_opt",
  "else_part_opt", "final_part_opt", YY_NULL
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
     355,   356,   357,   358,   359,   360,   361
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   109,   109,   110,   110,   112,   111,   113,
     114,   114,   115,   115,   116,   116,   116,   116,   117,   117,
     117,   117,   117,   117,   118,   118,   118,   118,   119,   119,
     119,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   125,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   128,   128,   129,   129,   129,   129,
     130,   130,   130,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   137,
     138,   138,   139,   139,   140,   140,   142,   141,   143,   141,
     144,   141,   145,   141,   146,   141,   147,   141,   148,   141,
     149,   141,   150,   141,   151,   151,   152,   152,   153,   154,
     154,   154,   154,   154,   154,   155,   155,   156,   156,   157,
     157,   157,   158,   158,   158,   158,   159,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   162,   163,
     164,   165,   165,   166,   166,   166,   166,   167,   168,   168,
     169,   169,   170,   170,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   176,   177,   177,   177,   178,   178,   178,
     179,   179,   179,   180,   180,   180,   181,   182,   182,   182,
     183,   183,   183,   184,   184,   185,   185,   186,   187,   187,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   192,   192,   193,   193,   193,   194,   194,   194,
     195,   195,   195,   196,   197,   197,   197,   198,   199,   200,
     200,   200,   201,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   207,   207,   207,   208,   208,   208,
     208,   208,   208,   209,   210,   211,   212,   212,   213,   213,
     213,   213,   213,   214,   215,   215,   216,   216,   217,   217,
     217,   217,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   223,   224,   225,   225,   225,   226,   226,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   230,   231,
     231,   232,   232
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     3,     0,     2,     2,
       0,     1,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     5,     8,     2,     3,     5,
       3,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     4,     4,     1,     3,     3,
       1,     0,     1,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     2,     3,
       0,     1,     1,     3,     1,     1,     0,     4,     0,     8,
       0,     4,     0,     8,     0,     8,     0,     8,     0,     7,
       0,     7,     0,     7,     0,     1,     3,     1,     1,     2,
       2,     2,     2,     1,     3,     0,     1,     1,     2,     3,
       6,     8,     3,     2,     3,     3,     2,     3,     3,     3,
       3,     5,     7,     3,     5,     5,     7,     5,     2,     2,
       2,     2,     6,     0,     2,     2,     2,     6,     1,     3,
       0,     2,     1,     3,     3,     0,     2,     0,     2,     0,
       1,     3,     4,     5,     1,     3,     5,     0,     2,     1,
       0,     3,     2,     1,     3,     1,     2,     0,     2,     1,
       1,     3,     3,     3,     2,     3,     3,     3,     5,     4,
       5,     3,     5,     0,     2,     1,     4,     1,     3,     1,
       3,     0,     2,     1,     0,     3,     2,     1,     3,     3,
       1,     3,     1,     2,     1,     3,     1,     2,     2,     0,
       2,     1,     1,     3,     3,     4,     5,     0,     1,     0,
       2,     0,     2,     3,     0,     1,     2,     1,     1,     1,
       3,     3,     3,     2,     2,     3,     0,     3,     1,     1,
       1,     1,     1,     2,     2,     4,     0,     1,     1,     3,
       3,     5,     2,     2,     2,     3,     4,     3,     5,     2,
       3,     1,     3,     3,     0,     1,     2,     1,     1,     3,
       3,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     3,     0,     7,     0,     5,     1,     2,     0,
       0,     4,    17,     0,     0,    38,    73,   113,   107,   108,
     117,   110,   111,   112,     0,     0,     0,   120,   120,    39,
      40,   126,     0,    41,   130,    42,    43,    44,    45,    46,
       0,    47,    48,    37,     0,     0,    49,    50,    51,    52,
      53,    54,     0,     0,     0,    55,    56,    57,     0,    58,
      59,    60,     0,     0,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    74,    75,    76,    77,    78,    79,
      80,    11,     8,   321,    12,    14,    15,    94,    36,    81,
      16,    82,    92,    93,   109,   100,    97,     6,   241,     0,
       0,     0,    42,    64,    65,    21,     0,     0,    34,    20,
      31,     0,    90,    91,   125,   124,     0,     0,   121,   122,
       0,   121,     0,   325,     0,     0,    18,     0,     0,    19,
       0,     0,    24,    34,     0,    27,    70,    72,     0,     0,
       0,     0,     0,   274,    22,   314,    23,     0,     9,    86,
      87,    88,    89,    83,     0,   101,     0,   101,   118,     0,
     267,   247,     0,   244,   243,   250,   252,   254,   256,   226,
       0,    32,   257,     0,     0,     0,     0,     0,    99,   114,
     115,     0,     0,   116,     0,   326,     0,   323,     0,     0,
     148,   321,     0,     0,     0,     0,     0,     0,     0,     0,
     153,   207,     0,     0,     0,     0,   225,   327,     0,     0,
       0,     0,     0,     0,     0,   275,   278,   279,   277,   318,
     317,     0,   315,    13,     0,    84,    81,   105,     0,   102,
     103,    98,     0,   253,     0,   268,   258,   261,   262,     0,
       0,     0,   321,     0,   242,     0,     0,     0,    30,    33,
      28,    35,   227,   123,   119,   127,   128,   324,     0,     0,
       0,   131,     0,   163,   188,     0,     0,   149,   151,   150,
     152,     0,     0,     0,     0,   134,     0,   217,     0,   209,
     215,   210,   213,   132,   199,     0,    71,     0,   328,     0,
     138,   140,   142,   311,   283,   284,   286,   273,   276,   313,
     316,    85,   106,    96,     0,    95,   260,   267,   269,   248,
     249,   322,   233,     0,     0,   244,   246,   251,   255,     0,
       0,   162,   170,   169,   321,    16,   164,   165,   190,     0,
       0,     0,   183,   173,     0,     0,   154,     0,   269,   325,
     216,   219,   220,   199,     0,   208,     0,     0,     0,     0,
     200,    25,   178,   136,     0,     0,     0,     0,   285,   281,
     282,   280,   320,   319,   104,   263,   264,     0,     0,   271,
     233,     0,   239,     0,   235,   237,   228,   230,   245,    29,
     144,     0,   166,   197,     0,   321,   192,   189,     0,     0,
       0,     0,     0,   327,     0,     0,   331,   218,   224,   269,
       0,     0,   204,   203,   212,   210,   214,   329,     0,     0,
       0,     0,     0,     0,     0,   312,     0,     0,   270,     0,
     265,     0,   234,     0,   231,     0,     0,     0,   145,     0,
     147,   157,   167,   168,     0,   195,   187,   322,   191,     0,
     171,   185,   186,   184,   177,   175,   174,     0,   332,     0,
     223,   221,   222,   233,   199,   211,     0,     0,   330,     0,
     201,     0,     0,     0,   139,   141,   143,     0,     0,     0,
       0,     0,   287,   288,   289,   290,   292,   291,   266,   272,
     321,   240,     0,   238,     0,     0,   129,     0,   155,   158,
     198,     0,   194,   193,     0,     0,   180,   135,     0,   205,
     181,     0,   133,    26,   202,   137,   293,   296,   294,     0,
     302,   303,   304,     0,   232,   236,    94,   199,   159,   179,
     146,   156,   196,   172,   176,   199,     0,   298,     0,   297,
     309,     0,   305,     0,     0,     0,     0,   206,     0,     0,
     295,     0,   310,     0,     0,   306,   199,     0,   329,   299,
     300,   307,     0,     0,   160,   182,     0,     0,     0,   301,
     308,   161
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     8,     9,    81,    82,    83,    84,
      85,    86,   105,   106,   171,    87,    88,   135,   136,    89,
      90,   153,   154,    91,    92,   228,   229,   230,    93,    94,
     116,   117,   118,   119,    95,   122,   320,   124,   347,   335,
     411,   354,   355,   356,   427,   428,   189,   199,   429,   430,
     431,   190,   327,   191,   200,   288,   488,   448,   458,   393,
     126,   265,   384,   385,   386,   492,   435,   349,   350,   129,
     403,   278,   345,   279,   280,   340,   341,   342,    96,   137,
     177,   313,   373,   374,   375,   162,   244,   163,   164,   165,
     166,   110,   168,   236,   237,   238,   239,   369,   420,   144,
     214,   215,   216,   217,   218,   358,   472,   473,   474,   528,
     529,   475,   476,   477,   534,   510,   294,   146,   221,   222,
     148,   258,   186,   289,   459,   449
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -412
static const yytype_int16 yypact[] =
{
      85,    49,  -412,    28,  -412,   109,  -412,  -412,  -412,   641,
      53,  -412,  -412,    54,  1950,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  1345,  1735,  1735,  1661,  1661,  -412,
    -412,  -412,    56,  -412,  -412,  2587,  -412,  -412,  -412,  -412,
      72,  -412,  -412,  -412,  2587,    80,  -412,  -412,  -412,  -412,
    -412,  -412,  1822,  2587,    54,  -412,  -412,  -412,   100,  -412,
    -412,  -412,   116,   118,  -412,  -412,  -412,   120,  2587,  2587,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,    47,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,    11,    73,  -412,   127,  -412,  -412,  -412,  1885,    93,
    2141,  2587,  -412,  -412,  -412,  -412,   113,     6,    16,  -412,
    -412,   133,  -412,  -412,  -412,  -412,   135,   137,    82,  -412,
     136,   141,   947,  2587,  1248,   146,  -412,  1568,   147,  -412,
    1345,  2206,  -412,   139,    54,   151,  -412,  -412,   124,  1345,
    1345,  1345,  1345,    40,  -412,    24,  -412,   538,  -412,  -412,
    -412,  -412,  -412,    11,  1735,  1345,  2587,  1345,  -412,  2587,
     235,    70,   154,   160,  -412,   161,  -412,   162,  -412,  -412,
     165,   167,  -412,  1345,  2141,  1345,  1735,   130,  -412,  -412,
    -412,  1661,  1661,  -412,   138,  -412,   176,   170,    12,   148,
    -412,   185,  1345,  2141,  1345,  1345,  1345,  1345,    -5,   189,
     190,  2013,   192,  1345,   182,  2587,  -412,   174,   195,   200,
     203,  2587,  2587,  2587,   168,   187,  -412,  -412,  -412,  -412,
    -412,   171,   205,  -412,  1735,  -412,  1345,  -412,   212,   213,
    -412,  -412,   211,  -412,   198,  -412,  -412,  -412,   217,  2587,
    1345,  1345,    18,  1885,  -412,    88,   201,   210,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  1151,  1345,
    1151,  -412,   743,  -412,  -412,    87,   222,  -412,  -412,  -412,
    -412,  1345,  1345,  1345,  2587,  -412,  1568,  1439,   224,  -412,
    -412,   229,   230,  -412,   236,  1345,  -412,  1345,  -412,   238,
    -412,  -412,  -412,  -412,   240,   240,  -412,  -412,    40,  -412,
      24,  -412,  -412,  -412,  1345,  -412,  -412,   179,    41,  -412,
    -412,  -412,  2078,  1049,   947,   160,  -412,  -412,  -412,  1345,
    1151,  -412,  -412,  -412,   241,    12,  -412,  -412,  2587,  1345,
     228,   183,    -9,   181,   204,   845,  -412,   233,   246,  2587,
    -412,  -412,   248,    15,  2013,  -412,   244,  1151,   220,   263,
     265,  -412,  -412,  -412,  1151,   947,   947,  2587,   266,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  1345,  1735,   257,
    2269,  2587,   261,   267,   270,  -412,  -412,  -412,  -412,  -412,
      19,   743,  -412,   264,   239,   271,  -412,  -412,  1345,  1345,
    1345,  1345,  1345,   174,  2587,  1345,   243,  -412,  -412,   246,
    1503,  2334,  -412,  -412,  -412,   229,  -412,    92,  1345,   268,
     220,  1248,   249,   250,   251,  -412,   -17,   277,  -412,  1345,
    -412,   282,  -412,  1345,  -412,  2397,  2462,   252,  -412,   275,
      20,  -412,  -412,  -412,  1735,   278,  -412,  2587,  -412,   231,
    -412,  -412,  -412,  -412,  -412,  -412,   225,  1151,  -412,   259,
    -412,  -412,  -412,  2269,   236,  -412,  1151,   305,  -412,   272,
    -412,  1345,  1345,   273,  -412,  -412,  -412,   312,    -6,   301,
      -1,   314,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
     315,  -412,  2587,  -412,  1345,  1151,  -412,  1151,   284,  -412,
    -412,  1345,  -412,  -412,  1345,  2587,  -412,  -412,   325,  -412,
    -412,  1345,  -412,  -412,  -412,  -412,  -412,  2587,  -412,  1639,
    -412,  -412,  -412,  2531,  -412,  -412,   318,   236,  -412,  -412,
    -412,   284,  -412,  -412,  -412,   236,   327,   316,   323,   330,
    -412,    25,  -412,   319,    51,  1345,   333,  -412,  1151,  2587,
    -412,  2587,  -412,  2587,  2587,  -412,   236,  1151,    92,  -412,
     321,  -412,   322,   338,  -412,  -412,  2587,  2587,  1151,  -412,
    -412,  -412
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -412,  -412,  -412,  -412,  -412,  -412,  -254,  -109,  -412,  -133,
    -412,  -412,   307,   -78,    -3,   -14,  -412,  -412,   155,    35,
     -19,  -412,   208,   -24,  -412,   206,  -412,    60,   -18,  -412,
    -412,   337,   339,   -23,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,   -45,    98,  -120,  -113,
    -411,  -250,    -4,   119,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,   -58,  -412,  -412,  -311,  -412,  -412,
    -412,  -412,   -21,    37,    36,  -412,   -15,  -412,  -412,   374,
      10,  -412,  -352,  -412,  -354,  -412,    75,  -193,   150,  -412,
     149,   -95,   152,  -412,    89,  -412,  -412,  -314,  -412,  -412,
    -412,  -412,  -130,    97,  -129,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,   -73,  -206,  -412,  -412,  -412,
    -184,  -412,    62,     9,  -149,  -412
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -323
static const yytype_int16 yytable[] =
{
     108,   112,   113,   167,   321,   111,   295,   263,   281,   115,
     115,   107,   326,   184,   223,   219,   220,   422,   421,   489,
     507,   125,   170,    99,   398,   509,   271,   174,     7,   149,
     128,   390,   402,   259,   391,    98,   348,   175,   133,   134,
     150,   311,   151,   152,   176,   260,   357,   454,   401,   107,
     315,   312,   542,     6,   143,   145,   272,    97,   314,   376,
     367,   273,   114,   114,   138,   274,   380,  -155,  -156,   368,
     147,   483,   544,    98,   392,   123,   426,   426,   545,   467,
     468,   469,   470,   471,   161,   450,   133,   172,     1,   508,
       2,   127,   155,   407,   511,   156,   249,   157,   240,   130,
     412,   498,   241,   181,   182,   188,   282,   328,   329,   185,
     489,   202,    10,   133,    11,   266,   211,   204,   213,   139,
     207,   208,   209,   210,   198,   101,   160,   323,   515,   324,
     225,   432,   211,   212,   213,   140,   227,   141,   227,   142,
     382,   158,   231,   499,   173,   233,   456,   457,   167,   169,
     167,   405,   251,   178,   248,   179,   250,   180,   253,   254,
     133,   183,   181,   115,   115,   192,   201,   176,   359,   361,
     362,   363,   205,   264,   242,   267,   268,   269,   270,   133,
     206,   243,   245,   246,   284,   247,   252,   161,   174,    16,
     226,   134,   226,   496,   255,   235,   256,   293,   293,   296,
     301,   438,   500,   257,   261,   377,   536,   302,   262,   275,
     298,   276,   283,   285,   537,   290,   114,   114,   365,   287,
     291,   309,   310,   292,   297,   308,   396,   299,   300,   161,
      16,   518,   303,   519,   304,   553,   305,   306,   307,   160,
     188,   319,   330,   325,   343,    16,   413,   414,   324,   282,
     344,   346,   331,   332,   333,  -259,   234,   348,   353,   388,
     133,   357,   133,   338,   381,   389,   351,   394,   352,   400,
     395,   334,   397,   198,   368,    74,    75,    76,    77,    78,
      79,    80,   277,   409,   548,   227,   410,   416,   419,   423,
     424,   425,   434,   554,   437,   436,   514,   478,   372,   461,
     379,   447,   480,   531,   561,   464,   465,   466,   486,   491,
     387,   495,   339,   494,   383,   497,    74,    75,    76,    77,
      78,    79,    80,   487,   501,   185,   506,   509,   502,   505,
     161,    74,    75,    76,    77,    78,    79,    80,   311,   226,
     513,   426,   235,   415,   418,   525,   535,   538,   417,   539,
     540,   541,   543,   547,   556,   557,   372,   372,   558,   132,
     286,   224,   325,   232,   364,   120,   463,   121,   520,   439,
     440,   441,   442,   443,   336,   521,   446,   433,   322,   493,
     133,   404,   406,   408,   455,   452,   338,   372,   109,   460,
     378,   445,   188,   316,   317,   360,   366,   512,   318,   555,
     479,   399,   444,     0,   481,     0,     0,     0,     0,     0,
     490,   372,   485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   383,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   339,     0,     0,     0,   372,
       0,     0,   503,   504,     0,   462,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   517,     0,     0,   372,     0,
     516,     0,   522,     0,     0,   523,     0,     0,     0,     0,
       0,   133,   526,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   524,   527,     0,   293,     0,     0,     0,   533,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,     0,     0,   549,     0,   550,     0,   551,
     552,     0,     0,     0,     0,     0,     0,     0,  -322,    12,
       0,     0,   559,   560,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,    32,    33,    34,    35,  -322,    36,    37,     0,
      38,    39,  -322,  -322,  -322,  -322,  -322,    40,    41,    42,
      43,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   -10,    12,     0,     0,     0,     0,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,    27,    28,     0,     0,     0,
       0,    29,    30,    31,     0,    32,    33,    34,    35,     0,
      36,    37,     0,    38,    39,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    12,     0,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,    27,    28,     0,
       0,     0,     0,    29,    30,    31,     0,    32,    33,    34,
      35,     0,    36,    37,     0,    38,    39,     0,     0,  -322,
       0,     0,    40,    41,    42,    43,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   187,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    12,     0,     0,     0,
       0,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,    27,
      28,     0,     0,     0,     0,    29,    30,    31,     0,    32,
      33,    34,    35,     0,    36,    37,     0,    38,    39,     0,
       0,   -10,     0,   -10,    40,    41,    42,    43,    44,     0,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    12,     0,
       0,     0,     0,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,    27,    28,     0,     0,     0,     0,    29,    30,    31,
       0,    32,    33,    34,    35,     0,    36,    37,     0,    38,
      39,     0,     0,   -10,     0,     0,    40,    41,    42,    43,
      44,     0,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      12,     0,     0,     0,     0,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,    27,    28,     0,     0,     0,     0,    29,
      30,    31,     0,    32,    33,    34,    35,     0,    36,    37,
       0,    38,    39,     0,     0,  -229,     0,     0,    40,    41,
      42,    43,    44,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    12,     0,     0,     0,     0,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,    27,    28,     0,     0,     0,
       0,    29,    30,    31,     0,    32,    33,    34,    35,     0,
      36,    37,     0,    38,    39,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    13,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,    32,    33,    34,   102,     0,    36,    37,     0,
      38,    39,     0,     0,     0,     0,     0,    40,    41,    42,
      43,     0,     0,    45,    46,    47,    48,    49,    50,    51,
       0,     0,    54,    55,   187,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,   103,   104,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    13,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,    27,
      28,     0,     0,     0,     0,    29,    30,    31,     0,    32,
      33,    34,   102,     0,    36,    37,     0,    38,    39,     0,
       0,     0,     0,     0,    40,    41,    42,    43,     0,     0,
      45,    46,    47,    48,    49,    50,    51,     0,     0,    54,
      55,     0,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   103,   104,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     337,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,     0,    33,     0,   102,     0,    36,    37,
       0,    38,    39,     0,     0,     0,     0,     0,     0,    41,
      42,    43,     0,     0,     0,    46,    47,    48,    49,    50,
      51,     0,    15,    16,    55,     0,    56,     0,    57,     0,
      59,    60,    61,     0,     0,    64,    65,    66,     0,   103,
     104,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   451,    29,    30,     0,     0,     0,    33,     0,
     102,     0,    36,    37,     0,    38,    39,     0,     0,     0,
       0,     0,     0,    41,    42,    43,     0,     0,     0,    46,
      47,    48,    49,    50,    51,     0,     0,    15,    55,     0,
      56,     0,    57,     0,    59,    60,    61,   193,     0,    64,
      65,    66,     0,   103,   104,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,    29,    30,
       0,     0,     0,    33,     0,   102,     0,    36,    37,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    41,    42,
      43,     0,     0,     0,    46,    47,    48,    49,    50,    51,
       0,     0,     0,    55,     0,    56,     0,    57,    15,    59,
      60,    61,     0,   194,    64,    65,    66,   195,   103,   104,
      70,    71,    72,    73,     0,     0,   530,     0,     0,   196,
     197,    16,    17,    18,    19,    20,    21,    22,    23,    29,
      30,     0,     0,     0,    33,     0,   102,     0,    36,    37,
       0,    38,    39,     0,     0,    27,    28,     0,     0,    41,
      42,    43,     0,     0,     0,    46,    47,    48,    49,    50,
      51,     0,     0,     0,    55,     0,    56,     0,    57,     0,
      59,    60,    61,     0,     0,    64,    65,    66,     0,   103,
     104,    70,    71,    72,    73,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    15,     0,    17,    18,    19,    20,
      21,    22,    23,     0,    24,     0,     0,    74,    75,    76,
      77,    78,    79,    80,    25,    26,     0,     0,     0,    27,
      28,     0,     0,     0,     0,    29,    30,    31,     0,    32,
      33,    34,   102,     0,    36,    37,     0,    38,    39,     0,
       0,     0,     0,     0,    40,    41,    42,    43,     0,     0,
      45,    46,    47,    48,    49,    50,    51,     0,     0,    54,
      55,     0,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   103,   104,    70,    71,    72,
      73,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,    29,    30,     0,     0,     0,    33,     0,   102,
       0,    36,    37,     0,    38,    39,     0,     0,     0,     0,
       0,     0,    41,    42,    43,     0,   131,     0,    46,    47,
      48,    49,    50,    51,    15,     0,     0,    55,     0,    56,
       0,    57,     0,    59,    60,    61,     0,     0,    64,    65,
      66,     0,   103,   104,    70,    71,    72,    73,     0,     0,
       0,   159,   101,   160,     0,    29,    30,     0,     0,     0,
      33,     0,   102,     0,    36,    37,     0,    38,    39,     0,
       0,     0,     0,     0,     0,    41,    42,    43,     0,     0,
       0,    46,    47,    48,    49,    50,    51,     0,     0,    15,
      55,     0,    56,     0,    57,     0,    59,    60,    61,   100,
       0,    64,    65,    66,     0,   103,   104,    70,    71,    72,
      73,     0,     0,     0,     0,     0,     0,   101,     0,     0,
      29,    30,     0,     0,     0,    33,     0,   102,     0,    36,
      37,     0,    38,    39,     0,     0,     0,     0,     0,     0,
      41,    42,    43,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    15,     0,     0,    55,     0,    56,     0,    57,
       0,    59,    60,    61,     0,     0,    64,    65,    66,     0,
     103,   104,    70,    71,    72,    73,     0,     0,     0,     0,
     101,   277,     0,    29,    30,     0,     0,     0,    33,     0,
     102,     0,    36,    37,     0,    38,    39,     0,     0,     0,
       0,     0,     0,    41,    42,    43,     0,     0,     0,    46,
      47,    48,    49,    50,    51,     0,     0,    15,    55,     0,
      56,     0,    57,     0,    59,    60,    61,   370,     0,    64,
      65,    66,     0,   103,   104,    70,    71,    72,    73,     0,
       0,     0,     0,     0,     0,   371,     0,     0,    29,    30,
       0,     0,     0,    33,     0,   102,     0,    36,    37,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    41,    42,
      43,     0,     0,     0,    46,    47,    48,    49,    50,    51,
      15,     0,     0,    55,     0,    56,     0,    57,     0,    59,
      60,    61,     0,     0,    64,    65,    66,     0,   103,   104,
      70,    71,    72,    73,     0,     0,     0,     0,   101,     0,
       0,    29,    30,     0,     0,     0,    33,     0,   102,     0,
      36,    37,     0,    38,    39,     0,     0,     0,     0,     0,
       0,    41,    42,    43,     0,     0,     0,    46,    47,    48,
      49,    50,    51,     0,     0,    15,    55,     0,    56,     0,
      57,     0,    59,    60,    61,   203,     0,    64,    65,    66,
       0,   103,   104,    70,    71,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
       0,    33,     0,   102,     0,    36,    37,     0,    38,    39,
       0,     0,     0,     0,     0,     0,    41,    42,    43,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    15,     0,
       0,    55,     0,    56,     0,    57,     0,    59,    60,    61,
       0,     0,    64,    65,    66,     0,   103,   104,    70,    71,
      72,    73,     0,     0,     0,     0,   371,     0,     0,    29,
      30,     0,     0,     0,    33,     0,   102,     0,    36,    37,
       0,    38,    39,     0,     0,     0,     0,     0,     0,    41,
      42,    43,     0,     0,     0,    46,    47,    48,    49,    50,
      51,     0,     0,    15,    55,     0,    56,     0,    57,     0,
      59,    60,    61,   453,     0,    64,    65,    66,     0,   103,
     104,    70,    71,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,    33,
       0,   102,     0,    36,    37,     0,    38,    39,     0,     0,
       0,     0,     0,     0,    41,    42,    43,     0,     0,     0,
      46,    47,    48,    49,    50,    51,    15,     0,     0,    55,
       0,    56,     0,    57,     0,    59,    60,    61,     0,     0,
      64,    65,    66,     0,   103,   104,    70,    71,    72,    73,
       0,     0,     0,     0,   482,     0,     0,    29,    30,     0,
       0,     0,    33,     0,   102,     0,    36,    37,     0,    38,
      39,     0,     0,     0,     0,     0,     0,    41,    42,    43,
       0,     0,     0,    46,    47,    48,    49,    50,    51,     0,
       0,    15,    55,     0,    56,     0,    57,     0,    59,    60,
      61,   484,     0,    64,    65,    66,     0,   103,   104,    70,
      71,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    33,     0,   102,
       0,    36,    37,     0,    38,    39,     0,     0,     0,     0,
       0,     0,    41,    42,    43,     0,     0,     0,    46,    47,
      48,    49,    50,    51,     0,     0,     0,    55,     0,    56,
      15,    57,     0,    59,    60,    61,     0,     0,    64,    65,
      66,     0,   103,   104,    70,    71,    72,    73,   532,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,     0,    33,     0,   102,     0,
      36,    37,     0,    38,    39,     0,     0,     0,     0,     0,
       0,    41,    42,    43,     0,     0,    15,    46,    47,    48,
      49,    50,    51,     0,     0,     0,    55,     0,    56,     0,
      57,     0,    59,    60,    61,     0,     0,    64,    65,    66,
       0,   103,   104,    70,    71,    72,    73,    29,    30,     0,
       0,     0,    33,     0,   102,     0,    36,    37,     0,    38,
      39,     0,     0,     0,     0,     0,     0,    41,    42,    43,
       0,     0,     0,    46,    47,    48,    49,    50,    51,     0,
       0,     0,    55,     0,    56,     0,    57,     0,    59,    60,
      61,     0,     0,    64,    65,    66,     0,   103,   104,    70,
      71,    72,    73
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-412)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      14,    25,    26,    98,   258,    24,   212,   191,   201,    27,
      28,    14,   262,   122,   147,   145,   145,   371,   370,   430,
      26,    35,   100,    13,   338,    26,    31,    21,     0,    18,
      44,    40,   343,    21,    43,    19,    21,    31,    52,    53,
      29,    23,    31,    32,    28,    33,    21,   401,    33,    52,
     243,    33,    27,     4,    68,    69,    61,     4,   242,   313,
      19,    66,    27,    28,    54,    70,   320,    48,    48,    28,
      23,   425,    21,    19,    83,    19,    57,    57,    27,    96,
      97,    98,    99,   100,    98,   399,   100,   101,     3,    95,
       5,    19,    19,   347,    95,    22,   174,    24,    28,    19,
     354,   453,    32,    21,    22,   124,   201,    20,    21,   123,
     521,   130,     3,   127,     5,   193,    92,   131,    94,    19,
     139,   140,   141,   142,   127,    37,    38,   260,   482,   262,
     154,   381,    92,    93,    94,    19,   155,    19,   157,    19,
     324,    14,   156,   454,    31,   159,    54,    55,   243,    56,
     245,   344,   176,    20,   173,    20,   175,    20,   181,   182,
     174,    25,    21,   181,   182,    19,    19,    28,   298,   298,
     300,   300,    21,   192,    20,   194,   195,   196,   197,   193,
      56,    21,    21,    21,   203,    20,    56,   201,    21,    10,
     155,   205,   157,   447,    56,   160,    20,   211,   212,   213,
     224,   385,   456,    33,    56,   314,   517,   226,    23,    20,
      23,    21,    20,    31,   525,    20,   181,   182,    39,    45,
      20,   240,   241,    20,    56,   239,   335,    56,    23,   243,
      10,   485,    20,   487,    21,   546,    25,    39,    21,    38,
     259,    31,    20,   262,    20,    10,   355,   356,   381,   344,
      21,    21,   271,   272,   273,    20,    21,    21,    20,    31,
     274,    21,   276,   277,    23,    82,   285,    86,   287,    21,
      66,   274,    39,   276,    28,    96,    97,    98,    99,   100,
     101,   102,    38,    20,   538,   304,    21,    21,    31,    28,
      23,    21,    28,   547,    23,    56,   480,    20,   312,    31,
     319,    58,    20,   509,   558,    56,    56,    56,    56,    31,
     329,    86,   277,    82,   328,    56,    96,    97,    98,    99,
     100,   101,   102,    48,    19,   339,    14,    26,    56,    56,
     344,    96,    97,    98,    99,   100,   101,   102,    23,   304,
      26,    57,   307,   357,   368,    20,    28,    20,   367,    33,
      27,    21,    33,    20,    33,    33,   370,   371,    20,    52,
     205,   153,   381,   157,   304,    28,   411,    28,   488,   388,
     389,   390,   391,   392,   276,   488,   395,   381,   259,   437,
     394,   344,   346,   348,   405,   400,   400,   401,    14,   408,
     315,   394,   411,   243,   245,   298,   307,   470,   246,   548,
     419,   339,   393,    -1,   423,    -1,    -1,    -1,    -1,    -1,
     434,   425,   426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,   453,
      -1,    -1,   461,   462,    -1,   410,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,   482,    -1,
     484,    -1,   491,    -1,    -1,   494,    -1,    -1,    -1,    -1,
      -1,   495,   501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   495,   507,    -1,   509,    -1,    -1,    -1,   513,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   535,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   539,    -1,   541,    -1,   543,
     544,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,    -1,   556,   557,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    -1,    44,    45,    46,    47,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     1,    -1,    -1,    -1,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,     1,    -1,    -1,    -1,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     1,    -1,
      -1,    -1,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
       1,    -1,    -1,    -1,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    -1,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    -1,    44,    45,    46,    47,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    -1,    44,    45,    46,    47,    -1,    49,    50,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    74,    75,    76,    77,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    74,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    -1,    49,    50,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    -1,     9,    10,    75,    -1,    77,    -1,    79,    -1,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    39,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    -1,    49,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    -1,    -1,     9,    75,    -1,
      77,    -1,    79,    -1,    81,    82,    83,    19,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    -1,    49,    50,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    77,    -1,    79,     9,    81,
      82,    83,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    27,    -1,    -1,   101,
     102,    10,    11,    12,    13,    14,    15,    16,    17,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    -1,    49,    50,
      -1,    52,    53,    -1,    -1,    34,    35,    -1,    -1,    60,
      61,    62,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    96,    97,    98,
      99,   100,   101,   102,    29,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    74,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    64,    -1,    66,    67,
      68,    69,    70,    71,     9,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    81,    82,    83,    -1,    -1,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    -1,    -1,     9,
      75,    -1,    77,    -1,    79,    -1,    81,    82,    83,    19,
      -1,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    -1,    47,    -1,    49,
      50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,     9,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    82,    83,    -1,    -1,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    -1,    49,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    -1,    -1,     9,    75,    -1,
      77,    -1,    79,    -1,    81,    82,    83,    19,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    -1,    49,    50,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
       9,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    81,
      82,    83,    -1,    -1,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    -1,    -1,     9,    75,    -1,    77,    -1,
      79,    -1,    81,    82,    83,    19,    -1,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    -1,    49,    50,    -1,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,     9,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    82,    83,
      -1,    -1,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    -1,    49,    50,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    -1,    -1,     9,    75,    -1,    77,    -1,    79,    -1,
      81,    82,    83,    19,    -1,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    -1,    49,    50,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,     9,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    82,    83,    -1,    -1,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    -1,
      -1,     9,    75,    -1,    77,    -1,    79,    -1,    81,    82,
      83,    19,    -1,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    77,
       9,    79,    -1,    81,    82,    83,    -1,    -1,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    -1,     9,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    82,    83,    -1,    -1,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    81,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,   108,   109,   110,     4,     0,   111,   112,
       3,     5,     1,     6,     7,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    19,    29,    30,    34,    35,    40,
      41,    42,    44,    45,    46,    47,    49,    50,    52,    53,
      59,    60,    61,    62,    63,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    77,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   113,   114,   115,   116,   117,   118,   122,   123,   126,
     127,   130,   131,   135,   136,   141,   185,     4,    19,   187,
      19,    37,    47,    90,    91,   119,   120,   121,   122,   186,
     198,   127,   130,   130,   126,   135,   137,   138,   139,   140,
     138,   139,   142,    19,   144,   122,   167,    19,   122,   176,
      19,    64,   119,   122,   122,   124,   125,   186,   187,    19,
      19,    19,    19,   122,   206,   122,   224,    23,   227,    18,
      29,    31,    32,   128,   129,    19,    22,    24,    14,    36,
      38,   122,   192,   194,   195,   196,   197,   198,   199,    56,
     120,   121,   122,    31,    21,    31,    28,   187,    20,    20,
      20,    21,    22,    25,   114,   122,   229,    76,   127,   153,
     158,   160,    19,    19,    85,    89,   101,   102,   121,   154,
     161,    19,   127,    19,   122,    21,    56,   127,   127,   127,
     127,    92,    93,    94,   207,   208,   209,   210,   211,   209,
     211,   225,   226,   116,   129,   130,   126,   127,   132,   133,
     134,   122,   132,   122,    21,   126,   200,   201,   202,   203,
      28,    32,    20,    21,   193,    21,    21,    20,   127,   120,
     127,   130,    56,   140,   140,    56,    20,    33,   228,    21,
      33,    56,    23,   227,   127,   168,   120,   127,   127,   127,
     127,    31,    61,    66,    70,    20,    21,    38,   178,   180,
     181,   194,   198,    20,   127,    31,   125,    45,   162,   230,
      20,    20,    20,   122,   223,   223,   122,    56,    23,    56,
      23,   130,   127,    20,    21,    25,    39,    21,   122,   127,
     127,    23,    33,   188,   227,   194,   195,   197,   199,    31,
     143,   113,   160,   116,   116,   127,   158,   159,    20,    21,
      20,   127,   127,   127,   121,   146,   154,    21,   122,   126,
     182,   183,   184,    20,    21,   179,    21,   145,    21,   174,
     175,   127,   127,    20,   148,   149,   150,    21,   212,   209,
     210,   211,   209,   211,   134,    39,   201,    19,    28,   204,
      19,    37,   122,   189,   190,   191,   113,   114,   193,   127,
     113,    23,   227,   122,   169,   170,   171,   127,    31,    82,
      40,    43,    83,   166,    86,    66,   114,    39,   204,   229,
      21,    33,   174,   177,   180,   194,   181,   113,   126,    20,
      21,   147,   113,   114,   114,   122,    21,   127,   130,    31,
     205,   189,   191,    28,    23,    21,    57,   151,   152,   155,
     156,   157,   158,   159,    28,   173,    56,    23,   227,   127,
     127,   127,   127,   127,   230,   121,   127,    58,   164,   232,
     204,    39,   183,    19,   191,   179,    54,    55,   165,   231,
     127,    31,   126,   153,    56,    56,    56,    96,    97,    98,
      99,   100,   213,   214,   215,   218,   219,   220,    20,   127,
      20,   127,    37,   191,    19,   122,    56,    48,   163,   157,
     130,    31,   172,   171,    82,    86,   113,    56,   189,   174,
     113,    19,    56,   127,   127,    56,    14,    26,    95,    26,
     222,    95,   222,    26,   227,   191,   122,   127,   113,   113,
     155,   156,   127,   127,   121,    20,   127,   122,   216,   217,
      27,   223,    27,   122,   221,    28,   174,   174,    20,    33,
      27,    21,    27,    33,    21,    27,   127,    20,   113,   122,
     122,   122,   122,   174,   113,   231,    33,    33,    20,   122,
     122,   113
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

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
/* Line 1792 of yacc.c  */
#line 293 "parser.y"
    { process_header(NULL, NULL); free((yyvsp[(1) - (1)].token)); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 294 "parser.y"
    { process_header(NULL, NULL); free((yyvsp[(2) - (2)].token)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 299 "parser.y"
    { process_header((char *)(yyvsp[(1) - (2)].token)->chars, (char *)(yyvsp[(2) - (2)].token)->chars); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 301 "parser.y"
    { process_header((char *)(yyvsp[(2) - (3)].token)->chars, (char *)(yyvsp[(3) - (3)].token)->chars); free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 305 "parser.y"
    { push_yacc_recovery(SEMI); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 306 "parser.y"
    { Program = (yyvsp[(2) - (2)].body); (yyval.nothing) = NULL; }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 310 "parser.y"
    { (yyval.body) = (yyvsp[(1) - (2)].body); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 314 "parser.y"
    { (yyval.body) = make_body(); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 315 "parser.y"
    { (yyval.body) = (yyvsp[(1) - (1)].body); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 321 "parser.y"
    { (yyval.body) = add_constituent(make_body(), (yyvsp[(1) - (1)].constituent)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 323 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.body) = add_constituent((yyvsp[(1) - (3)].body), (yyvsp[(3) - (3)].constituent)); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 327 "parser.y"
    { (yyval.constituent) = (yyvsp[(1) - (1)].constituent); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 328 "parser.y"
    { (yyval.constituent) = (yyvsp[(1) - (1)].constituent); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 329 "parser.y"
    { (yyval.constituent) = make_expr_constituent((yyvsp[(1) - (1)].expr)); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 332 "parser.y"
    { (yyval.constituent) = make_error_constituent(); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 337 "parser.y"
    { (yyval.constituent) = set_class_flags(0, (yyvsp[(2) - (2)].constituent)) ; free((yyvsp[(1) - (2)].token)) ; }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 339 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = set_generic_flags(0, (yyvsp[(2) - (2)].constituent)); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 341 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = make_define_method(0, (yyvsp[(2) - (2)].method)) ;}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 343 "parser.y"
    { (yyval.constituent) = make_define_variable((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].bindings)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 345 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = (yyvsp[(2) - (2)].constituent); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 347 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = (yyvsp[(2) - (2)].constituent); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 352 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = make_let((yyvsp[(2) - (2)].bindings)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 354 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token));
	  (yyval.constituent) = make_handler(make_varref(make_id((yyvsp[(3) - (5)].token))), (yyvsp[(5) - (5)].expr), NULL);
	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 358 "parser.y"
    { free((yyvsp[(1) - (8)].token)); free((yyvsp[(2) - (8)].token)); free((yyvsp[(3) - (8)].token)); free((yyvsp[(6) - (8)].token)); free((yyvsp[(7) - (8)].token));
	  (yyval.constituent) = make_handler((yyvsp[(4) - (8)].expr), (yyvsp[(8) - (8)].expr), (yyvsp[(5) - (8)].plist));
	}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 362 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.constituent) = make_local_constituent((yyvsp[(2) - (2)].local_methods)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 367 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.bindings) = make_bindings(push_param((yyvsp[(1) - (3)].param),make_param_list()), (yyvsp[(3) - (3)].expr)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 369 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(3) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.bindings) = make_bindings((yyvsp[(2) - (5)].param_list), (yyvsp[(5) - (5)].expr)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 371 "parser.y"
    { free((yyvsp[(2) - (3)].token)) ; (yyval.bindings) = make_bindings((yyvsp[(1) - (3)].param_list), (yyvsp[(3) - (3)].expr)) ; }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 376 "parser.y"
    { (yyval.param_list) = set_rest_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 378 "parser.y"
    { (yyval.param_list) = push_param((yyvsp[(1) - (1)].param), make_param_list()); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 380 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = push_param((yyvsp[(1) - (3)].param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 384 "parser.y"
    { (yyval.param) = make_param(make_id((yyvsp[(1) - (1)].token)), NULL); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 386 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param) = make_param(make_id((yyvsp[(1) - (3)].token)), (yyvsp[(3) - (3)].expr)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 430 "parser.y"
    { (yyval.local_methods) = add_local_method(make_local_methods(), (yyvsp[(1) - (1)].method)); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 432 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.local_methods) = add_local_method((yyvsp[(1) - (3)].local_methods), (yyvsp[(3) - (3)].method)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 436 "parser.y"
    { (yyval.method) = (yyvsp[(1) - (1)].method); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 451 "parser.y"
    { (yyval.expr) = make_literal_ref(parse_keyword_token((yyvsp[(1) - (1)].token))); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 452 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 454 "parser.y"
    { (yyval.expr) = make_binop_series_expr((yyvsp[(1) - (2)].expr), (yyvsp[(2) - (2)].binop_series)); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 465 "parser.y"
    { (yyval.binop_series) = add_binop(make_binop_series(), (yyvsp[(1) - (2)].binop), (yyvsp[(2) - (2)].expr)); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 466 "parser.y"
    { (yyval.binop_series) = add_binop((yyvsp[(1) - (3)].binop_series), (yyvsp[(2) - (3)].binop), (yyvsp[(3) - (3)].expr)); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 470 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 471 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 472 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 473 "parser.y"
    { (yyval.binop) = make_binop(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 477 "parser.y"
    { (yyval.expr) = make_negate((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 478 "parser.y"
    { (yyval.expr) = make_not((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 479 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 483 "parser.y"
    { (yyval.expr) = make_literal_ref((yyvsp[(1) - (1)].literal)); }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 484 "parser.y"
    { (yyval.expr) = make_varref(make_id((yyvsp[(1) - (1)].token))); }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 486 "parser.y"
    { free((yyvsp[(4) - (4)].token)); (yyval.expr) = make_aref_or_element((yyvsp[(2) - (4)].token)->line, (yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].arglist)); free((yyvsp[(2) - (4)].token)); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 488 "parser.y"
    { free((yyvsp[(2) - (4)].token)); free((yyvsp[(4) - (4)].token)); (yyval.expr) = make_function_call((yyvsp[(1) - (4)].expr), (yyvsp[(3) - (4)].arglist)); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 489 "parser.y"
    { (yyval.expr) = make_method_ref((yyvsp[(1) - (1)].method)); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 491 "parser.y"
    { free((yyvsp[(2) - (3)].token));
	  (yyval.expr) = make_dot_operation((yyvsp[(1) - (3)].expr), make_varref(make_id((yyvsp[(3) - (3)].token))));
	}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 494 "parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 495 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 499 "parser.y"
    { (yyval.arglist) = make_argument_list(); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 500 "parser.y"
    { (yyval.arglist) = (yyvsp[(1) - (1)].arglist); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 504 "parser.y"
    { (yyval.arglist) = add_argument(make_argument_list(), (yyvsp[(1) - (1)].argument)); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 505 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.arglist) = add_argument((yyvsp[(1) - (3)].arglist), (yyvsp[(3) - (3)].argument)); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 509 "parser.y"
    { (yyval.argument) = make_argument((yyvsp[(1) - (1)].expr)); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 511 "parser.y"
    { (yyval.argument) = make_keyword_argument((yyvsp[(1) - (2)].token), (yyvsp[(2) - (2)].expr)); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 515 "parser.y"
    { (yyval.literal) = parse_true_token((yyvsp[(1) - (1)].token)); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 516 "parser.y"
    { (yyval.literal) = parse_false_token((yyvsp[(1) - (1)].token)); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 517 "parser.y"
    { (yyval.literal) = (yyvsp[(1) - (1)].literal); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 518 "parser.y"
    { (yyval.literal) = parse_character_token((yyvsp[(1) - (1)].token)); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 519 "parser.y"
    { (yyval.literal) = parse_integer_token((yyvsp[(1) - (1)].token)); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 520 "parser.y"
    { (yyval.literal) = parse_float_token((yyvsp[(1) - (1)].token)); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 521 "parser.y"
    { (yyval.literal) = parse_keyword_token((yyvsp[(1) - (1)].token)); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 523 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.literal) = (yyvsp[(2) - (3)].literal); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 525 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.literal) = make_list_literal((yyvsp[(2) - (3)].literal_list)); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 527 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.literal) = make_vector_literal((yyvsp[(2) - (3)].literal_list)); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 531 "parser.y"
    { (yyval.literal) = parse_string_token((yyvsp[(1) - (1)].token)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 532 "parser.y"
    { (yyval.literal) = concat_string_token((yyvsp[(1) - (2)].literal), (yyvsp[(2) - (2)].token)); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 537 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.literal) = make_dotted_list_literal((yyvsp[(1) - (3)].literal_list), (yyvsp[(3) - (3)].literal)); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 542 "parser.y"
    { (yyval.literal_list) = make_literal_list(); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 544 "parser.y"
    { (yyval.literal_list) = (yyvsp[(1) - (1)].literal_list); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 548 "parser.y"
    { (yyval.literal_list) = add_literal(make_literal_list(), (yyvsp[(1) - (1)].literal)); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 550 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.literal_list) = add_literal((yyvsp[(1) - (3)].literal_list), (yyvsp[(3) - (3)].literal)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 554 "parser.y"
    { (yyval.literal) = (yyvsp[(1) - (1)].literal); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 555 "parser.y"
    { (yyval.literal) = parse_keyword_token((yyvsp[(1) - (1)].token)); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 559 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 561 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(4) - (4)].token)); (yyval.expr) = make_body_expr((yyvsp[(3) - (4)].body));
          pop_yacc_recoveries(1); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 564 "parser.y"
    { push_yacc_recovery(END);
	  push_yacc_recovery(CLEANUP);
	  push_yacc_recovery(EXCEPTION); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 568 "parser.y"
    { free((yyvsp[(2) - (8)].token)); free((yyvsp[(4) - (8)].token)); free((yyvsp[(8) - (8)].token)); pop_yacc_recoveries(3); 
	  (yyval.expr) = make_block((yyvsp[(1) - (8)].token)->line, (yyvsp[(3) - (8)].token) ? make_id((yyvsp[(3) - (8)].token)) : NULL, (yyvsp[(6) - (8)].body), (yyvsp[(7) - (8)].block_epilog));
	  free((yyvsp[(1) - (8)].token));
	}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 572 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 574 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(4) - (4)].token)); (yyval.expr) = make_case((yyvsp[(3) - (4)].condition_body));
          pop_yacc_recoveries(1); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 576 "parser.y"
    { push_yacc_recovery(END);
				      push_yacc_recovery(ELSE); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 579 "parser.y"
    { free((yyvsp[(1) - (8)].token)); free((yyvsp[(2) - (8)].token)); free((yyvsp[(4) - (8)].token)); free((yyvsp[(8) - (8)].token)); (yyval.expr) = make_if((yyvsp[(3) - (8)].expr), (yyvsp[(6) - (8)].body), (yyvsp[(7) - (8)].else_part));
          pop_yacc_recoveries(2); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 581 "parser.y"
    { push_yacc_recovery(END);
				       push_yacc_recovery(FINALLY); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 584 "parser.y"
    { free((yyvsp[(1) - (8)].token)); free((yyvsp[(2) - (8)].token)); free((yyvsp[(4) - (8)].token)); free((yyvsp[(8) - (8)].token)); (yyval.expr) = make_for((yyvsp[(3) - (8)].for_header), (yyvsp[(6) - (8)].body), (yyvsp[(7) - (8)].body));
          pop_yacc_recoveries(2); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 586 "parser.y"
    {push_yacc_recovery(END);}
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 588 "parser.y"
    { free((yyvsp[(1) - (8)].token));free((yyvsp[(2) - (8)].token));free((yyvsp[(5) - (8)].token));free((yyvsp[(8) - (8)].token)); (yyval.expr) = make_select((yyvsp[(3) - (8)].expr), (yyvsp[(4) - (8)].expr), (yyvsp[(7) - (8)].condition_body));
          pop_yacc_recoveries(1); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 590 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 592 "parser.y"
    { free((yyvsp[(1) - (7)].token));free((yyvsp[(2) - (7)].token));free((yyvsp[(4) - (7)].token));free((yyvsp[(7) - (7)].token));
	  (yyval.expr) = make_if((yyvsp[(3) - (7)].expr), NULL, make_else(0, (yyvsp[(6) - (7)].body)));
          pop_yacc_recoveries(1); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 595 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 597 "parser.y"
    { free((yyvsp[(1) - (7)].token));free((yyvsp[(2) - (7)].token));free((yyvsp[(4) - (7)].token));free((yyvsp[(7) - (7)].token)); pop_yacc_recoveries(1);
	  (yyval.expr) = make_for(make_for_header((yyvsp[(3) - (7)].expr)), (yyvsp[(6) - (7)].body), NULL);
	}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 600 "parser.y"
    { push_yacc_recovery(END); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 602 "parser.y"
    { free((yyvsp[(2) - (7)].token));free((yyvsp[(4) - (7)].token));free((yyvsp[(7) - (7)].token));pop_yacc_recoveries(1);
	  (yyval.expr) = make_for(make_for_header(make_not((yyvsp[(1) - (7)].token)->line, (yyvsp[(3) - (7)].expr))), (yyvsp[(6) - (7)].body), NULL);
	  free((yyvsp[(1) - (7)].token));
	}
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 609 "parser.y"
    { (yyval.block_epilog) = NULL; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 610 "parser.y"
    { (yyval.block_epilog) = (yyvsp[(1) - (1)].block_epilog); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 615 "parser.y"
    { (yyval.block_epilog) = make_block_epilog((yyvsp[(1) - (3)].exception_clauses), (yyvsp[(2) - (3)].body), (yyvsp[(3) - (3)].exception_clauses)); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 617 "parser.y"
    { (yyval.block_epilog) = make_block_epilog((yyvsp[(1) - (1)].exception_clauses), NULL, NULL); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 621 "parser.y"
    { (yyval.condition_body) = (yyvsp[(1) - (1)].condition_body); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 626 "parser.y"
    { warn((yyvsp[(1) - (2)].token)->line, "Use UNTIL: instead of UNTIL inside for loop");
	  free((yyvsp[(1) - (2)].token)); (yyval.for_header) = make_for_header((yyvsp[(2) - (2)].expr)); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 629 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.for_header) = make_for_header((yyvsp[(2) - (2)].expr)); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 631 "parser.y"
    { warn((yyvsp[(1) - (2)].token)->line, "Use WHILE: instead of WHILE in for loop");
	  (yyval.for_header) = make_for_header(make_not((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr))); free((yyvsp[(1) - (2)].token)); 
        }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 635 "parser.y"
    { (yyval.for_header) = make_for_header(make_not((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].expr))); free((yyvsp[(1) - (2)].token)); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 637 "parser.y"
    { (yyval.for_header) = push_for_clause((yyvsp[(1) - (1)].for_clause), make_for_header(NULL)); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 639 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.for_header) = push_for_clause((yyvsp[(1) - (3)].for_clause), (yyvsp[(3) - (3)].for_header)); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 643 "parser.y"
    { (yyval.exception_clauses) = NULL; }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 644 "parser.y"
    { (yyval.exception_clauses) = (yyvsp[(1) - (1)].exception_clauses); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 649 "parser.y"
    { (yyval.exception_clauses) = add_exception_clause(make_exception_clauses(), (yyvsp[(1) - (1)].exception_clause)); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 651 "parser.y"
    { (yyval.exception_clauses) = add_exception_clause((yyvsp[(1) - (2)].exception_clauses), (yyvsp[(2) - (2)].exception_clause)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 656 "parser.y"
    { 
	  warn((yyvsp[(1) - (3)].token)->line, "Token following EXCEPTION must be surrounded "
	       "by parentheses");
	  free((yyvsp[(1) - (3)].token));
	  (yyval.exception_clause) = make_exception_clause(make_varref(make_id((yyvsp[(2) - (3)].token))),
				     NULL, NULL, (yyvsp[(3) - (3)].body));
	}
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 664 "parser.y"
    { free((yyvsp[(1) - (6)].token)); free((yyvsp[(2) - (6)].token)); free((yyvsp[(5) - (6)].token));
	  (yyval.exception_clause) = make_exception_clause((yyvsp[(3) - (6)].expr), NULL, (yyvsp[(4) - (6)].plist), (yyvsp[(6) - (6)].body));
	}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 669 "parser.y"
    { free((yyvsp[(1) - (8)].token)); free((yyvsp[(2) - (8)].token)); free((yyvsp[(4) - (8)].token)); free((yyvsp[(7) - (8)].token));
	  (yyval.exception_clause) = make_exception_clause((yyvsp[(5) - (8)].expr), make_id((yyvsp[(3) - (8)].token)), (yyvsp[(6) - (8)].plist), (yyvsp[(8) - (8)].body));
	}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 676 "parser.y"
    { free((yyvsp[(1) - (3)].token));
	  (yyval.condition_body) = push_condition_clause(make_otherwise_condition_clause((yyvsp[(3) - (3)].body)),
				     NULL);
	}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 681 "parser.y"
    { (yyval.condition_body) = push_condition_clause((yyvsp[(1) - (2)].condition_clause), NULL); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 683 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_body) = push_condition_clause((yyvsp[(1) - (3)].condition_clause), (yyvsp[(3) - (3)].condition_body)); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 685 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_body) = complete_condition_clauses((yyvsp[(1) - (3)].condition_clause), (yyvsp[(3) - (3)].incomplete_condition_body)); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 690 "parser.y"
    { (yyval.incomplete_condition_body) = make_incomplete_condition_clauses((yyvsp[(1) - (2)].constituent), NULL); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 692 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.incomplete_condition_body) = make_incomplete_condition_clauses((yyvsp[(1) - (3)].constituent), (yyvsp[(3) - (3)].condition_body)); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 694 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.incomplete_condition_body) = push_condition_constituent((yyvsp[(1) - (3)].constituent), (yyvsp[(3) - (3)].incomplete_condition_body)); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 699 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_clause) = push_condition((yyvsp[(1) - (3)].expr), make_condition_clause((yyvsp[(3) - (3)].constituent))); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 701 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.condition_clause) = push_condition((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].condition_clause)); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 706 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token));
	(yyval.for_clause)=make_equal_then_for_clause(push_param((yyvsp[(1) - (5)].param),make_param_list()),(yyvsp[(3) - (5)].expr),(yyvsp[(5) - (5)].expr));}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 709 "parser.y"
    { free((yyvsp[(1) - (7)].token)); free((yyvsp[(3) - (7)].token)); free((yyvsp[(4) - (7)].token)); free((yyvsp[(6) - (7)].token));
	  (yyval.for_clause) = make_equal_then_for_clause((yyvsp[(2) - (7)].param_list), (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].expr)); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 712 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (3)].param), NULL, (yyvsp[(3) - (3)].expr), NULL); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 714 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (5)].param), (yyvsp[(3) - (5)].param), (yyvsp[(5) - (5)].expr), NULL); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 716 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (5)].param), NULL, (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].param)); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 718 "parser.y"
    { free((yyvsp[(2) - (7)].token)); free((yyvsp[(4) - (7)].token)); (yyval.for_clause) = make_in_for_clause((yyvsp[(1) - (7)].param), (yyvsp[(3) - (7)].param), (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].param)); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 720 "parser.y"
    { free((yyvsp[(2) - (5)].token)); (yyval.for_clause) = make_from_for_clause((yyvsp[(1) - (5)].param), (yyvsp[(3) - (5)].expr), (yyvsp[(4) - (5)].to_part), (yyvsp[(5) - (5)].expr)); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 723 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 724 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.body) = (yyvsp[(2) - (2)].body); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 725 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.body) = (yyvsp[(2) - (2)].body); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 728 "parser.y"
    { (yyval.else_part) = make_else((yyvsp[(1) - (2)].token)->line, (yyvsp[(2) - (2)].body)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 730 "parser.y"
    { free((yyvsp[(2) - (6)].token)); free((yyvsp[(4) - (6)].token));
	  (yyval.else_part) = make_else((yyvsp[(1) - (6)].token)->line, make_expr_body(make_if((yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].body), (yyvsp[(6) - (6)].else_part))));
	  free((yyvsp[(1) - (6)].token)); 
	}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 737 "parser.y"
    { (yyval.to_part) = NULL; }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 738 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.to_part) = make_to((yyvsp[(2) - (2)].expr)); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 739 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.to_part) = make_above((yyvsp[(2) - (2)].expr)); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 740 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.to_part) = make_below((yyvsp[(2) - (2)].expr)); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 746 "parser.y"
    { struct id *id = make_id((yyvsp[(1) - (6)].token));
	  free((yyvsp[(2) - (6)].token)); free((yyvsp[(4) - (6)].token)); free((yyvsp[(6) - (6)].token));
	  (yyval.constituent) = make_class_definition(id, (yyvsp[(3) - (6)].superclass_list), (yyvsp[(5) - (6)].class_guts));
	}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 754 "parser.y"
    { (yyval.superclass_list) = add_superclass(make_superclass_list(), (yyvsp[(1) - (1)].expr)); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 756 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.superclass_list) = add_superclass((yyvsp[(1) - (3)].superclass_list), (yyvsp[(3) - (3)].expr)); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 760 "parser.y"
    { (yyval.class_guts) = NULL; }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 761 "parser.y"
    { (yyval.class_guts) = (yyvsp[(1) - (2)].class_guts); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 766 "parser.y"
    { (yyval.class_guts) = add_slot_spec(make_class_guts(), (yyvsp[(1) - (1)].slot_spec)); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 768 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.class_guts) = add_slot_spec((yyvsp[(1) - (3)].class_guts), (yyvsp[(3) - (3)].slot_spec)); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 773 "parser.y"
    {
          int line = (yyvsp[(1) - (3)].token)->line;
          (yyval.slot_spec) = make_slot_spec(line, 0, alloc_INSTANCE, (yyvsp[(1) - (3)].token) ? make_id((yyvsp[(1) - (3)].token)) : NULL,
                              (yyvsp[(2) - (3)].expr), (yyvsp[(3) - (3)].expr), make_property_list()) ;
        }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 781 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 782 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 786 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 787 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 791 "parser.y"
    { (yyval.plist) = make_property_list(); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 792 "parser.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 797 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.plist) = add_property(make_property_list(), (yyvsp[(2) - (3)].token), (yyvsp[(3) - (3)].expr)); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 799 "parser.y"
    { free((yyvsp[(2) - (4)].token)); (yyval.plist) = add_property((yyvsp[(1) - (4)].plist), (yyvsp[(3) - (4)].token), (yyvsp[(4) - (4)].expr)); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 804 "parser.y"
    { free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token));
	  (yyval.constituent) = make_define_generic(make_id((yyvsp[(1) - (5)].token)), (yyvsp[(3) - (5)].param_list), (yyvsp[(5) - (5)].gf_suffix));
	}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 811 "parser.y"
    { (yyval.gf_suffix) = make_gf_suffix(NULL, (yyvsp[(1) - (1)].plist)); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 813 "parser.y"
    { free((yyvsp[(1) - (3)].token));
	  (yyval.gf_suffix) = make_gf_suffix
	          (add_return_type(make_return_type_list(FALSE, NULL), (yyvsp[(2) - (3)].expr)),
		   (yyvsp[(3) - (3)].plist));
	}
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 819 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.gf_suffix) = make_gf_suffix((yyvsp[(3) - (5)].return_type_list), (yyvsp[(5) - (5)].plist)); }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 823 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 825 "parser.y"
    { (yyval.param_list) = push_param((yyvsp[(1) - (2)].param), (yyvsp[(2) - (2)].param_list)); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 826 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 831 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 833 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.param_list) = push_param((yyvsp[(2) - (3)].param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 835 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 840 "parser.y"
    { (yyval.param_list) = set_rest_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 842 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = set_rest_param((yyvsp[(3) - (3)].param_list), (yyvsp[(1) - (3)].id)); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 844 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 848 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 852 "parser.y"
    { (yyval.param_list) = allow_keywords(make_param_list()); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 854 "parser.y"
    { free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); (yyval.param_list) = allow_all_keywords(make_param_list()); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 855 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 860 "parser.y"
    { (yyval.param_list) = push_keyword_param((yyvsp[(1) - (1)].keyword_param), allow_keywords(make_param_list())); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 862 "parser.y"
    { free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token));
	  (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), allow_all_keywords(make_param_list())); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 865 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 870 "parser.y"
    { (yyval.keyword_param) = make_keyword_param((yyvsp[(1) - (3)].token), (yyvsp[(2) - (3)].token) ? make_id((yyvsp[(2) - (3)].token)) : NULL, (yyvsp[(3) - (3)].expr), NULL); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 872 "parser.y"
    { (yyval.keyword_param) = make_keyword_param(NULL, make_id((yyvsp[(1) - (2)].token)), (yyvsp[(2) - (2)].expr), NULL); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 877 "parser.y"
    { free((yyvsp[(3) - (3)].token)); (yyval.method) = set_method_source((yyvsp[(1) - (3)].token), (yyvsp[(2) - (3)].method)); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 879 "parser.y"
    { free((yyvsp[(3) - (3)].token)) ; (yyval.method) = set_method_source((yyvsp[(1) - (3)].token), (yyvsp[(2) - (3)].method)); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 884 "parser.y"
    { struct id *id = make_id((yyvsp[(1) - (3)].token));
	  free((yyvsp[(3) - (3)].token));
	  (yyval.method) = set_method_name(id, (yyvsp[(2) - (3)].method));
	}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 892 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(3) - (5)].token));
	  (yyval.method) = make_method_description((yyvsp[(2) - (5)].param_list), (yyvsp[(4) - (5)].return_type_list), (yyvsp[(5) - (5)].body));
	}
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 896 "parser.y"
    { free((yyvsp[(1) - (4)].token)); free((yyvsp[(3) - (4)].token));
	  (yyval.method) = make_method_description((yyvsp[(2) - (4)].param_list), (yyvsp[(4) - (4)].return_type_list), make_body());
	}
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 900 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(3) - (5)].token));
	  (yyval.method) = make_method_description((yyvsp[(2) - (5)].param_list), NULL, (yyvsp[(5) - (5)].body));
	}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 907 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); (yyval.return_type_list) = (yyvsp[(2) - (3)].return_type_list); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 909 "parser.y"
    { free((yyvsp[(1) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); (yyval.return_type_list) = (yyvsp[(3) - (5)].return_type_list); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 914 "parser.y"
    { (yyval.return_type_list) = make_return_type_list(FALSE, NULL); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 916 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.return_type_list) = make_return_type_list(TRUE, (yyvsp[(2) - (2)].expr)); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 918 "parser.y"
    { (yyval.return_type_list) = (yyvsp[(1) - (1)].return_type_list); }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 920 "parser.y"
    { free((yyvsp[(2) - (4)].token)); free((yyvsp[(3) - (4)].token)); (yyval.return_type_list) = set_return_type_rest_type((yyvsp[(1) - (4)].return_type_list), (yyvsp[(4) - (4)].expr)); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 925 "parser.y"
    { (yyval.return_type_list) = add_return_type(make_return_type_list(FALSE, NULL), (yyvsp[(1) - (1)].expr)); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 927 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.return_type_list) = add_return_type((yyvsp[(1) - (3)].return_type_list), (yyvsp[(3) - (3)].expr)); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 932 "parser.y"
    { warn((yyvsp[(1) - (1)].token)->line, "Return value has name but no type");
	  free((yyvsp[(1) - (1)].token)); (yyval.expr) = NULL; }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 934 "parser.y"
    { free((yyvsp[(1) - (3)].token)); free((yyvsp[(2) - (3)].token)); (yyval.expr) = (yyvsp[(3) - (3)].expr); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 938 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 939 "parser.y"
    { (yyval.param_list) = push_param((yyvsp[(1) - (2)].param), (yyvsp[(2) - (2)].param_list)); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 940 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 945 "parser.y"
    { (yyval.param_list) = make_param_list(); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 947 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.param_list) = push_param((yyvsp[(2) - (3)].param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 949 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 954 "parser.y"
    { (yyval.param) = make_param(make_id((yyvsp[(1) - (1)].token)), NULL); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 956 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param) = make_param(make_id((yyvsp[(1) - (3)].token)), (yyvsp[(3) - (3)].expr)); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 958 "parser.y"
    { (yyval.param) = make_param(make_id((yyvsp[(1) - (3)].token)), make_singleton((yyvsp[(2) - (3)].token)->line, (yyvsp[(3) - (3)].expr)));
	  free((yyvsp[(2) - (3)].token)); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 964 "parser.y"
    { (yyval.param_list) = set_next_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 966 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = set_next_param((yyvsp[(3) - (3)].param_list), (yyvsp[(1) - (3)].id)); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 968 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 972 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.id) = make_id((yyvsp[(2) - (2)].token)); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 977 "parser.y"
    { (yyval.param_list) = set_rest_param(make_param_list(), (yyvsp[(1) - (1)].id)); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 979 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = set_rest_param((yyvsp[(3) - (3)].param_list), (yyvsp[(1) - (3)].id)); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 981 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 985 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.id) = make_id((yyvsp[(2) - (2)].token)); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 990 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.param_list) = (yyvsp[(2) - (2)].param_list); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 994 "parser.y"
    { (yyval.param_list) = allow_keywords(make_param_list()); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 996 "parser.y"
    { free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); (yyval.param_list) = allow_all_keywords(make_param_list()); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 997 "parser.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 1002 "parser.y"
    { (yyval.param_list) = push_keyword_param((yyvsp[(1) - (1)].keyword_param), allow_keywords(make_param_list())); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 1004 "parser.y"
    { free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token));
	  (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), allow_all_keywords(make_param_list())); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 1007 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.param_list) = push_keyword_param((yyvsp[(1) - (3)].keyword_param), (yyvsp[(3) - (3)].param_list)); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 1013 "parser.y"
    { (yyval.keyword_param) = make_keyword_param((yyvsp[(1) - (4)].token), make_id((yyvsp[(2) - (4)].token)), (yyvsp[(3) - (4)].expr), (yyvsp[(4) - (4)].expr)); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 1015 "parser.y"
    { warn((yyvsp[(2) - (5)].token)->line,
	       "``foo (val)'' keyword default syntax obsolete.  "
	       "Use ``foo = val'' instead.");
	  free((yyvsp[(3) - (5)].token)); free((yyvsp[(5) - (5)].token));
	  (yyval.keyword_param) = make_keyword_param((yyvsp[(1) - (5)].token), make_id((yyvsp[(2) - (5)].token)), NULL, (yyvsp[(4) - (5)].expr)); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 1023 "parser.y"
    { (yyval.token) = NULL; }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 1024 "parser.y"
    { (yyval.token) = (yyvsp[(1) - (1)].token); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 1028 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 1029 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 1033 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 1034 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.expr) = (yyvsp[(2) - (2)].expr); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 1039 "parser.y"
    { free((yyvsp[(3) - (3)].token));
	  (yyval.constituent) = (struct constituent *) set_namespace_name((yyvsp[(2) - (3)].defnamespace_constituent), (yyvsp[(1) - (3)].token));
	}
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 1045 "parser.y"
    { (yyval.defnamespace_constituent) = make_define_module(); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 1047 "parser.y"
    { (yyval.defnamespace_constituent) = (yyvsp[(1) - (2)].defnamespace_constituent); free((yyvsp[(2) - (2)].token)); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 1052 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause(make_define_module(), (yyvsp[(1) - (1)].use_clause)); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 1054 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports(make_define_module(), (yyvsp[(1) - (1)].variable_names)); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 1056 "parser.y"
    { (yyval.defnamespace_constituent) = add_creates(make_define_module(), (yyvsp[(1) - (1)].variable_names)); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 1058 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].use_clause)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 1060 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].variable_names)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 1062 "parser.y"
    { (yyval.defnamespace_constituent) = add_creates((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].variable_names)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 1066 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.variable_names) = (yyvsp[(2) - (2)].variable_names); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 1070 "parser.y"
    { free((yyvsp[(1) - (2)].token)); (yyval.variable_names) = (yyvsp[(2) - (2)].variable_names); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 1075 "parser.y"
    { free((yyvsp[(1) - (3)].token)); (yyval.use_clause) = make_use_clause((yyvsp[(2) - (3)].token), (yyvsp[(3) - (3)].use_options)); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 1079 "parser.y"
    { (yyval.use_options) = make_use_options(); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 1081 "parser.y"
    { free((yyvsp[(2) - (3)].token)); (yyval.use_options) = add_use_option((yyvsp[(1) - (3)].use_options), (yyvsp[(3) - (3)].use_option)); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 1094 "parser.y"
    { (yyval.use_option) = make_prefix_option((yyvsp[(2) - (2)].token)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 1099 "parser.y"
    { (yyval.use_option) = make_use_option(useopt_IMPORT_ALL); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 1101 "parser.y"
    { (yyval.use_option) = (struct use_option *) (yyvsp[(3) - (4)].import_option); free((yyvsp[(1) - (4)].token)); free((yyvsp[(2) - (4)].token)); free((yyvsp[(4) - (4)].token)); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 1105 "parser.y"
    { (yyval.import_option) = make_import_option(); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 1106 "parser.y"
    { (yyval.import_option) = (yyvsp[(1) - (1)].import_option); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 1111 "parser.y"
    { (yyval.import_option) = add_import(make_import_option(), (yyvsp[(1) - (1)].token), NULL); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 1113 "parser.y"
    { (yyval.import_option) = add_import(make_import_option(), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 1115 "parser.y"
    { (yyval.import_option) = add_import((yyvsp[(1) - (3)].import_option), (yyvsp[(3) - (3)].token), NULL); free((yyvsp[(2) - (3)].token)); }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 1117 "parser.y"
    { (yyval.import_option) = add_import((yyvsp[(1) - (5)].import_option), (yyvsp[(3) - (5)].token), (yyvsp[(5) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 1122 "parser.y"
    { (yyval.use_option) = make_exclude_option((yyvsp[(2) - (2)].variable_names)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 1127 "parser.y"
    { (yyval.use_option) = make_use_option(useopt_EXPORT_ALL); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 1129 "parser.y"
    { (yyval.use_option) = make_export_option((yyvsp[(2) - (2)].variable_names)); free((yyvsp[(1) - (2)].token)); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 1134 "parser.y"
    { (yyval.use_option) = make_rename_option(make_renamings());
	  free((yyvsp[(1) - (3)].token)); free((yyvsp[(2) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 1137 "parser.y"
    { (yyval.use_option) = make_rename_option((yyvsp[(3) - (4)].renamings)); free((yyvsp[(1) - (4)].token)); free((yyvsp[(2) - (4)].token)); free((yyvsp[(4) - (4)].token)); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 1142 "parser.y"
    { (yyval.renamings) = add_renaming(make_renamings(), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 1144 "parser.y"
    { (yyval.renamings) = add_renaming((yyvsp[(1) - (5)].renamings), (yyvsp[(3) - (5)].token), (yyvsp[(5) - (5)].token)); free((yyvsp[(2) - (5)].token)); free((yyvsp[(4) - (5)].token)); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 1148 "parser.y"
    { (yyval.variable_names) = make_variable_names(); free((yyvsp[(1) - (2)].token)); free((yyvsp[(2) - (2)].token)); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 1150 "parser.y"
    { (yyval.variable_names) = (yyvsp[(2) - (3)].variable_names); free((yyvsp[(1) - (3)].token)); free((yyvsp[(3) - (3)].token)); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 1155 "parser.y"
    { (yyval.variable_names) = add_variable_name(make_variable_names(), (yyvsp[(1) - (1)].token)); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 1157 "parser.y"
    { (yyval.variable_names) = add_variable_name((yyvsp[(1) - (3)].variable_names), (yyvsp[(3) - (3)].token)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 1162 "parser.y"
    { free((yyvsp[(3) - (3)].token));
	  (yyval.constituent) = (struct constituent *) set_namespace_name((yyvsp[(2) - (3)].defnamespace_constituent), (yyvsp[(1) - (3)].token));
	}
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 1168 "parser.y"
    { (yyval.defnamespace_constituent) = make_define_library(); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 1170 "parser.y"
    { (yyval.defnamespace_constituent) = (yyvsp[(1) - (2)].defnamespace_constituent); free((yyvsp[(2) - (2)].token)); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 1175 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause(make_define_library(), (yyvsp[(1) - (1)].use_clause)); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 1177 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports(make_define_library(), (yyvsp[(1) - (1)].variable_names)); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 1179 "parser.y"
    { (yyval.defnamespace_constituent) = add_use_clause((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].use_clause)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 1181 "parser.y"
    { (yyval.defnamespace_constituent) = add_exports((yyvsp[(1) - (3)].defnamespace_constituent), (yyvsp[(3) - (3)].variable_names)); free((yyvsp[(2) - (3)].token)); }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 1185 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 1185 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 1186 "parser.y"
    { (yyval.nothing) = NULL; }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 1186 "parser.y"
    { free((yyvsp[(1) - (1)].token)); (yyval.nothing) = NULL; }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 1188 "parser.y"
    { (yyval.token) = NULL; }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 1188 "parser.y"
    { (yyval.token) = (yyvsp[(1) - (1)].token); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 1190 "parser.y"
    { (yyval.expr) = NULL; }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 1190 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 1191 "parser.y"
    { (yyval.else_part) = NULL; }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 1191 "parser.y"
    { (yyval.else_part) = (yyvsp[(1) - (1)].else_part); }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 1192 "parser.y"
    { (yyval.body) = NULL; }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 1192 "parser.y"
    { (yyval.body) = (yyvsp[(1) - (1)].body); }
    break;


/* Line 1792 of yacc.c  */
#line 4399 "mindyc-parser.c"
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1194 "parser.y"


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

