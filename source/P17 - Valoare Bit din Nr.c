/* testeaza valoarea unui bit anume dintr-un numar */

#include <stdio.h>

void main(void)
{
  int n;
  unsigned b;

  printf("introduceti numarul de testat ");
  scanf("%d", &n);
  printf("introduceti bitul de testat ");
  scanf("%u", &b);
  printf("bitul %u din numarul %d este %c\n", b, n,
	 n & (1 << b) ? '1' : '0' );
}
