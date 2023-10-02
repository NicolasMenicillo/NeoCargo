#include <iostream>
#include <math.h>
using namespace std;

int main (){

    int numero, opcion; 

    cout << "\n\tBienvenido al calulador de numeros pares e impares y Cubo de un numero."<< endl;
    cout <<"\n1- Para saber el cubo de un numero."<< endl;
    cout <<"2- Para numero Par e Impar."<< endl;
    cout <<"3- Salir."<< endl;
    cout<<"\nIngrese una Opcion: "; cin >>opcion ;
    

    switch(opcion){
        case 1: 
        cout << "Dijite un numero para saber su cubo: ";
        cin>>numero;
        cout << "El cubo del numero ingresado es: "<<  pow(numero, 3)<< endl;
        break ;

        case 2: 
        cout <<"Dijite un numero para saber si es par o impar: ";
        cin>>numero;
        if (numero%2 ==0){
            cout<<"El numero ingresado es PAR";
        }else{
            cout<<"El numero ingresado es IMPAR";
        }
        break;

        case 3: 
        cout <<"Gracias por usar nuestro programa";
        break;

    }
    return 0;
}