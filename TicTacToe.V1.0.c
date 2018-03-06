#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int mat[4][4],i,j,n=3,stop=0,t=1;
char k='+';
void atr()
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=k;
        }
    }
}

void show()
{
  system("cls");
  printf("--------------------------------------------------------");
  printf("\t\t\nSelecteaza o cifra de la 1 - 9 pentru a selecta pozitia !\n");
  printf("--------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("%3.3c ",mat[i][j]);
        }
        printf("\n");
    }
}


void verif( int v)
{
  if(mat[0][0]==v&&mat[0][1]==v&&mat[0][2]==v){
    printf("\nPlayer %c Win !\n",v);
    stop=1;
  }else if(mat[1][0]==v&&mat[1][1]==v&&mat[1][2]==v){
     printf("\nPlayer %c Win !\n",v);
     stop=1;
  }else if(mat[2][0]==v&&mat[2][1]==v&&mat[2][2]==v){
  printf("\nPlayer %c Win !\n",v);
    stop=1;
  }else if(mat[0][0]==v&&mat[1][0]==v&&mat[2][0]==v){
     printf("\nPlayer %c Win !\n",v);
    stop=1;
  }else if(mat[0][1]==v&&mat[1][1]==v&&mat[2][1]==v){
       printf("\nPlayer %c Win !\n",v);
     stop=1;
  }else if(mat[0][2]==v&&mat[1][2]==v&&mat[2][2]==v){
      printf("\nPlayer %c Win !\n",v);
    stop=1;
  }else if(mat[1][0]==v&&mat[1][1]==v&&mat[1][2]==v){
      printf("\nPlayer %c Win !\n",v);
    stop=1;
  }else if(mat[0][0]==v&&mat[1][1]==v&&mat[2][2]==v){
     printf("\nPlayer %c Win !\n",v);
    stop=1;
  }else if(mat[0][2]==v&&mat[1][1]==v&&mat[2][0]==v){
       printf("\nPlayer %c Win !\n",v);
     stop=1;
  }


}

int main()
{
atr();
show();
int c,nr=0;
char v;

 while((c=getchar())!=EOF && stop==0)
{
    if(nr%2==0)
        v='x';
    else
        v='o';

  switch(c){
              case '1': if(mat[2][0]==k)
                        {
                           mat[2][0]=v;
                           nr++;
                           show();
                        }else{
                             show();
                        } break;
              case '2': if(mat[2][1]==k)
                        {
                           mat[2][1]=v;
                           nr++;
                           show();
                        }else{
                            show();
                        } break;
              case '3': if(mat[2][2]==k)
                        {
                           mat[2][2]=v;
                           nr++;
                           show();
                        }else{
                             show();
                        } break;
              case '4': if(mat[1][0]==k)
                        {
                           mat[1][0]=v;
                           nr++;
                           show();
                        }else{
                             show();
                        } break;
              case '5': if(mat[1][1]==k)
                        {
                           mat[1][1]=v;
                           nr++;
                           show();
                        }else{
                             show();
                        } break;
              case '6': if(mat[1][2]==k)
                        {
                           mat[1][2]=v;
                           nr++;
                           show();
                        }else{
                        show();
                        } break;
              case '7': if(mat[0][0]==k)
                        {
                           mat[0][0]=v;
                           nr++;
                           show();
                        }else{
                          show();
                        } break;
              case '8': if(mat[0][1]==k)
                        {
                           mat[0][1]=v;
                           nr++;
                           show();
                        }else{
                            show();
                        } break;
              case '9': if(mat[0][2]==k)
                        {
                           mat[0][2]=v;
                           nr++;
                          show();
                        }else{
                                system("cls");
                        } break;
            }

   verif(v);
/** BUG MULTI ENTER NUMBER EX:785934 ; SHOW MESAJ END REMISE .THIS BUG IS NOT RESOLV**/
            /*
 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     if(mat[i][j]=='+')
       t=0;
    
 if(t){
    printf("~ Remiza ~");
    }else{
  
    }
    */
}

}
