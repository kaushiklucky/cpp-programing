#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

    sort(v.begin(), v.end());  //Sorts entire strings in lexicographical order.
    string first = v[0];
    string last = v[v.size()-1];
    string s = "";
    for(int i=0; i<(min(first.size(), last.size())); i++){
        if(first[i]==last[i]){
            s += first[i];
        }
        else break;
    }

    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }

}

// Key Difference
// Scenario	                                  Sorting Behavior
// sort(s.begin(), s.end()) 
//where s is a string	         -->          Sorts characters inside s
// sort(v.begin(), v.end())
//where v is a vector<string>	  -->         Sorts entire strings lexicographically, not their characters

