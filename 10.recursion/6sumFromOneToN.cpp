#include<iostream>
using namespace std;
int sum1ToN(int sum, int n){
      if(n==0){
            cout<<sum<<endl;
            return 0;
      }
      sum1ToN(sum+n,n-1);
}
int main(){
      int n;
      cout<<"Enter n "; cin>>n;
      sum1ToN(0,n);
}