//  CICLO O BUCLE WHILE:  conjunto de instrucciones que se ejecutan siempre y cuando se cumpla una determinada condicion
// El while primero piensa y luego actua
/*
while(enxprecion logica){
    conjunto de instrucciones;
}
*/

// int main()
// {

//     int i;

//     i = 50;

//     while (i >= 1)
//     {
//         cout << i << endl;
//         i--;
//     }

//     return 0;
// }

//   CICLO O BUCLE DO WHILE:  las intrucciones se van a ejecutar si o si una vez y luego comprueba si se cumple la exprecion logica, se vuelve a ejecutar hasta que dje de cumplirse.
// El do while primero actua y liengo piensa

// #include <stdlib.h> system("pause") = Precione una tecla para contuniar .   .   .  .
#include <iostream>
using namespace std;


// int main(){


//     int i;

//     i = 1;

//     do
//     {

//         cout << i << endl;
//         i++;
//     } while (i <= 10);

//     system("pause");
    
//     return 0;
// }


// BUCLE FOR :  siempre y cuando la exprecion logica se cumple se sigue ejecutando el codigo.

/*
        for(exprecion 1, exprecion logica , expre 2){
            conjunto de intrucciones;
        }

*/


int main (){

    int i;

    for(i = 1; i <= 10; i++ ){
        cout <<i<< endl;
    }

    return 0;
}