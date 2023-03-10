/* 
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<iostream>

using namespace std;

int fac(int num)
{
    int fac=1;
    for(int i=1;i<=num;i++)
    {
        fac*=i;
    }
    return fac;
}
int main(void)
{
    int num;
    cout<<"enter num"<<endl;
    cin>>num;

    for (int  i = 0; i < num; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fac(i)/(fac(i-j)*fac(j))<<" ";
        }
        cout<<endl;
    }
    

}
