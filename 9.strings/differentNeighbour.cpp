#include<iostream>
using namespace std;
int main(){
      string str;
      cout<<"Enter elements in string : ";
      getline(cin, str);
      int count=0;
      int n=str.length();
      for(int i=0; i<n; i++){
            if(n==1){
                  break;
            }
            if(n==2 && str[0]!=str[1]){
                  count++;
                  break;
            }
            if(i==0){
                  str[i]!=str[i+1]; count++;
            }
            else if(n-1){
                  str[i]!=str[i-1]; count++;
            }
            else{
                  str[i]!=str[i+1] && str[i]!=str[i-1]; count++;
            }
      }
      cout<<count;
}