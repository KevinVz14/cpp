//Busqueda binaria

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int num[] = {1,2,3,4,5};
	int inf, sup, mitad, dato;
	char band = 'F';
	
	dato = 4;
	//Algoritmo de la busqueda binaria
	inf= 0;
	sup = 5;
		
	while(inf <= sup){
		mitad = (inf+sup)/2;
		
		if(num[mitad] == dato){
			band = 'V';
			break;
		}
		if(num[mitad] > dato){
			sup = mitad;
			mitad = (inf+sup)/2;	
		}
		if(num[mitad] < dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	
	if(band == 'V'){
		cout<<"El numero ha sido encontrado en la posicion: " <<mitad<<endl;
	}
	else{
		cout<<"EL NUMERO NO HA SIDO ENCONTRADO"<<endl;
	}
	getch();
	return 0;
}
