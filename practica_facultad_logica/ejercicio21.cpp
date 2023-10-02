#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){

        int numero;

        cout <<"Dijite un numero entero: ";
        cin >>numero ;

        cout << "\nDescomponiendo en factores primos: ";
        for (int i = 2; numero > 1; i++){
            while(numero %i ==0){
                cout << i << " ";
                numero /= i;
            }    
        }
    
    cout << "\n";
    system("pause");
    return 0;
}