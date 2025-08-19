#include<iostream>
#include<string>
using namespace std;
string reverse(string str, int i){
    int n = str.length()-i-1;
    if(i>=n) return str;
    char temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    return reverse(str,i+1);
}
int main(){
    string str = "Lucky Kaushik";
    // int len = str.length();
    cout<<reverse(str,0);
}