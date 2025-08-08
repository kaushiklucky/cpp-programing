#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "Lucky is a software engineer. He is also a AI engineer";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int maxCount = 1;
    int count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount, count);
    }
    cout<<maxCount;
    cout<<endl;

    count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count==maxCount){
            cout<<v[i]<<' '<<maxCount<<endl;
        }
    }
}