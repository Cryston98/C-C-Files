#include <stdio.h>
#include <stdlib.h>
int n;

int palind(int k)
{
    int aux=k,ogl=0;
    while(k!=0){
        ogl=ogl*10+k%10;
        k=k/10;
    }
   if(ogl==aux)
       return 1;
     else
        return 0;

}

int main()
{
  /* FUNCTIE CARE TESTEAZA DACA UN NUMAR ESTE PALINDROM .UN NUMAR ESTE
     PALINDROM DACA CITIT IN SENS INVERS DA ACELASI NR.
     EX: - 23443 CITIT IN SENS INVES ESTE 34432 DECI NU ESTE PALINDROM
         - 35653 DACA CITIM DE LA SFARSIT LA INCEPUT DA ACELASI NUMAR.
     PE SCURT UN NUMAR ESTE PALINDROM DACA ESTE EGAL CU OGLINDID SAU.
  */

  printf("Introdu Numar :");
  scanf("%d",&n);

  if(palind(n)==1)
    printf("Numar este palindrom \n");  //  SE FOLOSESTE \n PENTRU A SCRIE PE LINIA URMATOARE
  else
    printf("Numarul nu este palindrom \n");

    return 0;
}
