#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    vector<vector<int>> v; // 2D vector for Pascal's Triangle
    
    // Initialize Pascal's Triangle rows
    for (int i = 0; i < m; i++) {
        vector<int> a(i + 1); // Create a row with i+1 elements
        v.push_back(a);       // Add the row to the triangle
    }

    // Generate Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1; // First and last elements are 1
            } else {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1]; // Sum of the two above
            }
        }
    }

    // Display Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
