#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    for(int i = 0; i < size - 1; i++) {

        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5 , 7};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    if(isSorted(arr, size)) {
        cout << "Array is Sorted";
    }
    else {
        cout << "Array is Not Sorted";
    }

    return 0;
}