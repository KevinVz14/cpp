#include<iostream>
#include<string>
using namespace std;

int main() {
	//DECLARACION DE VARIABLES
	string  identidad = "";
	int password, intentos = 0, edad, des = 1;
	char transaccion;
	int contadorMayor = 0, contadorMenor = 0, contadorCaja = 0, contadorAtencionC = 0;
	//DECLARACION DE PUNTEROS
	string *ptrIdentidad;
	char *ptrTransaccion;
	int *ptrclave, *ptrIntentos, *ptrEdad, *ptrDes, *ptrContadorMayor, *ptrContadorMenor, *ptrContadorCaja, *ptrContadorAtecionC;

	//ASIGNANDO PUNTEROS
	ptrIdentidad=&identidad;
	ptrTransaccion=&transaccion;
	ptrclave=&password;
	ptrIntentos=&intentos;
	ptrEdad=&edad;
	ptrDes=&des;
	//CONTADORES
	ptrContadorMayor=&contadorMayor;
	ptrContadorMenor=&contadorMenor;
	ptrContadorCaja=&contadorCaja;
	ptrContadorAtecionC=&contadorAtencionC;

	cout<<" ***** SISTEMA DE CONTROL DE CLIENTES DE BANCO *****" << endl; cout << endl;
	//CONDICION if PARA INTENTOS DE LA CLAVE DE ACCESO
		for (*ptrIntentos = 0; *ptrIntentos <= 3; *ptrIntentos+=1) {
			if (*ptrIntentos == 3) {
			cout << "----- No se ha podido validar su clave ----- " << endl;
			break;
			}

			cout<< "Ingrese su clave de acceso: "; cin >> *ptrclave;
			cout<< endl;

			//COMPROBACION DE CLAVE DE ACCESO
			if (*ptrclave == 2022) {
			cout << "BIENVENIDO AL BANCO  " << endl; cout << endl;
			cout << endl;
				while (*ptrDes == 1) {

				//CAPTURA DE DATOS
					cout << "Ingrese su No. de indentidad:  "; cin >> *ptrIdentidad;
					cout << "Ingrese su edad: "; cin >> *ptrEdad;
					cout << "Ingrese su tipo de transaccion (C o c = Caja / A o a = Atencion al cliente): ";
					cin >> *ptrTransaccion;
					cout << endl;	cout << endl;

					//CODICIONES if PARA ACUMULAR DATOS
					if (*ptrEdad < 60){
					*ptrContadorMenor+=1;
					}

					if (*ptrEdad >= 60){
					*ptrContadorMayor+=1;
					}

					if (*ptrTransaccion == 'C' || *ptrTransaccion == 'c') {
					*ptrContadorCaja+=1;
					}

					if (*ptrTransaccion == 'A' || *ptrTransaccion == 'a') {
					*ptrContadorAtecionC+=1;
					}
					cout << "Desea continuar? (1 = para seguir ingresando datos / -1 = para salir y mostrar resumen): ";
					cin >>*ptrDes; cout << endl;
			}
			cout << endl; cout << endl;
			//SALIDAS
			cout << "-----RESUMEN DE CIUDADANOS ATENDIDOS POR EDAD Y TRANSACCION -----" << endl;
			cout << "Cantidad de personas de la tercer edad: ____________ " << *ptrContadorMayor<< endl;
			cout << "Cantidad de personas adultas: ______________________ " << *ptrContadorMenor << endl;
			cout << "Transacciones C (Caja): ____________________________ " << *ptrContadorCaja << endl;
			cout << "Transacciones A (Atencion al cliente): _____________ " << *ptrContadorAtecionC << endl;
			cout<< endl;
			break;
				}
		}
	return 0;
}
