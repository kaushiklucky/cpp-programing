#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int lastDigit = n % 10; // Extract the last digit using modulo (%)

    cout << "Last digit: " << lastDigit << endl;
    return 0;
}
