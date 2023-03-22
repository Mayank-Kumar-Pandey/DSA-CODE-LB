 #include<iostream>
using namespace std ; 
// void util(int *p){
//     *p=*p+1;
// }

void solve(int** ptr){

    //ptr=ptr+1;
    // *ptr=*ptr+1;

    **ptr=**ptr+1;
}
int main()
{
    // int a=5;
    // int *p=&a;
    // cout<<"before"<<endl;
    // cout<<a<<endl;
    // util(p);
    // cout<<a<<endl;
    // return 0 ;


    int x=15;
    int* p=&x;
    int** q=&p;
    solve(q);
    cout<<x<<endl;
}