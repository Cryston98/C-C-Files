#include<stdio.h>
#include<stdlib.h>


int n=10,s,i,j,k;
int a[100][100];
int main()
{
printf("Introdu Dimensiune Matrice ! n = ");
scanf("%d",&n);

for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
      a[i][j]=0;

for(i=1;i<=n;i++)
printf("%4s"," ----");
printf("\n%2c |",'x');
for(i=1;i<=n;i++)
   printf("%4d",i);
   printf("\n");
for(i=1;i<=n;i++)
printf("%5s","-----");

for(i=1;i<=n;i++)
{
    printf("\n%2d |",i);
    for(j=1;j<=n;j++)
    if(n%2==0)
    {
        if((j==n/2+k||j==n/2-k)&&i==k+1&&i<=n/2)
        {
             printf("%4d",a[i][j]);
        }else if(i>n/2&&(j==i+1-n/2||j==n/2+n-i-1)&&i!=n){
         printf("%4d",a[i][j]);
        }
        else if(j==n&&i!=n)
        printf("%4c",'|');
        else if(i==n&&j!=n)
            printf("%5s","----");
            else{
                printf("%4c",'.');
        }
        }
        else if(n%2==1){

         if((j==(n+1)/2+k||j==(n+1)/2-k)&&i==k+1&&i<=(n+1)/2)
            {
             printf("%4d",a[i][j]);
            }else if(i>(n+1)/2&&(j==i+1-(n+1)/2||j==(n+1)/2+(n+1)-i-1)&&(i!=n||(i==n&&j==(n+1)/2))){
                    printf("%4d",a[i][j]);
                }
        else{
                printf("%4c",'.');
        }


        }
        k++;

}
printf("\n");

}

