//este no es el codigo completo, solamente es la funcion necesitada
//dado un arreglo de numeros y un numero entero que es mi target,
//mi output es el numero de combinaciones posibles que tenemos que sumen mi target

int SumOfNumbers(vector<int> numbers, int target){
    unordered_map<int,int> hash;
    int counterOfCombinations=0;

    for(int i=0; i<numbers.size(); i++){
      hash[number[i]] ++;
    }
    for(int i=0; i<numbers.size(); i++){
      Int neededNumber=target-number[i]; //2
        if(hash.find(neededNumber) != hash.end()){
            if(neededNumber==number[i]);
              hash[number[i]]--;//3-1=2
              counterOfCombinations+=hash[number[i]];
            }
            else{
              counterOfCombinations+=hash[neededNumber]/2;
            }
        }
    }
    return counterOfCombinations;
}
