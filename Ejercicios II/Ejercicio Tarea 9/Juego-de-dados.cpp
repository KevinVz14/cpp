#include <iostream>
#include <stdlib.h> // srand,rand
#include <time.h>

using namespace std;

int dado1 = 0;
int dado2 = 0;
int continuar = 1;	

int main(){
	
	
while (continuar == 1) {
			
		
cout <<"*******BIENVENIDO AL JUEGO DE LOS DADOS********:"<<endl;
cout<<endl;
system("pause");
	
		
	srand(time(NULL));

	dado1 = rand() % 6 + 1;
	dado2 = rand() % 6 + 1;		
	
	cout<<endl;
	cout <<"El dado numero 1 es: " <<dado1<<endl;
	cout <<"El dado numero 2 es: " <<dado2<<endl;
	
	cout<<endl;
	cout<<endl;
	cout <<"Desea jugar nuevamente?"<<endl;
	cout <<"Presione 1 para continuar y 0 para salir: ";
	cin >> continuar;
	
	system("cls");

	}

cout<<"----Gracias por jugar----"<<endl;
	
	return 0;
}
	

