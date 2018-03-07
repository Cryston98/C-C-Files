/*3) Citim toate liniile dintr-un fisier si le scriem intr-un al doilea fisier doar pe cele care se termina cu punct.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name_file[30]="readline.txt";
char name_file_to_write[30]="write.txt";
char linie[100];

int main()
{

    FILE *f,*g;
    f=fopen(name_file,"r");
    if(f==NULL)
    {
        printf("Eroare la deschidere!");
        exit(1);
    }
    g=fopen(name_file_to_write,"w");
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
