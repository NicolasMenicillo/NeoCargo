#include <iostream> 

using namespace std;

int main (){

        int numeros[50], numero_mayor = 0 , num_usuario;

    cout <<"Dijite el numero de elementos del arreglo: ";
    cin >> num_usuario;

    for (int i = 0; i < num_usuario; i++ ){
        cout << "Ingrese un número: "; cin >> numeros [i];

        if(numeros[i] > numero_mayor){
            numero_mayor=numeros[i];
        }
    }

    cout<<"El numero mayor escrito es: " << numero_mayor <<endl;

    return 0;
} 