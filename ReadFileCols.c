#include <stdio.h>
#include <stdlib.h>


typedef struct
{
   char name[30];
   int nota;
} student;

int main()
{

  FILE *f;
  student s;
  f=fopen("student.txt","r");
  if(f==NULL){
    printf("Eroare deschidere!");
    exit(1);
  }
    while(!feof(f))
    {
        fscanf(f,"%s %d",s.name,&s.nota);
        printf("Studentul : %s are nota : %d\n",s.name,s.nota);
    }
 return 0;
}
