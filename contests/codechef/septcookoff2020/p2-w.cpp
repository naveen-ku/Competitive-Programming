#include <bits/stdc++.h>

#define lli long long int;
#define li long int;
#define ld long double;

using namespace std;

void maxsubsequence() {
    int n, input;
    cin >> n;
    vector<int> v;
    vector<int> v_out;
    for (int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    for (auto i = v.begin(); i != v.end(); i++) {
        if (*i > 0) {
            v_out.push_back(*i);
        }
    }
    int sum = 0;
    if (v_out.empty()) {
        cout << "0" << '\n';
        cout << "0" << '\n';
    } else {
        for (auto i = v_out.begin(); i != v_out.end(); i++) {
            sum += *i;
        }
        cout << sum << '\n';
        cout << v_out.size() << " ";
        for (auto i = v_out.begin(); i != v_out.end(); i++) {
            cout << *i << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        maxsubsequence();
    }

    return 0;
}