#include <stdio.h>
#include <stdlib.h>
int *a,n,i,j,aux;

int main()
{
    printf("Numar elemente vector : ");
    scanf("%d",&n);

    a=malloc(n*sizeof(int));

if(a){ //In cazul in care nu se aloca memoreri a==0 iar daca se aloca memorie este orice 
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}else
        printf("Eroare de alocare dinamica");


    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[j]>=a[i]){
      aux=a[i];
      a[i]=a[j];
      a[j]=aux;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
