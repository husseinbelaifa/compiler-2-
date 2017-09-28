/**
*   mini.y
*
*   .
*
*     Projet de réalisation d’un mini compilateur pour le langage MiniLang
                    Avec les Outils FLEX et BISON
*
*           Dévelloper Par   BELAIFA EL HUSSEIN et  BRAZI MOHAMED
*
**/


%{
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
%}

%union{
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

}


%token <chaine>aqualatte_ouvr <chaine>aqualatte_ferm <chaine>END <chaine>PROGRAM <chaine>debut
%token <chaine>point_virgule <chaine>virgule <chaine>deux_point
%token <chaine>IF  <chaine>ELSE  <chaine>THEN  <chaine>ENDIF
%token <chaine>FOR  <chaine>ENDFOR    <chaine>DO
%token <chaine>CASE   <chaine>DEFAULT  <chaine>SO  <chaine>CHECK
%token <chaine>et <chaine>ou <chaine>neg
%token <chaine>sup <chaine>inf <chaine>egal <chaine>egal_cond
%token <chaine>deff <chaine>sup_egal <chaine>inf_egal
%token <chaine>plus <chaine>minus <chaine>multi <chaine>divv <chaine>puiss
%token <entien>Entien <entien>Entien_neg <reel>Entien_reel <reel>Entien_reel_neg <chaine>car
%token <chaine>comment
%token <chaine>INT <chaine>FLT <chaine>CHR <chaine>CONSTANT
%token <chaine>part_ouvr <chaine>part_ferm
%token <chaine>idef
%token <chaine>ENDCASE  <chaine>ENDCHECK
%type <cond>  pr_for sc_for th_for
%type <cond> first_if second_if if_cond
%type <struc> aff
%type <struc> aff1
%type <struc> switch_inst switch_inst1
%type <struc> type_affectation
%type <struc> expression
%type <struc>  expression3
%type <struc>  expression1
%type <struc>  expression2
%type <struc>  condition3
%type <struc>  for_inst
%type <struc>  condition
%type <struc>  condition1
%type <struc>  condition2
%type <struc>  condition_switch
%type <struc>  condition_switch1
%type <struc>  condition_switch2
%type <struc>  condition_switch3
%type <struc>  block_switch block_switch1
%left ou
%left et
%left neg

%left sup sup_egal egal_cond deff inf inf_egal

%left plus minus
%left divv multi
%left puiss

%left part_ouvr part_ferm






%start s

%%

s:PROGRAM idef dec debut inst END idef{

  if(!strcmp($2,$7)){
      printf("\nProgramme syntaxiquement correcte. \n");   ajoutquad("FIN","","",""); YYACCEPT;
  }else  printf("Nom program erronné %s - ligne %d, colonne %d \n",$2,nbligne,numcol);

}
dec:dec_simple dec{}
|dec_cons dec{}
/*|dec_array dec{}*/
|{};
dec_simple:tab deux_point type_var point_virgule{
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

};
type_var:INT{strcpy(sauv_idef[i-1].type,"INT");}
|FLT{strcpy(sauv_idef[i-1].type,"FLT");}
|CHR{strcpy(sauv_idef[i-1].type,"CHR");};


