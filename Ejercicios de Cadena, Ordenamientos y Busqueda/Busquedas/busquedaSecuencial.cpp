//Busqueda Secuencial

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int a[] = {3,4,2,1,5};
	int i, dato;
	char band = 'F';
	
	dato = 5;
	//Busqueda secuencial
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band=='V'){
		cout<<"El numero ha sido encontrado en la pos: " <<i-1;
	}

	getch();
	return 0;
}
