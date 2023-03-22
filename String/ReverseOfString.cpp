#include<iostream>
#include<string.h>
using namespace std ; 
void ReverseString(char arr[]){
    int i=0;
    int n=strlen(arr);
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    char arr[100];
    cout<<" Enter your name : "<<endl;
    cin>>arr;
    cout<<"Orignial String is : "<<arr<<endl;
    ReverseString(arr);
    cout<<"Reverse string is : "<<arr<<endl;
    return 0 ;
}