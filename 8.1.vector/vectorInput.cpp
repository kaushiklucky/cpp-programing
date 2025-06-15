#include <iostream>
#include <vector>
using namespace std;
int main()
{
      // vector<int> v(5);
      // for(int i=0; i<5; i++){
      //       cin>>v[i];
      // }          // give segmentation falt if size is not decleared
      // for(int i=0; i<5; i++){
      //       cout<<v[i]<<" ";
      // }

      int n;
      cout << "Enter the size of vector: ";
      cin >> n;

      vector<int> v; // Create a single vector

      for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x); // Use . (dot) operator to access push_back
      }

      for (int i = 0; i < n; i++){ // Loop should iterate up to n
            cout << v[i] << " "; // Access vector elements
      }

      return 0;
}