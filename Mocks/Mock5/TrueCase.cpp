#include<bits/stdc++.h>
using namespace std;
#include <iostream>
//LINK DEL PROBLEMA EN LeetCode: https://leetcode.com/problems/detect-capital/
/*
Dado un string, decir si es un caso verdadero o un caso falso
Devolvemos "verdadero" si se cumple uno de los siguientes casos:
1.all capitals: USA -> true
2.none are capitals: jauanaas -> true
3.just the first is capital: Lilana -> true
Y devolvemos "falso" en cualquier caso distinto a los 3 anteriores
ASsafTG -> false 
*/

bool TrueCase(string &s){
	int length= s.size(), counter=0;
	for(int i=0; i<length; i++){
		if(s[i]== tolower(s[i])){
			counter++; 
		}
	}
	if(counter==length){
		return true; //oscar
	}
	else if(counter==length-1){
 		if(s[0]==toupper(s[0])){
			return true; //Oscar
		}
		else{
			return false; //osCar 
		}
	}
	else if(counter==0){\
		return true;// OSCAR
	}
	else{
		return false;
	}
}


int main(){
	string s;
	cin >> s;
	if(TrueCase(s)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
