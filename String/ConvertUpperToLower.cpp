#include<iostream>
#include<string.h>

using namespace std ;
void UpperToLower(char ch[]){
    int i=0;
    int n=strlen(ch);
    for(int i=0;i<n; i++){
        // A=65 a=97 Asci Vlaue of captial A and small a 
        if(ch[i]>='A'&& ch[i]<='Z')
          ch[i]=ch[i]-'A'+'a';
    }
} 
int main()
{
    char arr[100];
    cin>>arr;
    UpperToLower(arr);
    cout<<" lower form is"<<arr<<endl;
    return 0 ;
}