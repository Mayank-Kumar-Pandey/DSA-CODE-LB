#include<iostream>
#include<limits.h>
using namespace std ; 
void findmax(int arr[],int n,int i,int &maxi){
    if(i>=n){
        return;
    }
    if(arr[i]>maxi){
         maxi=arr[i];

    }
    findmax(arr,n,i+1,maxi);
     
}
int main()
{
    int arr[7]={10,20,30,40,50,60,70};
    int n=8;
    int maxi=INT_MIN;
    int i=0;
    findmax(arr,n,i,maxi);
    cout<<"Maximum number is : "<<maxi<<endl;
    return 0 ;
}