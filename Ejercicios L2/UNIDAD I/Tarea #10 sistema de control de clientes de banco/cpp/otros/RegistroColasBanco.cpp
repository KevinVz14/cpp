#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string password = "2022", identidad = "";
	int intentos = 1, edad, des = 1;
	char transaccion;
	

	
	while(intentos <= 3)
	{	
	cout <<"Ingrese su clave de acceso: "; cin>> password;	
	cout<<endl;	
	
	if(password == "2022"){
	cout <<"Bienvenido "<<endl;	
		
	cout <<"Ingrese su No. de indentidad:  " ; cin>>identidad;
	cout <<"Ingrese su edad: "; cin>>edad;
	cout <<"Ingrese su tipo de transaccion (C Caja / A Atencion al cliente): "; cin>>transaccion;
	
	if (transaccion == 'C'){
		
	cout<<"Bienvenido a CAJA";
		
	}
	
	
	cout<<endl;		
	break;
	}
		
	intentos++;	
	if(intentos == 4){
			
	cout <<"No se ha podido validar su password, por favor contacte al administrador de su sistema " << endl;
	cout<<endl;			
	}
}
		
	return 0;
}
