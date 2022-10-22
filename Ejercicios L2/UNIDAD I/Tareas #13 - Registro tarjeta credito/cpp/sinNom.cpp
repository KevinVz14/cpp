#include <iostream>


using namespace std;

int main()
{
	string nombre = "";
	float limiteCredito = 0, valorM = 0, devolucion = 0, acumulador = 0, acumuladorV = 0;
	int continuar = 1, contador = 1, contadorT = 0, opcion = 0;
	
	cout << "PROGRAMA REGISTRO TARJETA DE CREDITO" <<endl;
	
	cout << "\nIngrese el nombre del titular: ";
	cin >> nombre;
	cout << "Ingrese el limite de Credito: ";
	cin >> limiteCredito;
	
	while (continuar == 1)
	{
		cout<< "\nIngrese 1 si desea abonar, ingrese 2 si desea retirar: ";
		cin >> opcion;
		cout << "Ingrese el valor de su siguiente transaccion " << contador << ": " ;
		cin >> valorM;
		contadorT++;
		
		
		if (opcion == 1)
		{
			limiteCredito = limiteCredito + valorM;
			
			cout << "\nMonto: " << valorM <<endl;
			cout << "Credito disponible: " << limiteCredito <<endl;
			
		}
		
		if (opcion == 2)
		{
			if (valorM > limiteCredito)
		{
			cout << "\noperacion no valida" <<endl;	
		}else
		    {
		     devolucion = valorM * 0.05;
		     
		     limiteCredito = limiteCredito - valorM;
		     
		     
		     acumulador = acumulador + devolucion;
		     cout << "\nMonto: " << valorM <<endl;
		     cout << "devolucion: " << devolucion <<endl; 
			 cout << "Credito Restante: " << limiteCredito <<endl;
		     
			 	
			}
			
			
		}
		acumuladorV = acumuladorV + valorM;
		contador = contador + 1;
		cout << "\nSi desea agregar otra transaccion ingrese 1 de lo contrario ingrese 2: ";
		cin >> continuar;
			
		
	}
	
	cout << "\nTotal transacciones: " << contadorT <<endl;
	cout << "Monto total: "<< acumuladorV <<endl;
	cout << "Total devolucion: " << acumulador;

	return 0;
}
