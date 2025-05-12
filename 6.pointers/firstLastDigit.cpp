#include <iostream>
using namespace std;
void firstAndLast(int n, int* ptr1, int* ptr2){
      *ptr2=n%10;  //lastdigit
      while(n>9){
            n/=10;  //first digit
      }
      *ptr1=n;
      return;
}
int main(){
      int n;
      cin>>n;
      int firstDigit, lastDigit;
      int* ptr1=&firstDigit;
      int* ptr2=&lastDigit;
      firstAndLast(n,ptr1,ptr2);
      cout<<firstDigit<<" "<<lastDigit;
}
