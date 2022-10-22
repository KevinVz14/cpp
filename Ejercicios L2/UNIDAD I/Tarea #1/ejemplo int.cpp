#include <iostream>
using namespace std;
int main(){
	/* Programa que realiza la suma de dos numeros enteros */
	int numero1, numero2, suma;
	
	cout<<"Ingrese un numero: ";
	cin>> numero1;
	cout<<"Ingrese un segundo numero: ";
	cin>> numero2;
	
	suma = (numero1 + numero2);
	cout<<endl;
	cout<<"El resultado de " << numero1 << " + " <<numero2 << " es: " <<suma ;
	return 0;
}

