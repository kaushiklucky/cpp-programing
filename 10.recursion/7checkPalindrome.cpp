#include<iostream>
#include<string>
using namespace std;

// Function to reverse a string
string reverseString(string str, int i) {
    int n = str.length() - i - 1;
    if (i >= n) return str;
    char temp = str[i];
    str[i] = str[n];
    str[n] = temp;
    return reverseString(str, i + 1);
}

// Function to check if a string is a palindrome
void checkPalindrome(string str, int i, int j) {
    if (i >= j) {
        cout << "A palindrome" << endl;
        return;
    }
    if (str[i] != str[j]) {
        cout << "Not a palindrome" << endl;
        return;
    }
    checkPalindrome(str, i + 1, j - 1);
}

int main() {
    string str = "madam"; // Change this to test with other strings
    cout << "Original string: " << str << endl;

    string reversedStr = reverseString(str, 0);
    cout << "Reversed string: " << reversedStr << endl;

    checkPalindrome(str, 0, str.length() - 1);

    return 0;
}
