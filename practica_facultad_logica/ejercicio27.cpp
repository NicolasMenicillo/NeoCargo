#include <iostream>
using namespace std;

int main (){

        int numero;

        cout << "Digite un numero entero y le dire la tabla del 1 al 10 de dicho numero: ";
        cin >> numero ;

        for (int i = 1; i <= 10; i++){
            cout << numero << " x " << i << " = " << numero * i <<endl;            
        }

        


    return 0 ;
}
