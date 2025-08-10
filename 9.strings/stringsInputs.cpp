#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of string: ";
    cin>>n;
    string str[n];
    cout<<"Enter strings: ";
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    cout<<"Entered string is: ";
    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";
    }
}