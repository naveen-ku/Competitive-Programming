#include <bits/stdc++.h>

#define ll long long

using namespace std;

void positive(int start, int end, ll arr[]) {
  for (ll i = start; i < end; i++) {
    arr[i] = i + 1;
  }
}

void negative(int start, int end, ll arr[]) {
  for (ll i = start; i < end; i++) {
    arr[i] = -(i + 1);
  }
}

void positivePrefixes() {
  ll n, k;
  cin >> n >> k;
  ll arr[n];
  ll signs = n - k;
  if (k == n) {
    positive(0, n, arr);
    //   } else if (k == n - 1) {
    //     negative(0, 1, arr);
    //     positive(1, n, arr);
    //   } else if (k == 1) {
    //     positive(0, 1, arr);
    //     negative(1, n, arr);
  } else {
    ll count = n;
    ll x = 0;
    if (k >= (n / 2)) {
      for (ll i = 0; i < n; i++) {
        if (i % 2 == 0 && signs > 0) {
          arr[i] = -(i + 1);
          signs--;
        } else {
          arr[i] = i + 1;
        }
      }
    } else {
      negative(0, n, arr);
      ll pos = 1;
      for (ll i = 0; i < k; i++) {
        arr[pos] = -arr[pos];
        pos += 2;
      }
    }
  }

  for (ll i = 0; i < n; i++) {
    cout << arr[i] << " ";
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
    positivePrefixes();
  }

  return 0;
}