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
     STAR = 258,
     DIV = 259,
     MOD = 260,
     LS = 261,
     RS = 262,
     LE = 263,
     GE = 264,
     LESS = 265,
     GREAT = 266,
     EQ = 267,
     NE = 268,
     OR = 269,
     XOR = 270,
     AND = 271,
     OROR = 272,
     ANDAND = 273,
     LPAR = 274,
     RPAR = 275,
     COLON = 276,
     COMMA = 277,
     DOT = 278,
     EQUAL = 279,
     PLUS = 280,
     MINUS = 281,
     WAVE = 282,
     NOT = 283,
     EOL = 284,
     RESTART = 285,
     ENDOFFILE = 286,
     DEF = 287,
     EQU = 288,
     DB = 289,
     DW = 290,
     ORG = 291,
     ALIGN = 292,
     CSEG = 293,
     DSEG = 294,
     ESEG = 295,
     BYTE = 296,
     SET = 297,
     DEVICE = 298,
     STRING = 299,
     MACRODEF = 300,
     REGISTER = 301,
     REGXYZ = 302,
     SYMBOL = 303,
     INTEGER = 304,
     COUNTER = 305,
     FUNCTION = 306,
     IREGREG = 307,
     IREGREGW = 308,
     IIMMIMM = 309,
     IREGIMM = 310,
     IREGIMMW = 311,
     IIMMREG = 312,
     IREG = 313,
     IIMM = 314,
     INOARGS = 315,
     IINDIRC = 316,
     ILPM = 317
   };
#endif
/* Tokens.  */
#define STAR 258
#define DIV 259
#define MOD 260
#define LS 261
#define RS 262
#define LE 263
#define GE 264
#define LESS 265
#define GREAT 266
#define EQ 267
#define NE 268
#define OR 269
#define XOR 270
#define AND 271
#define OROR 272
#define ANDAND 273
#define LPAR 274
#define RPAR 275
#define COLON 276
#define COMMA 277
#define DOT 278
#define EQUAL 279
#define PLUS 280
#define MINUS 281
#define WAVE 282
#define NOT 283
#define EOL 284
#define RESTART 285
#define ENDOFFILE 286
#define DEF 287
#define EQU 288
#define DB 289
#define DW 290
#define ORG 291
#define ALIGN 292
#define CSEG 293
#define DSEG 294
#define ESEG 295
#define BYTE 296
#define SET 297
#define DEVICE 298
#define STRING 299
#define MACRODEF 300
#define REGISTER 301
#define REGXYZ 302
#define SYMBOL 303
#define INTEGER 304
#define COUNTER 305
#define FUNCTION 306
#define IREGREG 307
#define IREGREGW 308
#define IIMMIMM 309
#define IREGIMM 310
#define IREGIMMW 311
#define IIMMREG 312
#define IREG 313
#define IIMM 314
#define INOARGS 315
#define IINDIRC 316
#define ILPM 317




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 77 "avrparse.y"
{
  regSA                 regid;
  instSA                inst;
  opcodeSA              opcode;
  valueSA               val;
  nameSA                name;
  symbolSA              symb;
  indirectSA            indi;
  functionSA            func;
  stringSA              string;
}
/* Line 1529 of yacc.c.  */
#line 185 "avrparse.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

