#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(0));

    int limite_inferior, limite_superior, intentos_max;
    
    cout << "\nUsted esta por jugar a ''Adivina El Numero Secreto''.\nSeleccione un numero base y otro tope para generar el rango. "<< endl;

    cout << "Ingrese el numero base: ";
    cin >> limite_inferior;

    cout << "Ingrese el numero tope: ";
    cin >> limite_superior;

    if (limite_inferior >= limite_superior)
    {
        cout << "El numero base debe ser menor que el tope. Intente nuevamente..";
        return 1;
    }

    cout << " Se ha generado un numero secreto entre el rango elegido. Ingrese la cantidad de intentos que tendra para adivinar el numero secreto: ";
    cin >> intentos_max;

    if (intentos_max <= 0)
    {
        cout << "La cantidad de intentos maximos no puede ser negativa o igual a cero. Intente nuevamente..";
        return 1;
    }

    int numero_secreto = rand() % (limite_inferior - limite_superior + 1) + limite_inferior;

    int intentos = 0;

    int numeroDelUsuario;

    while (intentos < intentos_max)
    {
        cout << "\nIntento " << intentos + 1 << " ingrese un numero dentro del rango: " << limite_inferior << " y " << limite_superior << ": ";
        cin >> numeroDelUsuario;
        if (numeroDelUsuario < limite_inferior || numeroDelUsuario > limite_superior)
        {
            cout << " El valor ingresado no esta dentro del rango establecido." << endl;
            continue;
        }

        if (numeroDelUsuario == numero_secreto)
        {
            cout << "Felicidades!!! Has ganado este juego!! En: " << (intentos + 1) << " intento/s !! " <<endl;
            break;
        }
        else{
        
            cout << "El numero es incorrecto. "<<endl;

            if (numeroDelUsuario < numero_secreto)
            {

                cout << "El numero es mayor" << endl;
            }
            else
            {
                cout << "El numero es menor" << endl;
            }
            
            intentos++;
            cout << "Te quedan " << (intentos_max - intentos) << " intentos. " << endl;
        }
    }

    if (intentos == intentos_max)
    {
        cout << "Lo sentimos, pero has agotado todos tus intentos y no has podido adivinar el numero secreto. El numero era: " << numero_secreto << endl;
    }

    return 0;
}
