#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    // for(i=1; i<=2*n-1; i+=2){
    //     cout<<i<<endl;
    // }

    // 1 3 5 7 9 11 ........
    int a = 1;
    for(i=1; i<=n; i++){
        cout<<a<<endl;
        a = a+2;
    }cout<<endl;
    

    // 4 7 10 13 16 19 .......
    int b = 4;
    for(i=1; i<=n; i++){
        cout<<b<<endl;
        b = b+3;
    }
}