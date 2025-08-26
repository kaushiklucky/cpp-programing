#include<iostream>
using namespace std;
void increasingDecreasing(int n){
    if(n==0) return;
    increasingDecreasing(n-1);
    cout<<n<<" ";
}
void decreasingIncreasing(int n){
    if(n==0) return;
    cout<<n<<" ";
    decreasingIncreasing(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    increasingDecreasing(n);
    decreasingIncreasing(n);
}