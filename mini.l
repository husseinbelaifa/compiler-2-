/**
*   mini.l
*
*   .
*
*     Projet de réalisation d’un mini compilateur pour le langage Min<iLang
                    Avec les Outils FLEX et BISON
*
*          Dévelloper Par   BELAIFA EL HUSSEIN et  BRAZI MOHAMED

*
**/

%{

#include "mini.tab.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "tables_symboles.h"
int nbligne=1 ;
int numcol = 1;
extern YYSTYPE yylval;
int etat=0;
%}


comment --([^-]|(\\-))*--
espace " "+
chifre [0-9]
chifre1 [1-9]
alphabetic [a-zA-Z]
alphanumeric [a-zA-Z0-9]
Entien {chifre}+
Entien_neg -({chifre1}+)
Entien_reel {chifre}+\.{chifre}+|{chifre}+
Entien_reel_neg \-{chifre1}+\.{chifre1}+|{chifre1}+
car '(.)'
et &
ou \|
neg !
sup >
inf <
egal ==
def =!
sup_egal >=
inf_egal <=
addition +
sub -
multi \*
divison /
puiss ^
cond IF|THEN|ELSE|ENDIF
IF IF
THEN THEN
ELSE ELSE
ENDIF ENDIF

boucle FOR|ENDFOR|DO
FOR FOR
ENDFOR ENDFOR
DO DO

cas CASE|CHECK|SO|ENDCASE|DEFAULT
CASE CASE
CHECK CHECK
SO SO
ENDCASE ENDCASE
DEFAULT DEFAULT


par_ouvert \(
par_ferm \)
saut_ligne \n
point_virgule ;
virgule ,
deux_point :


idef [a-z]([a-z_]*)([0-9]*)
begin BEGIN



%%
"[" {
 	/* printf("reconnu  %s\n",yytext);*/numcol=numcol+yyleng ;
 	 yylval.chaine=strdup(yytext);
   insertion(hach_table,yytext,"","",0);
 		return aqualatte_ouvr;
  }
"BEGIN" {/*	printf("c'est un mot reserver pour le DEBUT de programme %s\n",yytext);*/numcol=numcol+yyleng ;

  yylval.chaine=strdup(yytext);


  insertion(hach_table,yytext,"","",0);

	 return debut;

}
"]" {
		/* printf("reconnu  %s\n",yytext);*/numcol=numcol+yyleng ;
		yylval.chaine=strdup(yytext);
    insertion(hach_table,yytext,"","",0);
			return aqualatte_ferm;
	 }



"END" {
	/*printf("c'est un mot reserver pour le fin de programme %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return END;
}
"PROGRAM" {
	/*printf("c'est un mot reserver pour la declaration de nom  de programme %s\n",yytext);*/numcol=numcol+yyleng ;

	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return PROGRAM;

}

";" {
	/*printf("c'est un point virgule %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return point_virgule;
}
"," {
	/*printf("c'est une virgule %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return virgule;

}
":" {
	/*printf("c'est un deux point  %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return deux_point;

}

"IF" {
	/*printf("c'est un mot clès reserver pour le bloc de condition %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return IF;

}
"THEN" {
	/*printf("c'est un mot clès reserver pour le bloc de condition %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return THEN;



}
"ELSE" {
	/*printf("c'est un mot clès reserver pour le bloc de condition %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return ELSE;
}
"ENDIF" {
	/*printf("c'est un mot clès reserver pour le bloc de condition %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return ENDIF;

}

"FOR" {
	/*printf("c'est un mot clès reserver pour le bloc de boucle %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return FOR;

}
"ENDFOR" {
	/*printf("c'est un mot clès reserver pour le bloc de boucle %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return ENDFOR;
}
"DO" {
	/*printf("c'est un mot clès reserver pour le bloc de boucle %s\n",yytext);*/numcol=numcol+yyleng ;

	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return DO;

}

"CASE" {
	/*printf("c'est un mot clès reserver pour le bloc de switch %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return CASE;
}
"ENDCASE" {
	/*printf("c'est un mot clès reserver pour le bloc de switch %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return ENDCASE;
}
"SO" {
	/*printf("c'est un mot clès reserver pour le bloc de switch %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return SO;

}
"DEFAULT" {
	/*printf("c'est un mot clès reserver pour le bloc de switch %s\n",yytext);*/numcol=numcol+yyleng ;yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return DEFAULT;
}
"CHECK" {
	/*printf("c'est un mot clès reserver pour le bloc de switch %s\n",yytext);*/numcol=numcol+yyleng ;
yylval.chaine=strdup(yytext);
insertion(hach_table,yytext,"","",0);
	return CHECK;
}

"ENDCHECK" {
	/*printf("c'est un mot clès reserver pour la fin d'un case  switch %s\n",yytext);*/numcol=numcol+yyleng ;
yylval.chaine=strdup(yytext);
insertion(hach_table,yytext,"","",0);
	return ENDCHECK;
}

"&" {
	/*printf("c'est un operateur logique de et %s \n",yytext);*/numcol=numcol+yyleng ;
  yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return et;
}
"|" {
	/*printf("c'est un operateur logique de ou  %s \n",yytext);*/numcol=numcol+yyleng ;
  yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return ou;
}
"!" {
	/*printf("c'est un operateur logique de negation  %s \n",yytext);*/numcol=numcol+yyleng ;
yylval.chaine=strdup(yytext);
insertion(hach_table,yytext,"","",0);
	return neg;
}

