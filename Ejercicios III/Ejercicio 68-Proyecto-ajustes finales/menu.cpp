#include <iostream>
#include "clientes.h"
#include "juegos.h"
#include "rentas.h"

using namespace std;

void menu(){
	

		int opcion  = 0;
		
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"-----------"<<endl;
		cout<<""<<endl;
		cout<<"1 - Rentar Juegos "<<endl;
		cout<<"2 - Clientes "<<endl;
		cout<<"3 - Juegos "<<endl;
		cout<<"4 - Reportes de Rentas "<<endl;
		cout<<"5 - Salir "<<endl;
		
		cout<<endl;
		cout<<endl;
		cout<<"Ingrese un numero del menu y presione enter -->"<<endl;
		cin >>opcion;
		
		switch (opcion){
		
		case 1:
		rentar();  
		system("pause");
		break;
		
		case 2:
			mostrarClientes();
			break;
		
		
			case 3:
			mostrarJuegos();
			break;
		
		case 4:
			
			reporteRentas();
			
		break;
		
		
		case 5:
		salir = true;	
		
		default:
			
			break;	
			
		}
		
		system("cls");
	}
	
	

