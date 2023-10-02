#include <iostream>
using namespace std;


void cambio(int, int&, int&, int&, int&, int&, int&);



int main (){

        int num, cien, cincuenta, veinte, diez, cinco, uno;

        cout << "Dijite un numero entero: ";
        cin >> num;

        cambio(num, cien, cincuenta, veinte, diez, cinco, uno);

        cout<<"Cantidad de billetes a entregar como cambio:"<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;




    return 0;
}

void cambio(int num, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){

    cien = num / 100;
    num %= 100;
    cincuenta = num/50 ;
    num%=50;
    veinte = num/20;
    num %= 20;
    diez = num/10;
    num %= 10;
    cinco = num/5;
    num %= 5;
    uno = num / 1;
    num %= 1;


}