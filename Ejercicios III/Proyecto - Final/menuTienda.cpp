#include <iostream>
#include "productosTienda.h"
#include "factura.h"
using namespace std;

void menuTienda(){
	
	int opc = 0;
	
	while (true){
		
	system("cls");	
	
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"-*****************************MENU*******************************-"<<endl;
	cout<<"------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"1 - Televisiones "<<endl;
	cout<<"2 - Celulares y accesorios "<<endl;
	cout<<"3 - Computadoras "<<endl;
	cout<<"4 - Video Juegos y Accesorios"<<endl;
	cout<<"5 - Imprimir factura"<<endl;
	cout<<"0 - Salir"<<endl;
	cout<<endl;
	cout<<"Seleccione una opcion del menu --> : ";
	cin>> opc;
	
	
	if (opc == 0){
		
    break;		
	}
	
	if (opc == 5){
		
		imprimirFacturatienda();
			
	} else {
		
			productosTienda(opc);
			}		
	}
}
