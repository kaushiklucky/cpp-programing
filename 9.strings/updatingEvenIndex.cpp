#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    // Print original string
    cout << "Original string: " << str << endl;

    // Replace characters at even indices with 'a'
    for (int i = 0; i < str.size(); i++)
    {
        if (i % 2 == 0)
            str[i] = 'a';
    }

    // Print modified string
    cout << "Modified string: " << str << endl;

    return 0;


    // string str;
    // cout << "Enter string : ";
    // getline(cin, str);
    // cout << str << endl;
    // for (int i = 0; i < str[i] != '\0'; i++)
    // {
    //     if (i % 2 == 0)
    //         str[i] = 'a';
    // }
    // cout << str;
}