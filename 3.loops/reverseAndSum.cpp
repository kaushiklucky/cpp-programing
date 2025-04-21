// print the sum of given number and its reverse
#include<iostream>
using namespace std;
int main(){
    int n, reverse=0,sum, sumR;
    cout<<"Enter the digit : ";
    cin>>n;
    int a=n;
    while(n>0){
        int lastDigit=0;
        reverse*=10;
        lastDigit=n%10;
        sum=sum+lastDigit; 
        reverse+=lastDigit;
        n/=10;
    }cout<<sum;
    
    while(a>0){
        int lastDigit=0;
        lastDigit = a%10;
        sumR=sumR+lastDigit;
        a=a/10;
    }cout<<"sum is "<<sum+sumR;
    cout<<sumR;
}