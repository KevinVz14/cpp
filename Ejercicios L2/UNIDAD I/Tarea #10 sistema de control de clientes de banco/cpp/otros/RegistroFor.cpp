#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string password = "2022", identidad = "";
	int intentos = 1, edad, des = 1;
	char transaccion;

	while (des == 1){
		
	for(int intentos = 0; intentos <= 3; intentos++ ){
		
	cout <<"Ingrese su clave de acceso: "; cin>> password;	
	cout<<endl;
		
	if(password == "2022"){
	cout <<"Bienvenido al Banco "<<endl;		
	cout <<"Ingrese su No. de indentidad:  " ; cin>>identidad;
	cout <<"Ingrese su edad: "; cin>>edad;
	cout <<"Ingrese su tipo de transaccion (C Caja / A Atencion al cliente): "; cin>>transaccion;
	
	if (transaccion == 'C'){
		
	cout<<"Bienvenido a CAJA";	
	}
	
	cout<<endl;		
	break;
		}
	}	
	cout<<"Desea continuar? (1 = para seguir / 0 = para sair): ";
	cin>> des;	
	}		
	return 0;
}
