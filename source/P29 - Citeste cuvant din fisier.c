#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name_file[30]="cuvant.txt";
char cuvant[20];

int main()
{

    FILE *f;
    f=fopen(name_file,"r");
    if(f==NULL)
    {
        printf("Eroare deschidere fisier !");
        exit(1);
    }

    while(fscanf(f,"%100s",cuvant)!=EOF)
        {
<<<<<<< HEAD
          if(cuvant[0]=='A') /**TESTEAZA DACA CUVANTUL INCEPE CU LITERA 'A' */
=======
          if(cuvant[0]=='A') //! TESTEAZA DACA CUVANTUL INCEPE CU LITERA 'A'
>>>>>>> 63e2e4deb0c833403737b2fb1acd39ca13c012e8
             printf("%s\n",cuvant);
        }
    return 0;
}
