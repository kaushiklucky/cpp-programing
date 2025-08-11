#include<iostream>
using namespace std;
int main(){
      string str;
      cout<<"Enter string : ";
      getline(cin, str);
      cout<<str<<endl;
      cout<<"position to be updated : ";
      int n; cin>>n;
      cout<<"Update the content : ";
      char m; cin>>m;
      str[n] = m;
      cout<<str;
}