#include<iostream>

using namespace std;

void displaystr(char *ps){
    cout<<"Method 1: "<<ps<<'\n';
    cout<<"Method 2: ";
    while(*ps){
        cout<<*ps;
        ps++;
    }
}

int main(){
    char str[] = "Hello World";
    displaystr(str);
    cout<<'\n';
    return 0;
}