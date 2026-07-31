#include<iostream>
#include <climits>
using namespace std;
int main(){
    int index,i;
    int num[]={33,55,63,2,5,3};

    int size=sizeof(num)/sizeof(int);

    int small = INT_MAX;
    int large = INT_MIN;

    int smallIndex = -1;
    int largeIndex = -1;

for(int i = 0; i < size; i++) {

    if(num[i] < small) {
        small = num[i];
        smallIndex = i;
    }

    if(num[i] > large) {
        large = num[i];
        largeIndex = i;
    }
}

cout << "Smallest = " << small << " Index = " << smallIndex << endl;
cout << "Largest = " << large << " Index = " << largeIndex;
    return 0;
}