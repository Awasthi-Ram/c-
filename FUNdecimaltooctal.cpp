#include<bits/stdc++.h>

using namespace std;
int decioct(int num)
{
    int a=1,deci=0;
    while(num>0)
    {
        int b=num%8;
        deci+=a*b;
        a*=10;
        num/=8;
    }
    return deci;
}
int main (void)
{
    int num;
    cout<<"enter any decimal no."<<endl;
    cin>>num;
    cout<<decioct(num)<<endl;
}