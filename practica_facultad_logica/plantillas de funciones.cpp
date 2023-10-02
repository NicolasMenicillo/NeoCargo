// sacar el valor absoludo de un numero.

#include <iostream> 
using namespace std;

// Prototipo de Funcion
template <class TIPOD>

void mostrarAbs(TIPOD numero);


int main(){

        
        float num1;
        

        cout <<"Dijite un numero para sacar su absoluto: ";
        cin >>num1;

         mostrarAbs(num1);
         



    return 0;
}

template <class TIPOD> //plantilla de funciones
void mostrarAbs(TIPOD numero){

        if (numero < 0){
            numero = numero * -1;
        }

        cout << "El valor absoluto del numero es: "<<numero<<endl;
}