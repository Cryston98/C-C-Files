/* Adunarea a doua numere bit cu bit, prin propagarea transportului */

#include <stdio.h>

void main(void)
{
  int a, b;	/* numerele de adunat */
  int mask;	/* masca pentru bitul curent, incepand de la ultimul */
  int am, bm;	/* rezultatele la operatia & (SI) dintre numere si masca */
  int cy = 0, res = 0;	/* transportul, pe bitul curent, si rezultatul */

  printf("introduceti numerele de adunat ");
  scanf("%d%d", &a, &b);
  /* adunarea se face bit cu bit pornind de la cel mai putin semnificativ
   * masca ce identifica bitul porneste de la 1 si se deplaseaza la stanga,
   * pana cand devine zero (bitul de 1 dispare la stanga prin depasire) */
  for (mask = 1; mask; mask <<= 1) {
    /* rezultatul pe bitul curent e XOR intre cei doi biti din operanzi
     * si transportul (initial zero), adica 1 daca 1 sau 3 din acesti
     * trei biti sunt 1, si 0 daca 0 sau 2 din acesti trei biti sunt 1
     * am si bm retin valoarea lui a si b pe bitul curent, vezi mai jos
     * in res (initial zero) setam cu | (SAU) bitul curent dorit */
    res |= (am = a & mask) ^ (bm = b & mask) ^ cy;
    /* transportul e 1 daca macar doi dintre cei trei biti (in am, bm, cy)
     * sunt 1 (adica suma e 2 (10) sau 3 (11). Deci cel putin (operatorul SAU)
     * o pereche din cele 3 vor fi la fel, cu bitul curent 1 (operatorul SI) */
    cy = (am & bm) | (am & cy) | (bm & cy);
    /* deplasam transportul la stanga pentru folosire in ciclul urmator */
    cy <<= 1;
  }
  printf("suma este %d\n", res);
}
