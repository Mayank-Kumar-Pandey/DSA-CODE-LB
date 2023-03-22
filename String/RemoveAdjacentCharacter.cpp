#include<iostream>
#include<string>
using namespace std ; 
string RemoveAdjacent(string s){
    string ans="";
    for(int i=0; i<s.length(); i++){
        if((ans.length()-1 >=0) && ans[ans.length()-1]==s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main()
{
    string s="abbaca";
    cout<<" After Removing all Adjacent String is :  "<<RemoveAdjacent(s);
    return 0 ;
}