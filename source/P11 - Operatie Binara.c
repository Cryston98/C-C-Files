/* Numara si tipareste de la 0 la 255 folosind doar operatori pe biti */

#include <stdio.h>

void main(void)
{
  /* char e pe 1 octet, deci ia valori de la 0 la 255 */
  unsigned char c = 0, mask;

  do {
    printf("%d\n", c);
    mask = 1;	/* pornim cu masca 1 pe bitul cel mai putin semnificativ */
    /* adunam 1 la c bit cu bit, prin propagarea transportului (mask)
     * daca in c bitul curent e 1, se schimba in 0 si avem transport
     * daca in c bitul curent e 0, se schimba in 1 si ne oprim */
    while (c & mask) {
      c ^= mask;	/* bitul curent se schimba din 1 in 0, deci XOR cu 1
			 * ceilalti biti nu se schimba, in masca fiind 0 */
      mask <<= 1;	/* deplasam masca, pentru a testa bitul urmator */
    }
    c |= mask;		/* la oprire, setam bitul curent in c (transportul) */
  } while (c);		/* cand c a ajuns de la 11...1 la 0, ne oprim */
}
