#include <bits/stdc++.h>
using namespace std;

void modeOfFreq() {
    int n, input, counter;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        cin >> input;
        vec.push_back(input);
    }

    vector<int> freqvec;
    for(int i=0; i<n;i++){
        
    }


    // map<int, int, greater<>> freqmap;
    // for (auto i : vec) {
    //     int counter = count(vec.begin(), vec.end(), i);
    //     freqmap.insert({i, counter});
    // }

    // cout << "KEY\nfreqmapuency\n";
    // for (auto itr = freqmap.begin(); itr != freqmap.end(); ++itr) {
    //     cout << itr->first << '\t' << itr->second << '\n';
    // }
    

    // auto firstit = freqmap.begin();
    // int freqval = firstit->first;
    // int freqvalfreq = firstit->second;
    // for(auto itr = freqmap.begin(); itr !=freqmap.end(); ++itr){
    //     if(itr->second == freqvalfreq && itr->first < freqval){
    //         cout<<itr->second<<"\n";
    //         return;
    //     }
    // }
    // cout << freqvalfreq<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        modeOfFreq();
    }

    return 0;
}