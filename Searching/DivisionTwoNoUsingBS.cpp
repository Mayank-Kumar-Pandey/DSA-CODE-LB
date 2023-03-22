#include<iostream>
#include<vector>
using namespace std ; 
int division(int divisor,int dividend){
    int start=divisor;
    int end=dividend;
    int ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor>dividend){
            end=mid-1;
        }
        else{
            int ans=mid;
            start=mid+1;


        }
        mid=start+(end-start)/2;
      
    }
    return ans;
}
int main()
{
  int divisor;
  cout<<" enter divisor : " <<endl;
  cin>>divisor;
  int dividend;
  cout<<" enter dividend : "<<endl;
  cin>>dividend;
  
  int ans =division(divisor,dividend);
  cout<<" ans is : "<<ans;
}