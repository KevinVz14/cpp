#include<iostream>
using namespace std;
int main(){
	cout<<"PROGRAMA DE ARITMETICA BASICA CON CONDICIONAL"<<endl;
	//DECLARACION DE VARIABLES
	int n1, n2, n3;
	int suma, promedio, producto,mayor,menor;
	//CAPTURA DE DATOS
	cout<<"Ingrese tres numeros diferentes: ";
	cin>>n1;	cin>>n2; 	cin>>n3;
	//PROCESOS
	suma=(n1+n2+n3);
	promedio=(n1+n2+n3)/3;
	producto=(n1*n2*n3);
	//MAYOR
	mayor = n1;
	if(n2>mayor)
	mayor = n2;
	if(n3>mayor)
	mayor = n3;
	//MENOR
	menor = n1;
	if(n2<menor)
	menor = n2;
	if(n3<menor)
	menor = n3;
	//SALIDAS
	cout<<endl;
	cout<<"La suma es: "<<suma <<endl;
	cout<<"El promedio es: "<<promedio<<endl ;
	cout<<"El producto es: "<<producto <<endl;
	cout<<"El numero mas pequeno es: "<<menor<<endl;
	cout<<"El numero mas grande es: "<<mayor<<endl;
	cout<<"FIN DEL PROGRAMA"<<endl;;
}
