#include<iostream>
using namespace std;
int main(void)
{
    int ram;
    cin>>ram;

    for(int i=0;i<ram;i++)
    {
        cout<<ram<<'\t'<<i<<endl;
        if(i%2==0)
        {
            cout<<ram<<'\t'<<i<<endl;
            continue;
        }
        cout<<"wrong";
        break;
    }

}