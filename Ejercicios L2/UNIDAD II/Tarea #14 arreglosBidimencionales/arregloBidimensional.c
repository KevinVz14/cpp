#include <iostream>
#include <string>
#define DIM1 5
#define DIM2 5

using namespace std;

int main() {
//DECLARACION DE VARIABLES Y ARREGLOS
int i, j, continuar = 1;
int A [DIM1][DIM2];
int B [DIM1][DIM2];
int C [DIM1][DIM2];

	cout <<"********** PROGRAMA DE SUMA Y RESTA DE MATRICES **********"<<endl;
	while(continuar == 1){
	//CICLO for PARA GENERAR LA MATRIZ A Y B ALEATORIAMENTE
    	for(i=0;i<DIM1;i++){
        	for(j=0;j<DIM2;j++){
                	A[i][j]=1+rand()%100;
			B[i][j]=1+rand()%100;
                }
	}
	//LECTURA DE MATRIZ A
	cout <<"MATRIZ A: "<<endl;
	for(i=0;i<DIM1;i++){
    		for(j=0;j<DIM2;j++){
                	cout << A [i][j] <<"\t";
                }
	cout<<endl;
	}
	cout<<endl;
	//LECTURA MATRIZ B
	cout <<"MATRIZ B: "<<endl;
        for(i=0;i<DIM1;i++){
                for(j=0;j<DIM2;j++){
                        cout<< B [i][j] <<"\t";
                }
        cout<<endl;
        }
	//PROCESO DE SUMA
	for(i=0;i<DIM1;i++){
                for(j=0;j<DIM2;j++){
                        C[i][j] = A[i][j] + B[i][j];
                }
        cout<<endl;
        }

	//LECTURA DEl RESULTADO DE LA SUMA
         cout<<"El resultado de la suma de matrices es "<<endl<<endl;
         for(i=0;i<DIM1;i++){
                for(j=0;j<DIM2;j++){
                       cout<< C[i][j] <<"\t";
                }
        cout<<endl;
        }

	//PROCESO DE RESTA
	for(i=0;i<DIM1;i++){
                for(j=0;j<DIM2;j++){
                        C[i][j] = A[i][j] - B[i][j];
                }
        cout<<endl;
        }
	//LECTURA DEL RESULTADO DE LA RESTA
         cout<<"El resultado de la resta de matrices es "<<endl<<endl;
         for(i=0;i<DIM1;i++){
                for(j=0;j<DIM2;j++){
                       cout<< C[i][j] <<"\t";
                }
        cout<<endl;
        }
	cout<<endl;
	cout <<"Desea continuar (1 = Si / 0 = No): ";
	cin >> continuar;
	cout<<endl;
	//FIN DEL PROGRAMA
	}

}
