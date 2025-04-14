/*Take 3 numbers input and tell if they
can be the sides of a triangle.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the 1st side: ";
    cin>>a;
    cout<<"Enter the 2st side: ";
    cin>>b;
    cout<<"Enter the 3st side: ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<" , "<<b<<" , "<<c<<" sides can form a triangle";
    
    }
    else{
        cout<<"invalide triancle";
    }
}