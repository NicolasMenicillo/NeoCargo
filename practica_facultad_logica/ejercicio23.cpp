#include <iostream> 
using namespace std;

int main (){

        int numero[50], numero_elementos;

        cout<< "Cuantos elementos quiere que tenga su vector?";
        cin>>numero_elementos;

        for(int i = 0; i < numero_elementos; i++){
            cout <<"Dijite un numero: ";
            cin >> numero [i];
        }

    // Como mostrar todos los elementos con sus indices asociados.

    for (int i = 0; i < numero_elementos; i++){
        cout <<i<< " --> " <<numero[i]<< endl;
    }

    return 0;
}