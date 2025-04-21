#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=2; i<=n-1; i++){
        if(n%i==0){
            cout<<n<<" is composite number";
            break;
        }
    }
}    