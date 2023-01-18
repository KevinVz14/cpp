#include <iostream>
#include <conio.h>
#include <string.h>

//Longitud de cadenas de caractares - Funcion strlen() 

using namespace std;

int main()
{
	char palabra[] = "Hola que tal Jose?";
	int longit = 0;
	
	longit = strlen(palabra);
	
	cout<<"Numero de elementos en la cadena es: "<<longit<<endl;
	
	getch();
	return 0;
}
