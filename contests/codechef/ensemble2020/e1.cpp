#include <bits/stdc++.h>

using namespace std;

void priyaAnd() {
    int n, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i < j) {
                if ((arr[i] & arr[j]) == arr[i]) {
                    // cout << i << " " << j << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        priyaAnd();
    }
    return 0;
}