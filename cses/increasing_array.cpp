#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int res = 0;
    cin >> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            res += 1LL * (arr[i] - arr[i + 1]);
            arr[i+1] = arr[i];
        }
    }
    cout<<res;
    return 0;
}
