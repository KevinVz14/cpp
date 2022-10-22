#include <iostream>
using namespace std;
int main(){
	cout<<"PROGRAMA DE CALCULO DE RESISTENCIA TOTAL"<<endl;
	//DEFINICION DE VARIABLES
	float r1,r2,rt;
	//CAPTURA DE DATOS
	cout<<"Ingrese el valor de la resistencia 1: ";
	cin>>r1;
	cout<<"Ingrese el valor de la resistencia 2: ";
        cin>>r2;
	//PROCESOS
	rt=1/((1/r1)+(1/r2));
	//SALIDA
	cout<<"La resistencia total de R1 = "<<r1<< " + R2 = "<<r2<<" es igual a: "
	<<rt<<endl;
	cout<<"FIN DEL PROGRAMA"<<endl;
}
