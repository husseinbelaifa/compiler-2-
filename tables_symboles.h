/**
*   tables_symboles.h
*
*   .
*
*     Projet de réalisation d’un mini compilateur pour le langage MiniLang
                    Avec les Outils FLEX et BISON
*
*         Dévelloper Par   BELAIFA EL HUSSEIN et  BRAZI MOHAMED
*
**/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define taille_table_hachage 1000

int indice_talbe=0;

typedef struct table{
          char nom[120];
          char nature[120];
           char type[120];
            char val[120];
            int taille;
            int used;
            struct table *suivant;
}table_hachage;



table_hachage **hach_table=NULL;






 FILE *f;
int  calcul_cles_mot(char *mot){

  int cle=0;
  for (;*mot!='\0';++mot){

     cle=(*mot+cle*65599)% taille_table_hachage;

  }


  return cle ;


}






 int rechercher(table_hachage **TableHash,char *mot){

  table_hachage *p;
  int cle;

  cle = calcul_cles_mot(mot);
  for(p=TableHash[cle];p!=NULL;p=p->suivant)
    if(strcmp(p->nom,mot)==0)
      return 1;
  return 0;
}


table_hachage *InsertionEnTete(table_hachage *L,char nom[],char nature[],char type[],int t){
  table_hachage *nouveau;
  nouveau = (table_hachage *) malloc (sizeof(table_hachage));
  strcpy(nouveau->nom,nom);
  strcpy(nouveau->nature,nature);
  nouveau->taille=t;
    nouveau->used=0;
    strcpy(nouveau->type,type);
  nouveau->suivant = L;

  return nouveau;
}

void insertion(table_hachage **hach_table,char *mot,char *nature,char *type,int taille){

  if(rechercher(hach_table,mot)==0){
    int cle = calcul_cles_mot(mot);

     hach_table[cle] = InsertionEnTete(hach_table[cle],mot,nature,type,taille);


  }

}




void create_table_hachage(){
  hach_table = (table_hachage **) malloc (taille_table_hachage * sizeof(table_hachage *));
  int i=0;
  for(i=0;i<taille_table_hachage;++i){
  //  hach_table[i] = NULL;
    hach_table[i]=NULL;

  }



}
void AfficherListe(table_hachage *table,int i){
  table_hachage *p;

  for(p=table;p!=NULL;p=p->suivant){
    printf("|%11d |%11s |%9s |%6s  |%8d|\n",i,p->nom,p->nature,p->type,p->taille);
    fprintf(f,"|%11d |%11s |%9s |%6s  |%8d|\n",i,p->nom,p->nature,p->type,p->taille);
    printf("|____________|____________|__________|________|________|\n");
    fprintf(f,"|____________|____________|__________|________|________|\n");

  }
  printf("_______________________________________________________\n");
  fprintf(f,"_______________________________________________________\n");

}
void afficher_tables_symboles(table_hachage **table){
  f = fopen("tables_des_symboles.txt", "w");
  int i;
  printf("\n****************************************************************\n");
  printf("                           Table des symboles                     \n");
  printf("****************************************************************\n");
  printf("________________________________________________________\n");
  printf("| Indice     | Nom Entite |  Nature  |  Type  | Taille |\n");
  printf("|____________|____________|__________|________|________|\n");

  fprintf(f,"\n****************************************************************\n");
  fprintf(f,"                           Table des symboles                     \n");
  fprintf(f,"****************************************************************\n");
  fprintf(f,"________________________________________________________\n");
  fprintf(f,"| Indice     | Nom Entite |  Nature  |  Type  | Taille |\n");
  fprintf(f,"|____________|____________|__________|________|________|\n");


  for(i=0;i<taille_table_hachage;i++){
    if(table[i] != NULL){
        AfficherListe(table[i],i);

    }
  }

 fclose(f);
}

//la sémantique

void inserer_type(char chaine[], char type[]){


  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(!strcmp(p->nom,chaine))
       strcpy(p->type,type);

  }

}

void inserer_val(char chaine[], char val[]){


  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(!strcmp(p->nom,chaine))
       strcpy(p->val,val);

  }

}


void inserer_nature(char chaine[], char nature[]){


  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(!strcmp(p->nom,chaine))
       strcpy(p->nature,nature);

  }


}

void inserer_taille(char chaine[], int  taille){


  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(!strcmp(p->nom,chaine))
          p->taille=taille;

  }


}


//les routine sémantiques


int double_dec(char chaine[]){

  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(p!=NULL){

         if(!strcmp(p->type,"INT") ||  !strcmp(p->type,"FLT") ||  !strcmp(p->type,"CHR") || !strcmp(p->nature,"constante")) return 1;
         else return 0;//IL N EXISTE PAS LE TYPE

       }else return -1;


  }


}

