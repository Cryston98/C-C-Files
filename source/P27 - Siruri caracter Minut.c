/*  Scrieti o functie care extrage valoarea numerica a minutelor dintr-o
    ora data in formatul hh:mm:ss.
    Functia se va numi extrage_minute ,va prii un singur parametru de
	tip sir de caractere si va returna un int.Un exemplu 
	
	int minute =extrage_minute("12:45:50"); //rezultatul apelului =45
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int extrage_minute (char s[8])
{
    int m=0;
    strncpy(s,s+3,2);
    m=atoi(s);
    return m;
}

int main()
{
    char s[8];
    printf("Dati ora:");
    scanf("%s",s);
    printf("\nValoarea minutelor din ora data este: %d minute",extrage_minute(s));
}

   
