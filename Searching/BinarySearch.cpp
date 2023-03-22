#include<iostream>
#include<vector>
using namespace std ; 
int BinarySearch(vector<int>arr,int target){ 
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
int target;
cout<<" Enter your target"<<endl;
cin>>target;
int n;
cout<<" enter the size of array"<<endl;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=BinarySearch(arr,target);
cout<<" Your target  index is : "<<ans<<endl;
return 0;
}