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
    // string std;
    // // This line is not used in stirng itt is only used in char array
    // // cin.getline(std,100);

    // getline(cin,std);

    // cout<<std;
    // return 0 ;

    // string ch;
    // ch[1]='B';
    // ch[2]='a';
    // ch[3]='\0';
    // ch[4]='b';
    // ch[5]='\0';
    // ch[6]='r';
    // for(int i=0; i<6; i++){
    //     cout<<ch<<endl;
    // }


    string a="Mayank";
    string b="May";
    cout<<" String Compare : "<<CompareString(a,b)<<endl;



    // ----------------------------------------------------------------------
    // if(a.compare(b)==0){
    //     cout<<" a  annd b is extacltly Same"<<endl;
    // }
    // else{
    //     cout<<"a and b is  not exactly same  "<<endl;
    // }
    // int i=0;
    // int j=0;
    // for(i=0,j=0; i<a.length(),j<b.length(); i++, j++){
    //     if(a[i]==b[j]){
    //         cout<<" Same"<<endl;
    //     }
    //     else{
    //         cout<<" Not same"<<endl;
    //     }
    // }


}