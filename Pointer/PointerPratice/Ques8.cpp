#include<iostream>
using namespace std ; 
int main()
{
    double a=10.5;
    double*d=&a;
    d=d+1;
    cout<<d<<endl;
    return 0 ;
}