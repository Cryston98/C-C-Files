/*Să se scrie un program care tipareste liniile din
fisierul de intrare ce contin un anumit “şablon” (
şir de caractere prestabilit).*/

#include <stdio.h>
#define MAXLINIE 1000 /* lung. max. a liniei de intrare */
int preialinie(char linie[ ], int max);
int indicesir(char sursa[ ], char decautat[ ]);

char sablon[ ] = "a"; /* sablonul cautat */
/* gaseste toate liniile in care apare sablonul */


int main()
{
char linie[MAXLINIE];
int gasite = 0;
while (preialinie(linie, MAXLINIE) > 0)
if (indicesir(linie, sablon) >= 0) {
printf("%s",linie);
gasite++;
}
return gasite;
}

/* preialinie: preia linia, o copiaza in s, returneaza lung.*/
int preialinie(char s[ ], int lim) {
int c, i;
i = 0;
while (--lim > 0 && (c=getchar()) != EOF && c !='\n')
s[ i++ ] = c;
if (c == '\n')
s[ i++ ] = c;
s[ i ] = '\0';
return i;
}


/* indicesir: returneaza indicele lui t din s sau -1 daca t
nu exista in s*/
int indicesir(char s[ ], char t[ ]) {
int i, j, k;
for (i = 0; s[ i ] != '\0'; i++) {
for (j=i, k=0; t[ k ]!='\0' && s[ j ]==t[ k ]; j++, k++) ;
if (k > 0 && t[ k ] == '\0')
return i;
}
return -1;
}
