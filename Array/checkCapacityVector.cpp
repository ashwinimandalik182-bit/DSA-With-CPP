#include<iostream>
#include<Vector>
using namespace std;
int main(){
    
    vector<int>vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout<<"Size:"<<vec.size();//6

    cout << "\nCapicity :" <<vec.capacity();//8
    return 0;
}

// When program is excute Vector Allocate Memory Dynamically at runtime.