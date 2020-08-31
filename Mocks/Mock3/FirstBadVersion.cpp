//este es un ejemplo de BUSQUEDA BINARIA 
//Este NO ES EL CODIGO COMPLETO
//solamente es la funcion que LeetCode nos pide
// The API isBadVersion a nos la dan.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1, high = n;
        
	        while(low < high) { 
		        long long middle= (low + high)/2;
		        if (isBadVersion(middle) ) { 
			        high=middle; 
                }	
		        else{
			        low=middle+1;
		        }
		
	        }
            
	    return low;
    }
};
