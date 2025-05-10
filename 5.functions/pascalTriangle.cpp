#include<iostream>
using namespace std;
int fact(int x){
      int f=1;
      for(int i=1;i<=x;i++){
            f*=i;
      }
      return f;
}

int combination(int n, int r){
      int ncr = fact(n)/(fact(r)*fact(n-r));
      return ncr;
}

int main(){
      int n;
      cout<<"No. of lines : ";
      cin>>n;
      for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                  cout<<combination(i,j)<<" "; //iCj
            }
            cout<<endl;
      }
}