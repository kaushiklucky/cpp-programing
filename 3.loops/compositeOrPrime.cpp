#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"Enter the number: ";
    cin>>n;
    bool flag = true; // True means prime number
    for(i=2; i<=n-1; i++){ // i is factor of n
        if(n%i==0){  // false mean composite 
        flag = false;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is prime number";
    else cout<<n<<" is composite number";
}