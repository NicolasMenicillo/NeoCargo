#include <iostream>
#include <math.h>
using namespace std;

int main (){

        int x, y, resultado;

        cout << "Dijite un numero entero para x y otro para y: ";
        cin >>x>>y;

        resultado = pow(x, y);
        cout<< "El valor de "<< x << " elevado a "<< y << " es: " << resultado << endl;

    
    



    return 0;
}