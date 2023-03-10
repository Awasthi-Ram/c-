#include<iostream>
#include<cmath>

using namespace std;

int main (void)
{
    int arm;
    cin>>arm;
    int ram =arm;
    int sum=0;
    while(arm>0)
    {
        int last=arm%10;
        sum+=pow(last,3);
        arm/=10;
    }
    if(sum==ram)
    {
        cout<<"gaven no. is armstrong"<<endl;
    }else
    cout<<"gaven no. is not armstrong"<<endl;
}