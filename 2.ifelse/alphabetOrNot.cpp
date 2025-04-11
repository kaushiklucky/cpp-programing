/*Write a program to check whether a
character is an alphabet or not.*/
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    /*
    a to z ---> 97 to 122
    A to Z ---> 65 to 90
    */
    char ascii = (int)ch; /*int ascii = (int)ch;: This line declares an integer variable named ascii and assigns the ASCII value of the character ch to it. After this line executes, ascii will contain the ASCII value of the character ch.  (int)ch: This is a typecast operation. It converts the character ch into its corresponding integer ASCII value. In many programming languages, characters are internally represented as numerical values based on the ASCII (or Unicode) encoding system. */
    if (ascii >= 97 && ascii <= 122){
        cout << "The character is lowercase alphabet";
    }
    if (ascii >= 65 && ascii <= 90){
        cout << "The character is uppercase alphabet";
    }
}