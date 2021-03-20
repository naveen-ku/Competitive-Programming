#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define For(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)
#define PI 3.1415926535897932384626433832795

ll smallestweight(ll w[], ll n) {
  ll smallest = w[0];
  for (ll i = 0; i < n; i++) {
    if (w[i] < smallest) {
      smallest = w[i];
    }
  }
  return smallest;
}
ll weightindexfn(ll weight, ll n, ll w[]) {
  for (ll i = 0; i < n; i++) {
    if (w[i] == weight) {
      return i;
    }
  }
}

// Smallest number greater than target
ll sngtt(ll w[], ll n, ll target) {
  ll w2[n];
  for (ll i = 0; i < n; i++) {
    w2[i] = w[i];
  }
  sort(w2, w2 + n);
  fo(i, 0, n, 1) {
    if (w2[i] > target) {
      return w2[i];
    }
  }
}

void frogs() {
  ll n, counter = 0;
  cin >> n;
  ll w[n], l[n];
  fo(i, 0, n, 1) { cin >> w[i]; }
  fo(i, 0, n, 1) { cin >> l[i]; }
  ll weigth = smallestweight(w, n);
  ll weightindex = weightindexfn(weigth, n, w);
  fo(i, 0, n - 1, 1) {
    ll currweight = sngtt(w, n, weigth);
    ll currpos = weightindexfn(currweight, n, w);
    ll currlen = l[currpos];
    while (currpos <= weightindex) {
      counter++;
      currpos += currlen;
    }
    weigth = currweight;
    weightindex = currpos;
  }
  cout << counter << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    frogs();
  }

  return 0;
}