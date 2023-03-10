#include<iostream>

using namespace std;

int main(void)
{
    int num;
    cout<<"enter value of num"<<endl;
    cin>>num;
    int k=num;
    
    for(int i=0;i<=num;i++)
    {int l=1,a=1;
        for(int j=1;j<=2*num;j++)
        {
            
            if(j>k-i && j<2*num-k+i)
            {
                if(l%2==0)
                cout<<" ";
                else
                {
                cout<<a;
                a++;
                }
                l++;
                
                
            }else
            {
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
}