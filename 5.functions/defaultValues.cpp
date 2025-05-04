#include<iostream>
using namespace std;
void fun(int x=2, int y=5){  //2 and 5 are default value of x and y.. if defaut value is given then it must for every argumants
      cout<<x<<" "<<y;
}
int main(){
      int x=3, y=7;
      fun(x,y);  
      cout<<endl;  
      fun();      // using defaut value
      cout<<endl;
      fun(4);
      cout<<endl;
}