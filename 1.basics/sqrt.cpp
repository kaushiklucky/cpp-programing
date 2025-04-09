#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num, root;

    cout << "Enter a number: ";
    cin >> num;

    root = sqrt(num);

    cout << "Square root of " << num << " = " << root;

    return 0;
}