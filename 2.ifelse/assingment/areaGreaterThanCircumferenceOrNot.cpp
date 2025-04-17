/*Given the radius of the circle, predict whether numerically the area of this circle is larger than the
circumference or not.
Input 1: radius = 4
Output 1: Area is greater than circumference.
Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
Perimeter = 2 * 3.14 * 4 = 25.12 unit
Therefore area > perimeter.*/
#include<iostream>
using namespace std;
int main(){
    int radius, area, circumference, pi;
    pi = 3.14285;
    cout<<"Enter the radius: ";
    cin>>radius;
    area = radius*radius*pi;
    circumference = 2*radius*pi;
    cout<<"Area of circle is "<<area<<endl;
    cout<<"circumference is "<<circumference<<endl;
    if(area>circumference){
        cout<<"area is larger than circumference";
    }else{
        if(area==circumference){
            cout<<"area and circumference are equal";
        }else{
            cout<<"circumference is larger than area";
        }
    }
    
}