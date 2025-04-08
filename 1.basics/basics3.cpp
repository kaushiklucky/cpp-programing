#include<iostream>
using namespace std;
int main(){
    float radius, area, pi;
    pi = 3.1415;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    area = pi*radius*radius;
    cout<<"the area of circle's radius"<< radius  << "is" <<area;
    return 0;
}