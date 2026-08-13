//find the largest no and smallest no of 3

#include<iostream>
using namespace std;

int main(){

    int a, b,c;
    cout<<"Enter the 3 No.:";
    cin>>a>>b>>c;

    if(a>=b && a>=c){

        cout<<a<<" is Largest No";

    }else if(b>=a && b>=c){

        cout<<b<<" is Largest No";

    }else{

        cout<<c<<"is Largest No";

    }

    return 0;
    
}