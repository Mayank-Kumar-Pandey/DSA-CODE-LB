#include<iostream>
using namespace std ; 

// void count(int n){
//     if(n==0){
//         return;
//     }
//     // cout<<n<<" ";
//     // count(n-1);
//     // cout<<n<<" ";
// }

void count(int n){
    if(n==0){
        return;
    }
    count(n-1);
    cout<<n<<" ";
}
void countdec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    countdec(n-1);
    
}
int main()
{
    int  n=5;
    count(n);
    countdec(n);
    return 0 ;
}