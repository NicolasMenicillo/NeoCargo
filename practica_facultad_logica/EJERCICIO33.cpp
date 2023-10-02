#include <iostream>
#include <math.h>
using namespace std;

//Prototipos de funciones
void pedirDatos();
void funPot(int n1, int n2);

int numero, exponente;

int main (){

        pedirDatos();
        funPot (numero ,exponente);




    return 0;
}

//Propiedad de las funciones.

void pedirDatos(){
    cout << "Introduce un número: "; cin >> numero;
    cout << endl <<"Introduce el exponente a elevar al cuadrado del primer número introducido: "; cin>>exponente ;
}


void funPot(int n1, int n2){

    long resultado = pow(n1, n2);

    cout <<"El resultado es: "<< resultado <<endl;

}