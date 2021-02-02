//Problema en OmegaUp: Plantas vs Plantas
//Codigo resolviendo con Pilas
//link del problema en OmegaUp> https://omegaup.com/arena/problem/plantas-vs-plantas/

#include <iostream>
#include <stdio.h>

using namespace std;

int A[1000002];
int pila[1000002];
int cuantos[1000002];
int n;
int fin;
int mayor;

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>A[i];
    } 
    for(int i=n; i>0; i--){
        int aux=0;
        while(A[i]>pila[fin] && fin>0){
            if(cuantos[fin]>aux)
                aux=cuantos[fin];
            else
                aux++;
            fin--;    
        }    
        pila[++fin]=A[i];
        cuantos[fin]=aux;
        if(aux>mayor)
            mayor=aux;
    }
    cout<<mayor<<endl;
    return 0;    
}
