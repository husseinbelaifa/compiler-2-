

typedef struct {
    char* op;
    char* op1;
    char* op2;
    char* resultat;
    int is_exp;
}quadruplet;
quadruplet quad[1000];
int qc=0;
int temp;
 FILE *file_quad;


 typedef struct Element Element;
 struct Element
 {
     char *n;
     Element *suivant;
 };
 char temp1[20];
 typedef struct element  {
                 char inf[20];
 				struct element *prec;
 			            }pile;

 pile *maPile=NULL;
 //les fonctions PILE



typedef struct {
  int qcc;
  char *temp_idef;

}temp_id;
temp_id temp_i[1000];
int qctt=0;
void ajout(int c1,char* c2)  {

  //temp_i[qctt].qcc		=	malloc(sizeof(int*));
	temp_i[qctt].temp_idef =	malloc(sizeof(char*));



      temp_i[qctt].qcc=c1;
      strcpy(temp_i[qctt].temp_idef,c2);
 //printf(" le qc %d\n", temp_i[qctt].qcc);

     qctt++;

}



 void initpile (pile * sommet)
 {sommet=NULL;}

 int pilevide( pile * sommet)
 {if(sommet=NULL) return 1;
 	else return 0;}

 void empiler(pile **sommet, char * x)
 {pile *p,*q;

 p=(pile*)malloc(sizeof(pile));
 strcpy(p->inf,x);
 p->prec=*sommet;
 *sommet=p;

 }

 void depiler(pile **sommet , char* x)
 {pile *p,*q;


 if(!pilevide(*sommet)){
 	p=*sommet;
 	strcpy(x,p->inf);
 	*sommet=(*sommet)->prec;
 	free(p);
 }


 }


void init_quad(){
	qc = 0 ;
	temp = 0;
}

void ajoutquad(char* c1,char* c2,char* c3,char * c4)  {

  quad[qc].op		=	malloc(sizeof(char*));
	quad[qc].op1 =	malloc(sizeof(char*));
	quad[qc].op2 =	malloc(sizeof(char*));
	quad[qc].resultat =	malloc(sizeof(char*));



      strcpy(quad[qc].op,c1);
      strcpy(quad[qc].op1,c2);
      strcpy(quad[qc].op2,c3);
     strcpy(quad[qc].resultat,c4);
     if(!strcmp(quad[qc].op,"+") || !strcmp(quad[qc].op,"-") || !strcmp(quad[qc].op,"*") || !strcmp(quad[qc].op,"/"))
     quad[qc].is_exp=1;

     qc++;

}

void ajoutquad_for(char* c1,char* c2,char* c3,char * c4)  {

  quad[qc].op		=	malloc(sizeof(char*));
	quad[qc].op1 =	malloc(sizeof(char*));
	quad[qc].op2 =	malloc(sizeof(char*));
	quad[qc].resultat =	malloc(sizeof(char*));



      strcpy(quad[qc].op,c1);
      strcpy(quad[qc].op1,c2);
      strcpy(quad[qc].op2,c3);
     strcpy(quad[qc].resultat,c4);

     quad[qc].is_exp=0;

     qc++;

}

void suprimer_quadruplet(int qcdebut,int qcfin){
  int i=0;
  int j;
  for(i=qcdebut,j=qcfin+1;i<qcfin+1,j<qc;i++,j++){
    if(qcdebut>=i && i<=qcfin){
      strcpy(quad[i].op,quad[j].op);
      strcpy(quad[i].op1,quad[j].op1);
      strcpy(quad[i].op2,quad[j].op2);
     strcpy(quad[i].resultat,quad[j].resultat);
   }

  }
  qc=qcfin-qcdebut+1+qc;
}


