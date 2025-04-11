/*Take positive integer input and tell if it
is divisible by 5 or 3 but not divisible by 15.*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if((x%3==0 || x%5==0) && x%15!=0){
        cout<<"The number "<<x<<" is divisible by 3 or 5 but not divisible by 15";
    }
    if(x%15==0){
        cout<<"The number "<<x<<" is divisible by 15";
    }
    if(x%3!=0 && x%5!=0 && x%15!=0){
        cout<<"The number "<<x<<" is either not divisible by 3 or 5 neither 15";
    }
}