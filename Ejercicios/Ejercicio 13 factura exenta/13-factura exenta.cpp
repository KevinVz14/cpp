#include <iostream>

using namespace std;

int main()
{	
	
	double subtotal= 0;
	double total= 0;
	double impuesto= 0.15;
	double descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
	char estaExenta;
	//Datos de entrada	
	cout<<"Ingrese el subtotal de la factura: ";
	cin>> subtotal;
	cout<<"Ingrese el descuento (0, 10, 15, 20): ";
	cin>> descuento;
	cout<<"Factura exenta? s/n ";
	cin>> estaExenta;
	
	
		if ( estaExenta == 's' ||  estaExenta == 'S' )  
	{
		  cout<< endl;
          cout<<"Total a pagar es: " << subtotal; 

	}
	
	else {
		
	//Procesos
    calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento)*0.15;
    total = subtotal - calculoDescuento + calculoImpuesto ;
 
    //Salida
	cout<< endl;
	cout<<"Total a pagar es: " << total;	
		
	}
	return 0;
	
}