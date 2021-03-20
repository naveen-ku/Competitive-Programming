#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
// #define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
#define fob(i, a, b, dec) for (int i = a; i < b; i -= dec)
#define PI 3.1415926535897932384626433832795

// Smallest Larger Than Given
// ll smtg(vector<ll> h, ll start, ll end, ll diff) {
//   int middle = (end - 1) / 2;
//   if (h[middle] >= diff && h[middle - 1] < diff)
//     return middle;
//   else if (h[middle] > diff && h[middle - 1] > diff)
//     return smtg(h, start, middle, diff);
//   else
//     return smtg(h, middle, end, diff);
// }

// void watchCPL() {
//   ll n, k, input;
//   ll counter = 0;
//   ll sum1 = 0, sum2 = 0;
//   ll temp;
//   ll res = 0;
//   cin >> n >> k;
//   vector<ll> h;
//   fo(i, 0, n, 1) {
//     cin >> input;
//     h.push_back(input);
//   }

//   while (counter != 1 && !h.empty()) {
//     sort(h.begin(), h.end());
//     temp = h[h.size() - 1];
//     h.pop_back();
//     sum1 += temp;
//     res++;
//     if (sum1 >= k) {
//       counter++;
//       break;
//     }
//     ll diff = k - sum1;
//     auto it = find(h.begin(), h.end(), diff);
//     if (sum1 < k && it != h.end()) {
//       res++;
//       counter++;
//       std::swap(h[it - h.begin()], h[h.size() - 1]);
//       h.pop_back();
//       sort(h.begin(), h.end());
//       break;
//     } else {
//       ll pos = smtg(h, 0, h.size(), diff);
//       std::swap(h[pos], h[h.size() - 1]);
//       res++;
//       counter++;
//       h.pop_back();
//       sort(h.begin(), h.end());
//       break;
//     }
//   }
//   while (counter != 2 && !h.empty()) {
//     sort(h.begin(), h.end());
//     temp = h[h.size() - 1];
//     h.pop_back();
//     sum2 += temp;
//     ll diff = k - sum2;
//     res++;
//     if (sum2 >= k) {
//       counter++;
//       break;
//     }

//     auto it = find(h.begin(), h.end(), diff);
//     if (sum2 < k && it != h.end()) {
//       res++;
//       counter++;
//       std::swap(h[it - h.begin()], h[h.size() - 1]);
//       h.pop_back();
//       sort(h.begin(), h.end());
//       break;
//     } else {
//       ll pos = smtg(h, 0, h.size(), diff);
//       res++;
//       counter++;
//       std::swap(h[pos], h[h.size() - 1]);
//       h.pop_back();
//       sort(h.begin(), h.end());
//       break;
//     }
//   }
//   if (counter == 2) {
//     std::cout << res << "\n";
//     return;
//   } else {
//     std::cout << -1 << "\n";
//     return;
//   }
// }

int findEqualOrLarger(vector<ll> h, ll diff) {
  ll result = INT_MIN;
  for (ll i = 0; i < h.size(); i++) {
    if (h[i] >= diff) {
      return h[i];
    }
  }
  return result;
}

