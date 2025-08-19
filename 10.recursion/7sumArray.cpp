#include<iostream>
using namespace std;
int sumArray(int *arr, int size, int sum){
    if (size == 0) return sum;
    sum = sum + arr[0];
    int ans = sumArray(arr + 1, size - 1, sum);
    return ans;
}

int main(){
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    int sum = 0;

    int ans = sumArray(arr, size, sum);
    cout << ans << endl;
}