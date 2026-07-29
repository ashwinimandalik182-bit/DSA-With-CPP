#include<iostream>
using namespace std;
int main(){
    float fact=1;
    int n,i;
    cout<<"Enter the no:";
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial is "<<fact;
    return 0;
}