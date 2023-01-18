/*

	Programa que solicite al usuario digitar una cadena de caracteres
	luego que verifique la longitd de la misma y si esta supera a 10 caracteres 
	mostrarla y caso contrario no mostrarla 

*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	
	char cadena[20];
	int lg = 0;
	
	cout<<"Ingrese una cadena de caracteres: ";
	cin.getline(cadena, 20, '\n');
	lg = strlen(cadena);
	
	if(lg >= 10){
		cout<<"longitud: "<<lg<<endl;
		cout<< cadena<<endl;
	}
	
	getch();
	return 0;
}
