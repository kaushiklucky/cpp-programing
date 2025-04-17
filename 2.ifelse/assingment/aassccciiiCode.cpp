/*Write a C++ program to input any character and check whether
it is the alphabet, digit or specialcharacter.*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    /*0 to 32 --> miscellaneous function or operation
    33 to 47 ---> special character or operator or symbol
    48 to 57 ---> 0 to 9
    58 to 64 ---> special character or operator or symbol
    65 to 90 ---> A to Z
    91 to 96 ---> special character or operator or symbol
    97 to 122 --> a to z
    123 to 127 -> special character or operator or symbol
    */
    char ascii = (int)ch;
    if(ascii<=32){
        cout<<"miscellaneous function or operation";
    }else{
        if((ascii>=33 && ascii<=47) || (ascii>=58 && ascii<=64) || (ascii>=91 && ascii<=96) || (ascii>=123 && ascii<=127)){
            cout<<"speacial character or operator or symbol";
        }else{
            if(ascii>=48 && ascii<=57){
                cout<<"it is a number";
            }else{
                if(ascii>=65 && ascii<=90){
                    cout<<"it is uppercase alphabet";
                }else{
                    if(ascii>=97 && ascii<=122){
                        cout<<"it is lowercase alphabet";
                    }
                }
            }
        }
    }
}