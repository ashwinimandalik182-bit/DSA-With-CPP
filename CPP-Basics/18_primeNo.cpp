#include<iostream>
using namespace std;
int main(){
    float i,n;
    cout<<"enter No:";
    cin>>(float)n;
    for( i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            return 0;
        }
    }
        cout<<"Prime";   
        return 0;
}