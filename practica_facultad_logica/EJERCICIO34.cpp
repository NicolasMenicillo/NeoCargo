#include <iostream>
using namespace std;

void pedirDatos();
void mult(float n1, float n2);

float num1, num2, resultado =0;

int main (){

pedirDatos();

mult(num1, num2);




    return 0;
}


void pedirDatos(){
    cout << "Dijite un numero: ";
    cin >> num1 ;
    cout << "Dijite otro numero: ";
    cin >> num2;
}

void mult(float n1, float n2){
    float multiplicacion = n1*n2;
    cout <<"El resultado de los dos es : "<<multiplicacion<<endl;
}