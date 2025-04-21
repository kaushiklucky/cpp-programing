/*Print the sum of this series :
1 - 2 + 3 - 4 + 5 - 6... upto ‘n’.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    cout<<"Answer by loop"<<endl;
    for(int i=0; i<=n; i++){
        if(i%2!=0) sum+=i;
        else sum-=i;
    }cout<<sum;

    cout<<"\nAnswer by if condition"<<endl;
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;
    cout<<sum;
}