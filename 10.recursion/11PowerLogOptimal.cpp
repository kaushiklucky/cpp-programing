#include <iostream>
using namespace std;

int pow(int m, int n) {
    if (n == 0) return 1; // Base case: any number raised to 0 is 1
    int ans = pow(m, n / 2);
    ans = ans * ans; // Square the result of the recursive call
    if (n % 2 != 0) { // If n is odd, multiply by m
        ans = ans * m;
    }
    return ans;
}

int main() {
    int m, n;
    cout << "Enter base: ";
    cin >> m;
    cout << "Enter expo: ";
    cin >> n;
    cout << pow(m, n);
    return 0;
}
