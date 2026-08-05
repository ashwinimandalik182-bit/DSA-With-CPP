/* Vector have some inBuild Function 1> size() 2> push_back 
3>pop_back 4>front 5> back 6> at.*/

#include<iostream>
#include<Vector>
using namespace std;
int main(){

    vector<int>vec={1,2,3};

    cout<<"Vector";
    for(int x : vec){
        cout << x << ",";
    }

    vec.push_back(25);
    vec.push_back(32);
    vec.push_back(43);
    vec.push_back(13);

    cout<<"\nPush Back Size:"<<vec.size()<<endl;

    // cout<<vec[0]<<",";
    // cout<<vec[1]<<",";
    // cout<<vec[2]<<",";
    // cout<<vec[3];

    cout<<"\nAfter Push Element:";
    for(int x: vec){
        cout << x <<" ";
    }

    vec.pop_back();
    
    cout << "\nAfter Pop: ";
    for (int x : vec) {
        cout << x << " ";
    }
    

    cout<<"\n front Element:" << vec.front();

    cout<<"\n Back Element:" << vec.back();

    cout<<"\n Current Element:" << vec.at(1);

    return 0;
}