#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"No. of lines : ";
      cin>>n;
      for(int i=n; i>=1; i--){
            for(int j=1; j<=n-i; j++){
                  cout<<" ";
            }
            for(int k=1; k<=i; k++){
                  cout<<"*";
            }
            cout<<endl;
      }
}