/* afiseaza bitii din reprezentarea binara a unui intreg, in ordine */

#include <limits.h>	// daca avem nevoie de INT_MIN
#include <stdio.h>

void main(void)
{
  unsigned mask;	/* masca pentru testarea bitului curent */
  int n;		/* numarul de testat */
  printf("introduceti numarul de testat ");
  scanf("%d", &n);
  /* ne trebuie initial o masca cu primul bit pe 1, si ceilalti 0 */
  /* o varianta: deplasam pe 1 la stanga cu nr. de biti din intreg - 1 */
  mask = 1 << (8 * sizeof(unsigned) - 1);
  /* alta varianta: 00...0 -compl-> 11...1 -deplas-> 01...1 -compl-> 10...0 */
  // mask = ~(~0u >> 1);	/* la deplasare trebuie unsigned: 0u */
  // mask = INT_MIN;	/* intregul minim are 1 bit de semn, ceilalti zero */
  do {
    /* n & mask e bitul curent (0=fals, nenul=adev.); tiparim 1 sau 0 */
    printf("%c", n & mask ? '1' : '0');	/* %c: tiparim un caracter (cifra) */
    // printf("%d", n & mask ? 1 : 0);  /* %d: tiparim o valoare intreaga */ 
    mask >>= 1;	/* deplasam masca pentru a testa urmatorul bit */
  } while (mask);	/* cat timp masca nu a ajuns la zero */
  printf("\n");
}
