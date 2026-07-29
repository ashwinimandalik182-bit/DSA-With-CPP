#include<iostream>
using namespace std;

int main(){

    int n,table=0;

    cout<<"Enter the no:";
    cin>>n;
    cout<<"Table Of "<<n<<endl;
    for(int i=1; i<=10; i++){

        table=n*i;
    
        cout<<table<<endl;
    }

    return 0;
}