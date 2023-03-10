#include<iostream>

using namespace std;
int bideci(int n)
{
    int a=1;
    int deci=0;
    while(n>0)
    {
        int b = n%10;
        deci+=b*a;
        n/=10;
        a*=2;
    }
    return deci;
}
int main(void)
{
    int n;
    cout<<"enter binary no."<<endl;
    cin>>n;

    cout<<"decimal no. is = "<<bideci(n)<<endl;
}