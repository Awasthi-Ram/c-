#include<iostream>

using namespace std;

int main(void)
{
    int row,col;
    cout<<"row and col"<<endl;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j<=col-i)
            {
                cout<<" ";
            }else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
}