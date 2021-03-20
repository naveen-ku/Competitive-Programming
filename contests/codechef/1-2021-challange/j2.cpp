#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
#define PI 3.1415926535897932384626433832795

void decodeit() {
  ll n;
  cin >> n;
  ll iter = n / 4;
  string s;
  cin >> s;
  string g = "abcdefghijklmnop";
  vector<char> v;
  for (ll i = 0; i < iter; i++) {
    ll start = 0;
    ll end = 16;
    for (ll j = 4 * i; j < 4 * (i + 1); j++) {
      if (s[j] == '0') {
        end = start + (end - start) / 2;
      }
      if (s[j] == '1') {
        start = start + (end - start) / 2;
      }
    }
    v.push_back(g[start]);
  }
  for (auto i = v.begin(); i != v.end(); i++) {
    cout << *i;
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    decodeit();
  }

  return 0;
}