//Write the function to calculate ncr binomial coefficient for n & r.


#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for ( int i=0; i<=n; i++){

        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
   int fact_n=fact(n);
   int fact_r=fact(r);
   int fact_nmr=fact(n-r);
   return fact_n/(fact_r*fact_nmr);
}
int main(){
     int n,r;
     cout<<"Enter n r";
     cin>>n>>r;
     ncr(n,r);   
    return 0;
}