void affichQuad(){
  file_quad = fopen("quadruplet.txt", "w");
  int i;
  printf("\n****************************************************************\n");
  printf("                           Quadruplet                             \n");
  printf("****************************************************************\n");
  printf("______________________________________________________________________\n");
  printf("| Indice     | operant    |  operateur 1  |  operateur 2  | résultat |\n");
  printf("|____________|____________|_______________|_______________|__________|\n");

  fprintf(file_quad,"\n****************************************************************\n");
  fprintf(file_quad,"                           Quadruplet                             \n");
  fprintf(file_quad,"****************************************************************\n");
  fprintf(file_quad,"___________________________________________________________________\n");
  fprintf(file_quad,"| Indice     | operant    | operateur 1| operateur 2   | résultat |\n");
  fprintf(file_quad,"|____________|____________|____________|_______________|__________|\n");


  for(i=0;i<qc;i++){

      printf("|%11d |%11s |%14s |%13s  |%8s\n",i,quad[i].op,quad[i].op1,quad[i].op2,quad[i].resultat);
      fprintf(file_quad,"|%11d |%11s |%14s |%13s  |%8s\n",i,quad[i].op,quad[i].op1,quad[i].op2,quad[i].resultat);
      printf("|____________|____________|_______________|_______________|__________|\n");
      fprintf(file_quad,"|____________|____________|__________|________|________|\n");

	}
  //printf("|____________|____________|_______________|_______________|__________|\n");
//  printf("|____________|____________|_______________|_______________|__________|\n");

  fclose(file_quad);
  }





char* Cnum(int number){//cast entier en chaine de caractere
	char* num = malloc(sizeof(char*));
	sprintf(num, "%d", number);
	return num ;
}


void genrer_quad_logique( int op, char* op1, char* op2, char* res){
	switch (op)
	{
		// OU
		case 1:	ajoutquad("BNZ",Cnum(qc+4),op1," ");
					ajoutquad("BNZ",Cnum(qc+3),op2," ");
					ajoutquad("=",Cnum(0)," ",res);
					ajoutquad("BR",Cnum(qc+2)," "," ");
					ajoutquad("=",Cnum(1)," ",res);break ;
		// ET
		case 2:		ajoutquad("BZ",Cnum(qc+4),op1," ");
					ajoutquad("BZ",Cnum(qc+3),op2," ");
					ajoutquad("=",Cnum(1)," ",res);
					ajoutquad("BR",Cnum(qc+2)," "," ");
					ajoutquad("=",Cnum(0)," ",res);break ;
		// NOT (!exp)
		case 3:		ajoutquad("BZ",Cnum(qc+3),op1," ");
					ajoutquad("=",Cnum(0)," ",res);
					ajoutquad("BR",Cnum(qc+2)," "," ");
					ajoutquad("=",Cnum(1)," ",res);break;
	}
}

char* create_tmp(){
	char* tmp =malloc(sizeof(char*));
	sprintf(tmp,"T%d",++temp);
	return tmp ;

}

int T=0;
int temporaire(){
 T++;
   return T;
 }


void   generer_quad_comparaison(char* booleen, char* op1, char* op2){
  int k=temporaire();
  char tmp[20];
  sprintf(tmp,"T%d",k);
  ajoutquad("-",op1,op2,tmp);
	ajoutquad(booleen,Cnum(qc+3),tmp," ");
	k=temporaire();
  sprintf(tmp,"T%d",k);

	ajoutquad("=",Cnum(0)," ",tmp);
	ajoutquad("BR",Cnum(qc+2)," "," ");
	ajoutquad("=",Cnum(1)," ",tmp);
  empiler(&maPile,tmp);
	//return tmp ;

}


char* cree_tableau(char* idf, char* index )
{
	char* c = idf;
	c = strcat(c,"[");
	c = strcat(c,index);
	c = strcat(c,"]");

	return c ;

}

void remove_element(int position){
 int c;
  for ( c = position ; c < qc; c++ ){

     quad[c] = quad[c+1];
  }



}

void mis_ajour_quand(int position){
/*int c;
/*  for ( c = position ; c < qc; c++ ){
    //printf("operant %s\n ",quad[c].op);
    if(quad[c].op[0]=='B' &&  quad[c].op[1]!='O'){
      int temp=atoi(quad[c].op1);
      temp--;
    char tmp[20];
      sprintf(tmp,"%d",temp);
       strcpy(quad[c].op1,tmp);
    }
  }*/

int i;
for ( i =0 ; i< qc; i++ ){

    if(quad[i].op[0]=='B' && quad[i].op[1]!='O'){
      int temp=atoi(quad[i].op1);

      if(position<temp){
          temp--;
          char tmp[20];
            sprintf(tmp,"%d",temp);
            strcpy(quad[i].op1,tmp);

      }

    }

}




}

