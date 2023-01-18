//Copiar contenido de una cade a otra - Funcion strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

	char nombre[] = "Omar";
	char nombre2[20];
	
	strcpy(nombre2, nombre);
	
	cout<<nombre2<<endl;

	return 0;
}
