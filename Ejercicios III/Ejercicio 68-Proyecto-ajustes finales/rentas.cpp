#include <iostream>
#include "clientes.h"
#include "juegos.h"

using namespace std;


string arregloRentas[100];

int ultimaLinea = 0;


void rentar(){
	
	system("cls");
	
	string codigoCliente = "";
	string nombreCliente = "";
	
	string codigoJuego = "";
	string nombreJuego = "";
	char continuar = 'n';
	
	while(true){
	
	cout <<"Ingrese el codigo del cliente ";
		cin >> codigoCliente;
		
			nombreCliente = buscarClientes(codigoCliente);
	
	if(nombreCliente != ""){
		
			cout<<endl;
	cout << nombreCliente <<endl;
	break;	
	} else {
		
	cout <<"No se encontro el cliente, deseas continuar? s/n "<<endl;
		cin >> continuar;
		
		if (continuar == 'n' || continuar == 'N' ){
			return;
			}
		
		}
		
	}		
	
	
	cout<<endl;
	
	while(true){
	
	cout <<"Ingrese el codigo del juego ";
		cin >> codigoJuego;
		
		nombreJuego = buscarJuego(codigoJuego);
	
	if(nombreJuego != ""){
		
			cout<<endl;
	cout << nombreJuego<<endl;
	break;	
	} else {
		
	cout <<"No se encontro el juego, deseas continuar? s/n "<<endl;
		cin >> continuar;
		
		if (continuar == 'n' || continuar == 'N' ){
			return;
			}
		
		}
		
	}
	cout<<endl;
	
	arregloRentas[ultimaLinea]	= codigoCliente + "|" + nombreCliente + "-" + codigoJuego+ "|" + nombreJuego;
	ultimaLinea++;
	
		system("pause");
}


void reporteRentas(){
	
	system("cls");
	cout<< "Reporte de ventas"<<endl;
	cout<< "-----------------"<<endl<<endl;
	
	for (int i = 0; i < ultimaLinea; i++){
		
		
		cout<< arregloRentas[i]<<endl;
	}
	cout<<endl;
	cout<<endl;
	system("pause");
		
}
