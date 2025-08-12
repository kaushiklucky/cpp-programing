#include<iostream>
using namespace std;
void  reachHome(int src, int dest){
    if(src==dest){
        cout<<"Pahuch gya ghar"<<endl;
        return;
    }
    cout<<"src: "<<src<<" dest: "<<dest<<endl;
    reachHome(src+1,dest);
    cout<<"src: "<<src<<" dest: "<<dest<<endl;
}
int main(){
    reachHome(0,10);
}