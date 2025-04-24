#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"No. of line : ";
      cin>>n;
      for(int i=1; i<=2*n-1; i++){
            for(int j=1; j<=2*n-1; j++){
                  int a=i;
                  int b=j;
                  if(a>n) a = 2*n-i;
                  if(b>n) b = 2*n-j;
                  cout<<min(a,b);
            }
            cout<<endl;
      }



      // for(int i=1; i<=n; i++){
      //       for(int j=1; j<=n; j++){
      //             if(i<=j) cout<<i;
      //             else cout<<j;
      //       }cout<<endl;
      // }
}