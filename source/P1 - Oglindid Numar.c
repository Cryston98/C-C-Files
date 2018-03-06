#include <stdio.h>
#include <stdlib.h>
int n;

int ogl(int n) // FUNCTIA OGL -FACE OGLINDID NR .
{
    int ogl=0;
    while(n!=0)
    {
      ogl=ogl*10+n%10;
      n=n/10;
    }
    return ogl;
}

int main()
{
    /*
    PROBLEMA CARE FACE OGLINDID UNUI NUMAR
    EX: OGLINDID LUI 5687 ESTE 7865 - OGLINDID ESTE INVERS UNUI NR
    PENTRU A FACE OGLINDIDUL UNUI NR. O SA CREEM O FUNCTIE CARE RETURNEAZA OGLINDID NR-LUI.
    */

    printf("Introdu un numar : ");
    scanf("%d",&n);
    printf("\nOglindidul lui %d este %d \n",n,ogl(n));

    return 0;
}
