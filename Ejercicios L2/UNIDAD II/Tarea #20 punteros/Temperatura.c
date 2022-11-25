#include<iostream>
using namespace std;
int main(){
	cout<<"<<PRGRAMA DE CONVERSION DE TEMPERATURAS>>"<<endl;
	//DEFINICION DE VARIABLES
	float gradosC, gradosF, gradosK;
	float *ptrGradosC, *ptrGradosF, *ptrGradosK;
	ptrGradosC=&gradosC;
	ptrGradosF=&gradosF;
	ptrGradosK=&gradosK;

	//CAPTURA DE DATOS
	cout<<"Ingrese los grados centigrados: ";
	cin>>*ptrGradosC;
	//PROCESO
	*ptrGradosF = *ptrGradosC*9/5+32;
	*ptrGradosK = *ptrGradosC+273.15;
	//SALIDA DE DATOS
	cout<<"Grados Farenheit: "<<*ptrGradosF<<endl;
	cout<<"Grados Kelvin: "<<*ptrGradosK<<endl;
	cout<<"RESUMEN DE MEMORIA"<<endl;
	cout<<"sizeof gradosC: "<<gradosC<<" " <<sizeof(gradosC) <<"Bytes"<<endl;
	cout<<"sizeof gradosF: "<<gradosF<<" " <<sizeof(gradosF) <<"Bytes"<<endl;
	cout<<"sizeof gradosK: "<<gradosK<<" " <<sizeof(gradosK) <<"Bytes"<<endl;
	cout<<"sizeof ptrGradosC: "<<ptrGradosC<<" " <<sizeof(ptrGradosC) <<"Bytes"<<endl;
	cout<<"sizeof ptrGradosF: "<<ptrGradosF<<" " <<sizeof(ptrGradosF) <<"Bytes"<<endl;
	cout<<"sizeof ptrGradosK: "<<ptrGradosK<<" " <<sizeof(ptrGradosK) <<"Bytes"<<endl;
	cout<<"sizeof *ptrGradosC: "<<*ptrGradosC<<" " <<sizeof(*ptrGradosC) <<"Bytes"<<endl;
	cout<<"sizeof *ptrGradosF: "<<*ptrGradosF<<" " <<sizeof(*ptrGradosF) <<"Bytes"<<endl;
	cout<<"sizeof *ptrGradosK: "<<*ptrGradosK<<" " <<sizeof(*ptrGradosK) <<"Bytes"<<endl;
	cout<<"<<FIN DEL PROGRAMA>>"<<endl;
}
