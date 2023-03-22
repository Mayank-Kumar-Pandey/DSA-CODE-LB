#include<iostream>
#include<vector>
using namespace std;
int Oddoccur(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(start==end){
            return start;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                start=mid+2;
            }
            else
            end=mid;
        }
        else{
            if(arr[mid]==arr[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        mid=start+(end-start)/2;
    }
    return-1;
}

int main(){
    int n;
    cout<<" enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element in array : "<<endl;
    for(int i=0; i< n; i++){
        cin>>arr[i];
    }
    int ans=Oddoccur(arr);
    cout<<" Unique Element is : "<<arr[ans];
    
    
    }