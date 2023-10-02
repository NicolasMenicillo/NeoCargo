#include <iostream>
using namespace std;
#include <stdlib.h>
int main(){

    int numero, conteo = 0;

   do
   {
    cout << "Introduzca un numero entero positivo: ";   
    cin >>numero ;
    if(numero > 0){
        conteo++;
    }
    
   } while (numero != 0);
   
    
   cout << "La cantidad de numero mayores a cero fueron: " << conteo << endl;
    
    cout <<"\n\n";
    system("pause");
    return 0;
}