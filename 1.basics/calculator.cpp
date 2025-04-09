#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>v;
    int max = INT_MAX;
    for(int i=0; i<max; i++){
        int a; cin>>a; v.push_back(a);
        char c; cin>>c; int q = (int)c; v.push_back(q);
        if(q==61) break; // 61 ascii value of equals to (=)
        int b; cin>>b; v.push_back(b);
        char c; cin>>c; int q = (int)c; v.push_back(q);
        if(q==61) break;
    }

    int i=0;
}