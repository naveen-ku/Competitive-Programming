#include <bits/stdc++.h>

using namespace std;


int countFreq(string &pat, vector<char> &txt) 
{ 
    int M = pat.length(); 
    int N = txt.size(); 
    int res = 0; 
    
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
} 
    

void cherryPyramid(string s, string t) {
    int n, j = 0;
    vector<char> vc;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (j == s.length()) {
            j = 0;
        }
        for (j; j < s.length(); j++) {
            vc.push_back(s[j]);
            break;
        }
        j++;
    }
    // for (auto i : vc) {
    //     cout << i;
    // }

    int counter = countFreq(t,vc);
    cout<<counter<<endl;

}

int main() {
    string s;
    string t;
    int q;
    cin >> s;
    cin >> t;
    cin >> q;
    while (q--) {
        cherryPyramid(s, t);
    }

    return 0;
}