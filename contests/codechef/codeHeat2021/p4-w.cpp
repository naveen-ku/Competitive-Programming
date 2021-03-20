#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define For(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)
#define PI 3.1415926535897932384626433832795

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll a[n], b[n];
    ll m = 2 * n;
    ll c[m];
    for (ll i = 0; i < n; i++) {
      cin >> a[i];
      c[i] = a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      c[n + i] = a[i];
    }
    ll start = 0;
    for (ll i = 0; i < m; i++) {
      if (c[i] == b[0]) {
        start = i;
        break;
      }
    }
    ll count = 0;
    ll j = 0;
    for (ll i = start; i < m; i++) {
      if (j < n) {
        if (c[i] == b[j]) {
          count++;
          j++;
        } else {
          break;
        }
      }
    }
    if (count == n) {
      cout << "GOOD" << '\n';
    } else {
      cout << "BAD" << '\n';
    }
  }

  return 0;
}