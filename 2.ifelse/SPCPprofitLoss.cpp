/*: If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.*/

#include<iostream>
using namespace std;
int main(){
    int sp, cp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Seller has made profit"<<endl;
        cout<<"profit"<<"="<<sp-cp;
    }if(cp>sp){
        cout<<"Seller has made loss"<<endl;
        cout<<"Loss"<<"="<<cp-sp;
    }if(sp==cp){
        cout<<"NO profit no loss";
    }
}