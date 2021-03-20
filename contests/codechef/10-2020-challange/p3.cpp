#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll checkpower(ll n) {
  ll count = 1;
  for (ll i = 2; i <= n; i *= 2) {
    if (i == n) {
      return 1;
    }
  }
  return 0;
}

void positiveAnd() {
  ll n;
  cin >> n;
  // ll m;
  ll ch = checkpower(n);
  // m = sqrt(n);
  // ll p = pow(2, m);
  if (n == 1) {
    cout << "1" << '\n';
    return;
  }
  if (ch == 1) {
    cout << "-1" << '\n';
  } else {
    for (ll i = 2; i < n; i = i * 2) {
      if (i < 4) {
        cout << i << " " << i + 1 << " "
             << "1"
             << " ";
      } else {
        cout << i + 1 << " " << i << " ";
      }
      ll prev = i;
      ll pres = i + 2;
      while (((pres & prev) > 0) && pres <= n) {
        cout << pres << " ";
        prev = pres;
        pres += 1;
      }
    }
    cout << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    positiveAnd();
  }
  return 0;
}