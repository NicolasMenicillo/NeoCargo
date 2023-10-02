#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;




int main (){

    setlocale(LC_ALL, "");
    srand(time(0));

        int numero, numero_aleatorio, intentos = 0;

    cout <<"\n\t¡Bienvenido Adivina Adivinador!"<< endl;

    numero_aleatorio =  1 + rand() % (100);

   do
   {
    cout << "\nDijite un numero: ";
    cin >>numero ;

    if(numero < numero_aleatorio){
        cout << "El numero secreto es mayor.";
    } else if(numero > numero_aleatorio){
        cout << "El numero secreto es menor.";
    }
    intentos++;
   } while (numero != numero_aleatorio);
   
    cout << "Felicitaciones adivinastes el numero!!\n";
    cout << "Lo adivinastes en " << intentos << endl;

    system("pause");
    return 0;
}