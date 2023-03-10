#include<iostream>
#include<math.h>

using namespace std;

void fib(int num)
{
    int t1=0,t2=1;

    for(int i=1;i<=num;i++)
    {
        cout<<t1<<"\t";
        int sum = t1 +t2 ;
        t1=t2;
        t2=sum;
    }
}

int main(void)
{
    int num;
    cin>>num;

    fib(num);
    
}