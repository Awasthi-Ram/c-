#include<iostream>

#include<math.h>

using namespace std;

void fac(int num)
{
    int fac=1;
    
   for(int i=1;i<=num;i++)
   {
       fac*=i;
   }
   cout<<fac<<endl;
}

int main(void)
{
    int num;
    cin>>num;

    fac(num);
}