//SUMA DE MATRICES
#include<iostream>
#define DIM1 5
#define DIM2 5
using namespace std;
int main(){
    int n,m, cont = 1, opc;
    cout<<" ********** PROGRAMA DE SUMA Y RESTA DE MATRICES (5x5) **********"<<endl;
        while (cont == 1){
        //DECLARACION DE ARREGLOS
        int A[DIM1][DIM2], B[DIM1][DIM2], suma[DIM1][DIM2], resta[DIM1][DIM2];
	//CAPTURA DE LA MATRIZ A
        cout<<"Ingrese matriz A: \n";
        for(int i=0;i<DIM1;i++){
                for(int j=0;j<DIM2;j++){
                        cout<<" ["<<i<<"]["<<j<<"] = ";cin>>A[i][j];
                }
        cout<<"\n";
        }
	//CAPTURA DE LA MATRIZ B
        cout<<"Ingrese matriz B :\n";
        for(int i=0;i<DIM1;i++){
                for(int j=0;j<DIM2;j++){
                        cout<<" ["<<i<<"]["<<j<<"] = ";cin>>B[i][j];
                }
        cout<<"\n";
        }
        //PROCESP DE SUMA Y RESTA DE MATRICES
        for(int i=0;i<DIM1;i++){
                for(int j=0;j<DIM2;j++){
                        suma[i][j] = A[i][j] + B[i][j];
                        resta[i][j] = A[i][j] - B[i][j];
                }
        }
        cout<<"Seleccione la operacion que desea hacer (1 = suma / 2 =  para resta): "; cin>>opc;
	cout<<endl;
            if(opc==1){
                //SALIDA DE DATOS DE LA SUMA
                cout<<"Resultado de la suma: \n\n";
                for(int i=0;i<DIM1;i++){
                    for(int j=0;j<DIM2;j++){
                            cout<<suma[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
            }
            if(opc==2){
                //SALIDA DE DATOS DE LA RESTA
                cout<<"Resultado de la suma: \n\n";
                for(int i=0;i<DIM1;i++){
                    for(int j=0;j<DIM2;j++){
                            cout<<resta[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
            }
	cout<<endl;
        cout<<"Desea continuar? (1 = SI / 0 = NO): "; cin>>cont;
        }
}
