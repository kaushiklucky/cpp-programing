#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<int> v;  //not need to mention the size
      v.push_back(7);
      v.push_back(9);
      v.push_back(6);
      v.push_back(8);

      cout<<v[0]<<" ";
      cout<<v[1]<<" ";
      cout<<v[2]<<" ";
      cout<<v[3]<<" ";

      // inserting/input do not use []

      v[0] = 3; // can use this if to be updated/access
      v[2] = 5;
      
      cout<<endl;
      cout<<v[0]<<" ";
      cout<<v[1]<<" ";
      cout<<v[2]<<" ";
      cout<<v[3]<<" ";


}