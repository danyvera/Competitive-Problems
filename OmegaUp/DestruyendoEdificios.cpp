//Problema de OmegaUp : Destruyendo Edificios
//Codigo resolviendo con Pilas
//link del problema: https://omegaup.com/arena/problem/DesEdificios/#problems

#include <iostream>
#include <stdio.h>

using namespace std;

long long int A[1000002];
struct elemento{
    long long int h;
    long long int t;    
};
elemento pila[1000002];
long long int fin;
long long int n;
long long int mayor;
long long int aux, temp, T;

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>A[i];
    }   
    for(int i=1; i<=n; i++){
        temp=0, T=0;
        while(pila[fin].h>=A[i] && fin>0){
            T+=pila[fin].t;
            temp=pila[fin].h*T;
            if(temp>mayor)
                mayor=temp;
            fin--;        
        }    
        pila[++fin].h=A[i];
        pila[fin].t=T+1;
    }
    T=0;
    while(fin!=0){
        T+=pila[fin].t;
        temp=pila[fin].h*T;
        if(temp>mayor)
            mayor=temp;
        temp--;   
        fin--;    
    }
    cout<<mayor<<endl;
    return 0;         
}
