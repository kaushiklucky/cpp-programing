#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}

int printMax2(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],printMax2(arr,n,idx+1));
}

int main(){
    int arr[] = {3,5,1,6,2,8,0,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printMax(arr,n,0,INT_MIN);
    cout<<printMax2(arr,n,0);
}