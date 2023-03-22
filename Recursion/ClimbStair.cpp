#include<iostream>
using namespace std ; 
int climbStair(int n){
    if(n==0 or n==1){
        return 1;
    }
    return climbStair(n-1)+climbStair(n-2);
}
int main()
{
    int n=5;
    int ans=climbStair(n);
    cout<<ans<<endl; 
    return 0 ;
}