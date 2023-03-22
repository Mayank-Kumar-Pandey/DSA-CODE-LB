#include<iostream>
#include<string.h>
using namespace std ; 
void ReplaceSpace(char arr[]){
    int i=0;
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            arr[i]='@';
        }
    }
}
int main()
{
    char arr[100];
    cin.getline(arr,100);
    ReplaceSpace(arr);
    cout<<"Your Replaced String is : "<<arr<<endl;
    return 0 ;
}