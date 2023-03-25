#include<iostream>
#include<vector>
#include<limits.h>
using namespace std ;
int Coin_Change(vector<int>&arr, int target) 
{
    // base case
    if(target==0){
        return 0;
    }
    // mini ko update nhi karne ke liye INT MAX kiya
    if(target<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0; i<arr.size(); i++){
      int ans= Coin_Change(arr,target-arr[i]);
      if(ans!=INT_MAX )
      mini=min(mini,ans+1);
    }
    return mini;
}
int main()
{
    vector<int>arr{1,2};
    int target=3;
    int ans=Coin_Change(arr,target);
    cout<<"Minimum Step make a coin is : "<<ans<<endl;
    return 0 ;
}



//---------------- Second Method---------------------

 
// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std ;
// int Coin_Change(vector<int>&arr,int target){
//     int out=0;
//     if(out==target){
//        return target;
//     } 
//     if(out>target){
//         return INT_MAX;

//     }
//     int mini=INT_MAX;
//     for(int i=0; i<arr.size(); i++){
//         int ans=Coin_Change(arr,out+arr[i]);
//         if(ans!=INT_MAX)
//            mini=min(mini,ans );
//            cout<<mini<<endl;
//     }
//     return mini;

// } 
// int main()
// {
//     vector<int>arr{1,2};
//     int target=5;
//     // int output=0; 
//     int ans= Coin_Change(arr, target);
//     cout<<"Steps Required for make  a coin is : "<<ans<<endl;
//     return 0 ;
// }