#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

float xi,xf,px,yi,yf,py;
float x,y,f;

printf("Introduceti intervalu si pasul pentru x");
scanf("%f%f%f",&xi,&xf,&px);
printf("Introduceti intervalu si pasul pentru y");
scanf("%f%f%f",&yi,&yf,&py);
printf("   x       y      f(x,y)  ");
printf("--------------------------");

x=xi;
while(x<=xf){
    y-yi;
    while(y<=yf){
        if(abs(x)>abs(y))
            f=pow(x,5)-y*pow(x,4)+9.017;
        else
            f=pow(y,3)-pow(x*y,2)+pow(x,5)*y;
        printf("%8.2f  %8.2f  %16.2f",x,y,f);
     y+=py; }
    x+=px; }
}
