#include<iostream>
using namespace std;

int main(void)
{
    int row , col;

    cout<<"row and col"<<endl;
    cin>>row>>col;

    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        col--;
        cout<<endl;
    }
}