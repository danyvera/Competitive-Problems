//problema en Omega Up: Writing
//Deciphering the Mayan Writing
//link del problema en Omega Up: https://omegaup.com/arena/problem/writing/#problems

#include <bits/stdc++.h>
using namespace std;
#define optimizar ios_base::sync_with_stdio(0); cin.tie(0)
#define LETTERS 500

int n, m;
string p;
int cubeta[LETTERS];
int final[LETTERS];
int dif, resp;

void procesa(string s){
    for(int i=0; i < s.size(); i++)
        cubeta[s[i]]++;
}

void recorre() {
    dif= m;
    int ini=0, fin= -1;

    while(fin < (m-1)) {
        fin++;
        final[p[fin]]++;
        if(final[p[fin]] <= cubeta[p[fin]])
            dif--;
    }

    if(!dif)
        resp++;

    while(fin < n) {
        if(final[p[ini]] <= cubeta[p[ini]])
            dif++;
        final[p[ini]]--;
        ini++;
        fin++;
        final[p[fin]]++;
        if(final[p[fin]] <= cubeta[p[fin]])
            dif--;

        if(!dif)
            resp++;
    }
}

int main() {
	optimizar;

	cin >> m >> n;
	string s;
	cin >> s >> p;

  	procesa(s);
  	recorre();

  	cout << resp << "\n";

	return 0;
}