void mis_ajour_quand_insert(int position){
  int i;
  for ( i =0 ; i< qc; i++ ){

      if(quad[i].op[0]=='B' && quad[i].op[1]!='O'){
        int temp=atoi(quad[i].op1);

        if(position<=temp){
            temp++;
            char tmp[20];
              sprintf(tmp,"%d",temp);
              strcpy(quad[i].op1,tmp);

        }

      }

  }

}

void delete_bound(){
  int i;
  for(i=0;i<qctt;i++){
      int us=get_use(temp_i[i].temp_idef) ;

      if(us==0){
        remove_element(temp_i[i].qcc);
        qc--;
        mis_ajour_quand(temp_i[i].qcc);

        remove_element(temp_i[i].qcc);
        qc--;
        mis_ajour_quand(temp_i[i].qcc);
      }

  }
}

void delete_inutile_code(){
    int i;
    for(i=0;i<qc;i++){
      if(quad[i].is_exp==1){
      int k=i;
      int j=i;
     while(!strcmp(quad[j].op,"+") || !strcmp(quad[j].op,"-") || !strcmp(quad[j].op,"*") || !strcmp(quad[j].op,"/")){
        j++;

      }

      if(!strcmp(quad[j].op,"=")){
        //verife l'utilisation
        int us=get_use(quad[j].resultat) ;

        if(us<=1){
          //remove les quadruplet

        int k1;
        int etat=0;
        for(k=i;k<=j;k++){

          if(!declarer(quad[i].op1))
           dec_use(quad[i].op1);
           if(!declarer(quad[i].op2))
           dec_use(quad[i].op2);

           if(!declarer(quad[i].resultat))
           dec_use(quad[i].resultat);

          remove_element(i);

          qc--;

          mis_ajour_quand(k);
          etat=1;
        }
        if(etat==1)i=-1;


      //    qc=qc-(j-i+1);
        }
      }
   }
 }


}


int  from_quad_to_experssion(int numero,char * temp){
  int etat=0;//strcpy(temp,"");


  while(!strcmp(quad[numero].op,"+") || !strcmp(quad[numero].op,"-") || !strcmp(quad[numero].op,"*") || !strcmp(quad[numero].op,"/")){

     if(!etat){
       strcat(temp,quad[numero].op1);
       strcat(temp,quad[numero].op);
       strcat(temp,quad[numero].op2);
       etat=1;
     }else{
      // if(declarer(quad[numero].op1)|| )
       strcat(temp,quad[numero].op);
       strcat(temp,quad[numero].op1);
     }
     numero++;
  }


  if(!strcmp(quad[numero].op,"=")){

    if(!etat){
       strcat(temp,quad[numero].op1);
        strcat(temp,quad[numero].op);
         strcat(temp,quad[numero].resultat);
    }else{


       strcat(temp,quad[numero].op);
        strcat(temp,quad[numero].resultat);

    }

  }

  return numero;


}


void get_sub_string_from_expression(char *temp,char *res1,char *res2){
 int i=0;
  for(i=0;temp[i]!='\0' && temp[i]!='=';i++){
    res1[i]=temp[i];

  }

  /*i++;
  for(;temp[i]!='\0';i++){
    res2[i]=temp[i];
  }*/

}

int is_substring(char *str,char *str1){

}

int get_numero_quadruplet(char *temp,int i1,int i2){
  int i;
  for(i=i1;i<i2;i++){
    if(!strcmp(quad[i].op1,temp) || !strcmp(quad[i].op2,temp))
    break;
  }

  return i;

}


