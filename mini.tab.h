
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
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




/* Line 1676 of yacc.c  */
#line 128 "mini.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


