#include<bits/stdc++.h>

using namespace std;
int decimaltobinary(int num);
int main(void)
{
    int num;
    cout<<"enter any decimal no."<<endl;
    cin>>num;
    cout<<decimaltobinary(num)<<endl;
}
int decimaltobinary(int num)
{
    int a=1,bi=0;
    while(num>0)
    {
        int b=num%2;
        bi+=b*a;
        a*=10;
        num/=2;
    }
    return bi;
}