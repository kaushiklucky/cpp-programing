#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWay = maze(sr, sc+1, er, ec);
    int downWay = maze(sr+1, sc, er, ec);
    int totalWays = rightWay+downWay;
    return totalWays;
}

int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWay = maze2(row, col-1);
    int downWay = maze2(row-1, col);
    int totalWays = rightWay+downWay;
    return totalWays;
}

void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){ //destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc+1, er, ec, s+'R'); //right
    printPath(sr+1, sc, er, ec, s+'D'); // down
}
int main(){
    cout<<"No. of ways: "<<maze(0,0,2,2)<<endl;
    cout<<"No. of ways by 2 variable: "<<maze2(3,4)<<endl;
    printPath(1,1,3,3,"");
}