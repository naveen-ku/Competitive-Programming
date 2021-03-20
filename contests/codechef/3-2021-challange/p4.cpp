#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define For(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)
#define PI 3.1415926535897932384626433832795

void spacearray() {
  ll n;
  cin >> n;
  ll arr[n];
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  ll total = n * (n + 1) / 2;
  ll diff = total - sum;
  sort(arr, arr + n);
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if ((i + 1 - arr[i]) < 0) {
      flag++;
      break;
    }
  }
  if (flag == 1 || diff % 2 == 0) {
    cout << "Second" << '\n';
  } else {

    cout << "First" << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    spacearray();
  }

  return 0;
}