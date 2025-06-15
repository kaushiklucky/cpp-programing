#include<iostream>
#include<vector>
#include <algorithm> // Include this header for std::sort
using namespace std;
int main(){
      vector<int> v;
      v.push_back(9);
      v.push_back(5);
      v.push_back(3);
      v.push_back(8);

      // cout<<v[2]<<" ";
      // cout<<v.at(3)<<endl;
      // v.at(2) = 90; //modification
      // cout<<v.at(2);

      for(int i=0; i<v.size(); i++){
            cout<<v.at(i)<<" ";
      }
      cout<<endl;

      //sort
      sort(v.begin(), v.end());
       for(int i=0; i<v.size(); i++){
            cout<<v.at(i)<<" ";
      }
      cout<<endl;




}