#include <stdio.h>
#include <stdlib.h>
int n;

int sum_cif(int k)
{
    int sum=0;
    while(k!=0){
        sum=sum+k%10;
        k=k/10;
    }
return sum;

}


int main()
{
  /* PENTRU A FACE SUMA CIFRELOR SCOATE
   CATE O CIFRA DE LA SFARSITUL NR CU %10 -CARE FACE RESTUL LA 10

  */

  printf("Introdu Numar :");
  scanf("%d",&n);
  printf("Suma cifrelor lui %d este %d \n",n,sum_cif(n));  //  SE FOLOSESTE \n PENTRU A SCRIE PE LINIA URMATOARE

    return 0;
}
