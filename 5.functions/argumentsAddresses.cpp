#include<iostream>
using namespace std;
void fun(int x, int y){
      cout<<"address of fun x "<<&x<<endl;
      cout<<"address of fun y "<<&y<<endl;
}

int main(){
      int x=4;
      int y=9;
      cout<<"address of main x "<<&x<<endl;
      cout<<"address of main y "<<&y<<endl;
      fun(x,y);
}