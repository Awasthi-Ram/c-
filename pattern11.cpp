#include<iostream>

using namespace std;

int main(void)
{
    for(int i=1;i<=2*4;i++)
    {
        int j;
        for( j=1;j<=4-i && i<=5;j++)
        {
            cout<<"  ";
        }
        for(;j<=i-5 && i>5;j++)
        {
            cout<<"  ";
        }
        int k;
        for(k=1;k<=2*i-1 && i<=4;k++)
        {
            cout<<"* ";
        }
        for(k=1;k<=2*(9-i)-1 && i>4;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}