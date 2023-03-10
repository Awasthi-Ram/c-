#include<iostream>
using namespace std;

int main (void)
{
    int array[5][6];
    for(int i=0, j=0;i<=5, j<6;i++,j++)
    {
    cin>>array[i][j];
    
    if(j!=i)
    j--;
    }
    for(int i=0,j=0;i<5 &&j<6;i++,j++)
    {
    cout<<array[i][j]<<endl;
    if(j!=i)
    j--;
}
}