#include <iostream> 
using namespace std;


int main(){

    int numero, suma = 0;


    do{
        cout << "Intruduzca valores enteros: ";
        cin >> numero;

        if(numero > 0){
            suma += numero;
        }

    } while (((numero < 20) || (numero > 30)) && (numero != 0));
        
   
     cout << "La suma de los valores ingresados mayores que cero es de " << suma <<endl;
    
   


   

    
    


    return 0;
}