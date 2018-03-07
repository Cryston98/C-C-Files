#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char linie[100];

int main(int size,char **argv)
{

    if(size!=3){
        printf("Numar parametri incorect ! EX: Nume program , fisier intrare,fisier iesire ");
    exit(1);
      }

    FILE *f,*g;
    f=fopen(argv[1],"r");
    if(f==NULL)
    {
        printf("Eroare la deschidere!");
        exit(1);
    }
    g=fopen(argv[2],"w");
    if(g==NULL)
    {
        printf("Eroare la deschidere!");
        exit(1);
    }

    while(fgets(linie,100,f))
        {
          int leng=strlen(linie);
         if(linie[leng-2]=='.')
           fprintf(g,"%s",linie);
       }
 fclose(f);
 fclose(g);
    return 0;
}
