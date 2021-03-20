#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
#define PI 3.1415926535897932384626433832795

ll sum(ll arr[], int len) {
  ll sum = 0;
  fo(i, 0, len, 1) { sum += arr[i]; }
  return sum;
}
void fairElection() {
  ll n, m;
  ll counter = 0;
  cin >> n >> m;
  ll a[n], b[m];
  fo(i, 0, n, 1) { cin >> a[i]; }
  fo(i, 0, m, 1) { cin >> b[i]; }
  ll iter = (n > m) ? m : n;
  // cout << "iter: " << iter << "\n";
  ll s1 = sum(a, n);
  ll s2 = sum(b, m);
  fo(i, 0, iter + 1, 1) {
    sort(a, a + n);
    sort(b, b + m, greater<ll>());
    // fo(i, 0, n, 1) { cout << a[i] << " "; };
    // cout << "\n";
    // fo(i, 0, m, 1) { cout << b[i] << " "; };
    // cout << "\n";
    // cout << "s1: " << s1 << "\ts2: " << s2 << "\n";
    if (s1 <= s2) {
      s1 = s1 - a[0] + b[0];
      s2 = s2 - b[0] + a[0];
      swap(a[0], b[0]);
      counter++;
    }
    if (s1 > s2) {
      break;
    }
  }
  if (s1 <= s2) {
    cout << -1 << "\n";
  } else {
    cout << counter << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    fairElection();
  }

  return 0;
}