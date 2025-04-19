#include<iostream>
using namespace std;
int main(){
    int i;
    // for(i=1; i<=100; i++){
    //     if(i%2==0){
    //         cout<<"even numbers are "<<i<<endl;
    //     }
    // }

    // for(i=1; i<=100; i++){
    //     if(i%2!=0){
    //         cout<<"odd numbers are "<<i<<endl;
    //     }
    // }
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Even nubmers are:"<<endl;
    for(i=2; i<=n; i+=2){
        cout<<i<<endl;
    }
    
    cout<<"Odd numbers are:"<<endl;
    for(i=1; i<=n; i+=2){
        cout<<i<<endl;
    }


    // odd numbers using continue statment

    // for(int i=1; i<=n; i++){
    //     if(n%2==0) continue;
    //     cout<<i<<endl;
    // }


    // even numbers using continue statment

    // for(int i=1; i<=n; i++){
    //     if(n%2!=0) continue;
    //     cout<<i<<endl;
    // }
}