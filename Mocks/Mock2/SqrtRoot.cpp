#include<bits/stdc++.h>
using namespace std;
#include <iostream>
//hacer mi propia funcion para encontrar la raiz entera de un numero 
//si la raiz es 2, imprimo 2
//si la raiz es 2.8, imprimo 2 tambien, solamente imprimo la parte entera de la raiz
int SqrtNumber(int number){
	int lower_limit=0;
	int upper_limit=number; 
	int SquareRoot=0;
	//bool flag=false;

	while(upper_limit>lower_limit){
		SquareRoot=(lower_limit + upper_limit)/2;
		//if (SquareRoot*SquareRoot==number){
		//	flag=true;
		//}
		else if(SquareRoot*SquareRoot>number){
			upper_limit=SquareRoot-1;
		}
		else{
			lower_limit=SquareRoot;
		}
	}
	return lower_limit;
}

int main(){
	int number;
	cin>>number;
	cout<<SqrtNumber(number);
	return 0;
}
