#include<iostream>
#include<Vector>
using namespace std;
int main(){

    vector<int>vec1={1,2,3};
    cout<<vec1[0];
    cout<<vec1[1];
    cout<<vec1[2];

    vector<char>vec={'a','b','c','d'};
    cout<<endl<<"Size :"<<vec.size()<<endl;
    cout<<vec[0];
    cout<<vec[1];
    cout<<vec[2];
    cout<<vec[3];
    return 0;
}