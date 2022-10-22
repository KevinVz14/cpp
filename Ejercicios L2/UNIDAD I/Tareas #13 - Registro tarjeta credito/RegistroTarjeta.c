#include<iostream>
using namespace std;

int main(){
//DECLARACION DE VARIABLES
string nombreT = " ";
float limiteC = 0, valorT = 0, devolucionT = 0, totalLimiteC = 0, acuValorT = 0, totalDev = 0;
int des = 1, contadorT = 0, contaT = 1, opc = 0;
//CAPTURA DE DATOS
cout<<"------- REGISTRO TARJETA DE CREDITO ------"<<endl;
cout<<"Ingrese su  nombre: ";
cin>>nombreT;
cout<<"Ingrese el limite de credito en lempiras: ";
cin>>limiteC;

        while(des == 1){
                cout<<endl;
                cout<<"1 - Abonar " <<endl;
                cout<<"2 - Retirar "<<endl;
                cout<<" ELiga una opcion:  "; cin>>opc; contadorT++;
                cout<<endl;
                cout<<"Ingrese el valor de la transaccion " <<"#"<<contaT<< ": "; cin>>valorT; 
                cout<<endl;
			//CONDICIONALES
        	        if (opc == 1){
                	limiteC = limiteC + valorT;
                        cout<<endl;
                        cout<<"Credito disponible: "<<limiteC;
                        cout<<endl;

                   	 }

                        if(opc == 2){
                            if (valorT > limiteC ){
                            cout <<" **** La teransaccion supera el limite de su credito ****"<<endl;
                            }else{
                            //Devolucion
                            devolucionT = (valorT * 0.05 );
                            limiteC = limiteC - valorT;
                            cout<<endl;
                            cout<<"Credito disponile: "<<limiteC<<endl;
                            cout<<"Valor de la devolucion: "<<devolucionT<<endl;
                            totalDev = totalDev + devolucionT;
                            }

                             	}
                    cout<<endl;cout<<endl;
                    //ACUMULADORES
                    acuValorT = acuValorT + valorT ;
                    contaT = contaT + 1;
                    cout<<"Desea agregar otra transaccion (1 = seguir / 0 = salir): ";
                    cin>>des;
        }
cout<<endl;
//SALIDAS
cout<<"------------ RESUMEN ------------"<<endl;
cout<<"numero de transacciones: " <<contadorT<<endl;
cout<<"Total de transacciones:  " <<acuValorT<<endl;
cout<<"Total de devoluciones:   " <<totalDev<<endl;


return 0;
}
