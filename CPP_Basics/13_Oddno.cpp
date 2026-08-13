// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"enter the no:";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//     }
//      cout<<"Sum of Odd No:"<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n,sumOdd=0;
    cout<<"Enter the n:";
    cin>>n;
    int i=0;
    while(i<=n){
        if(i%2!=0){
            sumOdd+=i;
        }
        i++;
    }
    cout<<"Sum of Odd:"<<sumOdd;
    return 0;

}