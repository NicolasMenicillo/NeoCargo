#include <iostream> 
using namespace std;

int main (){

    int numeros[100],n;
    int suma = 0, mayor = 0;


    cout << "Dijite la cantidad de numeros que va a tener su arreglo: ";
    cin >> n ;

    for (int i = 0; i < n; i++){
        cout << i+1 << "- Dijite un numero: ";
        cin >> numeros [i];
    }

    for(int i = 0; i < n; i++){
            suma += numeros[i];
            
            if(numeros[i] > mayor){
                mayor=numeros[i];
            }
        } 

    if (mayor == suma - mayor){
        cout <<"El numero "<< mayor << " Es la suma de los demas.";
    } else{
        cout<<"No hay una solucion";
    }



    return 0;
}