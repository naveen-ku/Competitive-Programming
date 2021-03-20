#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define FASTIO()                                                               \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)
int main() {
  FASTIO();
  ll t;
  cin >> t;
  while (t--) {
    ll n, x;
    cin >> n >> x;
    deque<ll> temp, ans;
    n = n * 2;
    for (ll i = 1; i <= n; i++) {
      ans.push_back(i);
    }
    for (ll i = 0; i < x; i++) {
      ll p;
      cin >> p;
      p = p % n;
      for (ll j = 1; j <= p; j++) {
        ans.push_front(ans.back());
        ans.pop_back();
      }
      ll temp = (n % 2 == 0) ? n / 2 : n / 2 + 1;
      ans.erase(ans.begin() + n - temp, ans.end());
      n = n - temp;
    }
    if (ans.size() > 1)
      cout << -1 << endl;
    else
      cout << ans.front() << endl;
  }
}