#include<iostream>

using namespace std;

int main(){
    int inputNumber;
    cin>>inputNumber;
    int j = 10;
    int count = 1;
    while((inputNumber / j) !=0){
        j = j*10;
        count++;
    }
    cout << count<<endl;

    return 0 ;
}