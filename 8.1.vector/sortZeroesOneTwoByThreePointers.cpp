#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vecter: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int lo=0; int mid=0; int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp = v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++; mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}