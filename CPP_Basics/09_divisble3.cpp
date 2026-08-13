#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"entr the n";
    cin>>n;
    for(int i=0; i<=n; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"Sum Of n No:"<<sum;
    return 0;
}