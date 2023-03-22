#include<iostream>
using namespace std ;
void print_Digit(int n){
    if(n==0){
        return;
    }
//    int digit=n%10;
//     cout<<digit<<" "; 
    print_Digit(n/10);

    int digit=n%10;
    cout<<digit<<" ";
} 
int main()
{
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    print_Digit(n);
    return 0 ;
}1