// Boyer moore voting algorithm
/*
https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/?problemStatus=unsolved&difficulty[]=-1&page=1&sortBy=submissions&query=problemStatusunsolveddifficulty[]-1page1sortBysubmissions#
*/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size) {

  // your code here
  int max_element = a[0], count = 1;
  for (int i = 0; i < size; i++) {
    if (count == 0) {
      max_element = a[i];
      count = 1;
    } else if (a[i] == max_element) {
      count++;
    } else {
      count--;
    }
  }
  count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] == max_element) {
      count++;
    }
  }

  if (count > size / 2) {
    return max_element;
  } else {
    return -1;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    cout << majorityElement(arr, n) << endl;
  }
  return 0;
}