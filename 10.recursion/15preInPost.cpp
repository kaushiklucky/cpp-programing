#include<iostream>
using namespace std;
void preInPost(int n){
    if(n==0) return;
    cout<<"pre "<<n<<endl;
    preInPost(n-1);
    cout<<"In "<<n<<endl;
    preInPost(n-1);
    cout<<"Post "<<n<<endl;
}
int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;
    preInPost(n);
}