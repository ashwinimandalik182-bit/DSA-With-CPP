#include<iostream>
using namespace std;
void avgNo(int arr[],int sz){
        int sum=0;
        int avg=0;
        for (int i=0; i<sz; i++)
        {
            sum+=arr[i];
        }
    cout<<"Sum:"<<sum;
    avg=sum/sz;
    cout<<"\nAvg of arr is "<<avg;
}
int main(){

    int arr[]={3,5,2,6,8,4};
    int sz=sizeof(arr)/sizeof(int);
    avgNo(arr,sz);

}