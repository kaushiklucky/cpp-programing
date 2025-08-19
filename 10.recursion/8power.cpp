#include<iostream>
using namespace std;
// int power(int m, int n){
//     int p=1;
//     if(m==0 && n==0){
//         cout<<"0 raised to the power 0 is not defined";
//         return -100;
//     }
//     for(int i=1; i<=n; i++){
//         p *= m;
//     }
//     return p;
// }

int powerRec(int m, int n){
    if(n==0) return 1;
    return m*powerRec(m, n-1);
}
int main(){
    int m; cout<<"Base: "; cin>>m;
    int n; cout<<"Power: "; cin>>n;
    // cout<<power(m,n);
    cout<<powerRec(m,n);
}