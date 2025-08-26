#include<iostream>
using namespace std;
int sumOfOdds(int n,int ans){
    if(n==0) return ans;
    if(n%2!=0){
        ans += n;
    }
    return sumOfOdds(n-1,ans);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<sumOfOdds(n,0);
}