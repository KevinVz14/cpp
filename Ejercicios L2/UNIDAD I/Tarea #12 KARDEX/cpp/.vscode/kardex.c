#include<iostream>
#include<string>
using namespace std;
//FUNCION PARA CALCULAR EL PRECIO DE VENTA
void precioV(float precioCosto, float precioVenta, float&, float& );
void precioV(float precioCosto, float precioVenta, float& profit, float& ventaFinal){

	profit = (precioVenta - precioCosto);
	ventaFinal = ((precioCosto + profit)*0.12) + (precioCosto + profit) ;
}

int main(){
	cout<<"---------- PROGRAMA KARDEX ----------"<<endl;
	//DECLARACION DE VARIABLES
	string codigo = "", descripcion = "";
	float precioCosto = 0, precioVenta = 0, profit = 0, ventaFinal = 0, sumaCostos = 0, sumaVentas = 0;
	char transaccion;
	int des = 1, contadorS = 0, contadorI = 0;

	while (des == 1){
		//CAPTURA DE DATOS
		cout<<"Ingrese el codigo del producto: "; cin>>codigo;
		cout<<"Ingrese la descripcion del producto: "; cin>>descripcion;
		cout<<"Ingrese el precio de costo del producto: "; cin>>precioCosto;
		cout<<"Ingrese el precio de venta del producto: "; cin>>precioVenta;
		cout<<"Ingrese el tipo de transaccion (S o s = salida / I o i = Ingreso): "; cin>>transaccion;
		cout<<endl;

		precioV(precioCosto, precioVenta, profit, ventaFinal);
        	cout<<"Precio de venta del producto es: " << ventaFinal;
        	cout<<endl; cout<<endl;
			//CONDICIONES (if) PARA ACUMULAR LOS TIPOS DE TRANSACCIONES
			if(transaccion == 'S' ||transaccion == 's' ){
				contadorS++;
			}
			if(transaccion == 'I' || transaccion == 'i' ){
				contadorI++;
			}

		//ACUMULADORES
		sumaCostos = sumaCostos + precioCosto;
		sumaVentas = sumaVentas + ventaFinal;
		cout<<endl;
		cout<<"Desea continuar? (1 = agregar otro producto / 0 = para salir y mostrar resumen): ";
		cin>>des;
		 cout<<endl;  cout<<endl;
	}
	cout<<endl;
	//SALIDAS
	cout<<" ********** RESUMEN **********"<<endl;
	cout<< "TOTAL COSTOS:___________________ L.  " <<sumaCostos <<endl;
	cout<< "TOTAL VENTAS:___________________ L. " <<sumaVentas<<endl;
	cout<< "TOTAL TRANSACCIONES DE TIPO S (SALIDA): "<<contadorS<<endl;
	cout<< "TOTAL TRANSACCIONES DE TIPO I (INGRESO): "<<contadorI<<endl;
	return 0;
}
