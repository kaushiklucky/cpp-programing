/*Take 2 integers input and print the greatest of them
Input 1: a = 5 b = 7
Output 1: second number 7 is the largest.
Input 2: a = 12 b = 1
Output 2 : first number 12 is the largest.
Note : It is ensured that the two numbers will be different.*/
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter fist number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    if(a>b){
        cout<<a<<" is greatest";
    }else{
        cout<<b<<" is greatest";
    }
}