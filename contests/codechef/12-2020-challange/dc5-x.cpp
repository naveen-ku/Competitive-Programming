#include <bits/stdc++.h>

#define ll long long

using namespace std;

void hailxor() {
  ll n, x;
  cin >> n >> x;
  int arr[n];
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  int i = 1, j = 2, p = 1;
  for (int k = 0; k < x; k++) {
    arr[i] = arr[i] ^ int(pow(2, p));
    arr[j] = arr[j] ^ int(pow(2, p));
  }
  for (int i = 1; i <= n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    hailxor();
  }

  return 0;
}