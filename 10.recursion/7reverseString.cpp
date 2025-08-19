#include<iostream>
#include<string>
using namespace std;
string reverse(string str, int i, int j){
    if(i>=j) return str;
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    return reverse(str,i+1,j-1);
}
int main(){
    string str = "Lucky Kaushik";
    int len = str.length();
    cout<<reverse(str,0,len-1);
}