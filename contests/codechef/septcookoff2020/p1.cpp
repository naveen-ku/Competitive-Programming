#include <bits/stdc++.h>

#define lli long long int;
#define li long int;
#define ld long double;

using namespace std;

void bowling() {
    int n, k, l;
    int count = 0;
    cin >> n;
    cin >> k;
    cin >> l;
    if (n > k * l || ((k<l) && n==k*l)) {
        cout << "-1" << '\n';
        return;
    } else {
        while (l > 0) {
            for (int i = 1; i <= k; i++) {
                if (count < n) {
                    cout << i<<" ";
                }
                count++;
            }
            l--;
        }
        cout<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        bowling();
    }

    return 0;
}