void watchCPL() {
  ll n, k, input;
  ll counter = 0;
  ll sum1 = 0, sum2 = 0;
  ll temp;
  ll res = 0;
  ll diff;
  cin >> n >> k;
  vector<ll> h;
  fo(i, 0, n, 1) {
    cin >> input;
    h.push_back(input);
  }
  // std::cout << "Vector: ";
  // for (auto iter = h.begin(); iter != h.end(); iter++) {
  //   std::cout << *iter << " ";
  // }
  // std::cout << "\n";
  // First step
  std::sort(h.begin(), h.end());
  // std::cout << "Sorted Vector: ";
  // for (auto iter = h.begin(); iter != h.end(); iter++) {
  // std::cout << *iter << " ";
  // }
  // std::cout << "\n";
  temp = h[h.size() - 1];
  h.pop_back();
  // std::cout << "After first pop Vector: ";
  // for (auto iter = h.begin(); iter != h.end(); iter++) {
  // std::cout << *iter << " ";
  // }
  // std::cout << "\n";
  // std::cout << "temp: " << temp << '\n';
  res++;
  // std::cout << "res: " << res << '\n';
  sum1 += temp;
  // std::cout << "sum1: " << sum1 << '\n';
  diff = k - sum1;
  // std::cout << "diff: " << diff << '\n';
  while (counter != 1 && !h.empty()) {
    if (sum1 >= k) {
      counter = 1;
      break;
    }
    std::sort(h.begin(), h.end());
    // std::cout << "Sorted Vector: ";
    // for (auto iter = h.begin(); iter != h.end(); iter++) {
    // std::cout << *iter << " ";
    // }
    // std::cout << "\n";
    ll t = findEqualOrLarger(h, diff);
    // std::cout << "t: " << t << '\n';
    if (t >= diff) {
      auto it = find(h.begin(), h.end(), t);
      // std::cout << "*it" << *it << "\n";
      sum1 += *it;
      // std::cout << "sum1 " << sum1 << '\n';

      std::swap(h[it - h.begin()], h[h.size() - 1]);
      // std::cout << "h[last]: " << h[h.size() - 1] << "\n";
      h.pop_back();
      // std::cout << "After Popping Vector: ";
      // for (auto iter = h.begin(); iter != h.end(); iter++) {
      // std::cout << *iter << " ";
      // }
      res++;
      // std::cout << "res: " << res << "\n";
      counter = 1;
      break;
    } else {
      temp = h[h.size() - 1];
      // std::cout << "Inside else loop temp: " << temp << "\n";
      sum1 += temp;
      // std::cout << "Inside else loop sum1" << sum1 << "\n";
      diff = k - sum1;
      // std::cout << "Inside else loop diff: " << diff << "\n";
      h.pop_back();
      // std::cout << "Inside else loop After Popping Vector: ";
      // for (auto iter = h.begin(); iter != h.end(); iter++) {
      // std::cout << *iter << " ";
      // }
      res++;
      // std::cout << "Inside else loop res: " << res << "\n";
    }
  }

  if (h.empty()) {
    std::cout << -1 << "\n";
    return;
  }
  // Second step
  // std::cout << "-------------------------------------------------" << '\n';

  // std::cout << "Second  Vector: ";
  // for (auto iter = h.begin(); iter != h.end(); iter++) {
  // std::cout << *iter << " ";
  // }
  // std::cout << "\n";
  std::sort(h.begin(), h.end());
  // std::cout << "Second step sort Vector: ";
  // for (auto iter = h.begin(); iter != h.end(); iter++) {
  // std::cout << *iter << " ";
  // }
  // std::cout << "\n";
  temp = h[h.size() - 1];
  // std::cout << "temp: " << temp << "\n";
  h.pop_back();
  // std::cout << "Second step after pop Vector: ";
  // for (auto iter = h.begin(); iter != h.end(); iter++) {
  // std::cout << *iter << " ";
  // }
  // std::cout << "\n";
  res++;
  // std::cout << "res: " << res << "\n";
  sum2 += temp;
  // std::cout << "sum2: " << sum2 << "\n";
  diff = k - sum2;
  // std::cout << "diff: " << diff << "\n";
  while (counter != 2 && !h.empty()) {
    if (sum2 >= k) {
      counter = 2;
      break;
    }
    // std::cout << " before sort Vector: ";
    // for (auto iter = h.begin(); iter != h.end(); iter++) {
    // std::cout << *iter << " ";
    // }
    std::sort(h.begin(), h.end());
    // std::cout << "After sort Vector: ";
    // for (auto iter = h.begin(); iter != h.end(); iter++) {
    // std::cout << *iter << " ";
    // }
    // std::cout << "\n";
    ll t = findEqualOrLarger(h, diff);
    // std::cout << "t: " << t << "\n";
    if (t >= diff) {
      auto it = find(h.begin(), h.end(), t);
      // std::cout << "*it: " << *it << "\n";
      sum2 += *it;
      // std::cout << "sum2: " << sum2 << "\n";
      std::swap(h[it - h.begin()], h[h.size() - 1]);
      h.pop_back();
      // std::cout << "After pop sort Vector: ";
      // for (auto iter = h.begin(); iter != h.end(); iter++) {
      // std::cout << *iter << " ";
      // }
      res++;
      // std::cout << "res: " << res << "\n";
      counter = 2;
      break;
    } else {
      temp = h[h.size() - 1];
      // std::cout << "Inside else loop temp: " << temp << "\n";
      sum2 += temp;
      // std::cout << "Inside else loop sum2: " << sum2 << "\n";
      diff = k - sum2;
      // std::cout << "Inside else loop diff: " << diff << "\n";
      h.pop_back();
      // std::cout << "Inside else loop pop Vector: ";
      // for (auto iter = h.begin(); iter != h.end(); iter++) {
      // std::cout << *iter << " ";
      // }
      res++;
      // std::cout << "Inside else loop res: " << res << "\n";
    }
  }

  if (counter == 2) {
    std::cout << res << "\n";
    return;
  } else {
    std::cout << -1 << "\n";
    return;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  std::cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    watchCPL();
  }

  return 0;
}