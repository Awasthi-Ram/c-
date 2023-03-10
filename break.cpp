#include<iostream>
using namespace std;

int main(void)
{
    int love;
    cout<<"enter your love count"<<endl;
    cin>>love;
    cout<<"lets begin"<<endl;
    for(int i=0;i<love;i++)
    {
        
          if(love%i==0)
          {
            cout<<"i am in love"<<endl;
            continue;
          }
        
        
    
        cout<<"break-up"<<endl;
        break;
       //cout<<"ram"<<love<<endl;
        
    }
}