// https://www.geeksforgeeks.org/design-and-implement-special-stack-data-structure/

#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[], int n);
void _getMinAtPop(stack<int> s);

/* inserts elements of the array into
   stack and return the stack
*/
stack<int> _push(int arr[], int n) {
    // your code here
    stack<int> s;
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }
    return s;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int> s) {
    // your code here
    stack<int> s1, aux;
    int n = s.size();
    int arr[n];

    for (int i = 0; i < n; i++) {
        s1.push(s.top());
        s.pop();
    }
    for (int i = 0; i < n; i++) {
        arr[i] = s1.top();
        s1.pop();
    }
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
        if (aux.empty()) {
            aux.push(arr[i]);
        } else {
            if (aux.top() >= arr[i]) {
                aux.push(arr[i]);
            }else {
                aux.push(aux.top());
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << aux.top()<<" ";
        aux.pop();
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        stack<int> mys = _push(arr, n);
        _getMinAtPop(mys);
        cout << endl;
    }
    return 0;
}
