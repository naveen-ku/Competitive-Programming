#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int temp;
	int i =0;
	std::vector<int> arr ;
	while(cin >> temp){
	    arr.push_back(temp);
	}
	
    while(arr[i]!=42){
        cout<<arr[i]<<endl;
        i++;
    }
    // cout << arr.size();
	return 0;
}
