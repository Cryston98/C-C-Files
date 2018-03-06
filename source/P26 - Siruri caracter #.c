Se citeste de la tastatura un text pana la intalnirea caracterului “.”.
Afisati pe ecran textul prelucrat in asa fel incat dupa fiecare grup de cifre sa fie precedat de caracterul “#”.


Rezolvare:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char text[100];
    int c;
    int i=0;
    c=getchar();
    while (c!='.') {
            text[i++]=c;
            c=getchar();}
    text[i]=NULL;
    ///////////////////////////////////////////////////
    int li,lf;
    for(i=0;i<strlen(text);i++) {
            if(text[i]>='0'&&text[i]<='9') {
                    printf("#");
                    while(text[i]>='0'&&text[i]<='9'){
                            printf("%c",text[i]);i++;}i--;}

            else printf("%c",text[i]);}}