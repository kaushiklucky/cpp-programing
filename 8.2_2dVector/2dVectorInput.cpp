#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows of 2d vector: ";
    cin >> rows;

    vector<vector<int>> vec;

    for (int i = 0; i < rows; i++) {
        int size;
        cout << "Enter number of columns in row " << i + 1 << ": ";
        cin >> size;

        vector<int> row(size); // Create a 1D vector for this row

        cout << "Enter elements in row " << i + 1 << ": ";
        for (int j = 0; j < size; j++) {
            cin >> row[j]; // Input elements for the current row
        }

        vec.push_back(row); // Add the row to the 2D vector
    }

    // Display the 2D vector
    cout << "The 2D vector is:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
