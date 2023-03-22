#include<iostream>
#include<vector>
using namespace std ;
bool arrSorted(vector<int>&arr,int &n, int i){
    if(i==n-1){

      return true;
    }

if(arr[i]>arr[i+1]){
    return false;
}


return arrSorted(arr,n,i+1);
}
int main()
{
    vector<int>v{10,20,40,30,50};
    int n=v.size();
    int i=0;
    bool checkSorted= arrSorted(v,n,i);
    if(checkSorted==true){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not Sorted"<<endl;
    }
    return 0 ;
}