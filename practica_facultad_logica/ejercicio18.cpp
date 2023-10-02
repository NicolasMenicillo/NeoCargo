#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, factorial = 1;


        cout << " Dijite un numero: ";
        cin >>numero;

        for(int i = 1; i <= numero ; i++){
            factorial *=i;
        }

    cout << " El resaultado es: " <<factorial<< endl;
    

	system("pause");
	return 0;
}