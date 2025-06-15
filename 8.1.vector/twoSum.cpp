#include<iostream>
#include<vector>
using namespace std;
int main(){
      int x, n;
      cout<<"Enter target number : ";
      cin>>x;
      vector<int> vect;
      cout<<"Enter array size : ";
      cin>>n;

      cout<<"Enter array elements : ";
      for(int i=0; i<n; i++){
            int q;
            cin>>q;
            vect.push_back(q);
      }

      for(int i=0; i<vect.size()-1; i++){
            for(int j=i+1; j<vect.size(); j++){
                  if(vect[i]+vect[j]==x){
                        cout<<"( "<<i<<","<<j<<" )"<<" ";
                  }
            }
      }

      // cout<<"Entered array : ";
      // for(int i=0; i<n; i++){
      //       cout<<vect[i]<<" ";
      // }
}