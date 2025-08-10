#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str = "My name is lucky kaushik";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}