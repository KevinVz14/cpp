/*
Pedir al usuario digitar dos cadenas de caracteres, e identificar si ambas
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente.
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	
	char pa1[10], pa2[10];
	
	cout<<"Ingrese una cadena de caracteres: "; cin.getline(pa1,10,'\n');
	cout<<"Ingrese otra cadena de caracteres: "; cin.getline(pa2,10,'\n');
	
	if(strcmp(pa1, pa2) == 0){
		cout<<"Ambas cadenas son iguales";
	}
	if(strcmp(pa1, pa2) > 0){
		cout<<pa1 << " esta despues alfabeticamente";
	}else if(strcmp(pa1, pa2) < 0){
		cout<<pa2 << " esta despues alfabeticamente";	
	}
	
	getch();
	return 0;
}
