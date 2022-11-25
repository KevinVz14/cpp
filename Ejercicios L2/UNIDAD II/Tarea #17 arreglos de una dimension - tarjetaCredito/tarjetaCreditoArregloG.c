#include<iostream>
using namespace std;
//DECLARACION DE VARIABLES
string nombre;
int continuar = 1 , nt, seguir = 2, traN = 1;
float limite, trans[50], devolucionT[50], acumuladortrans = 0, td = 0;

int main(){
//CAPTURA DE DATOS
while (seguir == 2){
continuar = 1;
limite = 0;
acumuladortrans = 0;
td = 0;
traN = 1;
cout<<" <<<<<<<< PROGRAMA DE CONTROL DE TARJETA >>>>>>>> "<<endl;
cout<<"Ingrese su nombre: "; cin>>nombre;
cout<<"Ingrese su limite: "; cin>>limite;

    while(continuar == 1){
	cout<<endl;
        cout<<"Cuantas transacciones va hacer?: "; cin>>nt;
        cout<<endl;
            for(int i = 0;  i < nt; i++){
                cout<<endl;
                cout<<"Ingrese su transaccion #"<<traN++<<": "; cin>>trans[i];
                    if(trans[i] > limite){
                    cout<<endl; cout<<endl;
                    cout<<"La transaccion no es valida, no cuenta con el credito suficiente ! "<<endl;
                    break;
                    }else{
                        for(int i = 0;  i < nt; i++){
                        devolucionT[i] = (trans[i] * 0.05);
                    }
			//ACUMULADORES Y REDUCTOR
                        td = td + devolucionT[i];
                        acumuladortrans= acumuladortrans + trans[i];
                        limite = limite - trans[i];
                        cout<<endl;
                        cout<<"credito disponible de su cuenta: "<<limite;
                        cout<<endl;
                }
        }
        //SALIDAS O RESUMEN
        cout<<endl; cout<<endl;
        cout<<"\t\t\t[RESUMEN]"<<endl;
        cout<<"id\t\tmonto de la transaccion\t\t devoluciones"<<endl;
        cout<<"--------------------------------------------------------------"<<endl;
        for (int i = 0; i < nt; i++)
        {
            cout<<i+1<<"\t\t\t"<<trans[i]<<"\t\t\t\t"<<devolucionT[i]<<endl;
        }
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"total: ";
        cout<<"\t\t\t"<<acumuladortrans<<"\t\t\t\t"<<td<<endl;
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"credito final:          "<<limite<<endl;
        cout<<endl;
    cout<<endl; cout<<endl;
    cout<<"Desea continuar haciendo transacciones? ( 1 = si / 0 = no ): "; cin>>continuar;
    }
    cout << "\nDesea agregar otra persona (2 = si / 0 = no): "; cin >> seguir;
    cout<<endl;
    }
}
