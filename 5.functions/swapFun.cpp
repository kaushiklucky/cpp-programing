#include<iostream>
using namespace std;
int swap(int a, int b){     // swap function not giving correct answer, it will be done by pointers
      a = a+b;
      b = a-b;
      a = a-b;
      return;
}
int main(){
      int a,b;
      cin>>a>>b;
      cout<<swap(a,b);
}