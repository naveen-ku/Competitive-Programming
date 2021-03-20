#include<iostream>

using namespace std;

int main(){
    int inputNumber;
    cin>>inputNumber;
    int reverseNumber = 0;
    int j=1;
    while(inputNumber/j !=0){
        reverseNumber = (reverseNumber * 10) + (inputNumber %10);
        inputNumber = inputNumber/10;
    }
    cout << reverseNumber;
    return 0;
}           