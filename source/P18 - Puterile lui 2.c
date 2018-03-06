/* tiparim puterile lui 2 prin deplasare pe biti */

#include <stdio.h>

void main(void)
{
  unsigned i, n, p;
  
  printf("pana la ce valoare vreti puterile lui 2? ");
  scanf("%u", &n);
  /* for cu doua initializari: i (exponentul) pe 0, p (puterea) pe 1
   * sunt despartite prin operatorul VIRGULA */
  for (i = 0, p = 1; i <= n; ++i) {
    printf("2 la puterea %u este %u\n", i, p);
    p <<= 1;	/* deplasam puterea la stanga, deci inmultim cu 2 */
  }
}
