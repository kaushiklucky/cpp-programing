#include<iostream>
using namespace std;
void starTriangle(int x){
    cout<<"Enter the number: ";
    cin>>x;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        } cout<<endl;
    }
}
int main(){
    int x;
    starTriangle(x);
    // starTriangle(4);
    // starTriangle(6);
}