// https://practice.geeksforgeeks.org/problems/good-or-bad-string/0/?problemStatus=unsolved&difficulty[]=-1&page=1&sortBy=submissions&query=problemStatusunsolveddifficulty[]-1page1sortBysubmissions#

#include <iostream>
using namespace std;

void goodbad() {
  string s;
  int v = 0;
  int c = 0;
  int flag = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != '?') {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u') {
        v++;
        c = 0;
      } else {
        c++;
        v = 0;
      }
    }
    if (s[i] == '?') {
      v++;
      c++;
    }
    if (v > 5 || c > 3) {
      flag = 1;
      break;
    }
  }

  if (flag == 1) {
    cout << 0 << '\n';
  } else {
    cout << 1 << '\n';
  }
}

int main() {
  // code
  int t;
  cin >> t;
  while (t--) {
    goodbad();
  }
  return 0;
}