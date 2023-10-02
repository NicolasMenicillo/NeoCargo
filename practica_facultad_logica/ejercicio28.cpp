#include <iostream>
using namespace std;

int main(){
    
      int numeros, positivos=0, negativos=0, nulls=0;
      double num;

      cout << "Cuantos numeros desea ingrear: ";
      cin >> numeros ;

      for (int i = 1; i <= numeros; i++){
        cout << i << " - Ingrese un numero: "; 
        cin>>num;

        if (num > 0){
             positivos++;

        }else if(num < 0){
            negativos++;

        }else if(num == 0){
            nulls++; 
        }
      }


       cout <<"Los numeros positivos fuero: " << positivos <<endl;
       cout<<"Los numeros negativos fueron: "<<negativos<< endl;
       cout <<"Los numeros nulos fuero: " << nulls <<endl;




    return 0;
}