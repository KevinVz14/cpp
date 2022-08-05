#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;
int barraC(){
	
	
	int seg = 5;
	
	for (int i = 0; i < 21; i++){
		system("color B0");	
	cout<<"\n"; 	cout<<"\n";
		cout<<"\n"; 	cout<<"\n";
			cout<<"\n"; 	cout<<"\n";
		cout<<"\n"; 	cout<<"\n";
	cout<<"\n"; 	cout<<"\n";
		cout << "\t\t\t\t    CARGANDO...\n";
		for ( int i = 0; i < 79; i++ ){
			cout<<char(219);
			Sleep(seg*1000/80);		
	}
	
	system("cls");
	cout << "\t\t\t BIENVENIDO A TECCHONOLOGY STORE!"<<endl;
	system("pause");
	
	return 0;
	}
}
