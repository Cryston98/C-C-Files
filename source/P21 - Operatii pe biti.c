#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int n,m,vector_bit[32],i,rez,l;

void operatie( int a, int b, char op,int len){
 int verif=1;
    printf("  A %c B        = ",op);
switch(op){
    case '+':rez=a+b; break;
    case '*':rez=a*b; break;
    case '-':rez=a-b; break;
    case '&':rez=a&b; break;
    case '|':rez=a|b; break;
    case '^':rez=a^b; break;
    case '/':if(b!=0)
        rez=a/b;
        else
         verif=0;
        break;
              default: printf("Operatie invalida");
               break;}

int aux,aux_rez;
    aux=len-1;
    aux_rez=rez;

if(aux_rez<=(pow(2,l)-1)){
if(verif){
    while(rez!=0){
    vector_bit[aux]=rez%2;
    aux--;
    rez=rez/2;
}

for(i=0;i<len;i++)
    if(i%4==0&&i!=0){
            printf("%c",' ');
            printf("%d",vector_bit[i]);

}else
    printf("%d",vector_bit[i]);
    printf(" = %d \n",aux_rez);

for(i=0;i<len;i++)  // Se reinitializeaza elemente vector
  vector_bit[i]=0;  // cu valoarea zero

}else{
 printf("Reprezentare imposibila ! Nu se poate efectua impartirea la ZERO.\n");
 for(i=0;i<=len;i++)  // Se reinitializeaza elemente vector
  vector_bit[i]=0;  // cu valoarea zero
}
}
else{
        for(i=0;i<len;i++)  // Se reinitializeaza elemente vector
  vector_bit[i]=0;  // cu valoarea zero
 printf("Numarul %d nu poate fi reprezentat pe %d biti.\n",rez,l);
}
}
void binar(int n,int len){

  int aux;
  aux=len-1;
  if(n<=(pow(2,l)-1))
    {
while(n!=0){
    vector_bit[aux]=n%2;
    aux--;
    n=n/2;
}

for(i=0;i<len;i++)
    if(i%4==0&&i!=0){
            printf("%c",' ');
            printf("%d",vector_bit[i]);

}else
    printf("%d",vector_bit[i]);
    printf("\n");

for(i=0;i<len;i++)
  vector_bit[i]=0;
}else
printf("Numarul %d nu poate fi reprezentat pe %d biti.\n",n,l);
}
void negatie(int n,int len){

  int aux;
  aux=len-1;
  if(n<=(pow(2,l)-1))
   {
while(n!=0){
    vector_bit[aux]=n%2;
    aux--;
    n=n/2;
}

for(i=0;i<len;i++)
    if(i%4==0&&i!=0){
            printf("%c",' ');
            if(vector_bit[i]==1)
               printf("%d",0);
               else
                printf("%d",1);

}else
     if(vector_bit[i]==1)
               printf("%d",0);
        else
            printf("%d",1);
printf("\n");

for(i=0;i<len;i++)
  vector_bit[i]=0;
}else
 printf("Numarul %d nu poate fi reprezentat pe %d biti.\n",n,l);


for(i=0;i<=31;i++)
  vector_bit[i]=0;
}
void neg(int n,int len,char op){
  int aux,aux_n,k=1;
  aux=len-1;
  if(n<0)
  aux_n=-1*n;
  if(aux_n>(pow(2,l)-1))
    printf("Numarul %d nu poate fi reprezentat pe %d biti.\n",n,l);
  else{
      if(op==' ')
       printf("\n  Nr %d in baza 2 = ",n);
  else if(op=='~'){
       printf("\n  Nr %d negat     = ",n);
  } else
        printf("  A %c B        = ",op);
while(aux_n!=0){
    vector_bit[aux]=aux_n%2;
    aux--;
    aux_n=aux_n/2;
}

for(i=0;i<len;i++)
    if(vector_bit[i]==1)
            vector_bit[i]=0;
               else
             vector_bit[i]=1;

for(i=len-1;i>=0;i--)
    if(vector_bit[i]+k==2){
        k=1;
        vector_bit[i]=0;
    }
    else if((vector_bit[i]+k==1)&&k==1){
        vector_bit[i]=1;
        k=0;
    } else if(vector_bit[i]+k==0){
         vector_bit[i]=0;
    }
 if  (op!='~'){
    for(i=0;i<len;i++)
    if(i%4==0&&i!=0){
            printf("%c",' ');
            printf("%d",vector_bit[i]);

}else
    printf("%d",vector_bit[i]);
 }
 else{
for(i=0;i<len;i++)
    if(i%4==0&&i!=0){
            printf("%c",' ');
            if(vector_bit[i]==1)
               printf("%d",0);
               else
                printf("%d",1);

}else
     if(vector_bit[i]==1)
               printf("%d",0);
        else
            printf("%d",1);
printf("\n");
 }


for(i=0;i<len;i++)
  vector_bit[i]=0;

  }

}
void select(int a,int b,char op,int l){
 int rz;
 switch(op){
    case '+':rz=a+b; break;
    case '*':rz=a*b; break;
    case '-':rz=a-b; break;
    case '&':rz=a&b; break;
    case '|':rz=a|b; break;
    case '^':rz=a^b; break;
    case '/':if(b!=0)
        rz=a/b;
        break;
              default: printf("Operatie invalida\n");
               break;}
    if(rz<0){
        neg(rz,l,op);
         printf(" = %d\n",rz);}
    else
        operatie(a,b,op,l);

}
void afisare(int n,int l){
  if(n>=0){
    printf("\n  Nr %d in baza 2 = ",n);
    binar(n,l);
    printf("  Nr %d negat     = ",n);
    negatie(n,l);
}
else{
    neg(n,l,' ');
    neg(n,l,'~');
}
}

int main()
{

 printf("A : ");
 scanf("%d",&n);
 printf("B : ");
 scanf("%d",&m);
 printf("Lungimea de reprezentare pe biti :");
 scanf("%d",&l);
int p=pow(2,l)-1;
if(l>32){
printf("\n\tSecventa de reprezentare prea mare! Introdu un nr mai mic \n\n\n");
}else{
afisare(n,l);
afisare(m,l);
printf("-------------------------------------------\n");
select(n,m,'+',l);
select(n,m,'-',l);
select(n,m,'*',l);
select(n,m,'/',l);
select(n,m,'&',l);
select(n,m,'|',l);
select(n,m,'^',l);
}
  return 0;
}
