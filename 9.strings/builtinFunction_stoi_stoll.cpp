#include<iostream>
using namespace std;
int main(){
    string str = "1234567";
    int x = stoi(str); //store string to integer of range -2^31 to (2^32) - 1 
    cout<<x<<endl;

    string str2 = "12345678910111213";
    long long x2 = stoll(str2); //store string to integer of range -2^63 to (2^63) - 1 
    cout<<x2;
}