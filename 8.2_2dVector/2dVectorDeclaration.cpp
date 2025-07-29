#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,2); // a vector size 5 with initial size 2 
    int arr[3][4];
    // vector< vector<int> > v(3,4) --> error >> it is 2d vector accept 1d vector, here 4 is element
    vector< vector<int> > v1(3, vector<int>(4)); // 3 is number of 1d vector in 2d vector and 4 is size of 1d vector >> basically 3 is size of 2d vector and 4 is size of 1d vector
    vector< vector<int> > v2(3, vector<int>(4,7));  // a 2d vector is with 3 numbers of 1d vector of size 4 with initial value 7
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<v2[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    cout<<v2.size(); //size of rows
    cout<<endl;
    cout<<v2[0].size(); // size of column >> v2[0] is vector it self
    cout<<endl;
    cout<<v2[2].size(); // size of column >> v2[1], v2[2] are vector it self

    // cout<<v2[1]  --> for 1d vector/array simplly print value on index 1 but here v2 is 2d vector v2[1] is itself 1d vector inside 2d vector v2
}
