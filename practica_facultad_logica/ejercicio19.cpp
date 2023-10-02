#include <iostream>
#include <math.h>
using namespace std;

int main(){

   int n, x = 0, y =1, z= 1;


    cout << "Dijite el numero de elemntos: ";
    cin >> n ;

    for (int i =1;i <= n; i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }




    return 0;
}