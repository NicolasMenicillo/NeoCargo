#include <iostream>
using namespace std;

//Prototipo.
// UTILIZAMOS UNA FUNCION DE TIPO VOID CUANDO NO TIENE QUE RETORNAR NINGUN RESULTADO.
void mult(float x, float y);



int main(){

        float num1, num2;

        cout << "Dijite 2 numeros con decimal: ";
        cin >> num1>>num2 ;

        mult (num1, num2);


    return 0 ;
}


//definicion de funcion;

void mult(float x, float y){

    float resultado = 0;
    resultado = x * y;
    cout << "El resultado de la multiplicacion es: " << resultado << endl;
}