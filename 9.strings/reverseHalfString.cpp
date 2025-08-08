#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter elements in string: ";
    getline(cin, str);  // Read the whole line of input into str
    cout << "Original string: " << str << endl;
    int len = (str.length())/2;
    reverse(str.begin(), str.begin()+len);  // Reverse the string
    cout << "First half reversed string: " << str << endl;  // Output the reversed string
    return 0;
}
