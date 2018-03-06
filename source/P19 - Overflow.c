/* Testare daca adunarea a doi intregi a produs depasire */

#include <stdio.h>

void main(void)
{
  int a, b, res;
  printf("introduceti numerele de adunat ");
  scanf("%d%d", &a, &b);
  printf("suma este %d\n", res = a+b);
  /* Adunarea in binar e efectuata fara semn, iar rezultatul e interpretat
   * cu semn, din modul in care a fost declarat res (int, deci cu semn).
   * Avem depasire daca ambele numere sunt nenegative, dar rezultatul
   * e negativ (pentru ca prin adunare bitul de semn a devenit 1)
   * sau daca numerele erau negative iar rezultatul e nenegativ 
   * (prin adunarea restului de biti, bitul de semn a devenit 1) */
  if (a >= 0 && b >= 0 && res < 0 ||
      a < 0 && b < 0 && res >= 0) printf("am avut depasire\n");
}
