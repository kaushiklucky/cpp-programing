#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f*=i;
    }
    return f;
}
int main(){
    int n, r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    // int rfact=1, nfact=1, nrfact=1;
    // for(int i=2; i<=n; i++){
    //     nfact*=i;
    // }
    // for(int i=2; i<=r; i++){
    //     rfact*=i;
    // }
    // for(int i=2; i<=n-r; i++){
    //     nrfact*=i;
    // }
    // int ncr = nfact/(rfact*nrfact);
    // cout<<ncr;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = nfact/(rfact*nrfact);
    cout<<ncr;

}