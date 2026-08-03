#include<iostream>

using namespace std;

void reverse(int n){

    int rev=0;

    while(n>0){

        rev = rev * 10 + n % 10;

        n = n / 10;

    }

    cout<<"Reverse :"<<rev;

}

int main(){

    int n;
   
    cout<<"Enter the Number:";
   
    cin>>n;

    reverse( n);
    
    return 0;
}