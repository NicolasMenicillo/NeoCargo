#include <iostream> 
using namespace std;


int main (){


        int numeros[] = {1,2,3,4,5};
        int mult = 1;


        for(int i = 0; i < 5; i++){
            mult *= numeros[i];
        }

    cout << "El resultado de la mult del array es de: "<<mult<< endl;
    return 0;
}