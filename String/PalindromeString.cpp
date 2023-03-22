#include<iostream>
#include<string.h>

using namespace std ; 
int PalindromeString(char arr[]){
    int i=0;
    int n=strlen(arr);
    int j=n-1;
    while(i<=j){
         if(arr[i]!=arr[j]){
            return 0;
         }
         else{
            return 1;
         }
    }
}

int main()
{
    char arr[100];
    cin>>arr;
    cout<<" Palindrome check: "<<PalindromeString(arr)<<endl;
}