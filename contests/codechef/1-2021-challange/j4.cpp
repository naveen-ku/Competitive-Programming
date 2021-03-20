#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define For(i, a, b, inc) for (int i = a; i < b; i += inc)
#define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)

#define PI 3.1415926535897932384626433832795

void pointOfImpact() {
  ll n, k, x, y;
  cin >> n >> k >> x >> y;
  ll counter = 0;
  ll diff;
  ll x1, y1, x2, y2, x3, y3, x4, y4;
  if (x == y) {
    std::cout << n << " " << n << "\n";
    return;
  }

  if (x > y) {
    diff = n - x;
    x = x + diff;
    y = y + diff;
    //   cout << x << " " << y << "\n";
  } else {
    diff = n - y;
    x = x + diff;
    y = y + diff;
    //   cout << x << " " << y << "\n";
  }
  x1 = x;
  y1 = y;

  swap(x, y);
  // cout << x << " " << y << "\n";
  x2 = x;
  y2 = y;

  if (x > y) {
    diff = abs(n - y);
    y = 0;
    x = diff;
    //   cout << x << " " << y << "\n";
  } else {
    diff = abs(n - x);
    x = 0;
    y = diff;
    //   cout << x << " " << y << "\n";
  }
  x3 = x;
  y3 = y;

  swap(x, y);
  // cout << x << " " << y << "\n";
  x4 = x;
  y4 = y;

  k = k % 4;
  if (k == 1) {
    cout << x1 << " " << y1 << "\n";
  } else if (k == 2) {
    cout << x2 << " " << y2 << "\n";
  } else if (k == 3) {
    cout << x3 << " " << y3 << "\n";
  } else {
    cout << x4 << " " << y4 << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    pointOfImpact();
  }

  return 0;
}