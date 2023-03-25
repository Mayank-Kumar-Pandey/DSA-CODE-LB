#include<iostream>
#include<vector>
#include<limits.h>
using namespace std ; 
void solve(vector<int>&arr, int n, int i,int sum, int &maxi)
{
    if(i>=n){
     maxi= max(sum,maxi);
     return; 
    }
    // include

    solve(arr,n,i+2,sum+arr[i],maxi);

    // exclude

    solve(arr,n,i+1,sum,maxi);

}
int main()
{
    vector<int>arr{1,2,3,1,3,5,8,1,9};
    int n=arr.size();
    int i=0;
    int sum=0;
    int maxi=INT_MIN;
    solve(arr,n,i,sum,maxi);
    cout<<maxi<<endl;

    
    return 0 ;
}