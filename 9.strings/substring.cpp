#include<iostream>
using namespace std;
int main(){
      string str;
      cout<<"Enter elements in string : ";
      getline(cin,str);
      int n,m;
      cout<<"enter index : "; cin>>n;
      cout<<"enter length : "; cin>>m;
      cout<<str<<endl;
      cout<<str.substr(n,m)<<endl;
      cout<<str.substr(n)<<endl;
      cout<<str.substr(m)<<endl;

}