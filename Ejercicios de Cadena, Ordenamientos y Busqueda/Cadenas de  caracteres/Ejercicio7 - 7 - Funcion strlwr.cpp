/*
Pedir al usuario en MAYUSCULA
si su nombre comienza por la letra A, convertir
su nombre a minisculas, caso contrario no convertirlo
*/
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {

	char nom[20];
	
	cout<<"Ingrese su nombre: ";
	cin.getline(nom, 20, '\n');
	
	if(nom[0] == 'A' ){
		strlwr(nom);
		cout<<nom<<endl;
	}else{
		strupr(nom);
		cout<<nom;
	}
	

	getch();
	return 0;
}
