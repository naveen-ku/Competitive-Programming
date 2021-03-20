#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    for (int i = 0; i < vec.size(); i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    // for (int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }
    for (int i = 0; i<n; i++) {
        if (vec[i] != i+1) {
            cout << i+1;
            break;
        }
    }
    return 0;
}