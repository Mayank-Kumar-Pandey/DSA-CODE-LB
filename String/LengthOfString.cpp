#include<iostream>
#include<string.h>
using namespace std ; 
int length(char arr[]){
    int Length=0;
    int i=0;
    while(arr[i]!='\0'){
        Length++;
        i++;
    }
    return Length;
}
int main()
{
    char arr[100 ];
    cin>>arr;
    int ans=length(arr);
    cout<<"The length of array is : "<<ans<<endl;
    cout<<" len is : "<<strlen(arr)<<endl;
    // cout<<" length is : "<<length(arr)<<endl;
    return 0 ;
}