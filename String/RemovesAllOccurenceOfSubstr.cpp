#include<iostream>
#include<string>
using namespace std ; 
string allOccurOfSubstr(string s, string part){
    // first find the Substring
    int pos=s.find(part);
    while(pos!=string::npos){
        // after finding Substring Remove Substring
        s.erase(pos,part.length());
        // after removing substring update find 
        pos=s.find(part);
    }
    // return final string after all Removal 
    return s;
}
int main()
{
    string s="daabcbaabcbc";
    string part="abc";
    cout<<"After Removing All Substring In Main String: "<<allOccurOfSubstr(s,part);
}