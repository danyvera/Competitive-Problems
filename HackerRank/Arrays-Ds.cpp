#include<bits/stdc++.h>
using namespace std;

//link del problema en HackerRank: https://www.hackerrank.com/challenges/arrays-ds/problem
//link del problema en vJudge: https://vjudge.net/contest/387485#problem/E

int main(){
	int n;
  cin>>n; 
  int numeros[n],invertidos[n];

    for(int i=0;i<n;i++){
      cin>>numeros[i]; 
    }  
    for(int i=0;i<n;i++) {
    invertidos[i]=numeros[n-(i+1)]; 
    } 
    for(int i=0;i<n;i++) {
    cout<<invertidos[i]<<" "; 
    }
}
