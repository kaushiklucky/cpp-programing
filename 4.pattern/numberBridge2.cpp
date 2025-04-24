#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"No. of line : ";
      cin>>n;
      for(int i=1; i<=2*n-1; i++){
            cout<<i;
      }
      cout<<endl;
      int m=n-1;
      int star = 1;
      for(int i=1; i<=m; i++){
            int a=1;
            for(int j=1; j<=m+1-i; j++){
                  cout<<a;
                  a++;
            }
            for(int k=1; k<=star; k++){
                  cout<<"*";
                  a++;
            }
            star+=2;
            for(int l=1; l<=m+1-i; l++){
                  cout<<a;
                  a++;
            }
            cout<<endl;
      }
}