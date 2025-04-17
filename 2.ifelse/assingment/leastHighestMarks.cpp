/*If the marks of A, B and C are input through the keyboard, write a program to determine the student
scoring the least marks.*/
#include<iostream>
using namespace std;
int main(){
    int sub1, sub2, sub3, sub4, sub5, totalMarks, per;
    cout<<"Enter the first subject marks: ";
    cin>>sub1;
    cout<<"Enter the second subject marks: ";
    cin>>sub2;
    cout<<"Enter the third subject marks: ";
    cin>>sub3;
    cout<<"Enter the fourth subject marks: ";
    cin>>sub4;
    cout<<"Enter the fivth subject marks: ";
    cin>>sub5;
    totalMarks = sub1+sub2+sub3+sub4+sub5;
    per = totalMarks/5;
    cout<<"total marks obtain is "<<totalMarks<<endl;
    cout<<"percentage "<<per<<endl;
    if(sub1>sub2 && sub1>sub3 && sub1>sub4 && sub1>sub5){
        cout<<" first subject ie "<<sub1<<" obtained marks is highest"<<endl;
    }else{
        if(sub2>sub3 && sub2>sub4 && sub2>sub5){
            cout<<"second subject ie "<<sub2<<" obtained marks is highest"<<endl;
        }else{
            if(sub3>sub4 && sub3>sub5){
                cout<<"third subject ie "<<sub3<<" obtained marks is highest"<<endl;
            }else{
                if(sub4>sub5){
                    cout<<"forth subject ie "<<sub4<<" obtained marks is highest"<<endl;
                }else{
                    cout<<"fivth subject ie "<<sub5<<" obtained marks is highest"<<endl;
                }
            }
        }
    }
 if(sub1<sub2 && sub1<sub3 && sub1<sub4 && sub1<sub5){
        cout<<" first subject ie "<<sub1<<" obtained marks is lowest"<<endl;
    }else{
        if(sub2<sub3 && sub2<sub4 && sub2<sub5){
            cout<<"second subject ie "<<sub2<<" obtained marks is lowest"<<endl;
        }else{
            if(sub3<sub4 && sub3<sub5){
                cout<<"third subject ie "<<sub3<<" obtained marks is lowest"<<endl;
            }else{
                if(sub4<sub5){
                    cout<<"forth subject ie "<<sub4<<" obtained marks is lowest"<<endl;
                }else{
                    cout<<"fivth subject ie "<<sub5<<" obtained marks is lowest"<<endl;
                }
            }
        }
    }

}
