#include<iostream>
using namespace std;

int isPrime(int n){
    
    if(n<=1){
        cout<<"Not Prime.\n";
        
    }
    
    for(int i=2; i<=n/2; i++){

        if(n%i==0){

            cout<<"No is Not Prime\n";

            return 0;

        }

    }

    cout<<"No is Prime";
    
    return 0;
}

int main(){
    
    int num;

    cout<<"Enter the No:";
    cin>>num;
    isPrime(num);
    return 0;
}