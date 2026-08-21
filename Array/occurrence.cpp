#include<iostream>

#include<vector>

using namespace std;

int occurrence( vector<int>arr,  int tar){

    int count=0;

    for(int i=0; i<arr.size(); i++ ){

        if(arr[i]==tar) {

            count++;
        }
     
    }

    return count;
}

int main(){

    vector<int>arr={1,3,4,5,6,7,7,7};

    int tar=7;

    int result=occurrence(arr,tar);

    cout<<"Occurrence:"<<result<<endl;
    
}