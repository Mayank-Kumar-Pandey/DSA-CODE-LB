#include<iostream>
#include<string.h>
using namespace std ; 
void ConvertUpper(char arr[]){
    int i=0;
    int n=strlen(arr);
    for(int i=0; i<n; i++){
        // a=97 A=65 Asci value of capital a and small a

        if(arr[i]>='a'&& arr[i]<='z'){

        arr[i]=arr[i]-'a'+'A';
        }
    }
}
int main()
{
    char arr[100];
    cin>>arr;
    ConvertUpper(arr);
    cout<<" Upper case : "<<arr<<endl;
    return 0 ;
}