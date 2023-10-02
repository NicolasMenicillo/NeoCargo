#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int generarNumeroAleatorio(int rango) {
    return rand() % rango + 1;
}

int main() {
    srand(time(0));
    
    int rango, intentosMaximos;

    cout <<"\n\tBienvenido a 'Adivina Adivinador'. El juego consiste en adivinar un numero ente 1 y el rango superior que usted elija. Good Luck!!"<< endl;
    cout << "\nIngrese el rango de numeros para el juego: ";
    cin >> rango;
    cout << "\nIngrese la cantidad de intentos maximos: ";
    cin >> intentosMaximos;
    
    int numeroGenerado = generarNumeroAleatorio(rango);
    int intentosRealizados = 0;
    int intentosRestantes = intentosMaximos;
    vector<int> numerosIngresados; 
    
    cout << "¡Adivina el numero entre 1 y " << rango << " en " << intentosMaximos << " intentos!" << endl;

    int intento;
    
    while (intentosRealizados < intentosMaximos) {
        int intento;
        cout << "\nIngrese un numero: ";
        cin >> intento;
        
        if (intento < 1 || intento > rango){
            cout << "El valor ingresado no es valido. su rango es entre 1 y "<< rango << endl;
            continue;
        }
       
        if (find(numerosIngresados.begin(), numerosIngresados.end(), intento) != numerosIngresados.end()) {
            cout << "Ya has intentado con ese numero. Ingresa uno nuevo." << endl;
            continue;
        }
        
        numerosIngresados.push_back(intento); 
        intentosRealizados++;
        intentosRestantes--;
        
        if (intento == numeroGenerado) {
            cout << "¡Felicidades! Has adivinado el numero " << numeroGenerado << " en " << intentosRealizados << " intentos." << endl;
            break;
        } else if (intento < numeroGenerado) {
            cout << "El numero es mayor." << endl;
        } else {
            cout << "El numero es menor." << endl;
        }
        
        cout << "Intentos realizados: " << intentosRealizados << "/" << intentosMaximos << endl;
        cout << "Intentos restantes: " << intentosRestantes << endl;
        
    }
    
    if (intentosRealizados == intentosMaximos && intento != numeroGenerado) {
        cout << "\n¡Se acabaron los intentos! El numero era: " << numeroGenerado << "." << endl;
    }
    
        sort(numerosIngresados.begin(), numerosIngresados.end());

            cout << "Numeros ingresados ordenados:";
        for (int num : numerosIngresados) {
            cout << " " << num;
        }
    return 0;
}