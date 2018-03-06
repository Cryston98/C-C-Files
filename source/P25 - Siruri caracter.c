Se citeste de la tastatura un text de maxim 80 de caractere.Scrieti un program care prelucreaza textul 
si afiseaza pe ecran toate consoanele care apar in text.
Nu se va face distinctie intre literele mici si mari iar afisarea consoanelor se va face cu litere mici.
 Daca o consoana apare in text de mai multe ori, ea va fi afisata o singura data.


Rezolvare:


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void converse_to_small (char text[])
{
    int i,k='a'-'A';
for(i=0;i<strlen(text);i++){
    if(text[i]>='A'&&text[i]<='Z')
    text[i]=text[i]+k;
}
}

int vect_aparitie[150];

int main(){
    char text[80];
    int i_text=0;
    char c;
    int i_vect;

printf("INTRODUCETI TEXTUL PE CARE DORITI SA-L PRELUCRATI!\n");
    c=getchar();

    while(c!=EOF) {
            text[i_text++]=c;
            c=getchar();}
            text[i_text]=NULL;
    converse_to_small(text);

     //transformam literele in litere mici

    for(i_text=0;i_text<strlen(text);i_text++)
    {
        if(strchr("aeiou",text[i_text])==NULL && text[i_text]!=' ') // text[i_text] = consoana
            {
                i_vect=(int)(text[i_text]);
                vect_aparitie[i_vect]++;
            }
    }


for(i_vect=0;i_vect<150;i_vect++)
    {
        if (vect_aparitie[i_vect]!=0)
        {
                printf("%c",i_vect);
        }
    }
}
