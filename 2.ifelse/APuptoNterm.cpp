#include<iostream>
using namespace std;
int main(){
   int a, d, An, i, n, x, Dn, Nn;
   cout<<"Enter what to find 1.An, 2.n, 3.d: ";
   cin>>x;
   An = a+(n-1)*d;
   Nn = (An-a+d)/d;
   Dn = (An-a)/(n-1);
   if(x==1){
    cout<<"Enter first term(a): ";
    cin>>a;
    cout<<"Enter common difference(d): ";
    cin>>d;
    cout<<"Enter number of term(n): ";
    cin>>n;
    cout<<"An term is "<<An<<endl;
   }else{
    if(x==2){
        cout<<"Enter first term(a): ";
        cin>>a;
        cout<<"Enter common difference(d): ";
        cin>>d;
        cout<<"Enter An term: ";
        cin>>An;
        cout<<"nth term is "<<Nn;
    }else{
        if(x==3){
            cout<<"Enter first term(a): ";
            cin>>a;
            cout<<"Enter An term: ";
            cin>>An;
            cout<<"Enter number of term(n): ";
            cin>>n;
            cout<<"common difference is "<<Dn;
        }
    }
   }
}
