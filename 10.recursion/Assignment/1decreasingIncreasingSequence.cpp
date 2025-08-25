#include<iostream>
using namespace std;
void increasingDecreasing(int n){
    if(n==0) return;
    cout<<n<<" ";
    increasingDecreasing(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    increasingDecreasing(n);
}