// #include <cstdio>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, count = 0;
    cin >> n;
    // Here we are counting number of 5's in n and then number of 25 in n, and
    // then number of 125 and so on
    for (long long i = 5; i <= n; i = i * 5) {
        count += n / i;
    }

    cout << count << "\n";

    return 0;
}