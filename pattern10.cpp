#include<iostream>

using namespace std;

int main(void)
{
    int num;
    cout<<"enter the value of num"<<endl;
    cin>>num;
    int k=1;
    
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }
        for(int  j = i;j>=1;j--)
        {
          cout<<j<<" ";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}