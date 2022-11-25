#include<iostream>
#include<string>
#define DIM1 7
#define DIM2 5
using namespace std;
int main(){
	int continuar=1;
	//DECLARACION DE ARREGLO DE STRINGS BIDIMENSIONALES
	string empleados[DIM1][DIM2];
	//DECLARACION DE ARREGLOS DE INFORMACION BASE
	string identidad[]={"0501200106643", "0502200450661", "0502200106678", "0501199506448", "0501200598774", "0502199945887", "0503200416998"};
	string primernombre[]={"Alfredo", "Byron", "Carlos", "Daniel", "Elmer", "Fernando", "Gerson"};
	string segundonombre[]={"Hector", "Ismar", "Javier", "Kevin", "Leonardo", "Manuel", "Orlando"};
	string primerapellido[]={"Antunes", "Bonilla", "Caballero", "Espinoza", "Flores", "Garcia", "Hernandez"};
	string segundoapellido[]={"Almendarez", "Cruz", "Fonseca", "Juarez", "Montoya", "Guevara", "Padilla"};
	//INICIO DE CICLO
	while(continuar!=-1){
	//ASIGNACION DEVALOR SEMILLA PARA GENERAR NUMEROS ALEATORIOS
	srand(time(NULL));
	//INICIO DE RECORRIDO DE LLENADO DE ARREGLO STRINGS
	for (int i = 0; i < DIM1; i++){
		cout<<endl<< "Empleado #" <<i+1 <<": " <<endl;
		for (int j = 0; j < DIM2; j++){
			//ASIGNACION DE DATOS A COLUMNAS
			switch (j){
				case 0:
                                       empleados[i][j] = identidad[i];
                                       break;
				case 1:
                                       empleados[i][j] = primernombre[0+rand()%6];
                                       break;
                                case 2:
                                       empleados[i][j] = segundonombre[0+rand()%6];
                                       break;
                                case 3:
                                       empleados[i][j] = primerapellido[0+rand()%6];
                                       break;
                                case 4:
                                       empleados[i][j] = segundoapellido[0+rand()%6];
                                       break;
			}
		}
		//IMPRESION DE ARREGLO
		cout<<endl<< "Listado de Empleados: "<<endl;
		for (int k = 0; k <= i; k++){
			cout<<endl<< "#" <<k+1 << + " ";
			for (int l = 0; l <= 4 ; l++){
			cout<<empleados[k][l] + " " + "[" << k << "][" << l <<"] ";
			}
		}
	}
	//INICIO O SALIDA DE PROGRAMA
	cout<<endl << "Desea continuar? -1/1: ";
	cin>>continuar;
	}
}
