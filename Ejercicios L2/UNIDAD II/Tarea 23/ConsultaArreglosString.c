#include<iostream>
#include<string>
#define DIM1 7
#define DIM2 5
using namespace std;

int main(){
	int continuar=1, rows;
	//DECLARACION DE ARREGLO DE STRINGS BIDIMENSIONALES
	string empleados[DIM1][DIM2];
	//DECLALARCION DE ARREGLOS DE INFORMACION BASE
	string identidad[]={"0501200106643", "0502200450661", "0502200106678", "0501199506448", "0501200598774", "0502199945887", "0503200416998"};
	string primernombre[]={"Alfredo", "Byron", "Carlos", "Daniel", "Elmer", "Fernando", "Gerson"};
	string segundonombre[]={"Hector", "Ismar", "Javier", "Kevin", "Leonardo", "Manuel", "Orlando"};
	string primerapellido[]={"Antunes", "Bonilla", "Caballero", "Espinoza", "Flores", "Garcia", "Hernandez"};
	string segundoapellido[]={"Almendarez", "Cruz", "Fonseca", "Juarez", "Montoya", "Guevara", "Padilla"};
	//INICIO DE CICLO
	while(continuar != -1){
		//ASIGNACION DE VALOR SEMILLA PARA GENERAR NUMEROS ALEATORIOS
		srand(time(NULL));
		//INICIO DE RECORRIDO DE LLENADO DE ARREGLO DE STRINGS
		for(int i=0;i<DIM1;i++){
			 for(int j=0;j<DIM2;j++){
				//ASIGNACION DE DATOS A COLUMNAS
				switch(j){
					case 0:
						empleados[i][j]=identidad[i];
						break;
					case 1:
						empleados[i][j]=primernombre[0+rand()%6];
						break;
					case 2:
						empleados[i][j]=segundonombre[0+rand()%6];
						break;
					case 3:
						empleados[i][j]=primerapellido[0+rand()%6];
						break;
					case 4:
						empleados[i][j]=segundoapellido[0+rand()%6];
						break;
				}
			}
			rows= i;
		}
	//IMPRESION DEL ARREGLO STRING
		cout << endl << "Listado de Empleados: " << endl;
		for(int k=0;k<=rows;k++){
			cout << endl << "#" << k+1 << + " ";
			for(int l=0;l<=4;l++)
				cout << empleados[k][l] + " ";
		}
		int i=0;
		while(i !=5){
			string campo;
			cout << endl << "Lista de opciones: " <<endl;
			cout << " 1. Filtrar por identidad. " <<endl;
			cout << " 2. Filtrar por primer nombre. " <<endl;
			cout << " 3. Filtrar por segundo nombre. " <<endl;
			cout << " 4. Filtrar por primer apellido. " <<endl;
			cout << " 5. Filtrar por segundo apellido. " <<endl;
			cout << " 6. Filtrar por año de nacimiento. " <<endl;
			cout << " Cualquier otrar tecla para salir. " <<endl;
			cout << "Ingrese una opcion: ";
			cin >> i;
			switch(i){
				case 1:
					cout << "Ingrese numero de identidad: ";
					cin >> campo;
					for(int k=0;k<=rows;k++){
						if(campo.compare(empleados[k][0])==0) cout << endl;
						for (int l=0;l<=4;l++){
							if(campo.compare(empleados[k][0])==0)
								cout << " " + empleados[k][l] + " ";
						}
					}
					cout << endl;
					break;
				case 2:
					cout << "Ingrese primer nombre: ";
					cin >>campo;
					for(int k=0;k<=rows;k++){
						if(campo.compare(empleados[k][1])==0) cout << endl;
						for(int l=0;l<=4;l++){
							if(campo.compare(empleados[k][1])==0)
								cout << " " + empleados[k][l] + " ";
						}
					}
					cout << endl;
					break;
				case 3:
					cout << "Ingrese segundo nombre: ";
					cin >> campo;
					for(int k=0;k<=rows;k++){
						if(campo.compare(empleados[k][2])==0) cout << endl;
						for(int l=0;l<=4;l++){
							if(campo.compare(empleados[k][2])==0)
								cout << " " + empleados[k][l] + " ";
						}
					}
					cout << endl;
					break;
				case 4:
					cout << "Ingrese primer apellido: ";
					cin >> campo;
					for(int k=0;k<=rows;k++){
						if(campo.compare(empleados[k][3])==0) cout << endl;
						for(int l=0;l<=4;l++){
							if(campo.compare(empleados[k][3])==0)
								cout << " " + empleados[k][l] + " ";
						}
					}
					cout << endl;
					break;
				case 5:
					cout << "Ingrese segundo apellido: ";
					cin >> campo;
					for(int k=0;k<=rows;k++){
						if(campo.compare(empleados[k][4])==0) cout << endl;
						for(int l=0;l<=4;l++){
							if(campo.compare(empleados[k][4])==0)
								cout << " " + empleados[k][l] + " ";
						}
					}
					cout << endl;
					break;
				case 6:
					cout << "Ingrese año de nacimiento: ";
					cin >> campo;
					for(int k=0;k<=rows;k++){
						if(campo==empleados[k][0].substr(4,4)) cout << endl;
						for(int l=0;l<=4;l++){
							if(campo==empleados[k][0].substr(4,4))
								cout << " " + empleados[k][l] + " ";
						}
					}
					cout << endl;
					break;
				otherwise:
					break;
			}
		}
		//INICIO O SALIDA DE PROGRAMA
		cout << endl << "Desea continuar? -1/1: ";
		cin >> continuar;
	}
}

