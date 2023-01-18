#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nombre[35];
	
	
	cout<<"Ingrese su nombre: "; cin.getline(nombre,35,'\n');
	
	cout<<nombre<<endl;

	getch();
	return 0;
}
