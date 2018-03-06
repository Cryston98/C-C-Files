#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Sa se citeasca un text dat pe mai multe randuri si terminat cu linie vida.
Sa se extraga cuvintele din text si sa se retina cuvintele extrase in zone de memorie alocate dinamic.
Sa se afiseze cuvintele care incep cu o vocala si se termina cu o consoana. Sa se sorteze cuvintele alfabetic
si sa se afiseze . Pentru principalele operatii se vor utiliza functii si transmitere de parametrii */

//! FUNCTIE DE AFISARE MATRICE DE CUVINTE
void afiseaza(char **matrice,int nl)
{ int i;
for(i=0;i<nl;i++){
        printf("%s",matrice[i]);
        printf("\n");}
}


//! FUNCTIE AFISARE CUVINTE CARE INCEP CU VOCALA
void afiseaza_cuv_voc_cons(char **matrice,int nl)
{ int i;
    for(i=0;i<nl;i++) 
      {
          int l=strlen(matrice[i]);
                if(strchr("aeiouAEIOU",matrice[i][0])!=0&&strchr("aeiouAEIOU",matrice[i][l-1])==NULL) 
                {
                    printf("%s",matrice[i]);
                    printf("\n");
                }
      }
}

//! FUNCTIE DE SORTARE CUVINTE IN ORDINE CRESCATOARE
void sorteaza_cuvinte(char **matrice,int nl) 
{
    int i,j; char aux[200];
for(i=0;i<nl;i++)
    {
        for(j=i+1;j<nl;j++) 
          {
                if(strcmp(matrice[i],matrice[j])>0) 
                {
                  strcpy(aux,matrice[i]);
                  strcpy(matrice[i],matrice[j]);
                  strcpy(matrice[j],aux);
                }
          }
    }
}

//! PROGRAMUL PRINCIPAL 
int main() {


    int nl=0; //! nl -> numarul de cuvinte
    
    char linie[100];
    char *cuvant;
    char **matrice=NULL; //! alocare matrice dimensiune vida.
	
    matrice=(char **)(malloc((nl+1)*sizeof(char *)));

    while(fgets(linie,100,stdin)) 
    { 
        //! citesc liniile
        cuvant=strtok(linie," \n");//! despart in cuvinte

        while(cuvant!=NULL) {
                nl++;

                matrice=(char**)realloc(matrice,(nl)*sizeof(char*)); //! redimensionez matricea
                matrice[nl-1]=(char *)(malloc(strlen(cuvant)*sizeof(char)+1)); // aloc memorie pt urmatorul vector
                strcpy(matrice[nl-1],cuvant);
                cuvant=strtok(NULL," \n");}
        }
       printf("afisam toate cuvintele:\n"); afiseaza(matrice,nl); //! afisam matricea corespunzatoare aferenta

//!---------------
//! afisam cuvintele care incep cu vocala si se termina cu consoana

        printf("cuvintele care incep cu vocala si se termina cu consoana sunt:\n");

      afiseaza_cuv_voc_cons(matrice,nl);

//! ---------------SORTAM CUVINTELE
      sorteaza_cuvinte(matrice,nl);
      printf("\n");
//!-------------afisam cuvintele sortate care incep cu vocala si consoana
     printf("cuvintele care incep cu voc si se termina cu cons ordonate sunt:\n");
     afiseaza_cuv_voc_cons(matrice,nl);
     return 0;}
