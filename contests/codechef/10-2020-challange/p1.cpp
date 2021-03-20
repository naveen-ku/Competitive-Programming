#include <bits/stdc++.h>

using namespace std;

void covidRun() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  int count = 0;
  int stopLoopCity = (x + k) % n;
  while (count <= 2) {
    x = (x + k) % n;
    if (x == y) {
      cout << "YES" << '\n';
      return;
    }
    if (x == stopLoopCity) {
      count++;
    }
  }
  cout << "NO" << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    covidRun();
  }

  return 0;
}