#include<iostream>
#include<string>
using namespace std;

int main(){
	//DECLARACION DE VARIABLES
	int presupuesto, horasLab, pagoHora, salario, extraPago, horasExtra;
	float IHSS, RAP, salarioT, deducciones,exedente;
	//DECLARACION DE CONTADORES Y ACUMULADORES
	int cont = 0, des = 1, acuSalario = 0, acuDeduc = 0, acuTotal = 0;
	cout<<"<<<<<<PAGO POR HORAS LABORADAS>>>>>"<<endl;
	cout<<"PROGRAMADOR: Kevin Vasquez ";
	cout<<endl;
	cout<<"FECHA: 25/09/2022 ";
	cout<<endl;
	//CAPTURA DE DATOS
	cout<<"Ingrese el presupuesto de la planilla actual: "; cin>>presupuesto;
	while (des == 1){
	cout<<"Introduzca las horas laboradas por el empleado # "<<cont+1<<": ";  cin>>horasLab;
	cout<<"Introduzca el pago por hora del empleado #"<<cont+1<<": "; cin>>pagoHora;	
	if (horasLab > 40){
	//PROCESOS
	horasExtra= (horasLab - 40);
	extraPago = horasExtra * ((pagoHora*0.5) + pagoHora);
	salario = (pagoHora*40) + extraPago;
	IHSS = ( salario * 0.035);
	RAP=(salario * 0.015 );
	deducciones = (IHSS + RAP);
	salarioT=(salario - deducciones);
	}else{
	//PROCESOS
	salario = (horasLab * pagoHora);
	IHSS = ( salario * 0.035);
	RAP=(salario * 0.015 );
	deducciones = (IHSS + RAP);
	salario=(salario - deducciones);
    }
    //SALIDAS
	cout<<endl;
	cout<<"<<<<<<<<<<DEDUCCIONES>>>>>>>>>>"<<endl;
	cout<<"Calculo IHSS:-----------L."<<IHSS<<endl;
	cout<<"Calculo RAP:------------L."<<RAP<<endl;
	cout<<"TOTAL DEDUCCIONES:------L."<<deducciones<<endl;
	cout<<endl;cout<<endl;
	cout<<"<<<<<<<<<<<<SALARIO>>>>>>>>>>>> "<<endl;
	cout<<"El salario del empleado es: "<<salarioT<<endl;
	cout<<"<<<<<<<<<FIN CALCULO>>>>>>>>> "<<endl;
	cout<<endl;cout<<endl;
	cout<<"Desea agregar otro calculo de salario? (-1 = Calcular Total y salir / 1 = Agregar otro Calculo): ";
	cin>> des;
	cout<<endl;cout<<endl;
	//ACUMULADORES
	acuSalario = acuSalario + salarioT;
	acuDeduc = acuDeduc + deducciones;
	acuTotal = (acuSalario + acuDeduc);
	exedente = (presupuesto - acuTotal);
	cont = cont + 1;
	}
	//SALIDAS
	cout<<"---------RESUMEN PAGO DE PLANTILLAS---------"<<endl;
	cout<<"El pago total de la planilla es: L."<<acuSalario<<endl;
	cout<<"El pago total por deducciones es: L."<<acuDeduc<<endl;
	cout<<"TOTAL DESEMBOLSO DE LA EMPRESA: L."<< acuTotal<<endl;
	cout<<"PRESUPUESTO DEL MES: L."	<<presupuesto<<endl;
	cout<<endl;cout<<endl;
	cout<<"EXISTE UN EXCEDENTE DE:  L."	<<exedente<<endl;
	cout<<"<<<<<<<<<FIN DEL PROGRAMA>>>>>>>>> "<<endl;
	return 0;
}
