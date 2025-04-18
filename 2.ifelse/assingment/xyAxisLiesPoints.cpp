/*Given a point (x, y), write a program to find out if it lies on the x-axis,
y-axis or at the origin, viz. (0, 0).*/
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter point on X - axis: ";
    cin>>x;
    cout<<"Enter point on Y - axis: ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"point lies on origin "<<x<<","<<y;
    }else{
        if(x==x && y==0){
            cout<<"point lies on X - axis "<<x<<","<<y;
        }else{
            if(x==0 && y==y){
                cout<<"point lies on Y - axis "<<x<<","<<y;
            }else{
                if(x==x && x>0 && y==y && y>0){
                    cout<<"point lies in first quadrant "<<x<<","<<y;
                }else{
                    if(x<0 && y==y){
                        cout<<"point lies in secend quadrant "<<x<<","<<y;
                    }else{
                        if(x<0 && y<0){
                            cout<<"point lies in third quadrant "<<x<<","<<y;
                        }else{
                            if(x==x && y<0){
                                cout<<"point lies in forth quadrant "<<x<<","<<y;
                            }
                        }
                    }
                }
            }
        }
    }
}