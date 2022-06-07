#include <iostream>
using namespace std;

int main()  {


//Datos de entrada
double subtotal= 0;
double total=0;
double impuesto=0.15;


cout<<"Ingrese el subtotal de su factura: ";
cin>> subtotal;


//Proceso
total= subtotal + (subtotal* 0.15);


//Salida
cout<<endl;
cout<<"Total a pagar es: " <<total;



return 0;
}
