#include <bits/stdc++.h>
using namespace std;

void printOdd(int n) {
    int odd = 1;
    while (odd <= n) {
        cout << odd << " ";
        odd = odd + 2;
    }
}

void printEven(int n) {
    int even =2;
    while (even <= n) {
        cout << even << " ";
        even = even + 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int even = n;
    if (n == 1) {
        cout << n << "\n";
        return 0;
    } else if (n < 4 && n > 1) {
        cout << "NO SOLUTION"
             << "\n";
        return 0;
    } else if (n % 2 == 0 && n > 3) {
        printEven(n);
        printOdd(n - 1);
    } else {
        printEven(n - 1);
        printOdd(n);
    }

    return 0;
}