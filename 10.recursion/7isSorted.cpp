#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    if(size==0 || size==1) return true;
    if(arr[0]>arr[1]) return false;
    else return isSorted(arr+1,size-1);
}
int main(){
    int arr[] = {2,5,1,9,3,4,0,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"(true -> 1, false -> 0) Ans is: "<<isSorted(arr, size);
    bool ans = isSorted(arr,size);
    if(ans) cout<<"Array is sorted";
    else cout<<"Array is not sorted";
}