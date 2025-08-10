#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
      string str;
      cout<<"Enter elements in string : ";
      getline(cin,str);
      int n,m;
      cout<<"revering starting position : "; cin>>n;
      cout<<"revering ending position : "; cin>>m;
      cout<<str<<endl;
      reverse(str.begin()+n, str.begin()+m);
      cout<<str<<endl;

}