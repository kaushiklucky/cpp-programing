#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &v2){
      v2[0] = 100;
}

int main(){
      vector<int> v;
      v.push_back(9);
      v.push_back(5);
      v.push_back(3);
      v.push_back(8);
      for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
      }
      cout<<endl;

      change(v);

      for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
      }
      cout<<endl;
}