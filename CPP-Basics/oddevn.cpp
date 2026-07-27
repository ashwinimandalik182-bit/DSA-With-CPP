// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,sumEvn=0,sumOdd=0;
//     cout<<"enter the no:";
//     cin>>n;
//     for (i=0; i<=n; i++)
//     {
    
    
//     if(i%2==0){
//         sumEvn+=i;
//         //cout<<"Even NO";
//     }else{
//         sumOdd+=i;
//         //cout<<"Odd NO";
//     }
// }
// cout<<"Sum Of Evn No:"<<sumEvn<<endl;
// cout<<"Sum of Odd No:"<<sumOdd<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int i=0,n,sumEvn=0,sumOdd=0;
    cout<<"enter the no:";
    cin>>n;
    while(i<n)
    {
    i++;
    
    if(i%2==0){
        sumEvn+=i;
        //cout<<"Even NO";
    }else{
        sumOdd+=i;
        //cout<<"Odd NO";
    }
}
cout<<"Sum Of Evn No:"<<sumEvn<<endl;
cout<<"Sum of Odd No:"<<sumOdd<<endl;
    return 0;
}