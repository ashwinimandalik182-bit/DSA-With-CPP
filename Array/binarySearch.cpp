#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){

    int st=0, end=arr.size()-1;

    while(st<=end){

        int mid=(st+end)/2;

        if(tar>arr[mid]){

            st=mid+1;

        }else if(tar<arr[mid]){

            end=mid-1;

        }else{

            return mid;

        }

    }
    
    return  -1;
}

int main(){

    vector<int>arr1={-1,-3,2,5,7,8,9};
    int tar1=8;

    cout<<"Ans of Odd Array:"<<binarySearch(arr1,tar1);

    vector<int>arr2={4,6,8,12,14,15};
    int tar2=150;

    cout<<"\nAns of Even Array :"<<binarySearch(arr2,tar2);

}