void propagation_version1(){

  int i;
   for(i=0;i<qc ;i++){
      if(quad[i].is_exp==1){
        char temp[100];
        strcpy(temp,"");
         int i1=i;
          i=from_quad_to_experssion(i,temp);
          int i2=i;

          int j;

          for(j=i+1;j<qc;j++){
              if(quad[j].is_exp==1){
                char temp1[100];
                strcpy(temp1,"");
                 int j1=j;
                 j=from_quad_to_experssion(j,temp1);
                int j2=j;

                 if(strcmp(temp,"") && strcmp(temp1,"") && strstr(temp,"=")!=NULL && strstr(temp1,"=")!=NULL){
                   char *str1;char *str2;
                   char temp2[100];

                   strcpy(temp2,"");

                   strcpy(temp2,temp);
                 // printf("le %s",temp2);
                    str1 = strtok(temp2,"=");
                     str2 = strtok(NULL,"=");

                     char *str3;char *str4;


                      str3 = strtok(temp1,"=");
                       str4 = strtok(NULL,"=");
                      // printf("hello");
                       if(!strcmp(str2,str4)){
                        // printf("hello world");
                         break;
                       }else if((strcmp(str2,str4)   && strstr(str3,str2)!=NULL) && i1==i2){

                         //printf("%s hellodd",str3);



                     int nuumero_quad=get_numero_quadruplet(str2,j1,j2);
                    // printf("le numero %d \n",nuumero_quad);
                     if(!strcmp(quad[nuumero_quad].op1,str2)){
                      // printf("enter");
                       dec_use(quad[nuumero_quad].op1);
                       strcpy(quad[nuumero_quad].op1,quad[i1].op1);

                     }else if(!strcmp(quad[nuumero_quad].op2,str2)){
                    //   printf("enter");
                       dec_use(quad[nuumero_quad].op2);
                        strcpy(quad[nuumero_quad].op2,quad[i1].op1);

                     }




                   }else if((strcmp(str2,str4)  && strstr(str3,str2)!=NULL)){

                      int nuumero_quad=get_numero_quadruplet(str2,j1,j2);
                      if(!strcmp(quad[nuumero_quad].op1,str2)){

                        int k1;int k3=0;
                        for(k1=i1;k1<i2;k1++){
                          int k2;
                          qc++;
                          for(k2=qc;k2>nuumero_quad+k3;k2--)
                              quad[k2]=quad[k2-1];
                         quad[nuumero_quad+k3]=quad[k1];
                         mis_ajour_quand_insert(nuumero_quad+k3);
                         k3++;

                        }

                        dec_use(quad[nuumero_quad+k3].op1);


                        strcpy(quad[nuumero_quad+k3].op1,quad[nuumero_quad+k3-1].resultat);

                      }else if(!strcmp(quad[nuumero_quad].op2,str2)){
                         //printf("hello enter");
                        //inserer en arriere
                        int k1;int k3=0;
                        for(k1=i1;k1<i2;k1++){
                          int k2;
                            qc++;
                          for(k2=qc;k2>nuumero_quad+k3;k2--)
                              quad[k2]=quad[k2-1];
                         quad[nuumero_quad+k3]=quad[k1];
                         mis_ajour_quand_insert(nuumero_quad+k3);
                         k3++;

                        }

                        //mis a jout de l'op2
                        dec_use(quad[nuumero_quad+k3].op2);
                        strcpy(quad[nuumero_quad+k3].op2,quad[nuumero_quad+k3-1].resultat);

                      }


                   }

                 }

              }

          }

      }

   }

}


void delete_redondance_version1(){
  int i;
   for(i=0;i<qc ;i++){
       if(quad[i].is_exp==1){
         char temp[100];
         strcpy(temp,"");
          int i1=i;
           i=from_quad_to_experssion(i,temp);
           int i2=i;

           int j;

           for(j=i+1;j<qc;j++){
              if(quad[j].is_exp==1){
             char temp1[100];
             strcpy(temp1,"");
              int j1=j;
              j=from_quad_to_experssion(j,temp1);
             int j2=j;



             if(strcmp(temp,"") && strcmp(temp1,"") && strstr(temp,"=")!=NULL && strstr(temp1,"=")!=NULL){

                char *str1;char *str2;
                char temp2[100];

                strcpy(temp2,"");

                strcpy(temp2,temp);
              // printf("le %s",temp2);
                 str1 = strtok(temp2,"=");
                  str2 = strtok(NULL,"=");

                  char *str3;char *str4;


                   str3 = strtok(temp1,"=");
                    str4 = strtok(NULL,"=");
                //  printf("ffff  %s  %s %s %s  \n",str2,str1,str3,str4 );
                    if(!strcmp(str2,str4)){
                    //  printf("hello");
                      break;
                    }else if((strcmp(str2,str4)  && !strcmp(str1,str3)  && strstr(str3,str2)==NULL)){
                      int k1;
                    //  printf("hello");
                    //  printf(" le j1 et j2 %d  %d\n",j1,j2 );

                        for(k1=j1;k1<j2 ;k1++){
                          if(!declarer(quad[j1].op1))
                           dec_use(quad[j1].op1);
                           if(!declarer(quad[j1].op2))
                           dec_use(quad[j1].op2);

                           if(!declarer(quad[j1].resultat))
                           dec_use(quad[j1].resultat);


                            remove_element(j1);
                            qc--;

                              mis_ajour_quand(j1);

                        }
                           quad[j1].op1=quad[i2].resultat;
                           use_idf(quad[i2].resultat);
                  }



              }
            }

           }


       }

   }

}




