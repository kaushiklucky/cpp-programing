/*Write a program to input month number and
print total number of days in month using switch
case.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the months number: ";
    cin >> n;

    // //1, 3, 5, 7, 8, 10, 12 --> 31
    // //4, 6, 9, 11 --> 30
    // //2 --> faberary(28)

    // switch(n<=7 && n%2!=0){
    //     case 1 :
    //     cout<<"31";
    // }
    // switch(n==4 || n==6 || n==9 || n==11){
    //     case 1 :
    //     cout<<"30";
    // }
    // switch(n==2){
    //     case 1:
    //     cout<<"28";
    // }

    switch (n)
    {
    case 1:
        cout << "january no. of days 31";
        break;
    case 2:
        cout << "fabrery no. of days 28/29";
        break;
    case 3:
        cout << "march no. of days 31";
        break;
    case 4:
        cout << "april no. of days 30";
        break;
    case 5:
        cout << "may no. of days 31";
        break;
    case 6:
        cout << "june no. of days 30";
        break;
    case 7:
        cout << "july no. of days 31";
        break;
    case 8:
        cout << "august no. of days 31";
        break;
    case 9:
        cout << "september no. of days 30";
        break;
    case 10:
        cout << "october no. of days 31";
        break;
    case 11:
        cout << "november no. of days 30";
        break;
    case 12:
        cout << "december no. of days 31";
        break;
    default:
        cout << "Invalid Number";
    }
}