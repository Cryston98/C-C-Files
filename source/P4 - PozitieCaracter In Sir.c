#include <iostream>
#include <string.h>

using namespace std;
int main()
{  
   char a[10000],*p,c;
   cin.get(a,10000);
   cin>>c;
   p=strchr(a,c);

while (p)
{
    cout<<"Pozitia "<<p-a<<endl;
    p++;
    p=strchr(p,c);
 
 }
 
 }
