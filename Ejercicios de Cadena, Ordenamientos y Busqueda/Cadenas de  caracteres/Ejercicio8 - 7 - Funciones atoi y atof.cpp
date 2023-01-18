/*
Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y uno real-
Convertirlos a sus respectivos valores y por ultimo sumarlos
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	char n1[10], n2[10];
	int ni;
	float nf, suma;
	
	cout<<"Ingrese un numero entero: ";
	cin.getline(n1, 10, '\n');
	
	cout<<"Ingrese un numero entero: ";
	cin.getline(n2, 10, '\n');
	
	ni = atoi(n1);
	nf = atof(n2);
	
	suma = ni + nf;
	
	cout<<"El resultado de la suma es: "<<suma<<endl;

	getch();
	return 0;
}
