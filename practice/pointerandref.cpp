#include <bits/stdc++.h>
using namespace std;
int main() {
    int x=10, y=20;
    int *ptr = &x;
    int &ref =y;
    ref++;
    cout<<"y: "<<y<<'\n';
    cout<<"&y: "<<&y<<'\n';
    cout<<"------Before------"<<'\n';
    cout<<"x: "<<x<<'\n';
    cout<<"&x: "<<&x<<'\n';
    cout<<"ptr: "<<ptr<<'\n';
    cout<<"&ptr: "<<&ptr<<'\n';
    cout<<"*ptr: "<<*ptr<<'\n';
    *ptr++;                         // value in ptr is incremented first and then deference
    cout<<"------After------"<<'\n';
    cout<<"x: "<<x<<'\n';
    cout<<"&x: "<<&x<<'\n';
    cout<<"ptr: "<<ptr<<'\n';
    cout<<"&ptr: "<<&ptr<<'\n';
    cout<<"*ptr: "<<*ptr<<'\n';
    return 0; 
}