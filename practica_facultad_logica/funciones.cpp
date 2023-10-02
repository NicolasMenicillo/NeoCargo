// FUNCIONES: las funcion es son porciones de codigo que nos permiten reutilizar dicha poorcion de codigo las veces que necesitemos. 
// se depura de mandera individual al resto del codigo.




// tipo nombre (tipo var1, tipo var2, tipo var3){

//         conjunto de instrucciones

            //return;

// }


//-------------------------------


/*
   directivas del procesador.

   prototipo de la funcion.

   int main(){
        conjunto de intrucciones;

            return valor;

   }

   difinicion de la funcion.

*/


#include <iostream>
using namespace std ;

//Prototipo de funcion.

int numMayor(int x, int y);


int main (){
    int n1, n2, ;

    cout <<"DIjite dos numeros enteros: ";
    cin >>n1>>n2;

    

    cout<< "El numero mayor es "<< numMayor(n1, n2) <<endl;

    return 0;
}


int numMayor(int x, int y){
    int numeroMayor;

    if (x > y){
        numeroMayor = x;
    } else{
        numeroMayor=y;
    }

        return numeroMayor;

}