#include<iostream>
using namespace std;
int main(){
      int m,n;
      cout<<"Enter row no. : ";
      cin>>m;
      cout<<"Enter colom no. : ";
      cin>>n;
      cout<<"Enter elements in array : ";
      int arr[m][n];
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                  cin>>arr[i][j];
            }
      }
      
      for(int i=m-1; i>=0; i--){
            if(i%2==0){
                  for(int j=0; j<n; j++){
                        cout<<arr[i][j]<<" ";
                  }
                  cout<<endl;
            }
            else{
                  for(int j=n-1; j>=0; j--){
                        cout<<arr[i][j]<<" ";
                  }
                  cout<<endl;
            }
      }
}