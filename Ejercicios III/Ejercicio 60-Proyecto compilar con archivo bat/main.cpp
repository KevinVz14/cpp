#include <iostream>
#include "seguridad.h"

using namespace std;

int main(){

bool respuesta = login();

if (respuesta == true){
	
	
	cout << "Bienvenido al sistema";
}
	
	return 0;
}

