#include<iostream>
using namespace std;

int fobonacci(int n){
    int a=0, b=1, c;
    for(int i=0; i<n; i++){

        cout<<a<<" ";

        c=a+b;
        a=b;
        b=c;
    }

}

int main(){
int n;

cout<<"Enter the Number:";
cin>>n;
cout<<"-----FIBONACCI SERIES-------"<<endl;
fobonacci(n);

return 0;

}