#include<iostream>
using namespace std ;
int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
} 
int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int ans=fib(n);
    cout<<n<<"th term factorial is : "<<ans<<endl;

    return 0 ;
}