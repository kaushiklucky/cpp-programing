/*Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.*/
#include<iostream>
using namespace std;
int main(){
    int length, breath, area, perimeter;
    cout<<"Enter 1st side: ";
    cin>>length;
    cout<<"Enter 2nd side: ";
    cin>>breath;
    area = length*breath;
    perimeter = 2*(length+breath);
    cout<<"area of rectangle is "<<area<<endl;
    cout<<"perimeter of rectangle is "<<perimeter<<endl;
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }else{
        if(area==perimeter){
            cout<<"area is equals to perimeter";
        }else{
            cout<<"perimeter is greater than area";
        }
    }
}