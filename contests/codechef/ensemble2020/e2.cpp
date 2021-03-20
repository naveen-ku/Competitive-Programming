#include <bits/stdc++.h>

using namespace std;

void helpDirection(int x1, int y1, string s) {
    int x2, y2;
    int counter;
    string ans;
    cin >> x2;
    cin >> y2;
    int xDiff = x1 - x2;
    int yDiff = y1 - y2;
    int R, L, U, D;
    R = count(s.begin(), s.end(), 'R');
    L = count(s.begin(), s.end(), 'L');
    D = count(s.begin(), s.end(), 'D');
    U = count(s.begin(), s.end(), 'U');
    // cout << R << L << D << U;

    if (xDiff < 0 && yDiff < 0 && (-1*xDiff) <= L && (-1*yDiff) <= D) {
        ans = "YES";
        counter = abs(xDiff) + abs(yDiff);
        cout << ans << " " << counter << endl;
    } else if (xDiff < 0 && yDiff > 0 && (-1*xDiff) <= L && (yDiff) <= U) {
        ans = "YES";
        counter = abs(xDiff) + abs(yDiff);
        cout << ans << " " << counter << endl;

    } else if (xDiff > 0 && yDiff < 0 && (xDiff) <= R && (-1*yDiff) <= D) {
        ans = "YES";
        counter = abs(xDiff) + abs(yDiff);
        cout << ans << " " << counter << endl;

    } else if (xDiff > 0 && yDiff > 0 && (xDiff) <= R && (yDiff) <= U) {
        ans = "YES";
        counter = abs(xDiff) + abs(yDiff);
        cout << ans << " " << counter << endl;

    } else {
        cout << "NO" << endl;
    }
}

void helpMartha() {
    string s;
    int x1, y1, q;
    cin >> s;
    cin >> x1;
    cin >> y1;
    cin >> q;
    while (q--) {
        helpDirection(x1, y1, s);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        helpMartha();
    }

    return 0;
}