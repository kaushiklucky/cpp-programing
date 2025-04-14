/*Take positive integer input and tell if it
is a three digit number or not.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter three digit number: ";
    cin>>n;
    if(n>100 && n<=999){
        cout<<"The number is of three digit";
    }else
    cout<<"The number is of not three digit";
}
