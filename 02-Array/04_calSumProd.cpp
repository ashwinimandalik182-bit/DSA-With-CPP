#include<iostream>
using namespace std;
int sumProd(int arr[], int sz){
    int sum=0;
    int prod=1;
    for(int i=0; i<sz; i++){

        sum+=arr[i];
        prod*=arr[i];
        
    }
    cout<<"Sum is "<<sum;
    cout<<"\nMul is "<<prod;
   

}
int main(){

    int arr[]={3,5,7,2,8,4,9};
    
    int sz=sizeof(arr)/sizeof(int);

    cout<<""<<sumProd(arr,sz);
    return 0;
}