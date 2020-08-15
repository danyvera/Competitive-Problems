#include<bits/stdc++.h>
using namespace std;

//link para encontrar el problema en vjudge: https://vjudge.net/contest/387485#problem/L
//link para encontrar el problema en AtCoder: https://atcoder.jp/contests/abc174/tasks/abc174_b?lang=en

int main(){
	long double N,D,a2,b2,ab2,nuevaA,nuevaB, contador=0;
  long double distancia;
  cin>>N>>D; 

  vector<int> a(N,0);
  vector<int> b(N,0);

  for (int i =0; i<N; i++){
    cin>> a[i] >> b[i];
    if (a[i]<0){
      nuevaA=a[i]*(-1);
    }
    else{
      nuevaA=a[i];
    }

    if (b[i]<0){
      nuevaB=b[i]*(-1);
    }
    else{
      nuevaB=b[i];
    }
    a2=nuevaA*nuevaA;
    b2=nuevaB*nuevaB;
    ab2=a2+b2;
    distancia= sqrt(ab2);
     //cout<< distancia<< endl;
    if(distancia<=D){
      contador++;
    }
  }

    cout<< contador;
}
