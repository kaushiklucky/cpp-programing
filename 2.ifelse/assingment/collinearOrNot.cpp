/*Given three points (x1, y1), (x2, y2) and(x3, y3), write a program to 
check if all the three points fall on one straight line.*/
#include<iostream>
using namespace std;
int main(){
    int x1, x2, x3, y1, y2, y3, area;
    cout<<"Enter point of coordinat(x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter point of coordinat(x2,y2): ";
    cin>>x2>>y2;
    cout<<"Enter point of coordinat(x3,y3): ";
    cin>>x3>>y3;
    /*collinear mean area of triangle is equals to zero
    area = 0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))*/
    area = 0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    cout<<"area = "<<area<<endl;
    if(area==0){
        cout<<"all the three points fall on one straight line.";
    }else{
        cout<<"all the three points doesn't fall on one straight line.";
    }
}