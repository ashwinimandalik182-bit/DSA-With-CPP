#include<iostream>
using namespace std;

int linearSearch( int arr[], int sz, int target ){
    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={3,2,4,6,8,1,9};
    int sz=sizeof(arr)/sizeof(int);
    int target=80;
    cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
}