#include<iostream>
#include<string>
using namespace std;

int main() {
	//DECLARACION DE VARIABLES
	string password = "2022", identidad = "";
	int intentos = 0, edad, des = 1;
	char transaccion;
	int contEdad = 0, contTransaccion = 0, contadorMayor = 0, contadorMenor = 0, contadorCaja = 0, contadorAtencionC = 0;
	
	cout<<" ***** SISTEMA DE CONTROL DE CLIENTES DE BANCO *****" << endl; cout << endl;
	cout<<"Clave de acceso: 2022 " << endl; cout << endl;
	//CONDICION if PARA INTENTOS DE LA CLAVE DE ACCESO
	for (int intentos = 0; intentos <= 3; intentos++) {
		if(intentos == 3){
		cout << "----- No se ha podido validar su clave ----- " << endl;
		break;
		}
	
	cout<< "Ingrese su clave de acceso: "; cin >> password;
	cout<< endl;
	//COMPROBACION DE CLAVE DE ACCESO
	if(password == "2022"){
	cout << endl;
		while(des == 1){
			//CAPTURA DE DATOS
			cout << "BIENVENIDO AL BANCO  " << endl; cout << endl;
			cout << "Ingrese su No. de indentidad:  "; cin >> identidad;
			cout << "Ingrese su edad: "; cin >> edad; contEdad++;
			cout << "Ingrese su tipo de transaccion (C = Caja / A = Atencion al cliente): "; cin >> transaccion; contTransaccion++;
			cout << endl;
			cout << endl;
			//CODICIONES if PARA ACUMULAR DATOS 
			if (edad < 60){
			contadorMenor++;
			}
	
			if (edad >= 60){
			contadorMayor++;
			}
		
			if (transaccion == 'C') {
			contadorCaja++;
			}
			
			if (transaccion == 'A') {
			contadorAtencionC++;
			}
			cout << "Desea continuar? (1 = para seguir ingresando datos / -1 = para salir y mostrar resumen): ";
			cin >> des; 
		}
		cout << endl; cout << endl;
		//SALIDAS
		cout << "-----RESUMEN DE CIUDADANOS ATENDIDOS POR EDAD Y TRANSACCION -----" << endl;
		cout << "Cantidad de personas atendidas por edad: ___________ " << contEdad << endl;
		cout << "Cantidad de transacciones realizadas: ______________ " << contTransaccion << endl;
		cout << "Cantidad de personas de la tercer edad: ____________ " << contadorMayor << endl;
		cout << "Cantidad de personas adultas: ______________________ " << contadorMenor << endl;
		cout << "Transacciones C (Caja): ____________________________ " << contadorCaja << endl;
		cout << "Transacciones A (Atencion al cliente): _____________ " << contadorAtencionC << endl;
		break;
			}
		}
	return 0;
}
