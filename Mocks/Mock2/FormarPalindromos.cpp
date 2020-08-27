#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>

bool isPalindrome(string &s){
//Given a string, determine if a permutation of the string could form a palindrome.
	//"code" -> False, 	"aab" -> True, 	"carcrac" -> True.

	int n=s.length(), even_occurrences=0;
	vector <int> aggregator(26,0); 
 	for(int i=0; i<n; i++){
 		//usaremos una cubeta que nos guarde el numero de ocurrencias que hay por cada letra
		aggregator[s[i] - 'a']++; //esta instruccion lo que hace es encontrar la distancia que hay entre la letra de la posicion i y la letra 'a', 
									//para despues agregarle 1 al contador de la letra en esa posicion
	}
	for(int i=0; i<26;i++){
		if(aggregator[i]%2 !=0){
			even_occurrences++;
		}
	}

	if(even_occurrences > 1){
 		return false;
	}	
	else{
		return true;
	}
}

int main(){
	string s;
	cin >> s;
	if(isPalindrome(s)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
