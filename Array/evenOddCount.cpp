#include<iostream>
using namespace std;
void evenOdd(int arr[], int size){
    
    int evenCount=0;
    int oddCount=0;
    for(int i=0; i<size; i++){

       
       if(arr[i]%2==0){

          evenCount++;
       }else{

        oddCount++;
       }

       
    }

    cout<<"Even Element :"<<evenCount<<endl;
    cout<<"Odd Element :"<<oddCount<<endl;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,19};
    int size=sizeof(arr)/sizeof(arr[0]);
    evenOdd(arr,size);
}