// 3<5 true
// 5>2 true
// 3<=4 true
// 5>=5 true
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<"true:"<<(a>b);//a is than greater b
    cout<<"true:"<<(a<b);//a is less thab b
    cout<<"true:"<<(a>=b);//a is than greater than equal to b
    cout<<"true:"<<(a<=b);//a is less thab equal to b
    cout<<"true:"<<(a!=b);//a is not equal to b
    cout<<"true:"<<(a==b);//a is equal to b
    return 0;
}