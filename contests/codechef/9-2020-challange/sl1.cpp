#include <bits/stdc++.h>

#define lli long long int ;
#define li long int ;
#define ld long double ;

using namespace std;

void tree(){
    int n;
    long int input;
    // vector<int> v;
    set<int>s;
    cin >>n;
    for( int i=0; i<n;i++){
        cin >> input;
        // v.push_back(input);
        s.insert(input);
    }
    if(s.find(0) != s.end()){
    cout << s.size() - 1<<"\n";
    
    }else {
    cout << s.size()<<"\n";

    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        tree();
    }
    return 0;
}