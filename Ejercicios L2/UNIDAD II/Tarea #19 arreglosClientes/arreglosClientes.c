#include<iostream>
#include<string>
#define id 1
#define Npregunta 4
#define NT 3
#define nt 3
using namespace std;

int main() {
    //DECLARACION DE VARIABLES
    string datosCliente[50][50], descripcionT[50];
    float cuentaCliente[50][50];
    float Transaccion[50][50], S = 0, T = 0 ;
    int c = 1, t = 1, i, j, ccc = 1;
    cout<<endl<<" ********** PROGRAMA BANCARIO ********** "<<endl;
        //FOR GENERAL
        for (int l = 0; l <= 4; l++) {
            //CAPTURA DE DATOS
            for (i = 0; i < id; i++) {
                for (j = 0; j < Npregunta; j++) {
                    switch (j) {
                    case 0:
                        cout<<endl<<"     CLIENTE #: "<<ccc<<endl;
                        cout<< "Ingrese su identidad: ";  cin >> datosCliente[i][j];
                        break;

                    case 1:
                        cout<< "Ingrese su nombre: "; cin >> datosCliente[i][j+1];
                        break;
					case 2:
                        cout<< "Ingrese su No. cuenta: ";  cin>>cuentaCliente[i][j];
                        break;
                    case 3:
                        cout << "Ingrese su saldo de su cuenta: "; cin >> cuentaCliente[i][j+1];
                        S = cuentaCliente[i][j+1];
                        break;
                    }

                }
                ccc = ccc + 1 ;
            }
            //PROCESO DE LAS TRANSACCIONES
            for (i = 1; i <= nt; i++) {
                for (j = 1; j <= NT; j++) {
                    switch (j){
                    case 1:
                        cout << "\nId de la transaccion # " << t;
                        break;

                    case 2:
                        cout << endl << "Ingrese el monto de la transaccion: "; cin >> Transaccion[i][j];
                        cout << "Descripcion de la transaccion: "; cin >> descripcionT[i];
                       	T =  Transaccion[i][j];
                        break;
                    case 3:
                    	S = S - T;
                    	cout<<"monto disponible: "<<S<<endl;
                        break;
                    }
                }
                t = t + 1;
            }
            t = 1;
        //SALIDA
        cout <<"\nSaldo final del cliente es: " <<S<<endl;
        cout <<"------------------------------------- "<<endl;
        //FIN DEL PROGRAMA
        }
    return 0;
}
