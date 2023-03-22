#include<iostream>
using namespace std ; 
long long Fact(long long n){
    if(n==1){
        return 1;
    }
    return n*Fact(n-1);
}
int main()
{
    long long n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    long long ans=Fact(n);
    cout<<"The Factorial of "<< n<< " is : "<<ans<<endl;
    return 0 ;
}