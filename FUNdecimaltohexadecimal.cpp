#include<bits/stdc++.h>

using namespace std;
string decihex(int num)
{
    int a=1,c;
    string hex="";
    while(num>0)
    {
        int b =num%16;
        if(b<=9)
        hex+=to_string(b*a);
        else
          c='A'+(b-10);
        hex+=c;
        a*=10;
        num/=16;
        


    }
    return hex;
}
int main (void)
{
    int num;
    cout<<"enter any no."<<endl;
    cin>>num;
    cout<<decihex(num)<<endl;
}