#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 5;
    int *p;
    int **q;
    int ***r;
    p = &x;
    q = &p;
    r = &q;
    cout  << setw(45) << "Value of x: " << x << '\n';
    cout<<"----------------------------------------------------------------------"<<'\n';
    cout  << setw(45) << "Address of x in memory (&x): " << &x << '\n';
    cout  << setw(45) << "Value stored by p: " << p << '\n';  // contains the address of x;
    cout  << setw(45) << "Address of pointer p in memory (&p): " << &p << '\n';
    cout  << setw(50) << "Dereferencing the value of pointer p (*p): " << *p << '\n';
    cout<<"----------------------------------------------------------------------"<<'\n';
    cout  << setw(45) << "Value stored by q: " << q << '\n';  // contains the address of p;
    cout  << setw(45) << "Address of pointer q in memory (&q): " << &q << '\n'; 
    cout  << setw(45) << "Dereferencing the value of pointer q (*q): " << *q << '\n';
    cout  << setw(45) << " *(*q): " << *(*q) << '\n';
    cout<<"----------------------------------------------------------------------"<<'\n';
    cout  << setw(45) << "Value stored by r: " << r << '\n';  // contains the address of r;
    cout  << setw(45) << "Address of pointer r in memory (&r): " << &r << '\n'; 
    cout  << setw(45) << "Dereferencing the value of pointer r (*r): " << *r << '\n';
    cout  << setw(45) << " *(*r): " << *(*r) << '\n';
    cout  << setw(45) << " *(*(*r)): " << *(*(*r)) << '\n';
    return 0;
}