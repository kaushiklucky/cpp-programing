#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"No. of line : ";
      cin>>n;
      for(int i=1; i<=2*n-1; i++){
            cout<<"*";
      }
      cout<<endl;
      int m=n-1;
      int nsp = 1;
      for(int i=1; i<=m; i++){
            //stars
            for(int j=1; j<=m+1-i; j++){
                  cout<<"*";
            }
            //spaces
            for(int k=1; k<=nsp; k++){
                  cout<<" ";
            }
            nsp+=2;
            //stars
            for(int l=1; l<=m+1-i; l++){
                  cout<<"*";
            }
            cout<<endl;
      }

// method-2
      m=n-1;
      for(int i=1; i<=2*m+1; i++) cout<<"*";
      cout<<endl;
      for(int i=1; i<=m; i++){
            for(int j=1; j<=m+1-i; j++){
                  cout<<"*";
            }
            for(int k=1; k<=2*i-1; k++){
                  cout<<" ";
            }
            for(int l=1; l<=m+1-i; l++){
                  cout<<"*";
            }
            cout<<endl;
            
      }
}