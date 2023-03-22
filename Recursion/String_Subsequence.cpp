#include<iostream>
using namespace std ; 
void PrintSubsequence(string str, string output ,int i){

    if(i>=str.length()){
        cout<<output<<endl;
        // cout<<output.length()<<endl;
        return;
    }
    //Exclude the string
    PrintSubsequence(str,output,i+1);


    //include the string
    //output=output+srt[i];
    output.push_back(str[i]);

    PrintSubsequence(str,output,i+1);

}
int main()
{
    string str="abc";
    string output="";
    int i=0;
    PrintSubsequence(str,output,i);
    return 0 ;
}