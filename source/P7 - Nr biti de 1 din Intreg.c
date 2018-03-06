

//--------METODA I -------------------

#include <stdio.h>
#include <stdlib.h>



/*PROBLEMA NUMARA BITI DE 1 DINTRUN NR INTREG'

*/

int contorbiti(unsigned x){
   int b;
    for(b=0;x!=0;x>>=1)
      if(x&01)
    b++;
 return b;
}


int main()
{
printf("%d",contorbiti(5));


}


// ----------------METODA II -------------------

/* numara cati biti de 1 sunt in reprezentarea binara a unui numar */

#include <stdio.h>

void main(void)
{
  int n;		/* numarul de testat */
  unsigned cnt = 0;	/* numara cati biti sunt de 1 */

  printf("introduceti numarul de testat ");
  scanf("%d", &n);
  while (n) {	/* cat timp numarul e nenul, mai are biti de 1 */
    cnt += n < 0;	/* n < 0 e 1 (adevarat) daca bitul de semn e 1
			 * deci se incrementeaza cnt, altfel nu */
    n <<= 1;		/* eliminam bitul de semn, deplasam cei ramasi */
  }			/* urmatorul bit e pe locul celui de semn, continua */
  printf("numarul are %d biti de 1\n", cnt);
}
