//bool prime
#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int num;
    cout<<"enter any no"<<endl;
    cin>>num;

    bool flag=0;
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<"NON -prime"<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0)
        {
            cout<<"prime "<<endl;
        }

}