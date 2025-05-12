#include<iostream>
using namespace std;
int main(){
      int x=122;
      int *p = &x;
      cout<<*p;
      cout<<endl;
      *p = 45;
      cout<<x;

}
//dereference in pointer is very ipm., we can accesse value of x without using x value
//if x value get changed, it will not affect