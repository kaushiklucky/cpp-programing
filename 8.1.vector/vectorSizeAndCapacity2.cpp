#include<iostream>
#include<vector>
using namespace std;
int main(){
      int n;
      cout<<"Enter size of vector : ";
      cin>>n;
      vector<int>v;
      cout<<"Enter elements in vector : ";
      for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
      }
      cout<<"size is "<<v.size()<<endl;
      cout<<"capacity is "<<v.capacity()<<endl;

      int y;
      cout<<"Enter the number of element to be poped : ";
      cin>>y;
      int count = y;
      for(int i=0; count!=0; i++){
            v.pop_back();
            count--;
      }

      cout<<"size after poped "<<v.size()<<endl;
      cout<<"capacity after poped "<<v.capacity();

}