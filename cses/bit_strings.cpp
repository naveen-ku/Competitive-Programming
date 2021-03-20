#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long bitString(int n) {
    if (n == 1) {
        return 2;
    }
    while (--n) {
        return (2 % MOD) * (bitString(n)) % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long res = bitString(n);
    cout <<res<<"\n";
    return 0;
}