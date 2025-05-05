#include<iostream>
using namespace std;

int fact(int x){
      int factorial=1;
      for(int i=1; i<=x; i++){
            factorial*=i;
      }
      return factorial;
}

int main(){
      int x;
      cout<<"Enter the number : ";
      cin>>x;
      for(int i=1; i<=x; i++){
            cout<<fact(i)<<endl;
      }
      
      
}