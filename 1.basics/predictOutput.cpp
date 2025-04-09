#include<iostream>
using namespace std;
int main() {
int a = 4;
int b = 5;
a++, b--;
cout << ++a << " " << b-- <<endl;
cout<<b;
}

/*1) Pre-increment operator: A pre-increment operator is used to increment the value of 
a variable before using it in an expression. In the Pre-Increment, value is first incremented and 
then used inside the expression.*/

/* Post-increment operator: A post-increment operator is used to increment the value of the 
variable after executing the expression completely in which post-increment is used. In the 
Post-Increment, value is first used in an expression and then incremented. */