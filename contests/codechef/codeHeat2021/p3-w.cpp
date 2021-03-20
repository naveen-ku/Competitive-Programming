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
    ll w1, w2, k;
    cin >> w1 >> w2 >> k;
    if (k == 0) {
      if (w1 == w2 || w1 < w2) {
        cout << 0 << '\n';
      } else {
        cout << 1 << '\n';
      }
    } else {
      ll w1h = w1 + k;
      ll count = 0;
      while (w1h > w2 && k > 0) {
        count++;
        w1h--;
        w2++;
        k--;
      }
      cout << count << '\n';
    }
  }

  return 0;
}