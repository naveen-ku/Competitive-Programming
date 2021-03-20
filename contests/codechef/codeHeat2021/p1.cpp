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

    string s;
    unordered_map<char, int> m;
    cin >> s;
    ll len = s.size();
    for (ll i = 0; s[i] != '\0'; i++) {
      m[s[i]]++;
    }
    ll count = 0;
    for (auto i = m.begin(); i != m.end(); i++) {
      if (i->second > count) {
        count = i->second;
      }
    }
    len = len - count;
    cout << len << '\n';
  }
  return 0;
}