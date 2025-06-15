#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<int> v;  //not need to mention the size
      // v.push_back(7);
      // cout<<v.size()<<endl;
      // v.push_back(9);
      // cout<<v.size()<<endl;
      // v.push_back(6);
      // cout<<v.size()<<endl;
      // v.push_back(8);
      // cout<<v.size()<<endl;

      v.push_back(7);
      cout<<v.capacity()<<endl;
      v.push_back(9);
      cout<<v.capacity()<<endl;
      v.push_back(6);
      cout<<v.capacity()<<endl;
      v.push_back(8);
      cout<<v.capacity()<<endl;

      
                     //size capacity
      v.push_back(7);//1 1
      v.push_back(9);//2 2
      v.push_back(6);//3 4
      v.push_back(8);//4 4
      v.push_back(1);//5 8
      v.push_back(4);//6 8
      v.push_back(2);//7 8
      v.push_back(0);//8 8
      v.push_back(5);//9 16
      v.push_back(3);//10 16
      v.push_back(7);//11 16
      v.push_back(9);//12 16
      v.push_back(6);//13 16
      v.push_back(8);//14 16
      v.push_back(1);//15 16
      v.push_back(4);//16 16
      v.push_back(2);//17 32
      v.push_back(0);//18 32
      v.push_back(5);
      v.push_back(3);
      v.push_back(7);
      v.push_back(9);
      v.push_back(6);
      v.push_back(8);
      v.push_back(6);
      v.push_back(8);
      v.push_back(8);
      v.push_back(6);
      v.push_back(8);

      cout<<"Size is : "<<v.size()<<endl;
      cout<<"Capacity is : "<<v.capacity()<<endl;
       
      cout<<"After poping "<<endl; //after poping size decreases capacity remains same
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      v.pop_back();
      
      cout<<"Size is : "<<v.size()<<endl;
      cout<<"Capacity is : "<<v.capacity()<<endl;
}