dec_cons:CONSTANT idef egal valeur point_virgule{
   strcpy(sauv_idef[i].idef,$2);
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

};
valeur:Entien{strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", $1);strcpy(savvvve,str);}
|Entien_neg{strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", $1);strcpy(savvvve,str);}
|Entien_reel{strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", $1);strcpy(savvvve,str);}
|Entien_reel_neg{strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", $1);strcpy(savvvve,str);}
|part_ouvr Entien part_ferm{strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", $2);strcpy(savvvve,str);}
|part_ouvr Entien_neg part_ferm{strcpy(sauv_idef[j].type,"INT");char str[100]; sprintf(str, "%d", $2);strcpy(savvvve,str);}
|part_ouvr Entien_reel part_ferm{strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", $2);strcpy(savvvve,str);}
|part_ouvr Entien_reel_neg part_ferm{strcpy(sauv_idef[j].type,"FLT");char str[100]; sprintf(str, "%f", $2);strcpy(savvvve,str);}
|car{strcpy(sauv_idef[j].type,"CHR");strcpy(savvvve,$1);};




/*dec_array :tab deux_point type_var point_virgule{};*/
tab:idef aqualatte_ouvr Entien aqualatte_ferm{

  strcpy(sauv_idef[i].idef,$1);
  sauv_idef[i].taille=$3;
  strcpy(nature_idef[i].nature,"tableau");
  i++;
	k=temporaire();
	char tem[20];

	char tem1[20];
	sprintf(tem,"T%d",k);
	sprintf(tem1,"%d",$3);
	ajoutquad("BOUND",tem1,"",tem);
	ajout(qc-1,$1);
	ajoutquad("ADEC",$1,"",tem);

}
|idef aqualatte_ouvr Entien aqualatte_ferm virgule tab{

  strcpy(sauv_idef[i].idef,$1);
  sauv_idef[i].taille=$3;
  strcpy(nature_idef[i].nature,"tableau");
  i++;

	k=temporaire();
	char tem[20];

	char tem1[20];
	sprintf(tem,"T%d",k);
	sprintf(tem1,"%d",$3);
	ajoutquad("BOUND",tem1,"",tem);
	ajout(qc-1,$1);
	ajoutquad("ADEC",$1,"",tem);



};
|idef{

  strcpy(sauv_idef[i].idef,$1);
  sauv_idef[i].taille=1;
  strcpy(nature_idef[i].nature,"variable");
  i++;



}
|idef virgule tab{
  strcpy(sauv_idef[i].idef,$1);
  sauv_idef[i].taille=1;
  strcpy(nature_idef[i].nature,"variable");
  i++;
};




inst:aff inst {}
|if_cond inst{}
|for_inst inst{}
|switch_inst inst{}
|{};


aff:type_affectation egal expression point_virgule{

	if (strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy($$.t,$1.t);
		//ajoutquad("=",$3.nom," ",$1.nom);



		char c[10];char c1[10];
		depiler(&maPile,c);
		depiler(&maPile,c1);

		ajoutquad("=",c,"",c1);
		quad[qc-1].is_exp=1;


	}



}
|type_affectation plus plus point_virgule{

	if (strcmp($1.t,"CHR")==0){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
			strcpy($$.t,$1.t);

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



}
|type_affectation minus minus point_virgule{

	if (strcmp($1.t,"CHR")==0 ){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy($$.t,$1.t);

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




};

type_affectation:idef{
	if(declarer($1)==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }else if(is_var_cons($1)==1 || is_tableau($1)==1){
		   if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			// if(is_tableau($1)==1) yyerror("erreur semantique la variable est de nature tableau ");
			  YYABORT;
	 }else{
		  get_type($1,sauverType);

		   strcpy($$.t,sauverType);
         use_idf($1);

			 //$$.nom=$1;

			 empiler(&maPile,$1);
			 strcpy(savee_idef,$1);

	 }



}
|idef aqualatte_ouvr Entien aqualatte_ferm{
	if(declarer($1)==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }else if(is_var_cons($1)==1 || is_variable($1)==1){
		   if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 //if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			  YYABORT;
	 }else if(depardement_tableau($1,$3)==0){
		 yyerror("erreur semantique dépardement de tableau  ");
		  YYABORT;
	 }else{
		 use_idf($1);
		 get_type($1,sauverType);

			strcpy($$.t,sauverType);
			char tab[10];
			char str[10]; sprintf(str, "%d", $3);
			strcpy(tab,cree_tableau(strdup($1),strdup(str)));
		 empiler(&maPile,tab);
		  strcpy(savee_idef,$1);
	 }


}
|idef aqualatte_ouvr idef aqualatte_ferm{

	if(declarer($1)==1 ||  declarer($3)==1 ){//declarer
			yyerror("erreur semantique variable non declarer");
			YYABORT;
			error++;
	 }else if(is_var_cons($1)==1 || is_variable($1)==1 ||  is_tableau($3)==1){
			 if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 //if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			// if(is_tableau($3)==1) yyerror("erreur semantique l'indice ne peut pas etre un tableau ");
				YYABORT;
	 }else{
		 use_idf($1);
		 use_idf($3);
		 get_type($1,sauverType);

		   strcpy($$.t,sauverType);

			 char tab[10];
 			char str[10]; sprintf(str, "%d", $3);
 			strcpy(tab,cree_tableau(strdup($1),strdup(str)));
 		 empiler(&maPile,tab);
		  strcpy(savee_idef,$1);
	 }



};

/*tab:idef aqualatte_ouvr Entien aqualatte_ferm{}
|idef aqualatte_ouvr idef aqualatte_ferm{};*/

 /* la grammaire des expression*/


expression:expression1 plus expression{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
	         yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
	         YYABORT;
	}else{


		if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
		else strcpy($$.t,$3.t);

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


}
|expression1 minus expression{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	 else strcpy($$.t,$3.t);

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

}
|expression1{ strcpy($$.t,$1.t); $$.val = $1.val;}
|car{strcpy($$.t,"CHR");empiler(&maPile,$1);};

expression1:expression2 multi expression1{

	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
	         yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
	         YYABORT;
	}else{
		if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
		else strcpy($$.t,$3.t);

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
}
|expression2 divv expression1{


	/*if ($3.val==0){
	 yyerror("Erreur semantique : Division par ZERO- ");
	 YYERROR;
	 }else*///{

  if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
	         yyerror("Erreur semantique :Incompatible type dans l\'addition  ");
	         YYABORT;
	}else{
		if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
		else strcpy($$.t,$3.t);

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
}
|expression2{strcpy($$.t,$1.t);$$.val = $1.val;};

expression2:expression3 puiss expression2{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
	 printf("Erreur semantique:Exposante de Puissance doit etre de type entier");
	 YYERROR;
	 }else{

		 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
 		else strcpy($$.t,$3.t);

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




}
|expression3{strcpy($$.t,$1.t);$$.val = $1.val;};


expression3:idef{

	if(declarer($1)==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }/*else if(is_var_cons($1)==1 || is_tableau($1)==1){
		   if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 if(is_tableau($1)==1) yyerror("erreur semantique la variable est de nature tableau ");
			  YYABORT;
	 }*/else{
	// printf("hellodate %s\n",savee_idef);
	 if(strcmp(savee_idef,$1))
		 use_idf($1);
		 get_type($1,sauverType);

		   strcpy($$.t,sauverType);

			 empiler(&maPile,$1);



	 }


}
|idef aqualatte_ouvr idef aqualatte_ferm{

	if(declarer($1)==1 ||  declarer($3)==1 ){//declarer
			yyerror("erreur semantique variable non declarer");
			YYABORT;
			error++;
	 }/*else if(is_var_cons($1)==1 || is_variable($1)==1 ||  is_tableau($3)==1){
			 if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			 if(is_tableau($3)==1) yyerror("erreur semantique l'indice ne peut pas etre un tableau ");
				YYABORT;
	 }*/else{

	 if(strcmp(savee_idef,$1))
		 use_idf($1);
		 if(strcmp(savee_idef,$3))
		   use_idf($3);
		 get_type($1,sauverType);

		   strcpy($$.t,sauverType);
			 char tab[10];
			 char str[10]; sprintf(str, "%d", $3);
			 strcpy(tab,cree_tableau(strdup($1),strdup($3)));
			empiler(&maPile,tab);
	 }

}
|idef aqualatte_ouvr Entien aqualatte_ferm{

	if(declarer($1)==1){//declarer
			yyerror("erreur semantique variable non declarer");
		  YYABORT;
		  error++;
   }/*else if(is_var_cons($1)==1 || is_variable($1)==1){
		   if(is_var_cons($1)==1) yyerror("erreur semantique on ne peut affecter une constante");
			 if(is_variable($1)==1) yyerror("erreur semantique la variable est de nature variable simple ");
			  YYABORT;
	 }*/else if(depardement_tableau($1,$3)==0){
		 yyerror("erreur semantique dépardement de tableau  ");
		  YYABORT;
	 }else{
		if(strcmp(savee_idef,$1))
		    use_idf($1);
		 get_type($1,sauverType);

			strcpy($$.t,sauverType);
			 	//$$.nom=cree_tableau(strdup($1),strdup($3));
				char tab[10];
				char str[10]; sprintf(str, "%d", $3);
				strcpy(tab,cree_tableau(strdup($1),strdup(str)));
			 empiler(&maPile,tab);
	 }

}
|Entien{strcpy($$.t,"INT");char str[100]; sprintf(str, "%d", $1);/*strcpy($$.t,"INT");char *str; sprintf(str, "%d", $1);*/empiler(&maPile,str);}
|Entien_reel_neg{strcpy($$.t,"FLT");$$.val = $1;char str[100]; sprintf(str, "%f", $1);/*;char str[100]; sprintf(str, "%f", $1);*/empiler(&maPile,str);}
|Entien_neg{strcpy($$.t,"INT");$$.val = $1;char str[100]; sprintf(str, "%d", $1);/*char *str; sprintf(str, "%d", $1);*/empiler(&maPile,str);}
|Entien_reel{strcpy($$.t,"FLT");$$.val = $1;char str[100]; sprintf(str, "%f", $1);empiler(&maPile,str);}
|part_ouvr expression part_ferm{strcpy($$.t,$2.t); $$.val = $2.val;};


/*if_cond:IF part_ouvr condition part_ferm THEN inst ENDIF
|IF part_ouvr condition part_ferm THEN inst ELSE inst ENDIF;*/



if_cond:     first_if inst ENDIF 		{
													// END if_instruction --> update BR
													strcpy(quad[$1.sauv_fin].op1,Cnum(qc)) ;
												}
							|second_if inst ENDIF{


								strcpy(quad[$1.sauv_deb].op1 ,Cnum(qc));//on met le mis a jour de bz


							}
;
first_if:		  second_if inst	ELSE	{
													$$.sauv_fin = qc ;
													ajoutquad("BR","","","");
													strcpy(quad[$1.sauv_deb].op1 ,Cnum(qc));

													// BEGIN of ELSE so -> update condition jump
													//strcpy(quadruplet[$1.sauv_deb].operant1 ,Cnum(qc));
												}
;
second_if: 		  IF part_ouvr condition part_ferm THEN			{
													$$.sauv_deb = qc ;
													char c1[10];
													depiler(&maPile,c1);
													ajoutquad("BZ","",c1,"");

												}
;









condition:condition1 ou condition{

	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);
	 k=temporaire();
	 char tem[20];
	 sprintf(tem,"T%d",k);

   char c[10];char c1[10];
	 depiler(&maPile,c);
	 	depiler(&maPile,c1);
		genrer_quad_logique(1,c1,c,tem);

	 empiler(&maPile,tem);

 }
}
|part_ouvr condition1 ou condition part_ferm{

	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);


	 k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	 char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(1,c1,c,tem);

	empiler(&maPile,tem);
 }
};
|condition1{strcpy($$.t,$1.t);};

condition1:condition2 et condition1{

	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);


	 k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	 char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(2,c1,c,tem);

	empiler(&maPile,tem);
 }


}
|part_ouvr condition2 et condition1 part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);


	 k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	 char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(2,c1,c,tem);

	empiler(&maPile,tem);
 }
}
|condition2{strcpy($$.t,$1.t);};

