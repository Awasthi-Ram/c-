#include<bits/stdc++.h>

using namespace std;
string binaryadd(string num1,string num2)
{
    string result ="";
    int a=0;
    int size_num1=num1.size()-1;
    int size_num2=num2.size()-1;
    while(size_num1 >= 0 || size_num2 >= 0 || a==1){
        a+=((size_num1>=0)?num1[size_num1]-'0':0);
        a+=((size_num2>=0)?num2[size_num2]-'0':0);
        result =char(a%2 + '0') + result;
        a/=2;
        size_num1--;
        size_num2--;
    }
    return result;
}
int main(void)
{
    string num1,num2;
    cout<<"binary adder"<<endl<<"enter num1 and num2"<<endl;
    cin>>num1>>num2;
    cout<<binaryadd(num1,num2)<<endl;
}
