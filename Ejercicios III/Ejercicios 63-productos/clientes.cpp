#include <iostream>

using namespace std;

string arregloClientes[5][3] = {
{"C001", "Juan Perez", "99-99-99-99" },
{"C002", "Jose Martinez", "99-88-88-88" },
{"C003", "Maria Gonzales", "99-77-77-77" },
{"C004", "Pedro Hernadez", "99-66-66-66" },
{"C005", "Pablo Jimenez", "99-55-55-55" }
};


void mostrarClientes(){
	
system("cls");
cout <<"Codigo	Nombre	Telefono"<<endl;
cout <<"------------------------"<<endl<<endl;

	for (int i = 0; i < 5; i++ ){
		
		
		cout <<arregloClientes[i][0] <<" | ";
		cout <<arregloClientes[i][1] <<" | ";
		cout <<arregloClientes[i][2] <<" | ";
		cout <<endl;
	}
	cout <<endl;
	cout <<endl;
	system("pause");
	
}