condition2:neg condition2{

	if(strcmp($2.t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;

	}else{
	strcpy($$.t,$2.t);
	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	//depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
  }

}
|part_ouvr neg condition2 part_ferm{
	if(strcmp($3.t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;

	}else{
	strcpy($$.t,$3.t);

	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	//depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
}
}
|condition3{strcpy($$.t,$1.t);};

condition3:expression sup expression{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);


 	char c[10];char c1[10];
 	depiler(&maPile,c);
 	 depiler(&maPile,c1);
 	 generer_quad_comparaison("BP",c1,c);




 }

}
|expression sup_egal expression{

	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);


	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BPZ",c1,c);


 }
}
|expression inf expression{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BM",c1,c);


 }
}
|expression inf_egal expression{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BMZ",c1,c);


 }
}
|expression egal_cond expression{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BZ",c1,c);


 }
}
|expression deff expression{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BNZ",c1,c);


 }
}
|part_ouvr expression sup expression part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BP",c1,c);


 }
}
|part_ouvr expression sup_egal expression part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BPZ",c1,c);


 }
}
|part_ouvr expression inf expression part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BM",c1,c);


 }
}
|part_ouvr expression inf_egal expression part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BMZ",c1,c);


 }
}
|part_ouvr expression egal_cond expression part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);
	 char c[10];char c1[10];
  	depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BZ",c1,c);


 }
}
|part_ouvr expression deff expression part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);
	 char c[10];char c1[10];
  	 depiler(&maPile,c);
  	 depiler(&maPile,c1);
  	 generer_quad_comparaison("BNZ",c1,c);


 }
};


