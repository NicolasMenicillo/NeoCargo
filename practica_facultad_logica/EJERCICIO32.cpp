#include <iostream>
#include <math.h>

using namespace std;

void al_cuadrado(float numero);

int main(){

    float num;

    cout << "Dijite un numero para sacar su cuadrado: ";
    cin >> num;

    al_cuadrado (num);




    return 0;
}

void al_cuadrado(float numero){
    float resultado =  0;

    resultado = pow(numero, 2);

    cout <<"El resultado es: "<< resultado <<endl;

}