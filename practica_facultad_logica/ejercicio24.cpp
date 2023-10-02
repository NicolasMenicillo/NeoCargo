#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){


        int numeros[9] = {1,2,3,4,5,6,7,8,9};

        for(int i = 0; i < 9 ; i++){
            cout << "Esta es su posicion al derecho: " << numeros[i] <<endl;
        }
    
    system("pause");

         for (int i=8; i >= 0; i--){
            cout << "esta es su posicion al revez: " << numeros[i] <<endl;
        }

    return 0;
}