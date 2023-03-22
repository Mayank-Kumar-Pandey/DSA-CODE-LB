#include<iostream>
#include<string>
using namespace std ;
 string RemoveAdjacent(string s) {
    string ans="";
    int i=0;
    // while(i<s.length()){
    //     if(ans.length()>0){
    //         if(ans[ans.length()-1]==s[i]){
    //             ans.pop_back();
    //         }
    //         else{
    //             ans.push_back(s[i]);
    //         }
    //     }
    //     else{
    //         ans.push_back(s[i]);

    //     }
    //     i++;
    // }
    // return ans;

    for(i=0;i<s.length();i++){
        if(ans.length()>0){
            if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;

    }

int main()
{
string str;
cout<<" enter your string"<<endl;
cin>>str;
cout<<" the string is "<<RemoveAdjacent(str)<<endl;
    return 0 ;
}