//partie assembleur

FILE *assembly_file;
int save_etiq[1000];
int etiq_index=0;

void find_etiq(){
	int index ;

	for (index = 0; index < qc; index++){

		if ((quad[index].op[0] == 'B') && ((quad[index].op[1] != 'O'))){
			save_etiq[etiq_index] = atoi(quad[index].op1) ;
			++etiq_index;
		}
	}
}


void sort(int values[], int n){
    int x,i,j=1;
    while(j < n){
            for (i = 0 ; i < n - j ; i++){
                if(values[i] > values[i + 1]) {
                    x = values[i] ;
                    values[i] = values[i + 1];
                    values[i + 1] = x ;
                 }

            }
            ++j;
    }

    /*for (i = 0; i < n; ++i)
    {
    	printf("%d\n",values[i] );

    }*/

}


void find_and_sort(){
   find_etiq() ;				// find all jump etiq and save theme in a table
     	sort(save_etiq,etiq_index); // to save all etiq before writing assembly code
}


void genetate_pile(){

  assembly_file = fopen("scl_assembly.asm","w");
    printf("TITLE scl_assembly.asm:\n");
      fprintf(assembly_file ,"TITLE scl_assembly.asm:\n");
  printf("pile SEGMENT stack;\n  DW 100 dup(?);\n  base_pile EQU this word;\npile ENDS\n ");
  fprintf(assembly_file ,"pile SEGMENT stack;\n  DW 100 dup(?);r\n  base_pile EQU this word;\npile ENDS\n");
}

