#include<iostream>
#include<vector>
using namespace std ; 
int main()
{
    //  this algorithm is work when no duplicates is exist

vector<int>arr{1,3,5,7,9};
vector<int>brr{2,4,6,8};
vector<int>ans;
for(int i=0; i<arr.size(); i++){
    ans.push_back(arr[i]);
}
for(int i=0; i<brr.size(); i++){
    ans.push_back(brr[i]);
}
// sort(ans.begin(),ans.end());
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}

    return 0 ;
}