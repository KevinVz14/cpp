#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	//DECLARACION DE VARIABLES
	int numero1, numero2;
	int suma, producto;
	
	div_t resultado;
	
	//CAPTURA DE DATOS
	cout<<"Ingrese el valor del primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el valor del segundo numero: ";
	cin>>numero2;
	
	//PROCESOS
	suma=(numero1+numero2);
	producto=(numero1*numero2);
	resultado = div(numero1,numero2);

	
	//SALIDAS 
	cout<<endl;
	cout<<"La suma de "<< numero1 << " + " <<numero2<<" es igual a: "<<suma<<endl;
	cout<<"El producto de "<< numero1 << " * " <<numero2<<" es igual a: "<<producto<<endl;
	cout<<"El cociente de "<< numero1 << " / " <<numero2<<" es igual a: "<<resultado.quot<<endl;
	cout << "El residuo es: " << resultado.rem << endl;
	return 0;
}
