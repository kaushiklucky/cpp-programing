#include<iostream>
using namespace std;
int gcd(int a, int b){
      int hcf = 1;
      for(int i=1;i<=min(a,b);i++){
            if(a%i==0 && b%i==0){
                  hcf=i;
            }
      }
      return hcf;
}
int main(){
      int x;
      cout<<"Enter the 1st number : ";
      cin>>x;
      int y;
      cout<<"Enter the 2nd number : ";
      cin>>y;
      cout<<gcd(x,y);
}