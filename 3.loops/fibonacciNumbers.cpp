#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=1, b=1, sum=0;
    for(i=1; i<=n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
    }cout<<b;
}