#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>

link para encontrar el problema en leetcode: https://leetcode.com/problems/robot-return-to-origin/

bool judgeCircle(string &moves) {
	//It starts in (0,0) and after some movements (up, down,left,right) we want to know if it ends also in (0,0)
	//if it does, then return "true", and if it does not end in (0,0) then return false.
	int x=0, y=0;
	int movements=moves.size();
	for(int i=0; i<movements; i++){
		if(moves[i]=='U'){
			y++;
		}
		else if(moves[i]=='D'){
			y--;
		}
		else if(moves[i]=='R'){
			x++;
		}	
		else if(moves[i]=='L'){
			x--;
		}
	}
	if(x==0 && y==0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	string moves;
	cin >> moves;
	if(judgeCircle(moves)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
