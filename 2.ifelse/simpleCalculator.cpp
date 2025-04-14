/*Write a program to create a calculator that
performs basic arithmetic operations (add,
subtract, multiply and divide) using switch case
and functions. The calculator should input two
numbers and an operator from user.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, n, add, sub, mult, div;
    cout<<"Enter the problem 1.add, 2.sub, 3.mult, 4.div: ";
    cin>>n;
    cout<<"Enter first variable: ";
    cin>>a;
    cout<<"Enter second variable: ";
    cin>>b;
    add = a + b;
    sub = a - b;
    mult = a*b;
    div = a/b;
    switch(n){
        case 1:
          cout<<"addition of "<<a<<" and "<<b<<" is "<<add;
          break;
        case 2:
          cout<<"subtraction of "<<a<<" and "<<b<<" is "<<sub;
          break;
        case 3:
          cout<<"multiptication of "<<a<<" and "<<b<<" is "<<mult;
          break;
        case 4:
          cout<<"division of "<<a<<" and "<<b<<" is "<<div;
          break;
        default :
          cout<<"invalid input";
    }

    //int a, b;
    char op;
    cout<<"\nEnter the problem(ex: a+b): ";
    cin>>a>>op>>b;
    if(op=='+') cout<<a+b;
    if(op=='-') cout<<a-b;
    if(op=='*') cout<<a*b;
    if(op=='/') cout<<a/b;
}