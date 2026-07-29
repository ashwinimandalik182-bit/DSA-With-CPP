//Using While loop
#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"Enter the no:";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"Sum Of no.:"<<sum;
    return 0;
}