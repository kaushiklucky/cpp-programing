#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}
int main(){
    vector<int> v = {3,5,1,6,2,8,0,7,4};
    display(v,0);
}