#include<iostream>
using namespace std;

int evnNumber(int arr[], int sz){
    int count=0;
    for(int i=0; i<sz; i++){


        if(arr[i]%2==0){
    
            count+=arr[i];
             cout<<"Total Evn no:"<<arr[i]<<endl;
        }
       
    }
    cout<<"Evn no "<<count<<endl;
}
int main(){

    int arr[]={44,66,23,64,77,33,31,57,89,301,222};
    int sz=sizeof(arr)/sizeof(int);
    evnNumber(arr,sz);
    return 0;
}