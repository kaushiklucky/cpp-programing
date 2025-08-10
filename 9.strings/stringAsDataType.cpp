#include<iostream>
using namespace std;
int main(){
      string str = "Lucky Kaushik";
      cout<<str<<endl;;
      cout<<str[2]<<endl;
      cout<<str[1,7]<<endl;

      // string s;
      // cin>>s;    // only if given strings has no spaces
      // cout<<s<<endl;
      string name;
      getline(cin,name);  // getline input strings with spaces
      cout<<name<<endl;

}