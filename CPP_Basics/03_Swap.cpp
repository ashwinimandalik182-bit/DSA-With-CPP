//Swap two numbers (using third variable).
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the a and b ";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b;
    return 0;
}