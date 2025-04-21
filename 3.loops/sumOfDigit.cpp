#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    int a = n;
    int lastDigit, sum = 0;
    while(n>0){
        lastDigit = n%10;
        sum=sum+lastDigit;   //sum+=lastDigit
        n=n/10;    //n/=10
    }cout<<"Sum of number "<<a<<" is "<<sum;
}