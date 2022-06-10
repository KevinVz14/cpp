#include <iostream>

using namespace std;

int main ()  {

int opcion = 0;	
	
while (true) {	
cout<<"******************" <<endl ;
cout<<"	MENU " <<endl ;
cout<<"******************" <<endl ;

cout<<endl;
cout<<"1 - Cafe y granitas " <<endl ;
cout<<"2 - Reposteria " <<endl ;
cout<<"0 - Salir " <<endl ;
cout<<"Ingrese una opcion del menu: " ;
cin >> opcion;

if (opcion == 0) {
		break;	
}		
switch (opcion){
case 1:
	system("cls");
	cout<<"Estas en el menu de Cafe y granitas " <<endl ; 
	system("pause");
	break;	

case 2:
	system("cls");
	cout<<"Estas en el menu de Reposteria " <<endl ;
	system("pause");
	break;

default:
	cout<<endl ;
cout<<"Ingrese una opcion valida (0, 1, 2)" <<endl ;
break;	
}
}

cout<<endl ;
cout<<"Saliste del sistema" <<endl ;
return 0;
}

