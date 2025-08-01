#include<iostream>
// #include<string>
using namespace std;
int main(){
      char str[5] = {'a','b','c','d','e'};
      for(int i=0; i<str[i]!='\0'; i++){
            cout<<str[i]<<" ";
      }
      cout<<endl;
      cout<<str<<endl;     /*but array do not work like that it prints address of first element of array*/
      
      char str2[] = {'a','s','d','f','\0','g','h','j','k','l'};
      cout<<str2;

      cout<<endl;

      // char str1[5] = "abcd";
      // for(int i=0; i<5; i++){
      //       cout<<str[i]<<" ";
      // }cout<<endl;
      // cout<<str[5]<<" ";
      // cout<<(int)(str[6]);


      // cout<<"My name is Lucky Kaushik";

      // char string[10] = {'a','b','c','d','e'};
      // char ch = '\0';
      // cout<<(int)string[5]<<endl;  //output- 0 
      // cout<<(int)ch;              //output- 0


      char str3[] = {'1','2','3','4','5','6'};
      for(int i=0; i<str3[i]!='\0'; i++){
            cout<<str3;
      }
      cout<<endl;
      cout<<endl;

      
      cout<<"input string: ";
      string str4;
      cin>>str4;    // input string only if given string has no spaces
      cout<<str4;
      
      cout<<endl;

      // getline : we can take continues input of string unlike cin,
      cout<<"Input string: ";
      string str5;
      getline(cin, str5);
      cout<<str5;

}