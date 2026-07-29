#include<iostream>
using namespace std;

bool allPrime(int n){
    if(n<=1){
        
        return false;
    }
    int sum=0,i;
    for(i=2; i<=n/2; i++){
        if(n%i==0){
        return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the Number";
    cin>>n;
    
    for(int i=2; i<=n; i++){
        if(allPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}