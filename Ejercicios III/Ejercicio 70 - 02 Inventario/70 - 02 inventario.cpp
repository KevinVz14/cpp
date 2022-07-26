#include <iostream>

using namespace std;

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
		
		case 1:
			cout<<"Escogiste 1";
			cout<<endl;
			break;
		
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
