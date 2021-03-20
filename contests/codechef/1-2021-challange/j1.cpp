#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
#define PI 3.1415926535897932384626433832795

void divthree() {
  ll n, k, d;
  cin >> n >> k >> d;
  ll a[n];
  int sum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  if (sum < k) {
    cout << 0 << "\n";
  } else {
    ll days;
    days = sum / k;
    if (days > d) {
      days = d;
    }
    cout << days << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    divthree();
  }

  return 0;
}