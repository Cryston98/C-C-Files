#include <stdio.h>
#include <stdlib.h>

#define INTERIOR 1
#define EXTERIOR 0

/*PROBLEMA NUMARARE CUVINTE ,NR LINI SI NR CARACTERE .
PENTRU A SE OPRI CITIREA DIN FISIER IN LOC DE '&' DIN 
INTERIORUL SINTAXEI WIHILE SE FOLOSESTE 'EOF'
*/

int main()
{
    int c,nl,ncuv,nc,stare;
    stare=EXTERIOR;
    nl=ncuv=nc=0;
    while((c=getchar())!='&'){
        ++nc;
   if(c=='\n')
     ++nl;
   if(c==' '||c=='\n'||c=='\t')
    stare=EXTERIOR;
    else if(stare==EXTERIOR){
   stare=INTERIOR;
   ++ncuv;
    }
}
printf("Numar cuvinte :%d \nNumar lini :%d\nNumar caractere :%d\n\n",ncuv,nl,nc);
}

