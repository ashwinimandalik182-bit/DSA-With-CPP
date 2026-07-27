// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cout<<"enter the no:";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }    
//     cout<<"Sum Of Evn No.:"<<sum;
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n,evnSum=0;
    cout<<"Enter the No:";
    cin>>n;
    int i=0;
    while(i<=n)
    {
        i++;
        /* code */
        if(i%2==0){
            evnSum+=i;
        }
        
    }
    cout<<"Sum of Evn No:"<<evnSum;
    return 0;   
}