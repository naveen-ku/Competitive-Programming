#include <iostream>

using namespace std;

void weirdAlgo(unsigned long n) {
    cout << n << " ";
    if (n == 1) {
        return;
    }
    if (n % 2 == 0) {
       weirdAlgo(n/2);
    }

    if (n % 2 != 0) {
        weirdAlgo(3*n +1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long n;
    cin >> n;
    weirdAlgo(n);
    return 0;
}
