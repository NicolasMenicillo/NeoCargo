#include <iostream>
using namespace std;
 

void pedirDatos();

int sumarElementos(int vec[], int tam);

int vec[100], tam = {};

int main (){

        pedirDatos();

        

        cout << "El resultado de la suma es: "<< sumarElementos(vec,tam)<<endl;

    return 0;
}

void pedirDatos(){
    cout << "Ingrese el tamaño del vector: ";
    cin >> tam ;

    for (int i = 0; i < tam; i++){
        cout << i+1<< ". Ingrese un numero: ";
        cin>>vec[i];
    }
}

int sumarElementos(int vec[], int tam){
    int suma;

    for(int i = 0; i < tam; i++){
        suma = suma + vec[i];
    }

    return suma;
}
