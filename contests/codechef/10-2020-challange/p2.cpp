#include <iostream>
#include <vector>

#define ll long long


using namespace std;

void chefAndEasyQueries() {
  ll nDays;
  ll kAnswerEachDay;
  cin >> nDays >> kAnswerEachDay;
  vector<ll> queries(nDays);
  for (ll i = 0; i < nDays; i++) {
    cin >> queries.at(i);
  }
  ll diff;
  ll i = 0;
  while (1) {
    diff = queries.at(i) - kAnswerEachDay;
    if ((queries.at(i) < kAnswerEachDay)) {
      cout << i + 1 << '\n';
      return;
    }
    if (i < nDays - 1) {
      queries.at(i + 1) += diff;
    } else {
      ll thissize = 0;
      thissize = (queries.back() / kAnswerEachDay) + 1;
      thissize += i;
      cout << thissize << '\n';
      return;
    }

    i++;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    chefAndEasyQueries();
  }

  return 0;
}