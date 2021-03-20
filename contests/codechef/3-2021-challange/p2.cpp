#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define For(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)
#define PI 3.1415926535897932384626433832795

void groups() {
  string s;
  cin >> s;
  int count = 0;
  bool toggle = false;
  fo(i, 0, s.size(), 1) {
    if (s[i] == '1' && !toggle) {
      count++;
      toggle = true;
    }
    if (s[i] == '0') {
      toggle = false;
    }
  }
  cout << count << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    groups();
  }

  return 0;
}