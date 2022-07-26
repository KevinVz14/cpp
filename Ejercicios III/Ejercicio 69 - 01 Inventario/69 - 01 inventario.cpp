#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int opcion = 0 ;

	cout<<"Sistema de Inventario";
	cout<<endl;
	cout<<"**********************";
	cout<<endl;
	cout<<endl;
	cout<<"Ingrese una opcion del menu: ";
	cin>>opcion;
	
	switch (opcion){
		
		case 1:
			cout<<"Escogiste 1";
			break;
		
		case 2:
			cout<<"Escogiste 2";
			break;
	
		
		default:
			break;
		
	}
	
	return 0;
}
