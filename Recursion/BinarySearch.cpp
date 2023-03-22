#include<iostream>
#include<vector>
using namespace std ; 
int binarySearch(vector<int> &arr, int s, int e , int target){
    if(s>e){
        return -1;
    }
     int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return binarySearch(arr,s,mid-1,target);
    }  
    else{
        return binarySearch(arr,mid+1,e,target);
    }
}
int main() 
{
    vector<int>arr{10,20,30,40,65,99};
    int target=99;
    int n=arr.size()-1;
    int s=0;
    int e=n;
    int ans=binarySearch(arr,s,e,target);
    cout<<"idex present at : "<< ans <<endl;
    return 0 ;
}