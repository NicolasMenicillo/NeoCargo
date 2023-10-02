#include <iostream> 
#include <math.h>
using namespace std;


void pedirDatos();
void al_cuadrado(float n1);

float num1;

int main (){

pedirDatos();

al_cuadrado(num1);

    return 0;
}

void pedirDatos(){
    cout << "Dijite un numero para elevarlo al cuadrado: ";
    cin >> num1 ;
}

void al_cuadrado(float n1){
    float cuadrado = pow(num1, 2);
    cout <<"El resultado de "<<n1<<" elevado a la potencia dos es: "<< cuadrado <<endl;
}