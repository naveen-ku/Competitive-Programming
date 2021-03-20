#include <bits/stdc++.h>

#define ll long long

using namespace std;
// D1, V1, D2, V2 and P.
// start fromm day 1
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);

  ll total_days = 0;
  ll per_day = 0;
  ll total_vac = 0;
  ll d1, v1, d2, v2, p;
  cin >> d1 >> v1 >> d2 >> v2 >> p;
  if (d1 == d2) {
    total_days = d1 - 1;
    per_day = v1 + v2;
    while (total_vac < p) {
      total_vac += per_day;
      total_days++;
    }
    cout << total_days;
    return 0;
  } else {
    if (d1 < d2) {
      total_days = d1 - 1;
      ll count = d1;
      while (d2 - count > 0) {
        if (total_vac < p) {
          total_vac += v1;
          total_days++;
        }
        count++;
      }
      per_day = v1 + v2;
      while (total_vac < p) {
        total_vac += per_day;
        total_days++;
      }
    }
    if (d2 < d1) {
      total_days = d2 - 1;
      ll count = d2;
      while (d1 - count > 0) {
        if (total_vac < p) {
          total_vac += v2;
          total_days++;
        }
        count++;
      }
      per_day = v1 + v2;
      while (total_vac < p) {
        total_vac += per_day;
        total_days++;
      }
    }
  }
  cout << total_days;

  return 0;
}