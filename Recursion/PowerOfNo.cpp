#include<iostream>
#include<math.h>
using namespace std ; 
int Power(int n ,int x){
    if(x==0){
        return 1;
    }
    return n*Power(n,x-1);
}
int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int x;
    cout<<"Enter Exponential  value : "<<endl;
    cin>>x;
    int ans=Power(n , x);

    cout<<ans<<endl;
    return 0 ;
}