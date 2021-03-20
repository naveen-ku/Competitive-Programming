// An anagram of a string is another string that contains same characters, only
// the order of characters can be different. For example, “abcd” and “dabc” are
// anagram of each other.

#include <bits/stdc++.h>

using namespace std;

void approachOne() {
    vector<string> s1;
    vector<string> s2;
    string input1;
    string input2;
    cout << "----------------- Approach 1 ------------------" << endl;
    cout << "s1: ";
    cin >> input1;
    cout << "s2: ";
    cin >> input2;
    s1.push_back(input1);
    s2.push_back(input2);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    cout << "-----------------------------------------------" << endl;
}

void approachTwo() {
    string s1;
    string s2;
    cout << "----------------- Approach 2 ------------------" << endl;

    cout << "s1: ";
    cin >> s1;
    cout << "s2: ";
    cin >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    cout << "-----------------------------------------------" << endl;
}

int main() {
    approachOne();
    approachTwo();
    return 0;
}