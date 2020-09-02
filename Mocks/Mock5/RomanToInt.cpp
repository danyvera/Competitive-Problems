#include<bits/stdc++.h>
using namespace std;
#include <iostream>
//LINK DEL PROBLEMA EN LeetCode: https://leetcode.com/problems/roman-to-integer/submissions/
// convertir el string que representa el numero romano a un entero

int RomanToInt(const string &s) {
	int result=0;
	int length=s.size();
	int value=0, previousValue=0;
	for(int i=length-1; i>-1; i--){
		if(s[i]=='I'){value=1;}
		if(s[i]=='V'){value=5;}
		if(s[i]=='X'){value=10;}
		if(s[i]=='L'){value=50;}
		if(s[i]=='C'){value=100;}
		if(s[i]=='D'){value=500;}
		if(s[i]=='M'){value=1000;}

// NOS CONVIENE EMPEZAR A LEER LOS CARACTERES POR EL FINAL
//si el valor de la letra anterior es mayor a la letra siguiente, entonces se lo estamos al resultado final: IV= 5-1=4
//y si en caso contrario, es mayor, entonces lo sumamos: XXI = 1+10+10=21
		if(previousValue>value){
			result-=value;
		}
		else{
			result+=value;
		}
		previousValue=value;
	}
	return result;
}

int main(){
	string s;
	cin >> s;
	cout<<RomanToInt(s);
	return 0;
}
