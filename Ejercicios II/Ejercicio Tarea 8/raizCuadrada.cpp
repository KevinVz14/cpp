#include <iostream>
#include <math.h>

using namespace std;

double raizCuadrada(double numero){
									
return  sqrt(numero);
		
}

int main (){
	
	double numero = 0;
	
	cout<<"Ingrese el numero que desea sacarle raiz cuadrada: ";
	cin >> numero;
	cout<<endl;
	
if (numero < 0){

cout<<" Este numero no tiene raiz";

}else {
	
cout<<"La raiz cuadrada de " << numero << " es: "  << raizCuadrada(numero);	
	
}	
	return 0;
}

