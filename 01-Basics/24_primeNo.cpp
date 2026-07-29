#include<iostream>

using namespace std;

int main(){

    int n,i;

    cout<<"Enter the no";

    cin>>n;
    if (n<=1)
    {
       cout<<"No is NOt Prime";
       return 0;
    }
    
    for(i=2;i<=n/2;i++){

        if(n%i==0){

            cout<<n<<" no is Not Prime";

            return 0;
        }
    }
    cout<<n<<" Prime No";
    return 0;
}