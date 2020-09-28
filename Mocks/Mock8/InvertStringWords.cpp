#include<bits/stdc++.h>
using namespace std;
#include <vector>
#include <iostream>
#include <string>
//invertir el orden de una sentencia
//mi input esla cadena original: "Esta es una prueba " 
//y mi output es la sentencia invertida-> prueba una es Esta".
 
void invertStringWords(char[]);
 
int main() {
    char words[] = "Esta es una prueba";
    cout << endl << "Sentencia original: \t" << words << endl;
    invertStringWords(words);
    system("pause");
    return 0;
}
 
void invertStringWords(char words[]) {
 
    //Arreglo con la longitud de los caracteres en la sentencia
    int arraylength = strlen(words);
 
    // índice para el caracter que está siendo leído
    int a=0;
     
    // String para almacenar la última palabra formada del arreglo
    string invert ="";
     
    // Arreglo de caracteres con la cadena final de palabras invertidas
    char invertedWords[arraylength];
     
    // Ciclo que recorre la cadena original desde el final
    for(int i=arraylength-1; i >= -1; i--){
 
        // Si encontramos un espacio ya hemos terminado una palabra
        // invertir la palabra y agregarla al principio del arreglo invertido
        if(i==-1 || words[i] == ' ') {
 
            // Agregar la última palabra encontrada invertida en la sentencia
            // al principio del arreglo de cadena invertida
            for(int b=invert.length()-1; b >=0 ; b--) {
                invertedWords[a] = invert[b];
                a++;
            }
 
            // Agregar un espacio para delimitar palabra e incrementar el contador
            // 'a' solo si no se ha llegado al final del arreglo.
            if (i>-1) invertedWords[a++] = ' ';
            invert="";
        }
        else{
            // Tenemos un caracter, agregarlo a la cadena temporal
            invert +=words[i];
        }
     }
 
    cout << endl << "Sentencia invertida: \t" << invertedWords << endl;
}