int declarer(char chaine[]){

  if(rechercher(hach_table,chaine)==1){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
      for(p=hach_table[cle];p!=NULL,strcmp(p->nom,chaine);p=p->suivant);
       if(p!=NULL){

         if(!strcmp(p->nature,"variable") ||  !strcmp(p->nature,"constante") || !strcmp(p->nature,"tableau")) return 0;//DECLATER
         else return 1;// NON declarer

       }else return -1;


  }else return -2;


}


int is_var_cons(char chaine[]){

  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(p!=NULL){

         if(!strcmp(p->nature,"constante")) return 1;//cst
         else return 0;// variable ou tableau

       }else return -1;


  }


}

int is_tableau(char chaine[]){

  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(p!=NULL){

         if(!strcmp(p->nature,"tableau") ) return 1;//variable
         else return 0;// cst ou variable

       }else return -1;


  }


}

int is_variable(char chaine[]){

  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(p!=NULL){

         if(!strcmp(p->nature,"variable") ) return 1;//variable
         else return 0;// cst ou variable

       }else return -1;


  }


}


int get_size(char chaine[]){

  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(p!=NULL){

         return( p->taille);

       }else return -1;


  }


}

void get_type(char chaine[],char *res){

  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(p!=NULL){
        strcpy(res,p->type);

       }


  }


}


int type_compatible(char chaine1[],char chaine2[]){

  if(rechercher(hach_table,chaine1) && rechercher(hach_table,chaine2)){
    int cle=calcul_cles_mot(chaine1);
    int cle2=calcul_cles_mot(chaine2);
    table_hachage *p=hach_table[cle];  table_hachage *q=hach_table[cle2];
    while(p->suivant!=NULL && q->suivant && strcmp(p->nom,chaine1) && strcmp(q->nom,chaine2)){
      p=p->suivant;q=q->suivant;

    }

       if(p!=NULL && q!=NULL){
               if(!strcmp(p->type,q->type)){

                 return 1;

               }else return 0;



       }else return -1;


  }




}


int depardement_tableau(char chaine[],int index){

  if(rechercher(hach_table,chaine)){
    int cle=calcul_cles_mot(chaine);
    table_hachage *p=hach_table[cle];
    while(p->suivant!=NULL && strcmp(p->nom,chaine))
       p=p->suivant;
       if(p!=NULL){

         if(!strcmp(p->nature,"tableau")){

           int size=get_size(chaine);

           if(index >0 && index <=size) return 1;
           else return 0;

         }else return -1;

       }else return -1;


  }


}

//partie optimisation

void use_idf(char* idf) {



    if(rechercher(hach_table,idf)){
        int cle=calcul_cles_mot(idf);
        table_hachage *p=hach_table[cle];
          while(p->suivant!=NULL && strcmp(p->nom,idf)){
               p=p->suivant;
          }

             if(p!=NULL && !declarer(p->nom)){
                p->used++;

             }


              // printf("gogog %s   %d\n",p->nom,p->used);
    }



}

void dec_use(char* idf) {

    if(rechercher(hach_table,idf)){
        int cle=calcul_cles_mot(idf);
        table_hachage *p=hach_table[cle];
          while(p->suivant!=NULL && strcmp(p->nom,idf)){
               p=p->suivant;
          }

             if(p!=NULL){
                p->used--;
              //  printf("gogog %d",p->used);b
             }
    }


}

int  get_use(char* idf) {

    if(rechercher(hach_table,idf)){
        int cle=calcul_cles_mot(idf);
        table_hachage *p=hach_table[cle];
          while(p->suivant!=NULL && strcmp(p->nom,idf)){
               p=p->suivant;
          }

             if(p!=NULL){
                return (p->used);
              //  printf("gogog %d",p->used);b
             }
    }


}








/*FILE *assembly_file;

void declaration1(table_hachage *table,int i){
  table_hachage *p;

  for(p=table;p!=NULL;p=p->suivant){

    //variable simple
      printf("hellllllllllllllllllllllllllllllllllllllllo %s",p->nature);
    if(!strcmp(p->nature,"variable") && !strcmp(p->type,"INT") ) fprintf(assembly_file ,"	%s DD  ? \n",p->nom);

    if(!strcmp(p->nature,"variable") && !strcmp(p->type,"FLT") ) fprintf(assembly_file ,"	%s DQ  ? \n",p->nom);

      if(!strcmp(p->nature,"variable") && !strcmp(p->type,"CHR") ) fprintf(assembly_file ,"	%s DB  ? \n",p->nom);


      //tableau

        if(!strcmp(p->nature,"tableau") && !strcmp(p->type,"INT") ) fprintf(assembly_file ,"	%s DD %d DUP  ? \n",p->nom, (p->taille)/4);

          if(!strcmp(p->nature,"tableau") && !strcmp(p->type,"FLT") ) fprintf(assembly_file ,"	%s DQ %d DUP  ? \n",p->nom, (p->taille)/4);

            if(!strcmp(p->nature,"tableau") && !strcmp(p->type,"CHR") ) fprintf(assembly_file ,"	%s DB %d DUP  ? \n",p->nom, (p->taille)/4);

  }
}



void generate_delcaration(table_hachage **table){

  assembly_file = fopen("scl_assembly.asm","w");
  int i;
  fprintf(assembly_file ,"DATA SEGMENT  \n");

    for(i=0;i<taille_table_hachage;i++){
        if(table[i] != NULL){
           declaration1(table[i],i);
        }
    }

}*/


