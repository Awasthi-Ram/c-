#include<iostream>
using namespace std;

int main(void)
{
    int deci,binary=0,k=0,rem;
    cout<<"enter any decimal no."<<endl;
    cin>>deci;
    for(int i=1;deci>0;i*=10)
    {
         rem=deci%2;
        deci=deci/2;
        binary=binary+(rem*i);
        cout<<binary<<endl;
    }
    cout<<"no. is"<<binary<<endl;
}