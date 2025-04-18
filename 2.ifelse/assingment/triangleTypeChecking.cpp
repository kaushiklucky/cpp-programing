/*Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
isosceles triangle.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int side1, side2, side3, area, semiper, perimeter;
    cout<<"Enter the first side: ";
    cin>>side1;
    cout<<"Enter the second side: ";
    cin>>side2;
    cout<<"Enter the third side: ";
    cin>>side3;
    semiper = side1+side2+side3/2;
    area = sqrt(semiper*(semiper-side1)*(semiper-side2)*(semiper-side3));
    perimeter = side1 + side2 + side3;
    if(side1==side2 && side2==side3 && side1==side3){
        cout<<"triangle is equilateral of area "<<area<<" unit and "<<" perimeter "<<perimeter<<" unit";
    }else{
        if((side1==side2 && side1!=side3) || (side2==side3 && side2!=side1) || (side3==side1 && side3!=side2)){
            cout<<"triangle is isosceles of area "<<area<<" unit and "<<" perimeter "<<perimeter<<" unit";
        }else{
            if(side1!=side2!=side3){
                cout<<"triangle is scalene of area "<<area<<" unit and "<<" perimeter "<<perimeter<<" unit";
            }
        }
    }
}