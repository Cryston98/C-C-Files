#include <stdio.h>
int n,m;
int cmmdc(int m, int n) {
int r;
r=m % n;
while (r != 0) {
m=n;
n=r;
r=m % n;
}
return n;
}

int main(){
scanf("%d%d",&m,&n);
printf("%d",cmmdc(m,n));
}