void delete_idef_non_used(){
      int i=0;
      for ( i = 0; i <taille_table_hachage; i++){
        table_hachage *table = hach_table[i];
        table_hachage *precedent = table ;

          while(table != NULL) {
           //printf("ddd %s %d\n ",table->nom,table->used);
        //  printf("hello1\n");
            if(table->used==0 && !declarer(table->nom)) {
               //if(!strcmp(table->nature,"tableau")){
                    // printf("hello2\n");

              	if(table== hach_table[i]){
                  //  printf("hello3\n");
                  if (table->suivant == NULL){
                      //  printf("hello4\n");
                   hach_table[i]= NULL ;
                  /*  free(table->nom);*/
                    free(table);
                    break;
                    //  printf("hello5\n");

                  }else{
                    //  printf("hello6\n");
                    hach_table[i] = table->suivant ;
              			free(table->nom);
              		 	free(table);
              			table =hach_table[i];
                    //  printf("hello7\n");
                  }

                }else{
                   //printf("hello8\n");
                  precedent->suivant = table->suivant ;
  	            	free(table->nom);
              		free(table);
  	            	table = precedent->suivant;
                    //printf("hello9\n");

                }
            }else{
                //printf("hello10\n");
          		precedent = table ;
          		table = table->suivant ;
              //  printf("hello11\n");

          	}



          }
      }

}




//assembleur pour la partie déclaration


FILE *assembly_file;

void declaration1(table_hachage *table,int i){
  table_hachage *p;




  for(p=table;p!=NULL;p=p->suivant){

    //variable simple
    //  printf("hellllllllllllllllllllllllllllllllllllllllo %s",p->nature);
    if(!strcmp(p->nature,"variable") && !strcmp(p->type,"INT") ){
      printf("	%s DD  ? \n",p->nom);
      fprintf(assembly_file ,"	%s DD  ? \n",p->nom);
    }

    if(!strcmp(p->nature,"variable") && !strcmp(p->type,"FLT") ){
      printf("	%s DQ  ? \n",p->nom);

      fprintf(assembly_file ,"	%s DQ  ? \n",p->nom);


    }

      if(!strcmp(p->nature,"variable") && !strcmp(p->type,"CHR") ){
          printf("	%s DB  ? \n",p->nom);
        fprintf(assembly_file ,"	%s DB  ? \n",p->nom);
      }

          //if(!strcmp(p->nature,"constante"))  fprintf(assembly_file ,"	%s EQU  ? \n",p->nom);
      //tableau

        if(!strcmp(p->nature,"tableau") && !strcmp(p->type,"INT") ){
            printf("	%s DD %d DUP  ? \n",p->nom, (p->taille)/4);
           fprintf(assembly_file ,"	%s DD %d DUP  ? \n",p->nom, (p->taille)/4);
         }

          if(!strcmp(p->nature,"tableau") && !strcmp(p->type,"FLT") ){
              printf("	%s DQ %d DUP  ? \n",p->nom, (p->taille)/4);
            fprintf(assembly_file ,"	%s DQ %d DUP  ? \n",p->nom, (p->taille)/4);
        }

            if(!strcmp(p->nature,"tableau") && !strcmp(p->type,"CHR") ){
              printf("	%s DB %d DUP  ? \n",p->nom, (p->taille)/4);
               fprintf(assembly_file ,"	%s DB %d DUP  ? \n",p->nom, (p->taille)/4);
             }


             if(!strcmp(p->nature,"constante") ){

               int a=p->val[1];
               char str[100];
               sprintf(str,"%d",a);

               printf("	%s EQU %s \n",p->nom,str);
               fprintf(assembly_file ,"	%s EQU %s \n",p->nom,str);


              if(!strcmp(p->nature,"CHR") ){

              }else   if(!strcmp(p->nature,"INT") || !strcmp(p->nature,"FLT")){

                 printf("	%s EQU %s \n",p->nom,p->val);
                  fprintf(assembly_file ,"	%s EQU %s \n",p->nom,p->val);

              }

            }

  }
}


void generate_delcaration(table_hachage **table){


  int i;
    assembly_file = fopen("scl_assembly.asm","a");
  fprintf(assembly_file ,"DATA SEGMENT  \n");
  printf("DATA SEGMENT  \n");
    for(i=0;i<taille_table_hachage;i++){
        if(table[i] != NULL){
           declaration1(table[i],i);
        }
    }

}
