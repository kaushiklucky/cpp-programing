#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 7;
    int *ptr1 = &x;
    int *ptr2 = &y;
    cout << *ptr1 + *ptr2;cout<<endl;
    cout << x + y;
    // int x, y;
    // int* ptr1 = &x;
    // int* ptr2 = &y;
    // cout<<"Enter the number : ";
    // cin>>*ptr1;
    // cout<<"Enter the nubmer : ";
    // cin>>*ptr2;
    // cout<<*ptr1+*ptr2<<endl;
    // cout<<x+y;
}