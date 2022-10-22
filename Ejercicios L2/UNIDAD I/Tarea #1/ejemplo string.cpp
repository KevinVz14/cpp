#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string nombre, apellido;
	cout<<"Ingrese su primer nombre: ";
	cin>>nombre;
	cout<<"Ingrese su primer apellido: ";
	cin>>apellido;
	
	cout<<endl;
	cout<<"Nombre: " <<nombre << " " + apellido;
	return 0;
}

