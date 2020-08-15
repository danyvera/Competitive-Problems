#include<bits/stdc++.h>
using namespace std;

//link para encontrar el problema en URAL: https://acm.timus.ru/problem.aspx?space=1&num=2001
//link para encontrar el problema en vjudge: https://vjudge.net/contest/387485#problem/N

int main(){
  int a1,b1,a2,b2,a3,b3,afinal,bfinal;
  vector<int> a(3,0);
  vector<int> b(3,0);
  for (int i =1; i<4; i++){
    cin>> a[i] >> b[i];
  }

  afinal=a[1]-a[3];
  bfinal=b[1]-b[2];

    cout<<afinal <<" "<< bfinal;
  
}