void generate_instruction(){
   assembly_file = fopen("scl_assembly.asm","a");
	fprintf(assembly_file ,"\nCODE SEGMENT\n");
	fprintf(assembly_file ," ASSUME SS:pile;\n    MOV AX,pile;\n    MOV SS,AX;\n    MOV SP,base_pile;\n");
	fprintf(assembly_file ,"\nBEGIN:  \n");


  printf("\nCODE SEGMENT\n");
  printf(" ASSUME SS:pile;\n    MOV AX,pile;\n    MOV SS,AX;\n    MOV SP,base_pile;\n");
  printf("\nBEGIN:  \n");

	int index ;
	etiq_index = 0 ;
	char* operation = malloc(sizeof(char*)) ; // to store arithmetic/logical/comparison  operations (+/*-)/((BZ, BNZ, BP, BPZ, BM, BMZ or BR))

	for (index = 0; index < qc; ++index)  // great loop to test quad table
	{
		/**
		*	create jum etiq when it's come to create it !!
		*/
		while (index == save_etiq[etiq_index]) ++etiq_index; // escape some recurring  element on save_etiq[etiq_index]
		if (index == save_etiq[etiq_index-1] && index !=0)
		{
			fprintf(assembly_file, "etiq_%d :\n", save_etiq[etiq_index-1]);
      printf("etiq_%d :\n", save_etiq[etiq_index-1]);
		}

		//  if the first element of quad table is on of {+/*-}
		if ((quad[index].op[0]=='+') || (quad[index].op[0]=='-') || (quad[index].op[0]=='/') || (quad[index].op[0]=='*') )
 		{
			switch (quad[index].op[0])
			{
				case '+' : 	strcpy(operation,"ADD");break ;
				case '*' : 	strcpy(operation,"MUL");break ;
				case '/' :	strcpy(operation,"DIV");break ;
			    case '-' :  strcpy(operation,"SUB");break ;
			}
			if ((quad[index].op1[0]=='T') && (quad[index].op2[0]=='T'))
			{
				fprintf(assembly_file,"		POP AX \n");
				fprintf(assembly_file,"		POP BX \n");
				fprintf(assembly_file,"		%s AX,BX \n",operation);
				fprintf(assembly_file,"		PUSH AX\n");


        printf("		POP AX \n");
				printf("		POP BX \n");
				printf("		%s AX,BX \n",operation);
				printf("		PUSH AX\n");
			}
			else if (quad[index].op1[0]=='T')
				{
					fprintf(assembly_file,"		POP AX \n");
					fprintf(assembly_file,"		%s AX,%s \n",operation, quad[index].op2);
					fprintf(assembly_file,"		PUSH AX\n");

          printf("		POP AX \n");
					printf("		%s AX,%s \n",operation, quad[index].op2);
					printf("		PUSH AX\n");
				}
				else if (quad[index].op2[0]=='T')
					{

						fprintf(assembly_file,"		POP AX \n");
						fprintf(assembly_file,"		%s AX,%s \n",operation, quad[index].op1);
						fprintf(assembly_file,"		PUSH AX\n");

            printf("		POP AX \n");
						printf("		%s AX,%s \n",operation, quad[index].op1);
						printf("		PUSH AX\n");
					}
					else
					{
						fprintf(assembly_file,"		MOV AX,%s \n",quad[index].op1);
						fprintf(assembly_file,"		%s AX,%s \n",operation, quad[index].op2);
						fprintf(assembly_file,"		PUSH AX\n");

            printf("		MOV AX,%s \n",quad[index].op1);
						printf("		%s AX,%s \n",operation, quad[index].op2);
						printf("		PUSH AX\n");
					}
		}
		 /**
		 *	otherwise if the first element of quad table is one of (BZ, BNZ, BP, BPZ, BM, BMZ or BR) or ":="
		 */
		else if (quad[index].op[0] == '=')
			{
				if (quad[index].op1[0]=='T')   // 42 - ( :=  ,  T10  ,     ,  Val2 )
				{
					fprintf(assembly_file,"		POP AX \n");
					fprintf(assembly_file,"		MOV %s, AX\n",quad[index].resultat);

          printf("		POP AX \n");
					printf("		MOV %s, AX\n",quad[index].resultat);
				}
				else if (quad[index].resultat[0]=='T') // 77 - ( :=  ,  0  ,     ,  T21 )
					{
						fprintf(assembly_file,"		MOV AX, %s \n",quad[index].op1);
						fprintf(assembly_file,"		PUSH AX\n");

            printf("		MOV AX, %s \n",quad[index].op1);
						printf("		PUSH AX\n");
					}
					else
					{
						fprintf(assembly_file,"		MOV AX, %s \n",quad[index].op1);
						fprintf(assembly_file,"		MOV %s, AX \n",quad[index].resultat);

            printf("		MOV AX, %s \n",quad[index].op1);
						printf("		MOV %s, AX \n",quad[index].resultat);
					}
			}
			else if ((quad[index].op[0] == 'B') && ((quad[index].op[1] != 'O'))) // pour esquivé les BOUND
			{
				switch (quad[index].op[1])
				{
					case 'Z' : 	strcpy(operation,"JE");break ;
					case 'N' :  strcpy(operation,"JNE");break ;
					case 'M' : 	(quad[index].op[2] == 'Z')? strcpy(operation,"JLE"):strcpy(operation,"JL");break ;
					case 'P' :	(quad[index].op[2] == 'Z')? strcpy(operation,"JGE"):strcpy(operation,"JG");break ;
					default: break;
				}

				if (quad[index].op[1] != 'R')
				{
					(quad[index].op2[0]=='T')? fprintf(assembly_file,"		POP AX \n") : fprintf(assembly_file,"		MOV AX, %s \n",quad[index].op2);
					fprintf(assembly_file,"		CMP AX, 0 \n");
					fprintf(assembly_file,"		%s etiq_%s \n",operation,quad[index].op1);


          printf("		CMP AX, 0 \n");
					printf("		%s etiq_%s \n",operation,quad[index].op1);
				}
				else
				{
					fprintf(assembly_file,"		JMP etiq_%s \n",quad[index].op1) ;

          printf("		JMP etiq_%s \n",quad[index].op1) ;
				}
			}
	}

	// fin de prog principale
	fprintf(assembly_file,"		\n\nMOV ah, 4ch\nint 21h ; fin prog principale\n");
	fprintf(assembly_file ,"CODE ENDS \nEND BEGIN \n");

  printf("	\n\n	MOV ah, 4ch\n	int 21h ; fin prog principale\n");
	printf("	CODE ENDS \n	END BEGIN \n");


}
