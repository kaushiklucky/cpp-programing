#include<iostream>
using namespace std;
int main(){
    int n, lastDigit=0, reverse=0;
    cout<<"Enter the digit : ";
    cin>>n;
    int a=n;
    while(n>0){
        reverse*=10;
        lastDigit=n%10;
        reverse+=lastDigit;
        n/=10;
    }cout<<"Reversed digit of "<<a<<" is "<<reverse;
}