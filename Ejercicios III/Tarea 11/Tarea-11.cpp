#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int numeroAlazar(){
	
	return rand() % 5 + 1;
}

int main () {

int numeroAlazar();
int suma = 0;
int numeros[5][5];
srand(time(NULL));
	

	
	 for (int i = 0; i < 5; i++)
        
		for (int j = 0; j < 5; j++)
        {
        	numeros[i][j] = numeroAlazar();
        	suma = suma + numeros[i][j];
        }
        
	 cout<<"*******  Arreglo Bidimensional 5 x 5  *******"<<endl<<endl;
	
	   for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        	cout << "  " << numeros[i][j];
        }
        cout<<endl;
    }
 	cout<<endl;
    cout<<"  El total de la suma es de: " << suma;
 
    return 0;
}


