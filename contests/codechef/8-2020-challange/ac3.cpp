#include <iostream>

using namespace std;

int digitCount(int x) {
    if (x % 9 == 0) {
        return x / 9;
    } else {
        return (x / 9) + 1;
    }
}

void cardgame() {
    int pc, pr;
    int win, count;
    int countpc, countpr;
    cin >> pc;
    cin >> pr;
    countpc = digitCount(pc);
    countpr = digitCount(pr);
    if (countpc == countpr) {
        cout << 1 << " " << countpc << endl;
    } else {
        if (pc < pr) {
            win = 0;
            count = digitCount(pc);
            cout << win << " " << count << endl;
        } else {
            win = 1;
            count = digitCount(pr);
            cout << win << " " << count << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t) {
        cardgame();
        t--;
    }
    return 0;
}