#include<iostream>
#include<vector>
using namespace std ; 
int LinearSearch(vector<int>arr, int key){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr={1,2,5,7,8,9};
    int key=8;
    int ans=LinearSearch(arr,key);
    cout<<"Element present in index : "<<ans<<endl;
    return 0 ;
}