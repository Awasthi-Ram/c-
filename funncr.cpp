#include<iostream>

#include<math.h>

using namespace std;

int fac(int num)
{
    int fac=1;
    for(int i=1;i<=num;i++)
    {
        fac*=i;
    }
     return fac;
}
int main(void)
{
    int n,r;
    cout<<"enter the value of n and r in nCr"<<endl;
    cin>>n>>r;
    int nCr = fac(n)/(fac(n-r)*fac(r));
    cout<<nCr<<endl;
}