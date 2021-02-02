//Problema en OmegaUp: Canguros 
//Resolviendo el problema implementando una COLA, queue
//link del problema en OmegaUp: https://omegaup.com/arena/problem/Canguros

#include <iostream>
#include <queue>

#define op_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
    op_io
    
    int n,c;
    cin>>c>>n;
    
    char accion;
    long long actual;
    queue<long long> canguros;
    
    while(n--){
        cin>>accion;
        
        switch(accion){
        
          case 'N':
              cin>>actual;
              canguros.push(actual);
              break;
              
          case 'A':
              c-=canguros.front() + 1;
              canguros.pop();
              break;
              
          case 'C':
              cout << canguros.size() << "\n";
              break;
              
          case 'R':
              cout << c << "\n";
              break;
              
        }
    }
    return 0;
}
