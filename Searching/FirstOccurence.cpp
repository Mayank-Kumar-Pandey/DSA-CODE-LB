#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
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
int main()
{
    int target=5;
    vector<int>arr{1,2,5,5,5,5,13};
    // int ans=FirstOccur(arr,target);

    // Stl function for finding first occurence
    auto ans= lower_bound(arr.begin(),arr.end(),target);
    cout<<" first occurence of element at index : "<<ans-arr.begin()<<endl;
    return 0 ;
    // vector<int>v{1,2,3,4,5,6};
    // if(binary_search(v.begin(),v.end(),3)  ){
    //     cout<<" found"<<endl;
    // }
    // else{
    //      cout<<" not found"<<endl;
    // }
}