/* afiseaza bitii unui numar intreg, in ordine inversa */

#include <stdio.h>

void main(void)
{
  unsigned n;	/* daca e fara semn, deplasarea la dreapta introduce
		 * biti de zero, altfel se duplica bitul de semn ! */
  printf("introduceti numarul de testat ");
  scanf("%u", &n);
  do {	/* vom scrie cel putin un bit, chiar si pentru numarul 0
	 * deci folosim ciclul cu test final */
    printf("%d", n & 1); /* sau n % 2: ultimul bit (0 sau 1) */ 
    n >>= 1;	/* sau n /= 2: impartire la 2 = deplasare la dreapta
		 * varianta cu n /= 2 merge si pentru numere negative,
		 * prin impartire succesiva vor deveni zero; altfel, cu
		 * n >>= 1 pentru numere negative, se ajunge la 11....1 */
  } while (n);	/* cat timp n e nenul, deci mai are biti de 1 */
  printf("\n");
}
