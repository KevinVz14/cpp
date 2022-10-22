#include<iostream>
using namespace std;
int main(){
	//DECLARACION DE VARIABLES
	int horasLab, pagoHora, salario, extraPago, horasExtra;
	cout<<" <<<< PROGRAMA QUE CALCULA EL SALARIO DE LOS EMPLEADOS>>>>"<<endl;
	while (true){
	//CAPTURA DE DATOS
	cout<<"Introduzca el No. de horas laboradas (-1 para terminar): ";
	cin>>horasLab;
	//CONDICION if PARA SALIR DEL CICLO
	if(horasLab == -1){
	break;
	}
	cout<<"Introduzca el pago por hora del empleado: ";
	cin>>pagoHora;
	//CONDICIONES if PARA LOS PROCESOS
	if (horasLab > 40){
	horasExtra= (horasLab - 40);
	extraPago = horasExtra * ((pagoHora*0.5) + pagoHora);
	salario = (pagoHora*40) + extraPago;
	}else{
	salario = (horasLab * pagoHora);
	}
	//SALIDA
	cout<<"El salario es: " << salario;
	cout<<endl; cout<<endl;
	}
	cout<<" <<<<FIN DEL PROGRAMA>>>>"<<endl;
}
