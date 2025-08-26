#include<iostream>
using namespace std;
void printIncDec(int n, int i){
    //base case
    if(i>n) return;
    // kaam for inc
    cout<<i<<" ";
    // rec call
    printIncDec(n, i+1);
    //kaam for dec
    if(i>1)cout<<i-1<<" ";


}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i=1;
    printIncDec(n,i);
}