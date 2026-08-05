// LeetCode 136. problem Single NUmber (easy).

#include<iostream>
#include<Vector>
using namespace std;
int main(){
    vector<int>vec={1,2,1,2,4};

    int ans = 0;

    for(int val : vec){

        ans ^= val;
    }
    cout<<ans;
    return 0 ;

}