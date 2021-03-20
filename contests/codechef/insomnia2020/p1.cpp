#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll n) {
  ll ans = 1;
  for (ll i = 1; i <= n; i++) {
    ans = ans * 2;
  }
  return ans;
}

void mahQueen() {
  ll x;
  cin >> x;
  for (ll i = 0; i <= 100; i++) {
    if (power(i) >= x) {
      cout << power(i) << endl;
      break;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    mahQueen();
  }
}