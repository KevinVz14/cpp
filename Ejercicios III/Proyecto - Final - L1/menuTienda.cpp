#include <iostream>
#include "productosTienda.h"
#include "factura.h"
using namespace std;

void menuTienda(){
	
	int opc = 0;
	
	while (true){
		system("color 07");
	system("cls");		
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout << "\t\t\t\t TECCHONOLOGY STORE"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"1 - Televisores "<<endl;
	cout<<"2 - Celulares y Accesorios "<<endl;
	cout<<"3 - Laptops "<<endl;
	cout<<"4 - Video Juegos y Consolas"<<endl;
	cout<<"5 - Carrito de compras"<<endl;
	cout<<"6 - Servicio de delivery "<<endl;
	cout<<"7 - Imprimir factura"<<endl;
	cout<<"0 - Salir"<<endl;
	cout<<endl;
	cout<<"Seleccione una opcion del menu -->: ";
	cin>> opc;
	
	
	if (opc == 0){	
    break;		
	}
	
	if (opc == 5){
	presentaP();		
	}
	
	
	if (opc == 6){
	system("cls");	
	Delivery();		
	}
	
	
	
	if (opc == 7){
		
	imprimirFacturatienda();
			
	} else {
		
	productosTienda(opc);
		}		
	}
}
