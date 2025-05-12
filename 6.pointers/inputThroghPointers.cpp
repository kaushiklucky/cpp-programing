#include<iostream>
using namespace std;
int main(){
    int x, y;
    int* ptr1 = &x;
    int* ptr2 = &y;
    cout<<"Enter the number : ";
    cin>>*ptr1;
    cout<<"Enter the nubmer : ";
    cin>>*ptr2;
    cout<<*ptr1+*ptr2<<endl;
    cout<<x+y;
}