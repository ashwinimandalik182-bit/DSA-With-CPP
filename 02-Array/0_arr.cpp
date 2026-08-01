#include<iostream>
using namespace std;\

int main(){

    int arr[]={1,3,4,7,8};
    int sz=sizeof(arr)/sizeof(int);
    //cout<<sz;
    int i=0;
    while(i<sz){
        cout<<"arr:"<<arr[i]<<endl;
        i++;
    }
    return 0;
}