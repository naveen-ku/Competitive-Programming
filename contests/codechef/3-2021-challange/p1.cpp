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
  ll n, h, x;
  bool res = false;
  cin >> n >> h >> x;
  int arr[n];
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (ll i = n - 1; i >= 0; i--) {
    if (x + arr[i] >= h) {
      res = true;
      break;
    }
  }
  if (res) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }

  return 0;
}