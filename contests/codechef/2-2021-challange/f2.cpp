#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define For(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)
#define PI 3.1415926535897932384626433832795

void maxfn() {
  int n;
  cin >> n;
  int arr[n];
  fo(i, 0, n, 1) { cin >> arr[i]; }
  sort(arr, arr + n);
  ll x = arr[0];
  ll y = arr[1];
  ll z = arr[n - 1];
  ll sum = abs(x - y) + abs(y - z) + abs(z - x);
  cout << sum << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    maxfn();
  }

  return 0;
}