#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1; i<=n; i++){
        if(i%2!=0){
            for(j=1; j<=i; j++){
              if(j%2!=0)
              {
                cout<<j;
               }
            }cout<<endl;
        }
        
    }
}