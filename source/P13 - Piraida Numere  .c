#include <stdio.h>
#include <stdlib.h>

int n,i,j;

int main()
{
    printf("Introdu N=");
    scanf("%d",&n);
  for(i=1;i<=n;i++)
 {
     for(j=1;j<=i;j++)
        printf("%d ",j);
    printf("\n");
}

}
