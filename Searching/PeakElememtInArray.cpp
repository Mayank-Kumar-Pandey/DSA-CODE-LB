#include<iostream>
#include<vector>
using namespace std ; 
int PeakElement(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
        //left side   && //Right side
        
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        if(arr[mid+1]>arr[mid]){
            start=mid+1;
        }
        if(arr[mid-1]>arr[mid]){
            end=mid;
        }
        mid=start+(end-start)/2;
    }
}
int main
{
    vector<int>arr{3,5,3,2,0};
    int peakelement=PeakElement(arr);
    cout<<" The peak element is : " <<arr
    [peakelement];
    return 0 ;
}