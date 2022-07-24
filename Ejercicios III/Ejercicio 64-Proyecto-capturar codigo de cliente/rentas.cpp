#include <iostream>
#include "clientes.h"


using namespace std;


string arregloRentas[100];

int ultimaLinea = 0;


void rentar(){
	
	system("cls");
	
	string codigoCliente = "";
	string nombreCliente = "";
	
	cout <<"Ingrese el codigo del cliente ";
		cin >> codigoCliente;
	
	nombreCliente = buscarClientes(codigoCliente);
	
	if(nombreCliente != ""){
		
			cout<<endl;
	cout << nombreCliente <<endl;

		
	}
	
}

