/*Print the table of any n nubmer.*/
#include<iostream>
using namespace std;
int main(){
    int n, i, c;
    cout<<"Enter table number to be printed: ";
    cin>>n;
    c = n*10;
    for(i=n; i<=c; i+=n){
        cout<<i<<endl;
    }
}