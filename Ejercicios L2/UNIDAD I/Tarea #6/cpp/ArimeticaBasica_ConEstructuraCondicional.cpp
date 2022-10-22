#include<iostream>
using namespace std;
int main(){

	//DECLARACION DE VARIABLES
	int n1, n2, n3;
	int suma, promedio, producto,mayor,menor;
	
	//CAPTURA DE DATOS
	cout<<"Ingrese tres numeros diferentes: ";
	cin>>n1;
	cin>>n2; 
	cin>>n3;

	//PROCESOS
	suma=(n1+n2+n3);
	promedio=(n1+n2+n3)/3;
	producto=(n1*n2*n3);

	if(n1 > n2 and n2 > n3){mayor = n1; menor = n3;}
	if(n1 > n3 and n3 > n2){mayor = n1; menor = n2;}
	if(n2 > n3 and n3 > n1){mayor = n2; menor = n1;}
	if(n2 > n1 and n1 > n3){mayor = n2; menor = n3;}
	if(n3 > n2 and n2 > n1){mayor = n3; menor = n1;}
	if(n3 > n1 and n1 > n2){mayor = n3; menor = n2;}
		
	//SALIDAS
	cout<<endl;
	cout<<"La suma es: "<<suma <<endl;
	cout<<"El promedio es: "<<promedio<<endl ;
	cout<<"El producto es: "<<producto <<endl;
	cout<<"El numero mas pequeno es: "<<menor<<endl;
	cout<<"El numero mas grande es: "<<mayor<<endl;

	return 0;
}
