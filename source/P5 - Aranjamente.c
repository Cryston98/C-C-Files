#include <stdio.h>
#include <stdlib.h>

int numitor,aranjamente=1,k,i,n;

int main()
{
    printf("N = ");
    scanf("%d",&n);
    printf("K = ");
    scanf("%d",&k);

    numitor=n-k;
    for(i=numitor+1;i<=n;i++)
        aranjamente=aranjamente*i;
    printf("Aranjamente de %d luate cate %d = %d ",n,k,aranjamente) ;
       return 0;
}