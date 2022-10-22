#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string password = "2022", identidad = "";
	int intentos = 1, edad, des = 1;
	char transaccion;
	int contEdad =0, contTransaccion = 0;
	
	for(int intentos = 0; intentos <= 3; intentos++ ){
		
		if (intentos == 3){
		cout <<"No se ha podido validar su password, por favor contacte al administrador de su sistema " << endl;
		break;
		}	
		
	cout <<"Ingrese su clave de acceso: "; cin>> password;	
	cout<<endl;	
		
	if (password == "2022"){	
	while (des == 1){
			
	cout <<"Bienvenido al Banco "<<endl;		
	cout <<"Ingrese su No. de indentidad:  " ; cin>>identidad;
	cout <<"Ingrese su edad: "; cin>>edad; contEdad++;
	cout <<"Ingrese su tipo de transaccion (C Caja / A Atencion al cliente): "; cin>>transaccion; contTransaccion++;
	cout<<endl;cout<<endl;
	cout<<"Desea continuar? (1 = para seguir / 0 = para sair): ";
	cin>> des;		
	}
	cout<<endl;cout<<endl;
	cout<<"-----RESUMEN DE CIUDADANOS ATENDIDOS POR EDAD Y TRANSACCION -----"<<endl;
	cout<<"Cantidad de personas atendidas por edad: "<<contEdad<<endl;
	cout<<"Cantidad de personas atendidas por transaccion: "<<contTransaccion<<endl;
	break;
	}	
}
		
	return 0;
}
