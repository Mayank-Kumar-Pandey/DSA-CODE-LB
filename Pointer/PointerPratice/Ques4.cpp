#include<iostream>
using namespace std ; 
int main()
{
    int b=10;
    int* a=&b;
    // a gives the address of b
    cout<<a<<endl;
    return 0 ;
}