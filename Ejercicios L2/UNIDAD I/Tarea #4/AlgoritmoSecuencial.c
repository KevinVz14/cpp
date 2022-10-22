#include<iostream>
using namespace std;
int main(){
	cout<<"PROGRAMA ALGORITMO SECUENCIAL"<<endl;
	//DECLARACION DE VARIABLES
	float C, F, K;
	//ENTRADA DE DATOS
	cout<<"Ingrese los grados en Centigrados : ";
	cin>>C;
	//PROCESOS
	F = (C*9/5)+32;
	K = (C+273.15);
	//SALIDA
	cout<<endl;
	cout<<" La conversion de grados Centigrados a Farenheit es: "<<F <<endl;
	cout<<" La conversion de grados Centigrados a Kelvin es: "<<K<<endl;
	cout<<"<<FIN DEL PROGRAMA>>"<<endl;
}
