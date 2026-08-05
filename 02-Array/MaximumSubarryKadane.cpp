/* LeetCode Problem No 53 :-Maximum Subarray

Given an integer array nums, find the subarray with the largest sum, and return its sum.

 */

#include<iostream>
#include <climits>
using namespace std;

int kadane(int arr[],int sz){

    int currSum=0, maxSum=INT_MIN;

    for(int i=0; i<sz; i++){
        currSum+=arr[i];
        maxSum= max(currSum,maxSum);

        if(currSum<0){
        currSum=0;
        }
    }
    
    return maxSum;
}

int main(){
     
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int sz = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Sum = " << kadane(arr, sz);

    return 0;
}