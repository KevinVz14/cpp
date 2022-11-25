#include<iostream>
#include<string>
#include <fstream>
#define DIM_CLIENTES 3
#define DIM_ITEMS1 3
#define DIM_ITEMS2 4
using namespace std;
int main(){
	//FUNCION PARA CREAR UN ARCHIVO .txt
	ofstream file;
	file.open("facturacion.txt");
	//DECLARACION DE VARIABLES
	int i,j,k,l, continuar = 1, Nuevo = 0, edadC;
	string idCliente[DIM_CLIENTES], ncliente;
	string Cliente[DIM_CLIENTES];
	string ItemsS[DIM_ITEMS1][DIM_ITEMS2];
	float ItemsN[DIM_ITEMS1][DIM_ITEMS2], subtotal = 0, tsubtotal = 0, isv = 0, des = 0;

	while (continuar != -1){
		//CAPTURA DE DATOS
		for(i=0;i<DIM_CLIENTES;i++){
			cout <<endl << "<<<<<<<<<<<<<<<<<<<<<Facturacion>>>>>>>>>>>>>>>"<<endl;
			file <<endl << "<<<<<<<<<<<<<<<<<<<<<Facturacion>>>>>>>>>>>>>>>"<<endl;
			cout << endl << "NOMBRE DEL CLIENTE " <<i+1 << ": ";
			cin >>Cliente[i];
			cout << endl << "INGRESE SU EDAD: " <<i+1 << ": ";
			cin>> edadC;
			cout << endl << "INGRESE SU IDENTIDAD: " <<i+1 << ": ";
			cin>> idCliente[i];
			cout << endl << "INGRESE LOS PRODUCTOS DEL CLIENTE " <<i+1 <<": ";

			//PROCEDIMIENTOS
			for(i=0;i<DIM_ITEMS1;i++){
				for(j=0;j<DIM_ITEMS2;j++){
					switch(j){
						case 0:
						cout << endl  << "Ingrese la descripcion del producto id " <<i+1 << ": " <<endl;
						ItemsN[i][j] = i;
						cin>> ItemsS[i][j];
						break;
						case 1:
						cout << endl << "Precio: " <<endl;
						cin >> ItemsN[i][j];
						break;
						case 2:
						cout << endl << "Cantidad: " <<endl;
						cin >> ItemsN[i][j];
						break;
						case 3:
						ItemsN[i][j]=ItemsN[i][j-2]*ItemsN[i][j-1];
						cout << endl << "Total:" << ItemsN[i][j-2] << " x " <<ItemsN[i][j-1] << " = " << ItemsN[i][j] <<endl;
						//SUBTOTAL
						subtotal = subtotal + ItemsN[i][j];
						//ISV (15%)
						isv = subtotal * 0.15;
						tsubtotal = subtotal + isv;
						//PERSONAS DE LA 3RA EDAD
						if(edadC>=60){
						//DESCUENTO
						tsubtotal = tsubtotal - (tsubtotal * 0.3);
								 }
						}
				}
				cin.clear();
				cin.ignore();
			}
			//SALIDA DE DATOS
			for(i=0;i<DIM_CLIENTES;i++){
				cout<<endl<<endl<<" ********** RESUMEN ********** "<<endl;
				cout << "NOMBRE DEL CLIENTE: " << Cliente[i] <<endl;
				file << "NOMBRE DEL CLIENTE: " << Cliente[i] <<endl;
				cout << "EDAD DEL CLIENTE: " << edadC <<endl;
				file << "EDAD DEL CLIENTE: " << edadC <<endl;
				cout << "IDENTIDAD: " << idCliente[i] <<endl;
				file << "IDENTIDAD: " << idCliente[i] <<endl<<endl<<endl;
				cout <<"---------------------------------------------------------------------------------------"<<endl;
				file <<"---------------------------------------------------------------------------------------"<<endl;
				cout <<"Id\tDescripcion\t\t\tPrecio\t\tCantidad\t\tTotal" <<endl;
				file <<"Id\tDescripcion\t\t\tPrecio\t\tCantidad\t\tTotal" <<endl;
				cout <<"---------------------------------------------------------------------------------------"<<endl;
				file <<"---------------------------------------------------------------------------------------"<<endl;
				for(i=0;i<DIM_ITEMS1;i++){
					for(j=0;j<DIM_ITEMS2;j++){
						switch(j){
							case 0:
								cout << ItemsN[i][j]+1 << "\t" << ItemsS[i][j] << "\t\t\t";
								file<<ItemsN[i][j]+1 <<"\t" <<ItemsS[i][j]<< "\t\t\t";
								break;
							case 1:
								cout<<"| "<<"\t "<< ItemsN[i][j] <<"\t";
								file<<"| "<<"\t "<< ItemsN[i][j] <<"\t";
								break;
							case 2:
								cout<<"| "<<"\t   "<< ItemsN[i][j] << "\t\t";
								file<<"| "<<"\t   "<< ItemsN[i][j] << "\t\t";
								break;
							case 3:
								cout<<"| "<<"\t "<< ItemsN[i][j] << endl;
								file<<"| "<<"\t "<< ItemsN[i][j] << endl;
								break;
						}
					}
				}
			}
			cout <<"---------------------------------------------------------------------------------------"<<endl;
			file <<"---------------------------------------------------------------------------------------"<<endl;
			cout<<endl;
			cout<<"Subtotal: "<<subtotal<<endl;
			file<<"Subtotal: "<<subtotal<<endl;
			cout<<"ISV: "<<isv<<endl;
			file<<"ISV: "<<isv<<endl;
			cout<<"total de la compra: "<<tsubtotal<<endl;
			file<<"total de la compra: "<<tsubtotal<<endl;
			cout<<endl;cout<<endl;
			cout << "Desea continuar? -1/1: ";
			cin >> continuar;

			if (continuar == -1){
				break;
			}
			else{
				cin.clear();
				cin.ignore();
			}
		}
	}
	file.close();
	//FIN DEL PROGRAMA
	return 0;
}
