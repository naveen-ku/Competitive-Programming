// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define mod 1000000007
// #define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
// // #define For(i, a, b, inc) for (int i = a; i < b; i += inc)
// // #define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)
// #define PI 3.1415926535897932384626433832795

// ll smalld(ll c) {
//   ll i = 1;
//   while (i <= c) {
//     i = i * 2;
//   }
//   return i;
// }

// void intxor() {
//   ll c;
//   cin >> c;
//   ll td = smalld(c);
//   //   cout << "td: " << td << '\n';
//   vector<pair<int, int>> vp;
//   ll prod = 0;
//   for (ll i = 1; i < td; i++) {
//     ll second = i ^ c;
//     if (second < td && second > 0) {
//       vp.push_back(make_pair(i, second));
//         }
//   }
//   for (auto i = vp.begin(); i != vp.end(); i++) {
//     if (prod < ((*i).first) * ((*i).second)) {
//       prod = ((*i).first) * ((*i).second);
//       //   cout << "first: " << ((*i).first) << '\t' << "second: " <<
//       //   ((*i).second)
//       //        << '\n';
//       //   cout << prod << '\n';
//     }
//   }
//   cout << prod << '\n';
// }

// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(0);
//   ll t;
//   cin >> t;
//   while (t--) {
//     intxor();
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define fo(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define For(i, a, b, inc) for (int i = a; i < b; i += inc)
// #define RFor(i, a, b, inc) for (int i = a; i < b; i -= inc)
#define PI 3.1415926535897932384626433832795

ll smalld(ll c) {
  ll i = 1;
  int count = 0;
  while (i <= c) {
    i = i * 2;
    count++;
  }
  return count;
}

void intxor() {
  ll c;
  cin >> c;
  ll td = smalld(c);
  td = td - 1;
  ll twod = pow(2, td);
  ll second = twod - 1;
  ll first = second ^ c;
  ll prod = first * second;
  cout << prod << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    intxor();
  }

  return 0;
}