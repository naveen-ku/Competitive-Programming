#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int best = 0, curr = 1;
    for (int i = 1; i < str.length(); i++) {
        if (str[i] != str[i - 1]) {
            // cout << "best before: " << best << endl;
            // cout << "curr before: " << curr << endl;

            best = max(best, curr);
            // cout << "best after: " << best << endl;
            // cout << "curr after: " << curr << endl;
            curr = 0;
        }
        //   cout << "----------------" << endl;
        curr++;
        //   cout << curr << endl;
        //   cout << "----------------" << endl;
    }

    best = max(best, curr);
    cout << best;
    return 0;
}