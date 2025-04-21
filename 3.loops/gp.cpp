#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    int a = 1;
    // 1 2 4 8 16 .....
    for(i=1; i<=n; i++){
        cout<<a<<endl;
        a = a*2;
    }cout<<endl;

    // 2 6 18 54 162 .....
    int b=2;
    for(i=1; i<=n; i++){
        cout<<b<<endl;
        b = b*3;
    }cout<<endl;

    // 10 40 160 640 .....
    int c=7;
    for(i=10; i>=n; i--){
        cout<<c<<endl;
        c = c*4;
    }cout<<endl;
}
