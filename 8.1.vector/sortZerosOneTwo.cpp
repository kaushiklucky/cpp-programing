#include<iostream>
#include<vector>
using namespace std;

// by two pass --> using two loops

void sortArray(vector<int> &v){
    int noz=0,noo=0,Not=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else Not++;
    }

    for(int i=0; i<v.size(); i++){
        if(i<noz) v[i]=0;
        else if(i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements in vector: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sortArray(v);

}