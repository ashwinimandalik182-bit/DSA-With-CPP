// WTF to print the Duplicate Element In Array.

#include<iostream>
using namespace std;

void duplicateNO(int arr[], int size){

    for(int i=0; i<size; i++){

        int count=0;

        for(int j=0; j<size; j++){

            if(arr[i]==arr[j]){

                count++;
            }
        }
         bool first = true;
        for(int k=0; k<i; k++){

            if(arr[k] == arr[i]){

                first = false;
                break;  
            } 
        }
        if(count > 1 && first){
            cout << arr[i] << " ";
        }
    }
    
}

int main(){

    int arr[]={3,2,1,2,4,5,10,4,10};

    int size=sizeof(arr)/sizeof(arr[0]);

    duplicateNO(arr,size);
}