/*
Pedir al usuario una cadena de caracteres almacenarla en un arreglo y copiar todo 
su conteido hacia otro arreglo de cacarteres
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char cadena1[20];
	char cadena2[20];
	
	cout<<"Ingrese una cadena de caracteres: ";
	cin.getline(cadena1, 20, '\n');
	
	strcpy(cadena2, cadena1);
	
	cout<<cadena2<<endl;
	
	getch();
	return 0;
}
