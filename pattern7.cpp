#include<iostream>

using namespace std;

int main(void)
{
    int row,col;
    cout<<"row,col"<<endl;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<endl;
    }
}