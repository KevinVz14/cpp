#include <iostream>

using namespace std;

string productos[5][2] = {
	{ "001", "Iphone X" },
	{ "002", "Laptop Dell" },
	{ "003", "Monitor Samsung" },
	{ "004", "Mouse" },
	{ "005", "Headset" }
	
};

int main(int argc, char** argv) {
	
	int opcion = 0 ;
	
	while (true){
		
		system("cls");	
		cout<<"Sistema de Inventario";
		cout<<endl;
		cout<<"**********************";
		cout<<endl;
		cout<<endl;
		cout<<"1 - Productos "<<endl;
		cout<<"2 - Ingreso de Inventario "<<endl;
		cout<<"3 - Salida de Inventario "<<endl;
		cout<<"0 - Salir "<<endl;
		cout<<"Ingrese una opcion del menu: ";
		cin>>opcion;
	
	switch (opcion){
		
		case 1:{
			system("cls");
			cout<<endl;
			cout<<"Listado de productos "<<endl;
			cout<<"********************* "<<endl;
			
			for (int i = 0; i<5; i++){
				
			cout<<productos[i][0] << "" << productos[i][1] <<endl ;	
				
			}
		
			break;
		}
		case 2:
			cout<<"Escogiste 2";
			cout<<endl;
			break;
		
		case 3:
			cout<<"Escogiste 3";
			cout<<endl;
			break;
			
		default:
			break;
		
		}
		
			system("pause");
			cout<<endl;
			
			if (opcion == 0){
			
			break;
		}
	
	}
	
	
	return 0;
}
