#include <iostream>

using namespace std ;

string libros[2][2];

void cargarLibros(){
	
	libros[0][0] = "algoritmos";
	libros[0][1] = "algoritmos y programacion (Guia para Docentes)";
	
	
	libros[1][0] = "Base de Datos";
	libros[1][1] = "Apuntes de Base de Datos 1";
	
}

int main(){
	
	cargarLibros();
	
	for (int i = 0; i < 2; i++){
		
	cout << libros[i][1];

	}
	

	return 0; 
}
