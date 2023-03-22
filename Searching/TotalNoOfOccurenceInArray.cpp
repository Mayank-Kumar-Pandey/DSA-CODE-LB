#include<iostream>
#include<vector>
using namespace std ; 

// First occurence

int FirstOccur(vector<int>arr,int target){
    int start=0;
    int end= arr.size()-1;
    int mid=start+(end-start)/2;
    int FirstOccurenceOfIndex=-1;  
    while(start<=end){
        if(arr[mid]==target){
            end=mid-1;
            FirstOccurenceOfIndex=mid;

        }
        else if(arr[mid]>target)  end=mid-1;
        else if(arr[mid]<target)  start=mid+1;
        mid=start+(end-start)/2;
    }
    return FirstOccurenceOfIndex;
} 
// last occurence
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
    vector<int>arr{2,4,4,4,4,4,4,6,8,10};
    int target=4;
    // int ans1=FirstOccur(arr,target);
    // int ans2=LastOccurence(arr,target);
    int TotalOccurence=(LastOccurence(arr,target)-FirstOccur(arr,target))+1;
    cout<<" The total No of Occurence is : "<<TotalOccurence<<endl;
    return 0 ;
}