#include <iostream>
using namespace std;

void swap(int* a, int* b) {  // Use pointers to swap the values
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(&a, &b);  // Pass the addresses of a and b
    cout << a << " " << b;  // Output the swapped values
    return 0;
}


/**/