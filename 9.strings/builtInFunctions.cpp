#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int main()
{
      // string str = "lucky kaushik is at library";
      // cout<<str.size()<<endl;
      // cout<<str.length()<<endl; // index 0 to str.length()-1
      // int len = str.length();

      // string str1 = "abcd";
      // cout<<str1<<endl;
      // str1.push_back('e');
      // str1.push_back('f');
      // str1.push_back('g');
      // cout<<str1<<endl;

      // str1.pop_back();
      // str1.pop_back();
      // cout<<str1<<endl;

      // string str2 = "abcde";
      // string str3 = "xyz";
      // cout<<str2<<endl;
      // str2 = str2 + str3;
      // cout<<str2<<endl;
      // str2 = str2 + "LOL";
      // cout<<str2<<endl;

      // str3 = "hehehe" + str2;
      // cout<<str3<<endl;
      // string s;
      // s = "fuckyou " + str2 + " sorry";
      // cout<<s<<endl;

      string str4 = "HelloWorld";
      cout << str4 << endl;

      reverse(str4.begin(), str4.end());
      cout<<str4<<endl;

      reverse(str4.begin(), str4.end());
      cout<<str4<<endl;

      reverse(str4.begin()+2, str4.end()-1); // or reverse(str4.begin()+2);
      cout<<str4<<endl;

      string str5 = "HelloWorld";
      reverse(str5.begin() + 2, str5.begin() + 6);
      cout << str5 << endl;
}