#include <iostream>
using namespace std;

void numberSpiral() {
    long long int x, y;
    cin >> x >> y;
    if (x < y) {
        if (y % 2 == 1) {
            long long int res = (y * y);
            cout << res - x + 1 << "\n";
        } else {
            long long int res = (y - 1) * (y - 1);
            cout << res + x << "\n";
        }
    } else if (x == y) {
        long long int res = x * x;
        cout << res - x + 1 << "\n";
    } else {
        if (y % 2 == 1) {
            long long int res = x * x;
            cout << res - y + 1 << "\n";
        } else {
            long long int res = (x * x);
            cout << res - x + y + 1 << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        numberSpiral();
    }
    return 0;
}