#include<iostream>

using namespace std;
int bioct(int num)
{
    int a=1,oct=0;
    while(num>0)
    {
        int b= num%8;
        oct+=b*a;
        num/=10;
        a*=8;
    }
    return oct;
}
int decioct(int num)
{
    int a=1,oct=0;
    while(num>0)
    {
        int b=num%10;

        oct+=b*a;
        num/=10;
        a*=2;
    }
    return bioct(oct);
}
int main(void)
{
    int num;
     cout<<"enter the binary no."<<endl;
    cin>>num;

    cout<<decioct(num)<<endl;
}