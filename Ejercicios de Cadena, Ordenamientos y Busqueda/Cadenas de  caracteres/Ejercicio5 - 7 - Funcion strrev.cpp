//Hacer un programa que determine si una palabra es polindroma
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {

	char cad1[30];
	char cad2[30];
	
	cout<<"Ingrese una palabra: ";
	cin.getline(cad1, 30, '\n');
	
	strcpy(cad2, cad1);
	strrev(cad1);
	
		if(strcmp(cad2, cad1)==0){
			cout<<endl<<endl<<" **** SON PALABRAS POLINDROMAS ****"<<endl<<endl;
			cout<<"La palabra que ingreso usted: " <<cad2<<endl;
			cout<<"La palabra de forma invertida: "<<cad1<<endl;
		}else{
			cout<<endl<<endl<<"**** NO SON POLINDROMAS ****"<<endl<<endl;
			cout<<"La palabra que ingreso: "       <<cad2<<endl;
			cout<<"La palabra de forma invertida: "<<cad1<<endl;
		}
	getch();
	return 0;
}
