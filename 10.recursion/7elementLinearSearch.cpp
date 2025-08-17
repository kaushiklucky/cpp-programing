#include<iostream>
using namespace std;
void linearSearch(int *arr, int size, int key){
    if(size==0){
        cout<<"Element not found";
        return;
    }
    if(arr[0]==key){
        cout<<"Element found";
        return;
    }
    linearSearch(arr+1,size-1,key);
}
int main(){
    int arr[] = {2,5,1,9,3,4,0,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key=6;
    linearSearch(arr,size,key);
}