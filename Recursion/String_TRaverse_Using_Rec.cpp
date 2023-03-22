#include<iostream>
#include<vector>
using namespace std ; 
void search(string &str, int &n, char &key, int i,vector<int> &v){
    if(i>=n){
        return;
    }
    if(str[i]==key){
        v.push_back(i);
    }
     return search(str,n,key,i+1,v);
}
int main()
{
    string str="MayankKumar";
    int n=str.length();
    char key='a';
    int i=0;
    vector<int>v;
    search(str,n,key,i,v);
    for(auto val: v){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0 ;
} 