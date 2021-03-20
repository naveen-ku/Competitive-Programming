#include <bits/stdc++.h>

using namespace std;

void smallestKMP() {
    // vector<string> s;
    // vector<string> p;
    // string input1, input2;
    // cin >> input1;
    // cin >> input2;
    // s.push_back(input1);
    // p.push_back(input2);
    string s;
    string p;
    cin >> s;
    cin >> p;
    map<int, char> sc;
    for (int i = 0; i < s.length(); i++) {
        sc[i] = s[i];
    }
    for (int i = 0; i < p.length(); i++) {
        for (int j = 0; j < sc.size(); j++) {
            if (sc[j] == p[i]) {
                sc.erase(j);
                break;
            }
        }
    }

    for (auto i = sc.begin(); i != sc.end(); i++) {
        cout << (*i).second;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        smallestKMP();
    }
    return 0;
}