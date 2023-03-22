#include<iostream>
#include<vector>
using namespace std ; 
int PivotElement(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;;
    while(start<=end){
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        if( arr[mid]<arr[mid-1]){
            return mid-1;
        }

         if(mid<=e && arr[mid]<arr[mid+1]){
            start=mid+1;
        }
         if(arr[mid]>arr[mid+1]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}
int main()
{
   vector<int>arr{9,10,2,4,6,8};
   int ans=PivotElement(arr);
   cout<<"Pivot element  in array is :  "<<arr[ans];
}