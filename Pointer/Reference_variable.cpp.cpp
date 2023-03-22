#include <iostream>
using namespace std;
// pass by reference

// int solve(int &value){
//   value++;
// }


// pass by value

int solve(int b){
  b++;
}

int main() {
  
  // int a=5;
  //reference variable same memmory location different name
  // int &b=a;
  // cout<<a<<endl;
  // cout<<b<<endl;
  // a++;
  //  cout<<a<<endl;
  // cout<<b<<endl;
  // b++;
  //  cout<<a<<endl;
  // cout<<b<<endl;

  int a=5;
  solve(a);
  cout<<a<<endl;
  return 0;
}