aff1:type_affectation egal expression {

	if ((strcmp($1.t,$3.t)!=0)){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy($$.t,$1.t);
		//ajoutquad("=",$3.nom," ",$1.nom);



		char c[10];char c1[10];
		depiler(&maPile,c);
		depiler(&maPile,c1);
		ajoutquad_for("=",c,"",c1);
	}



}
|type_affectation plus plus {

	if ((strcmp($1.t,"CHR")==0)){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
	}else{
		strcpy($$.t,$1.t);

		k=temporaire();
		char tem[20];
		sprintf(tem,"T%d",k);

		char c[10];
		depiler(&maPile,c);
		ajoutquad_for("+",c,"1",tem);
		ajoutquad_for("=",tem,"",c);
	}



}
|type_affectation minus minus{

	if ((strcmp($1.t,"CHR")==0)){
		 yyerror("Erreur semantique :Incompatible type dans l\'affectation");
		 YYABORT;
}else{
	strcpy($$.t,$1.t);

	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];
	depiler(&maPile,c);
	ajoutquad_for("-",c,"1",tem);
	ajoutquad_for("=",tem,"",c);

}

};


for_inst:th_for inst ENDFOR {

	char str[15];
   sprintf(str, "%d", ($1.sauv_fin+2));
   ajoutquad("BR",str,"","");
		strcpy(quad[$1.sauv_fin].op1,Cnum(qc)) ;



};
th_for:sc_for aff1 part_ferm{

	if(strcmp($2.t,"INT")){
				 yyerror("Erreur semantique :identificateur doit etre un integer ");
				 YYABORT;
	}else {
		char str[15];
		sprintf(str, "%d",($1.sauv_deb));
		ajoutquad("BR",str,"","");
	  strcpy(quad[$1.sauv_fin+1].op1,Cnum(qc)) ;
	}


};
sc_for:pr_for condition virgule{

 	$$.sauv_fin = qc ;
	char c1[10];
	depiler(&maPile,c1);
	ajoutquad("BZ","",c1,"");

  ajoutquad("BR","","","");


};
pr_for:FOR part_ouvr aff1 virgule {
	if(strcmp($3.t,"INT")){
				 yyerror("Erreur semantique :identificateur doit etre un integer ");
				 YYABORT;
	}else {
		$$.sauv_deb=qc;
	}
};

