#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K, input = 0;
    cin >> N;
    cin >> K;
    vector<int> P;

    // Take inputs in vector
    for (int i = 0; i < N; i++) {
        cin >> input;
        P.push_back(input);
    }

    // Print vector 1
    // for(auto j=P.begin(); j!=P.end();j++){
    //     cout<<*j<<endl;
    // }

    // Print vector 2
    // for(auto j=0; j<P.size();j++){
    //     cout<<P.at(j)<<endl;
    // }

    // Print vector 3
    // for(auto x : v){
    // cout<<x<<endl;
    // }
    return 0;
}