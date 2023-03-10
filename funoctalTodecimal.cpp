#include<bits/stdc++.h>

using namespace std;

int od(int num)
{
    int a=1,oct=0;
    while(num>0)
    {
        int b=num%10;
        oct+=a*b;
        num/=10;
        a*=8;
    }
    return oct;
}
int main(void)
{
    int num;
    cout<<"enter any octal no."<<endl;
    cin>>num;
    cout<<od(num)<<endl;
}
