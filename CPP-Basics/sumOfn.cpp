//Using While loop
#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"Enter the no:";
    cin>>n;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Sum Of no.:"<<sum;
    return 0;
}