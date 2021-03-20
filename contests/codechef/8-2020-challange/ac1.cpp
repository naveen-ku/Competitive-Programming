#include <iostream>
#include<cmath>

using namespace std;

void war(){
    int sum=0,H,P;
    cin>>H;
    cin>>P;
    while(P>=1){
        sum = sum +P;
        P = floor(P/2);
    }
    if(sum>=H){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
}

int main() {
    int T;
    cin>>T;
    while(T){
        war();
        T--;
    }
    return 0;
}