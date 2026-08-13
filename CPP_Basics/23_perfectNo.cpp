#include<iostream>
using namespace std;

int main(){

    int n,i,sum=0;

    cout<<"Enter the No:";
    cin>>n;

    for(i=1; i<=n/2; i++){

        if(n%i==0){

            sum+=i;

        }

    }

    if(sum==n){

        cout<<n<<" is Perfect No";

    }else{

        cout<<n<<" is Not Perfect No\n";

        cout<<"Try Again for Correct Result ";

    }
}