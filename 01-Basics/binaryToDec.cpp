#include<iostream>
using namespace std;

int binNo(int n){
    int ans=0; 
    int pow=1;

    while(n>0){

        int rem=n%10;
        ans+=rem * pow;

        n/=10;
        pow*=2;
    }
    return ans;
}

int main(){

    int n=1101;
    cout<< binNo(n);
}