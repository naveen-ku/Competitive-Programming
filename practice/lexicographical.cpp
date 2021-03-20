#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1;
    cout<<"s1: ";
    cin>>s1;
    char temp;
    for (int i = 0; i < s1.length(); i++) {
        for (int j = i + 1; j < s1.length() + 1; j++) {
            if (s1[i] > s1[j]) {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }

    cout <<s1<<endl;
}