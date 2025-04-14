/*Given the marks of the student. If the marks
are greater than 33 print the result as pass
otherwise fail without using if-else statement.*/
#include<iostream>
using namespace std;
int main(){
    int marks;
    char x;
    cout<<"Enter the marks: ";
    cin>>marks;
    marks>=33 ? cout<<"pass" : cout<<"fail";
    x = marks>=33 ? 'pass':'fail';
    cout<<x;
}