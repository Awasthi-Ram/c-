#include<bits/stdc++.h>

using namespace std;
int hexdeci(string num)
{
    int a=1,hex=0;
    
    int s=num.size();
    for(int i=s-1;i>=0;i--)
    {
        if(num[i]>='0' && num[i]<='9')
        {
            hex+=a*(num[i]-'0');
        }
        else if (num[i]>='A' && num[i]<='F')
        {
            hex+=a*(num[i]-'A'+10);
        }
        a*=16;
    }
    return hex;
}
int main (void)
{
    string num;
    cout<<"enter hexadecimal no."<<endl;
    cin>>num;
    cout<<hexdeci(num)<<endl;
}