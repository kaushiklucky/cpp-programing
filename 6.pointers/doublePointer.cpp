#include<iostream>
using namespace std;
int main(){
      int x=5;
      int* ptr=&x;
      int** p=&ptr;
      cout<<x<<endl;
      cout<<&x<<endl;
      cout<<ptr<<endl;
      
      cout<<p<<endl;
      cout<<*ptr<<endl;
      cout<<**p<<endl;

      int*** q = &p;  // triple pointer
      cout<<q<<endl;
      cout<<*q<<endl;
      cout<< (***q)<<endl;
}