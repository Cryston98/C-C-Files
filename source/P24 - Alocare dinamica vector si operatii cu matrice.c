
Se da o matrice patratica de dimensiune n. Sa se citeasca sis a se afiseze matricea data.
Sa se creeze un vector de n componente in care v[i] sa fie egal cu diferenta dintre sum ape linia i si sum ape coloana i.
Memorarea vectorului se va face intr-o zona alocata dinamic
Sa se afiseze vectorul rezultat.

Ex

1 2 3
4 5 6
7 8 9

V[1]=1+2+3-1-4-7

Rezolvare:

#include <stdio.h>
#include <stdlib.h>

int *a,mat[100][100],n,i,j,s1=0,s2=0;
int main()
{
    printf("Numar de lini si coloane : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
         scanf("%d",&mat[i][j]);


printf("Matricea este :\n");

    for(i=0;i<n;i++){
      for(j=0;j<n;j++)
        printf("%3d",mat[i][j]);
       printf("\n");
    }
a=malloc(n*sizeof(int));

if(a){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
              s1=s1+mat[i][j];
              s2=s2+mat[j][i];
          }
         a[i]=s1-s2;
     }
     printf("Vectorul rezultat este : \n");
    for(i=0;i<n;i++)
            printf("%3d ",a[i]);
         }else
         printf("Eroare de alocare dinamica");
free(a);
    return 0;
}

