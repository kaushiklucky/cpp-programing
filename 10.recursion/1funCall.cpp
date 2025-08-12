#include<iostream>
using namespace std;
void gun(){
      cout<<"Hello cw";
}
void fun(){
      cout<<"Hello pw";
      gun();
      return; // return mean function khatam
}
int main(){
      fun();
}