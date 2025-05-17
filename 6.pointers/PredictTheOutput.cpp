#include <iostream>
using namespace std;
int main()
{
      int a = 15;            // Step 1: Initialize a with 15
      int *ptr = &a;         // Step 2: ptr is a pointer to a, ptr now holds the address of a (assume 1000)
      int b = ++(*ptr);        // Step 3: Increment the value pointed to by ptr, and assign the result to b
      cout << a << " " << b; // Step 4: Print the values of a and b
      cout<<endl;

      int c=6;
      int *ptr1 = &c;
      int d = (*ptr1)++;
      cout<<c<<" "<<d;


}