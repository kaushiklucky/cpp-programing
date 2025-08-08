#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s = "paper";
    string t = "titel";
    cout << s << endl;
    cout << t << endl;
    if (s.length() != t.length())
        return false;
    vector<int> v(150, 1000);
    for (int i = 0; i < s.length(); i++)
    {
        int idx = (int)s[i];
        if (v[idx] == 1000)
            v[idx] = s[i] - t[i];
        else if (v[idx] != (s[i] - t[i]))
        {
            cout << "not isomorphic";
            break;
        }
    }

    // emptying the vector
    for (int i = 0; i < 150; i++)
        v[i] = 1000;
    for (int i = 0; i < t.length(); i++){
        int idx = (int)t[i];
        if (v[idx] == 1000)
            v[idx] = t[i] - s[i];
        else if (v[idx] != (t[i] - s[i])){
            cout << "not isomorphic";
            break;
        }
    }
    cout << "yes isomorphic";
}