#include<iostream>
using namespace std;
int main(){
      // int x = 7;
      // int* ptr = &x;
      // cout<<ptr<<endl;
      // ptr = ptr + 1;
      // cout<<ptr<<endl;

      // bool flag;
      // bool* ptr = &flag;
      // cout<<ptr<<endl;
      // ptr++;
      // cout<<ptr<<endl;
      // cout<<endl;

      int x=4;
      int* ptr=&x;
      cout<<*ptr<<endl;
      (*ptr)--;
      cout<<*ptr<<endl;
}