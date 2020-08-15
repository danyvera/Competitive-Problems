#include<bits/stdc++.h>
using namespace std;

//link para encontrar el problema en AtCoder: https://atcoder.jp/contests/abc129/tasks/abc129_a
//link para encontrar el problema en vJudge: https://vjudge.net/contest/387485#problem/G

int main()
{
    int n1, n2, n3, mayor, suma;
    cin>>n1 >> n2>> n3;

    if ( n1 >= n2 && n1 >= n3 ){
        mayor=n1;
    }
    else{
        if ( n2 > n3 ){
            mayor=n2;
        }
        else{
            mayor=n3;
        }
    }
    
    suma=n1+n2+n3-mayor;
    cout<<suma;

}
