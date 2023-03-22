#include<iostream>
#include<limits.h>
using namespace std ; 

void minimum(int arr[], int n, int i , int& mini){
    if(i>=n){
        return;
    }
    if(arr[i]<mini){
        mini=arr[i];
    }
    minimum (arr,n,i+1,mini);
}
int main()
{
    int arr[]={10,20,30,2,5,6};
    int n=6;
    int i=0;
    int mini=INT_MAX;
    minimum(arr,n,i,mini);
    cout<<mini<<" ";
    return 0 ;
}