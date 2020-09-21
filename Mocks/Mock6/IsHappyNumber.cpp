#include<bits/stdc++.h>
using namespace std;
#include <iostream>

/*bool isHappyNumber(int n){
	if(n == 1)
		return true;
	if(n >= 2 and n <= 9)
		return false;
	int AddSquareDigits=0;
	while(n!=0){
		AddSquareDigits+= (n%10)*(n%10);
		n= n/10;
	}
	return isHappyNumber(AddSquareDigits);

}*/
bool HappyNumber(int n){
	int AddSquareDigits=-1;
	while(AddSquareDigits != 0){
		while(n!=0){
			AddSquareDigits+= (n%10)*(n%10);
			n= n/10;
		}
		n = AddSquareDigits;
	}
	if(AddSquareDigits==1){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	cin>>n;
	cout<<isHappyNumber(n);
	return 0;
}