switch_inst:switch_inst1 block_switch ENDCASE{
	/*get_type($1,sauverType);*/
	if ((strcmp(sauverType,$2.t)!=0)){
		 yyerror("Erreur semantique :Incompatible type ");
		 YYABORT;
	}
	k1--;

}
switch_inst1:CASE part_ouvr idef part_ferm {
	$$.nom=$3;
	char strtype[50];
	get_type($3,strtype);
	if(declarer($3)==1){//declarer
		 yyerror("erreur semantique variable non declarer");
		 YYABORT;
		 error++;
	 }else if(is_var_cons($3)==1 || is_tableau($3)==1){
			if(is_var_cons($3)==1) yyerror("erreur semantique on ne peut affecter une constante");
			if(is_tableau($3)==1) yyerror("erreur semantique la variable est de nature tableau ");
			 YYABORT;
	}else{
		use_idf($3);
		// sauv_idef[k1].idef		=	malloc(sizeof(char*));
	strcpy(sauv_idef[k1].idef,$3);
  strcpy(sauv_idef[k1].type,strtype);
		k1++;

	}





};

block_switch:block_switch1 SO inst ENDCHECK{qct=qc;ajoutquad("BR","","","");strcpy(quad[$1.sauv_fin].op1,Cnum(qc)) ;} block_switch{strcpy(quad[qct].op1,Cnum(qc)) ;};
|block_switch1 SO inst ENDCHECK {qct=qc;ajoutquad("BR","","","");	strcpy(quad[$1.sauv_fin].op1,Cnum(qc)) ;} DEFAULT inst{strcpy(quad[qct].op1,Cnum(qc)) ;};
block_switch1:CHECK part_ouvr condition_switch part_ferm { strcpy($$.t,$3.t);

	 $$.sauv_fin=qc;	 ajoutquad("BZ","","","");

};

