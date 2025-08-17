#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

void binarySearch(int *arr, int lo, int hi, int key) {
    if (hi < lo) {
        cout << "Element not found" << endl;
        return;
    }

    int mid = lo + (hi - lo) / 2;

    if (arr[mid] == key) {
        cout << "Element found at index " << mid << endl;
        return;
    }
    else if (arr[mid] < key) {
        binarySearch(arr, mid + 1, hi, key);
    }
    else {
        binarySearch(arr, lo, mid - 1, key);
    }
}

int main() {
    int arr[] = {2, 5, 1, 9, 3, 4, 0, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    // Sort the array first
    sort(arr, arr + size);

    // Display the sorted array for reference
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Perform binary search
    binarySearch(arr, 0, size - 1, key);

    return 0;
}
