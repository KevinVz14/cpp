#include<iostream>
using namespace std;

//FUNCION PARA CALCULAR AREA DE TRIANGULO
int AreaTriangulo(int Base, int Altura, int Area){
	return Area = (Base * Altura) / 2;
}

//FUNCION PARA CALCULAR PERIMETRO DE UNA CIRCUNFERENCIA
float perimetroCir(float r, float Pi, float L){
	return L = 2 * Pi * r;
}

//FUNCION PARA CONVERSION DE TEMPERATURA
void conversionTemp(float C, float& , float&);
void conversionTemp(float C, float& F , float& K){
 F = (C*9/5)+32;
 K = (C+273.15);
}

int main(){
	//DECLARACION DE VARIABLES
	int opc = 0, cont = 1, Base = 0, Altura = 0, Area = 0;
	float r = 0, Pi = 3.1416, L = 0, C = 0, K = 0, F = 0;
	while(cont == 1){
	//CAPTURA DE DATOS
	cout<<" PROGRAMA FUNCIONES + DE MENUS OPCIONES"<<endl;	cout<<endl;
	cout<<"  ************* MENU ************  "<<endl;
	cout<<endl;
	cout<<"1 - para calcular el area de un triangulo "<<endl;
	cout<<"2 - para calcular el permitro de una circunferencia "<<endl;
	cout<<"3 - para conversion de temperaturas "<<endl;
	cout<<"4 - para salir "<<endl;
	cout<<"Seleccione una opcion del menu: ";
	cin>>opc;
	//FUNCION SWITCH
	switch (opc){
		case 1:{
			//CAPTURA DE DATOS
			cout<<endl;		cout<<endl;
			cout<<"----SELECCIONASTE CALCULAR EL AREA DE UN TRIANGULO---"<<endl;
			cout<<" Ingrese la Base del triangulo: ";
			cin>>Base;
			cout<<" Ingrese la ALtura del triangulo: ";
			cin>>Altura; 	cout<<endl;
			//SALIDA
			cout<<" El area del triangulo es: "<<AreaTriangulo(Base,Altura,Area)<<endl;
			break;
		}
		case 2: {
			//CAPTURA DE DATOS
			cout<<endl;		cout<<endl;
			cout<<"----SELECCIONASTE PERIMETRO DE UNA CIRCUNFERENCIA---"<<endl;
			cout<<" Ingrese la radio de la circunferencia: ";
			cin>>r;
			cout<<endl;
			//SALIDA
			cout<<"La longitud de la circunferencia es: " <<perimetroCir(r, Pi, L)<<endl;
			break;
		}
		case 3: {
			//CAPTURA DE DATOS
			cout<<endl;		cout<<endl;
			cout<<"----SELECCIONASTE CONVERSION DE TEMPERATURA---"<<endl;
			cout<<" Ingrese la temperatura en Centigrados: ";
			cin>>C;	cout<<endl;
			conversionTemp(C , F , K);
			//SALIDAS
			cout<<" La conversion de grados Centigrados a Farenheit es: "<<F<<endl;
			cout<<" La conversion de grados Centigrados a Kelvin es: "<<K<<endl;
			break;
		}

		case 4:{
		break;
		}
		default:
		cout<<endl;
		cout<<"La opcion ingresada no es valida ";
		break;
		  }
			cout<<endl; cout<<endl;
			cout<<"Desea continuar? (1 = para continuar / 0 =  para salir): ";
                        cin>>cont;
	}
	return 0;
}
