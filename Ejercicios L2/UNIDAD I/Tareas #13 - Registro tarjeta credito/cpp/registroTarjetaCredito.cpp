#include<iostream>
using namespace std;

int main(){
//DECLARACION DE VARIABLES
string nombreT = " ";
float limiteC = 0, valorT = 0, devolucionT = 0, totalLimiteC = 0, acuValorT = 0, totalDev = 0;
int des = 1,contaT = 1, contadorT = 0;
//CAPTURA DE DATOS
cout<<"------- REGISTRO TARJETA DE CREDITO ------"<<endl;
cout<<"Ingrese su  nombre: ";
cin>>nombreT;
cout<<"Ingrese el limite de credito en lempiras: ";
cin>>limiteC;

        while(des == 1){
                cout<<endl;
                cout<<"Ingrese el valor de la transaccion " <<"#"<<contaT<< ": "; cin>>valorT; contadorT++;
                cout<<endl;
                
                if (valorT > limiteC ){
                    cout <<" **** La teransaccion supera el limite ****"<<endl; cout<<endl;
                }else{
                	
                //Devolucion
                devolucionT = (valorT * 0.05 );
                limiteC = limiteC - valorT;
                
                cout<<"Credito restante: "<<limiteC<<endl;
                cout<<"Valor de la devolucion: "<<devolucionT<<endl;
                acuValorT = acuValorT + valorT ; 
				totalDev = totalDev + devolucionT; 		
				}

                cout<<"Desea agregar otra transaccion (1 = seguir / 0 = salir): ";
                cin>>des;
                
		        contaT = contaT + 1;  
        }
cout<<endl;
cout<<"------------ RESUMEN ------------"<<endl;
cout<<"numero de transacciones: " <<contadorT<<endl;
cout<<"Total de transacciones: " <<acuValorT<<endl;
cout<<"Total de devoluciones: " <<totalDev<<endl;


return 0;
}
