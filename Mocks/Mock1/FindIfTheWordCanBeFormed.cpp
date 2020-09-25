#include <iostream>
#include <vector>
using namespace std;
//DECIR SI ES POSIBLE O NO FORMAR LA PALABRA CON EL STRING DE CARACTERES QUE NOS DAN
//TODAS LAS LETRAS SON MINUSCULAS 

int main(){
	string wanted;
	cin >> wanted;

	string charactersAvailable;
	cin >> charactersAvailable;

	//cout << charactersAvailable.size() << "\n";
	//ToLower(charactersAvailable);
	//cout << charactersAvailable.size() << "\n";

	vector<char> bucket(30, 0);
	for(int i = 0; i < charactersAvailable.size(); ++i){
		++bucket[charactersAvailable[i] - 'a'];
	}

	for(int i = 0; i < wanted.size(); ++i){
		if(bucket[wanted[i] - 'a'] == 0){
			cout << "Impossible\n";
			return 0;
		}

		--bucket[wanted[i] - 'a'];
	}

	cout << "Is possible\n";
	return 0;
}
