#include<iostream>
#include<string>
using namespace std ; 
int CompareString( string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    else{
        int i=0;
        int j=0;
       for(i=0,j=0; i<a.length(),j<b.length(); i++, j++){
         if(a[i]!=b[i]){
            return false;
         }
       }
    }
    return true;
}
int main()
{
    string a=" Mayank";
    string b=" Raj";
    cout<<" String Comapare : "<<CompareString(a, b)<<endl;
    return 0 ;
}