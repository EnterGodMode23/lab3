#include "node.h"
/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     PLUS = 258,
     MINUS = 259,
     TIMES = 260,
     DIVIDE = 261,
     PERCENT = 262,
     GREATER_EQUAL = 263,
     LESS_EQUAL = 264,
     GREATER = 265,
     LESS = 266,
     NOT_EQUAL = 267,
     EQUAL = 268,
     ASSIGN = 269,
     AND = 270,
     OR = 271,
     NOT = 272,
     IDENTIFIER = 273,
     STRING = 274,
     COMMA = 275,
     CHAR = 276,
     BIN = 277,
     HEX = 278,
     INTEGER = 279,
     TRUE = 280,
     FALSE = 281,
     IF = 282,
     ELSE = 283,
     WHILE = 284,
     DO = 285,
     BREAK = 286,
     SEMICOLON = 287,
     LPAREN = 288,
     RPAREN = 289,
     LBRACE = 290,
     RBRACE = 291,
     LBRACKET = 292,
     RBRACKET = 293,
     TYPEDEF = 294,
     ARRAY_COMMAS = 295,
     RETURN = 296
   };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define TIMES 260
#define DIVIDE 261
#define PERCENT 262
#define GREATER_EQUAL 263
#define LESS_EQUAL 264
#define GREATER 265
#define LESS 266
#define NOT_EQUAL 267
#define EQUAL 268
#define ASSIGN 269
#define AND 270
#define OR 271
#define NOT 272
#define IDENTIFIER 273
#define STRING 274
#define COMMA 275
#define CHAR 276
#define BIN 277
#define HEX 278
#define INTEGER 279
#define TRUE 280
#define FALSE 281
#define IF 282
#define ELSE 283
#define WHILE 284
#define DO 285
#define BREAK 286
#define SEMICOLON 287
#define LPAREN 288
#define RPAREN 289
#define LBRACE 290
#define RBRACE 291
#define LBRACKET 292
#define RBRACKET 293
#define TYPEDEF 294
#define ARRAY_COMMAS 295
#define RETURN 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 6 "lab_1.y"
{
    Node* node;
}
/* Line 1529 of yacc.c.  */
#line 135 "lab_1.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

