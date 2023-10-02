#include <iostream>
using namespace std;


int main (){

        int N, contadorM = 0, contadorF = 0;  
        char genero;
        double pesoM, alturaM, pesoF, alturaF, promedioPesoM, promedioAlturaM, promedioPesoF, promedioAlturaF, pesoTotalM = 0 , alturaTotalM =0, pesoTotalF =0, alturaTotalF =0;


        cout <<"Ingrese la cantidad de personas a ser entrevistadas: "<< endl;
        cin >>N ;

        for(int i = 1; i <= N; i++){
            cout << "Ingrese el genero de la persona (M) (F) ";
            cin>>genero;

            if (genero == 'M' || genero == 'm'){
                cout << "Ingrese el peso: ";
                cin >>pesoM;
                pesoTotalM += pesoM;

                cout <<"Ingrese la altura: ";
                cin >>alturaM;
                alturaTotalM += alturaM;

                contadorM++;

            } 

            else if(genero == 'F' || genero == 'f'){
                cout<<"Ingrese el peso: ";
                cin >>pesoF;
                pesoTotalF += pesoF;

                cout<< "Ingrese la altura: ";
                cin >>alturaF;
                alturaTotalF += alturaF;

                contadorF++;

            } 

            else{
                cout <<"El genero no es correcto. Ingrese las letras correspondientes.";
            }

        }

        promedioPesoM = pesoTotalM / contadorM;
        promedioAlturaM= alturaTotalM/contadorM;
        promedioPesoF = pesoTotalF / contadorF;
        promedioAlturaF = alturaTotalF/contadorF;

        cout << "El promedio de altura de los hombres es de: "<< promedioAlturaM <<endl;
        cout << "El promedio de peso de los hombres es de: " << promedioPesoM <<endl;
        cout << "El promedio de altura de las mujeres es de: " << promedioAlturaF<<endl;
        cout << "El promedio de peso de las mujeres es de: " <<promedioPesoF<<endl;

    return 0;
}