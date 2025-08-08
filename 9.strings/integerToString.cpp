#include<iostream>
using namespace std;
int main(){
      int x;
      cout<<"Enter integer : "; cin>>x;
      string str = to_string(x);
      cout<<str<<endl;
      cout<<str.length(); // Return the total number of digits in a number without using any loop.     
}