condition_switch:condition_switch1 ou condition_switch{
	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
	else strcpy($$.t,$3.t);
	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(1,c1,c,tem);

 empiler(&maPile,tem);

 }

}
|part_ouvr condition_switch1 ou condition_switch part_ferm{
	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
  else strcpy($$.t,$4.t);

	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(1,c1,c,tem);

 empiler(&maPile,tem);
 }


}
|condition_switch1{strcpy($$.t,$1.t)
};

condition_switch1:condition_switch2 et condition_switch1{

	if(strcmp($1.t,"CHR")==0 || strcmp($3.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($1.t,"FLT")==0) 	strcpy($$.t,$1.t);
  else strcpy($$.t,$3.t);
	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(2,c1,c,tem);

 empiler(&maPile,tem);
 }


}
|part_ouvr condition_switch2 et condition_switch1 part_ferm{

	if(strcmp($2.t,"CHR")==0 || strcmp($4.t,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
 }else{
	 if (strcmp($2.t,"FLT")==0) 	strcpy($$.t,$2.t);
	else strcpy($$.t,$4.t);
	 k=temporaire();
 char tem[20];
 sprintf(tem,"T%d",k);

	char c[10];char c1[10];
 depiler(&maPile,c);
	depiler(&maPile,c1);
	genrer_quad_logique(2,c1,c,tem);

 empiler(&maPile,tem);
 }


}
|condition_switch2{
	strcpy($$.t,$1.t);
};

condition_switch2:neg condition_switch2{

	if(strcmp($2.t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;
	}else{
	strcpy($$.t,$2.t);
	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
  }
}
|part_ouvr neg condition_switch2 part_ferm{
	if(strcmp($3.t,"CHR")==0){
		yyerror("Erreur semantique :Incompatible type dans la condition  ");
		YYABORT;
	}else{
	strcpy($$.t,$3.t);
	k=temporaire();
	char tem[20];
	sprintf(tem,"T%d",k);

	char c[10];char c1[10];
	depiler(&maPile,c);
	 depiler(&maPile,c1);
	 genrer_quad_logique(3,c1,"",tem);

	empiler(&maPile,tem);
}
}
|condition_switch3{strcpy($$.t,$1.t);
};
condition_switch3:sup expression{
	if(strcmp($2.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{

	strcpy($$.t,$2.t);

	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BP",sauv_idef[k1-1].idef,c);
  }
}
|sup_egal expression{strcpy($$.t,$2.t);
	if(strcmp($2.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BPZ",sauv_idef[k1-1].idef,c);
  }

}
|inf expression{strcpy($$.t,$2.t);
	if(strcmp($2.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{

	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BM",sauv_idef[k1-1].idef,c);

  }
}
|inf_egal expression{strcpy($$.t,$2.t);
	if(strcmp($2.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BMZ",sauv_idef[k1-1].idef,c);
	}
}
|egal_cond expression{strcpy($$.t,$2.t);
	if(strcmp($2.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BZ",sauv_idef[k1-1].idef,c);
  }
}
|deff expression{strcpy($$.t,$2.t);
	if(strcmp($2.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BNZ",sauv_idef[k1-1].idef,c);
  }

}
|part_ouvr sup expression part_ferm{strcpy($$.t,$3.t);
	if(strcmp($3.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BP",sauv_idef[k1-1].idef,c);

  }
}
|part_ouvr sup_egal expression part_ferm{strcpy($$.t,$3.t);
	if(strcmp($3.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BPZ",sauv_idef[k1-1].idef,c);
  }
}
|part_ouvr inf expression part_ferm{strcpy($$.t,$3.t);
	if(strcmp($3.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BM",sauv_idef[k1-1].idef,c);
  }

}
|part_ouvr inf_egal expression part_ferm{strcpy($$.t,$3.t);
	if(strcmp($3.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BMZ",sauv_idef[k1-1].idef,c);
  }
}
|part_ouvr egal_cond expression part_ferm{strcpy($$.t,$3.t);
	if(strcmp($3.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BZ",sauv_idef[k1-1].idef,c);
  }
}
|part_ouvr deff  expression part_ferm{strcpy($$.t,$3.t);
	if(strcmp($3.t,"CHR")==0 || strcmp(sauv_idef[k1-1].type,"CHR")==0){
					yyerror("Erreur semantique :Incompatible type dans la condition  ");
					YYABORT;
	}else{
	char c[10];
	 depiler(&maPile,c);

		generer_quad_comparaison("BNZ",sauv_idef[k1-1].idef,c);
  }
};


%%


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
