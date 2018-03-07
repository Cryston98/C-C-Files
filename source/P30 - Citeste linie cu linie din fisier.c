#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name_file[30]="readline.txt";
char linie[100];

int main()
{

    FILE *f;
    f=fopen(name_file,"r");
    if(f==NULL)
    {
        printf("Eroare la deschidere!");
        exit(1);
    }
    while(fgets(linie,100,f)!=EOF) //! Citeste linie cu linie
    {
        if(strlen(linie)>10)
            printf("%s",linie);
    }
    return 0;
}