">" {
	/*printf("c'est un operateur de comparaison  de superieure  %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return sup;
}
"<" {
	/*printf("c'est un operateur de comparaison de infèrieur  %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return inf;
}
"=" {
	/*printf("c'est un operateur  d'egalite de affectation %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return egal;
}

"==" {
	/*printf("c'est un operateur de comparaison d'egalite %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return egal_cond;
}

"!=" {
	/*printf("c'est un operateur de comparaison d'egalite %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return deff;
}

">=" {
	/*printf("c'est un operateur de comparaison d'egalite %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return sup_egal;
}
"<=" {
	/*printf("c'est un operateur de comparaison d'egalite %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return inf_egal;
}


"+" {
	/*printf("c'est un operateur arithimetique d'addition %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return plus;
}
"-" {
	/*printf("c'est un operateur arithimetique de soutraction %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return minus;
}
"*" {
	/*printf("c'est un operateur arithimetique de mutiplication %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return multi;
}
"/" {
	/*printf("c'est un operateur arithimetiquede de division %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return divv;
}
"^" {
	/*printf("c'est un operateur arithimetique de puissance %s \n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	return puiss;
}
{Entien} {
numcol=numcol+yyleng ;

	 if(atoi(yytext)>=0 && atoi(yytext)<=2147483647){
		   // printf("le mot est entien positif %s \n",yytext);
				yylval.entien=atoi(yytext);
        insertion(hach_table,yytext,"","",0);
				return Entien;
	 }else{
		 printf("erreur lexical :  %s  a la ligne n° %d la colonne n° %d\n",yytext,nbligne,numcol);
	 }



	}


{Entien_neg} {numcol=numcol+yyleng ;
	if(atoi(yytext)>=((-2147483647)-1) && atoi(yytext)<=(-1)){
 			//printf("le mot est entien negatif%s \n",yytext);
			yylval.entien=atoi(yytext);
      insertion(hach_table,yytext,"","",0);
			return Entien_neg;
  }else{
 	 printf("erreur lexical :  %s  a la ligne n° %d la colonne n° %d\n",yytext,nbligne,numcol);

  }

	}
{Entien_reel} {numcol=numcol+yyleng ;

   if(atof(yytext)>=0 && atof(yytext)<=3,40282*pow(10,38)){
			//printf("c'est un reel positif %s\n",yytext);
			yylval.reel=atof(yytext);
      insertion(hach_table,yytext,"","",0);
      return Entien_reel;
	}else{
	 printf("erreur lexical :  %s  a la ligne n° %d la colonne n° %d\n",yytext,nbligne,numcol);
	}
}

{Entien_reel_neg} {numcol=numcol+yyleng ;
		if(atof(yytext)>=-3,40282*pow(10,38) && atof(yytext)<=-1){
				//printf("c'est un reel positif %s\n",yytext);
				yylval.reel=atof(yytext);
        insertion(hach_table,yytext,"","",0);
        return Entien_reel_neg;
		}else{
		 printf("erreur lexical :  %s  a la ligne n° %d la colonne n° %d\n",yytext,nbligne,numcol);
		}


}

{car} {
	/*printf("c'est un caractere %s\n",yytext);*/numcol=numcol+yyleng ;
   yylval.chaine=strdup(yytext);
   insertion(hach_table,yytext,"","",0);
       return car;
		 }
{comment} {
	/*printf("c'est un commantaire %s\n",yytext);*/numcol=numcol+yyleng ;
	//yylval.chaine=strdup(yytext);
  //insertion(hach_table,yytext,"","",0);
    //  return comment;
}
{espace} {
	/*printf("c'est un espace %s  \n",yytext);*/numcol=numcol+yyleng ;
}

"INT" {
	/* printf("c'est un mot clès pour declarer type entien %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
        return INT;
 }
"FLT" {
	/*printf("c'est un mot clès pour declarer type rèel %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
	 return FLT;
}
"CHR" {
	 /*printf("c'est un mot clès pour declarer type charactère  %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
		return CHR;
 }

"CONSTANT" {
	 /*printf("c'est un mot clès pour declarer La constante  %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
		return CONSTANT;
 }
"(" {
	 /*printf("c'est une parathèse ouvrante  %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
		return part_ouvr;
 }
")" {
	 /*printf("c'est une parathèse fermante %s\n",yytext);*/numcol=numcol+yyleng ;
	yylval.chaine=strdup(yytext);
  insertion(hach_table,yytext,"","",0);
		return part_ferm;
 }

{saut_ligne} { /*printf("c'est une saut de ligne %s\n",yytext);*/nbligne++;numcol=1;}
{idef} {
numcol=numcol+yyleng ;
	if(yyleng<=8 ){

		if ( yytext[yyleng-1] == '_' ){
				 printf("erreur lexical : idf %s  n'accepte _ a la fin  la ligne n° %d la colonne n° %d",yytext,nbligne,numcol);
		}else{
				//printf("c'est un identificateur %s\n",yytext);
				yylval.chaine=strdup(yytext);
        insertion(hach_table,yytext,"","",0);
					return idef;
		}


	}else{
		printf("erreur lexical : idf %s  trop longue a la ligne n° %d la colonne n° %d",yytext,nbligne,numcol);
	}


}

. {
numcol=numcol+yyleng ;
  //yyerror("lexical error, entity dosen't exist ");
	printf("\n Erreur lexical:le mot %s n'est pas reconnu a la ligne n° %d la colonne n° %d\n",yytext,nbligne,numcol);


}
%%
int yywrap(){
	return 1;
}


/*int main(){
	yyin=fopen("test.txt","r");
	yylex();
}*/
