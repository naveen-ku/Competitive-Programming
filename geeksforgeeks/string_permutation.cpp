// https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
#define PI 3.1415926535897932384626433832795

void permute(string a, ll start, ll end) {
  if (start == end) {
    cout << " Start == End: " << a << "\n";
  } else {
    for (ll i = start; i <= end; i++) {
      swap(a[start], a[i]);
      cout << "1) swap(a[start],a[i]): "
           << "start: " << start << "\t i: " << i << "\t" << a << "\n";
      permute(a, start + 1, end);
      swap(a[start], a[i]);
      cout << "2) swap(a[start],a[i]): "
           << "start: " << start << "\t i: " << i << "\t" << a << "\n";
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    string a;
    cin >> a;
    ll n = a.length();
    permute(a, 0, n - 1);
    return 0;
  }

  return 0;
}