#include <iostream>
#include <vector>
using namespace std;

const int MAXL = 1000002;

int main(){
	vector<int> bucket(MAXL);

	int n; 
	cin >> n;
	vector<int> input(n);
	for(int i = 0; i < n; ++i){
		cin >> input[i];
		++bucket[input[i]];
	}

	int carry = 0;
	int minimum_operations = 0;
	for(int i = bucket.size() - 1; i > 0; --i){
		carry += bucket[i];
		if(carry > 1){
			minimum_operations += --carry;
		} else {
			carry -= carry;
		}
	}
	cout << minimum_operations << "\n";
	return 0;
}
