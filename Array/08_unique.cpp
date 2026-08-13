//wtf to print all unique no in array.

#include<iostream>
using namespace std;

void unique(int arr[], int sz){

    

    for(int i=0; i<sz; i++){

        int count=0;

        for(int j=0; j<sz; j++){

            if(arr[i]==arr[j]){

                count++;
                
            }
        }

        if(count==1){
    
        cout<<arr[i]<<" ";

    }

    }

    
}

int main(){
    int arr[]={2,4,6,63,2,3,78,32,5,4,1,8,3,32,100};

    int sz=sizeof(arr)/sizeof(arr[0]);

    unique(arr,sz);

    return 0;
}