//Comparar dos cadenas de caracteres - Funcion strcmp
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char palabra1[] = "Hola";
	char palabra2[] = "Ho la";
	 
	if(strcmp(palabra1, palabra2) == 0){
		
		cout<<"Ambas cadenas son iguales :D"<<endl;
	}
	getch();
	return 0;
}
