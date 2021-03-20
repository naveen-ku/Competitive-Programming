#include <iostream>

using namespace std;

int main() {
    char *str2 = (char*)"Hello world";
    cout << "str2: " << str2 << '\n';
    cout << "*str2: " << *str2 << '\n';

    str2++;
    cout << "str2: " << str2 << '\n';
    cout << "*str2: " << *str2 << '\n';

    return 0;
}