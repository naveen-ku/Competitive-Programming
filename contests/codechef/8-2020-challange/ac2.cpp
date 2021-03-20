#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void linearChess() {
    int N, K, input = 0;
    cin >> N;
    cin >> K;
    vector<int> P;
    for (int i = 0; i < N; i++) {
        cin >> input;
        if (input <= (K / 2) && K%input ==0) {
            P.push_back(input);
        }
    }

    sort(P.begin(), P.end());
    
    if(P.size() == 0){
        cout<<"-1"<<endl;
    }else{
        cout <<P.back()<<endl;

    }

}

int main() {
    int T;
    cin >> T;
    while (T) {
        linearChess();
        T--;
    }
    return 0;
}