#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int LastOccurence(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid= start+(end-start)/2;
    int LastOccurenceOfIndex=-1;
    while(start<=end){
       
        if(arr[mid]==target){
            LastOccurenceOfIndex=mid;
            start=mid+1;
        }
       else  if(arr[mid]>target){
            end=mid-1;
        }
       else if(arr[mid]<target){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return LastOccurenceOfIndex;
   
}
int main()
{
   vector<int>arr{1,3, 5 ,5 ,5 ,5 ,67, 123, 125};
   int target=5;
//    int ans=LastOccurence(arr,target);
auto ans=upper_bound(arr.begin(),arr.end(),target);
   cout<<" The index of last occurence is "<<ans-arr.end()<<endl;
}