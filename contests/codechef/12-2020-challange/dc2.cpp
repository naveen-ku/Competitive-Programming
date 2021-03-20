#include <bits/stdc++.h>

#define ll long long

using namespace std;

void evenSum() {
  ll a, b;
  cin >> a >> b;
  ll count = 0;
  ll x = 1;
  ll odd, even;
  ll y = 1;
  // for (; y <= b; y += 2) {
  //   if (x + y <= a + b && (x + y) % 2 == 0) {
  //     count++;
  //   }
  // }
  count = b / 2 + (b % 2);
  odd = count;
  count = 0;
  if (a > 1) {
    x++;
    y = 2;
    // for (; y <= b; y += 2) {
    //   if (x + y <= a + b && (x + y) % 2 == 0) {
    //     count++;
    //   }
    // }
    int e = b / 2;
    // even = count;
    even = e;
  }
  int mul;
  mul = a / 2;
  if (a % 2 == 0) {
    count = mul * (odd + even);
  } else {
    count = mul * (odd + even) + odd;
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
    evenSum();
  }
  return 0;
}