#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

// Función para generar un número aleatorio en el rango especificado
int generarNumeroAleatorio(int limiteInferior, int limiteSuperior) {
    return rand() % (limiteSuperior - limiteInferior + 1) + limiteInferior;
}

// Función para verificar si un número ya ha sido ingresado anteriormente
bool numeroRepetido(const std::vector<int>& numeros, int numero) {
    return std::find(numeros.begin(), numeros.end(), numero) != numeros.end();
}

// Función para ingresar números y mantener un registro de números únicos
void ingresarNumeros(std::vector<int>& numeros, int& intentos) {
    int numero;
    std::cout << "Ingrese un número (-1 para salir): ";
    std::cin >> numero;

    if (numero == -1) {
        return;
    }

    if (numeroRepetido(numeros, numero)) {
        std::cout << "Este número ya fue ingresado. Intenta con otro." << std::endl;
    } else {
        numeros.push_back(numero);
        intentos++;
    }

    ingresarNumeros(numeros, intentos); // Llamada recursiva para seguir ingresando números
}

// Función para mostrar los números ingresados por el usuario
void mostrarNumerosIngresados(const std::vector<int>& numeros) {
    std::cout << "Números ingresados: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    srand(time(0));

    int limiteInferior, limiteSuperior, intentosMaximos, numeroAleatorio, intentos = 0;
    std::vector<int> intentosUsuario;

    std::cout << "Bienvenido al juego de adivinar el número." << std::endl;

    std::cout << "Ingrese el límite inferior del rango: ";
    std::cin >> limiteInferior;

    std::cout << "Ingrese el límite superior del rango: ";
    std::cin >> limiteSuperior;

    std::cout << "Ingrese la cantidad de intentos máximos: ";
    std::cin >> intentosMaximos;

    numeroAleatorio = generarNumeroAleatorio(limiteInferior, limiteSuperior);

    std::cout << "¡Comienza el juego!" << std::endl;

    while (intentos < intentosMaximos) {
        std::cout << "Intento " << intentos + 1 << ":" << std::endl;
        ingresarNumeros(intentosUsuario, intentos);

        if (intentosUsuario.back() == numeroAleatorio) {
            std::cout << "¡Felicidades! Has adivinado el número correcto." << std::endl;
            break;
        } else {
            std::cout << "El número ingresado es " << ((intentosUsuario.back() < numeroAleatorio) ? "menor" : "mayor") << " que el número correcto." << std::endl;
            std::cout << "Intentos restantes: " << intentosMaximos - intentos << std::endl;
        }

        intentos++;
    }

    if (intentos == intentosMaximos) {
        std::cout << "Agotaste todos tus intentos. El número correcto era: " << numeroAleatorio << std::endl;
    }

    mostrarNumerosIngresados(intentosUsuario);

    return 0;
}