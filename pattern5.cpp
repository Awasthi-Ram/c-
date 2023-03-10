#include<iostream>
using namespace std;

int main(void)
{
    int row ,col;
    cout<<"col";
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=2*col;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }else if(j>i && j<2*col-i)
            cout<<" ";
            else 
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=2*col;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }else if(j>i && j<2*col-i)
            cout<<" ";
            else 
            cout<<"*";
        }
        cout<<endl;
    }
}