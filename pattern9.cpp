#include<iostream>

using namespace std;

int main(void)
{
    int num;
    cout<<"enter any no."<<endl;
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}