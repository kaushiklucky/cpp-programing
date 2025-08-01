#include<iostream>
#include<vector>
using namespace std;
int main(){
    int noRows;
    cout<<"Enter number of rows in 2d vector: ";
    cin>>noRows;
    vector< vector<int> > vect;
    vector<int> row;
    for(int i=0; i<noRows; i++){
        vector<int> row(i);
        vect.push_back(row);
    }
    for(int i=0; i<noRows; i++){
        for(int j=0; j<row.size(); j++){
            if(i == vect[i][0] || vect[i][i]){
                vect[i][j] = 1;
            }
            // vect[i][0] = 1;
            // vect[i][row.size()-1] = 1;
        }
    }
    for(int i=2; i<noRows; i++){
        for(int j=1; j<row.size(); j++){
            vect[i][j] = vect[i-1][j-1] + vect[i-1][j];
        }
    }
    for(int i=0; i<noRows; i++){
        for(int j=0; j<row.size(); j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }

// The code has several issues:

// Incorrect initialization of the row vector: The line vector<int> row(i); initializes a vector of size i, but it is not resized or assigned correctly for a Pascal's Triangle.

// Logical error in filling Pascal's Triangle values: The logic for calculating the elements of Pascal's Triangle is incorrect.

// Row size mismatch: You are trying to access row.size() which is not defined properly for the rows within the loop.

// Unnecessary variables: The use of row outside its intended purpose causes confusion.
}