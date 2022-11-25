//PROGRAMA EJEMPLO DE UTILIZACION DE MEMORIA DINAMICA
#include<iostream>
using namespace std;
//INICIO DE FUNCION PRINCIPAL
int main(){

	int rows=10;//Cantidad de filas en arreglo
	int memory=0;//Variable de contabilidad de memoria utilizada
	//UTILIZACION DE MEMORIA DINAMICA MEDIANTE APUNTADORES DE ARREGLOS
	int **ptrarr = new int*[rows];//Definicion del arreglo con punteros
	for(int r = 0; r < rows; r++){//Inicio de recorrido de filas del arreglo
	ptrarr[r] = new int[r+1];//Creacion de una nueva columna en el arreglo
		for(int c = 0; c <= r; c++){//Inicio de recorrido de columnas del arreglo
		ptrarr[r][c] = ( r + 1 ) * 10 + c + 1;//Asignacion de valores al arreglo
		cout<<ptrarr[r][c]<<" ";//Imprimir valor actual del arreglo
		memory+=sizeof(ptrarr[r][c]);//Contador de uso de memoria
		if(c==r) cout<<"  (" << memory <<" Bytes)";//Impresion de memoria utilizada

		}
		cout<<endl;
	}
	memory=0;//Reinicio de contador de memoria
	//ELIMINACION DE MEMORIA DINAMICA MEDIANTE UTILZANDO LA FUNCION DELETE
	for(int i = 0; i<rows;i++){//Inicio de impresion de valores del arreglo
		for(int r = i; r < rows; r++){//Inicio de recorrido de filas del arreglo
			for(int c = 0; c <= r; c++){//Inicio de recorrido de columnas del arreglo
				cout<<ptrarr[r][c]<<" ";//Imprimir valor actual del arreglo
				memory+=sizeof(ptrarr[r][c]);//Contador de uso de memoria
		 		if(c==r) cout<<"  (" << memory <<" Bytes)";//Imprimir contador de memoria
		}
		cout<<endl;
	}
	delete[] ptrarr[i];//Eliminar Fila i del arreglo
	cout<<"Fila: "<<i+1<<" Eliminada"<<endl; //Impresion de la fila eliminada
	memory = 0; //Reinicio de contador de memoria
    }
    delete[] ptrarr;//ELiminacion del arreglo de apuntadores
}
