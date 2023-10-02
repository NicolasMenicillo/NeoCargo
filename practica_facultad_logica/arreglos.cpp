// ARRAY : tipo de dato que almacena una secuencia de datos del mismo tipo. siempre comienzan desde el cero.

#include <iostream>
using namespace std;

int main (){

        int numeros [] =  {1, 2, 3, 4, 5};
        int suma = 0;

        for(int i = 0; i < 5; i++){
            suma +=numeros[i]; // se accede a cada elemento mediante su posicion dentro del array.
        }

        cout << "La suma de los elemntos del Array es de: "<<suma<< endl;

    return 0;
}