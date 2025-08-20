#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<fibo(n);
}

// 0, 1, 2, 3, 4, 5, 6,  7,  8,  9,  10
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89