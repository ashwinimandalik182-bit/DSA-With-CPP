#include<iostream>
#include<vector>
using namespace std;
void reverseArr(vector<int>& arr){

    int st=0, end=arr.size()-1;

    while(st<end){
        swap(arr[st],arr[end]);
            st++;
            end--;
    }
}


int main(){

    vector<int>arr={8,7,6,5,4,3,2,1};
    
    reverseArr(arr);
    for(int i=0; i<arr.size(); i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}