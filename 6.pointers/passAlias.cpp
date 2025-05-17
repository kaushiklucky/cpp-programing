#include<iostream>
using namespace std;
void swap(int &x, int &y){     // swap function not giving correct answer, it will be done by pointers
      int temp = x;
      x = y;
      y = temp;
      return;
}
int main(){
      int a,b;
      cin>>a>>b;
      swap(a,b);
      cout<<a<<" "<<b;
}