#include <bits/stdc++.h>

using namespace std;

void adaMatrix() {
    long int n, count = 0;
    cin >> n;
    long int arr[n+1][n+1];
    for (long int i = 1; i <= n; i++) {
        for (long int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int j=1;j<=n;j++){
        if(arr[1][j] != j){
            count++;
            int i=1;
            while(i < j){
                arr[1][i] = (i-1)*n +1;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin >> t;
    while (t--) {
        adaMatrix();
    }
    return 0;
}