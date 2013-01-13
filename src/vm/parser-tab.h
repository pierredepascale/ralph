/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tok_TRUE = 258,
     tok_FALSE = 259,
     tok_ERROR = 260,
     tok_LPAREN = 261,
     tok_RPAREN = 262,
     tok_DEBUGVAR = 263,
     tok_ARG = 264,
     tok_NUMBER = 265,
     tok_CHARACTER = 266,
     tok_STRING = 267,
     tok_ADDRESS = 268,
     tok_SYMBOL = 269,
     tok_KEYWORD = 270,
     tok_COMMA = 271,
     tok_EXTERN_NAME = 272
   };
#endif
/* Tokens.  */
#define tok_TRUE 258
#define tok_FALSE 259
#define tok_ERROR 260
#define tok_LPAREN 261
#define tok_RPAREN 262
#define tok_DEBUGVAR 263
#define tok_ARG 264
#define tok_NUMBER 265
#define tok_CHARACTER 266
#define tok_STRING 267
#define tok_ADDRESS 268
#define tok_SYMBOL 269
#define tok_KEYWORD 270
#define tok_COMMA 271
#define tok_EXTERN_NAME 272




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


