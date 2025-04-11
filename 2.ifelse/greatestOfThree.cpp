/*Take 3 positive integers input and print
the greatest of them.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter C: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest";
    }
    if(b>c && b>a){
        cout<<b<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
}