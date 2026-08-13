#include<iostream>
#include <climits>   
using namespace std;

void swap(int arr[], int sz)
{
    int min=INT_MAX;
    int max=INT_MIN;
    int minIdx = 0;
    int maxIdx = 0;

    for(int i = 0; i < sz; i++)
    {
        if(arr[i] > arr[maxIdx])
        {
            maxIdx = i;
        }

        if(arr[i] < arr[minIdx])
        {
            minIdx = i;
        }
    }

    int temp = arr[maxIdx];
    arr[maxIdx] = arr[minIdx];
    arr[minIdx] = temp;
}

int main()
{
    int arr[] = {3,59,6,7,8,1,2};

    int sz = sizeof(arr)/sizeof(int);

    swap(arr, sz);

    cout << "After Swapping Array:\n";

    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}