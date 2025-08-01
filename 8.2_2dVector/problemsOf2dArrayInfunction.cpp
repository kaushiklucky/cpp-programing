#include<iostream>
using namespace std;
void array2d(int arr[][3], int rows) {  // Number of columns must be specified
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }
}

int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    array2d(arr, 3);
}

/*
Disadvantages of 2D Arrays:-
1. Fixed Size >> int arr[5][5];  // Fixed size, cannot be resized
2. Hard to Pass to Functions >> void func(int arr[][3], int rows);  // Fixed number of columns
3. No Built-in Bounds Checking >> int arr[5][5]; cout << arr[5][5];  // Undefined behavior
4. Memory Inefficiency
5. No Flexibility in Dimensions

*/

/*
Need for 2D Vectors in Functions:-
1. Dynamic Resizing
2. Easier to Pass to Functions
3. Automatic Memory Management >> reducing the risk of memory leaks.
4. Bounds Checking
5. Flexibility in Dimensions

*/
