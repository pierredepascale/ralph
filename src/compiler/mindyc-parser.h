/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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

#ifndef YY_YY_MINDYC_PARSER_H_INCLUDED
# define YY_YY_MINDYC_PARSER_H_INCLUDED
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
/* Line 2058 of yacc.c  */
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


/* Line 2058 of yacc.c  */
#line 318 "mindyc-parser.h"
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

#endif /* !YY_YY_MINDYC_PARSER_H_INCLUDED  */
