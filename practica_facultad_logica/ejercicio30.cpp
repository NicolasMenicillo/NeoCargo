#include <iostream>
#include <math.h>
using namespace std;


int main ()
{

        int numero, resultado = 0;

        cout << "Dijite un numero entero: ";
        cin >> numero;

        for (int i = 1; i <= numero; i++){

            if (i %2 == 0){
                resultado = resultado - pow(i, i);
            }else{
                resultado = resultado + pow(i, i);
            }

        }

    cout << "El resultado es: "<< resultado << endl;



    return 0;
}