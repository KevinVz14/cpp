#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int barraFact(){
	
	
	int seg = 5;
	
	for (int i = 0; i < 21; i++){

	
		system("cls");
			cout<<"\n"; 	cout<<"\n";
		cout << "\t\t\t\t  GENERANDO FACTURA...\n\n";
		for ( int i = 0; i < 79; i++ ){
			cout<<char(219);
			Sleep(seg*1000/80);		
	}
	
	return 0;
	}
}
