#include <iostream>

using namespace std;

int main () {

int a ;
int b ;
int suma = 0, resta = 0, multiplicacion = 0, division = 0;

// Entrada de datos
cout << "Ingrese el valor de a: ";
cin >> a ; 
cout << endl;

cout << "Ingrese el valor de b: ";
cin >> b ;
cout << endl;

// Procesos

suma= (a + b);
resta= (a - b);
multiplicacion =(a * b);
division= (a / b);

// Salidas
cout << " El resultado de la suma de a + b es: " << suma ;
cout << endl;
cout << " El resultado de la resta de a - b es: " << resta ;
cout << endl;
cout << " El resultado de la multiplicacion de a * b es: "<<  multiplicacion ;
cout << endl;
cout << " El resultado de la division de a / b es: " << division ;
cout << endl;

return 0;
}