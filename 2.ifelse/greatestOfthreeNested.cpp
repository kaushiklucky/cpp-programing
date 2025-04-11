#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2st number: ";
    cin>>b;
    cout<<"Enter 3st number: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is gratest";
        }
    }
}