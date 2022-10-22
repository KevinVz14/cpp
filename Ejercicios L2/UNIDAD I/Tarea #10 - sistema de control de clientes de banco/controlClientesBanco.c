#include<iostream>
#include<string>
using namespace std;

int main() {
	//DECLARACION DE VARIABLES
	string  identidad = "";
	int password, intentos = 0, edad, des = 1;
	char transaccion;
	int contadorMayor = 0, contadorMenor = 0, contadorCaja = 0, contadorAtencionC = 0;

	cout<<" ***** SISTEMA DE CONTROL DE CLIENTES DE BANCO *****" << endl; cout << endl;
	//CONDICION if PARA INTENTOS DE LA CLAVE DE ACCESO
		for (int intentos = 0; intentos <= 3; intentos++) {
			if (intentos == 3) {
			cout << "----- No se ha podido validar su clave ----- " << endl;
			break;
			}

			cout<< "Ingrese su clave de acceso: "; cin >> password;
			cout<< endl;

			//COMPROBACION DE CLAVE DE ACCESO
			if (password == 2022) {
			cout << "BIENVENIDO AL BANCO  " << endl; cout << endl;
			cout << endl;
				while (des == 1) {

					//CAPTURA DE DATOS
					cout << "Ingrese su No. de indentidad:  "; cin >> identidad;
					cout << "Ingrese su edad: "; cin >> edad;
					cout << "Ingrese su tipo de transaccion (C o c = Caja / A o a = Atencion al cliente): "; cin >> transaccion;
					cout << endl;	cout << endl;

					//CODICIONES if PARA ACUMULAR DATOS
					if (edad < 60){
					contadorMenor++;
					}

					if (edad >= 60){
					contadorMayor++;
					}

					if (transaccion == 'C' || transaccion == 'c') {
					contadorCaja++;
					}

					if (transaccion == 'A' || transaccion == 'a') {
					contadorAtencionC++;
					}
					cout << "Desea continuar? (1 = para seguir ingresando datos / -1 = para salir y mostrar resumen): ";
					cin >> des; cout << endl;
			}
			cout << endl; cout << endl;
			//SALIDAS
			cout << "-----RESUMEN DE CIUDADANOS ATENDIDOS POR EDAD Y TRANSACCION -----" << endl;
			cout << "Cantidad de personas de la tercer edad: ____________ " << contadorMayor << endl;
			cout << "Cantidad de personas adultas: ______________________ " << contadorMenor << endl;
			cout << "Transacciones C (Caja): ____________________________ " << contadorCaja << endl;
			cout << "Transacciones A (Atencion al cliente): _____________ " << contadorAtencionC << endl;
			cout<< endl;
			break;
					}
		}
	return 0;
}
