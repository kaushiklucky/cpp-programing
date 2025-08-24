#include <iostream>
using namespace std;

void removeOnes(int ans[], int original[], int n, int idx, int& ansIdx) {
    if (idx == n) {
        for (int i = 0; i < ansIdx; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    
    if (original[idx] != 1) {
        ans[ansIdx] = original[idx];
        ansIdx++;
    }
    removeOnes(ans, original, n, idx + 1, ansIdx);
}

int main() {
    int nums[] = {2, 1, 4, 3, 1, 1, 6, 3, 1, 1, 1, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int ans[100]; // Make sure it is large enough to hold the filtered array
    int ansIdx = 0; // To track the index in the `ans` array

    removeOnes(ans, nums, n, 0, ansIdx);
    return 0;
}
