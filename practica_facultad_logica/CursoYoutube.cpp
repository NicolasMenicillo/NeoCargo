#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int numero, opcion;

    cout <<"\tBuenvenido al Calculador de numeros al cubo y numeros pares e impares!"<< endl;
    cout << "1 - Para calcular un numero al cubo."<< endl;
    cout << "2 - Para saber si un numero es Par o Impar"<< endl;
    cout << "3 - Para salir."<< endl;
    cin >> opcion;

    switch(opcion){
        case 1: 
        cout <<"Ingrese el numero que quiere convertir a su cuadrado:"<<endl;
        cin>>numero;
        cout<<"El resultado del numero "<<numero<<" al cubo es : " << pow(numero, 3) << endl;
        break;

        case 2: 
        cout << "\n Ingresa el numero para verificar si es par o no" << endl ;
        cin >> numero;
        if (numero % 2 ==0 ){
        cout << "El numero que usted ingreso es Par";
        }else {
        cout <<"El numero que ingreso es Impar";
        }
        break;

        case 3: 
        cout << "Hasta luego!";
        break;

    retun 0;
}