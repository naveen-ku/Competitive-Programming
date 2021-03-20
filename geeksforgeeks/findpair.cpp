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
  ll n, x;
  cout << "Size: ";
  cin >> n;
  vector<ll> v(n);
  cout << "Element x: ";
  cin >> x;
  fo(i, 0, n, 1) { cin >> v[i]; }

  return 0;
}