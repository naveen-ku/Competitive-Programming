#include <bits/stdc++.h>

#define ll long long

using namespace std;
// 1≤T≤10
// 1≤N≤104
// 1≤D≤105
// 1≤ai≤100 for each valid i
void vaccine() {
  ll n, d;
  cin >> n >> d;
  ll vac[n];
  ll count = 0;
  for (ll i = 0; i < n; i++) {
    cin >> vac[i];
  }
  if (d == 1) {
    cout << n << '\n';
    return;
  } else {
    for (ll i = 0; i < n; i++) {
      if (vac[i] <= 9 || vac[i] >= 80) {
        count++;
      }
    }
    ll risk = count;
    ll non_risk = n - risk;

    ll days;
    if (risk % d == 0) {
      days = risk / d;
    } else {
      days = risk / d + 1;
    }

    if (non_risk % d == 0) {
      days = days + (non_risk / d);
    } else {
      days = days + (non_risk / d) + 1;
    }
    cout << days << '\n';
    return;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    vaccine();
  }

  return 0;
}