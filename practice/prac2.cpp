#include <iostream>
using namespace std;

int BixFunction(int m) {
    m *= m;
    return ((10) * (m /= m));
}
int main() {
    int c = 9, *d = &c, e;
    int &z = e;
    e = BixFunction(c-- % 3 ? ++*d : (*d *= *d));
    z = z + e / 10;
    cout << c << " " << e;
    return 0;
}