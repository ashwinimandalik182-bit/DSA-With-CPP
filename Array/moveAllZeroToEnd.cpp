#include<iostream>
using namespace std;

void moveZeros(int arr[], int size) {

    int count = 0;

   
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    while(count< size) {
        arr[count] = 0;
        count++;
    }
}

int main() {

    int arr[] = {1, 0, 3, 0, 5, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZeros(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}