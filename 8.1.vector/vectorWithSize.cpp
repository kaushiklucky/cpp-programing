#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<int> v(5);
      cout<<v[4]<<endl;

      vector<int> v2(5,7); //initial size = 5, each element has value 7
      cout<<v2[2]<<endl;

}