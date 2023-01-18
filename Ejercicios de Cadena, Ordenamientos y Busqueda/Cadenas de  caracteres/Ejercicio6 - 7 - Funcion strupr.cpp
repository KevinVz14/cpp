//Convertir dos cadenas de minuscula a MAYUSCULA.
//Compararlas y decir si son iguales o no
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {

	char pa1[20];
	char pa2[20];
	
	cout<<"Ingrese una palabra: "; cin.getline(pa1, 20, '\n');
	cout<<"Ingrese otra palabra: "; cin.getline(pa2, 20, '\n');
	
	strupr(pa1); 
	strupr(pa2);
	
	if(strcmp(pa1, pa2)==0){
		cout<<endl<<"**** Las palabras son iguales ****"<<endl<<endl;
		cout<<"La primer palabra: " <<pa1<<endl;
		cout<<"La segunda palabra: "<<pa2<<endl;
	}else{
		
		cout<<endl<<"**** Las palabras son diferentes ****"<<endl<<endl;
		cout<<"La primer palabra: " <<pa1<<endl;
		cout<<"La segunda palabra: "<<pa2<<endl;
		
	}
	
	
	
		

	getch();
	return 0;
}
