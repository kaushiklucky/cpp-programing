#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter space-separated words: ";
    getline(cin, input);

    vector<string> words;
    stringstream ss(input);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    cout << "\nYou entered:\n";
    // for (const string &w : words) {
    //     cout << w << endl;
    // }
    for(int i=0; i<words.size(); i++){
        cout<<words[i]<<" ";
    }

    return 0;
}
