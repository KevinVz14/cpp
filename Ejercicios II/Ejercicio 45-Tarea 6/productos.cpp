 #include <iostream>
using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion){
	
	
	int opcionProducto = 0;
	
	switch(opcion){
	case 1: {
		system("cls");	
	cout << "BEBIDAS CALIENTES"<< endl ;
	cout << "*********************"<< endl ;
	cout << "1 - Capuccino"<< endl ;
	cout << "2 - Expresso"<< endl ;
	cout << "3 - Chocolate caliente"<< endl ;
	cout<< endl;
	cout<<"Ingrese una opcion: " ;
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		agregarProducto("1 Capuccino - L 40.00 ", 1, 40);
		break;
		
		case 2: 
		agregarProducto("1 Expresso - L 30.00 ", 1, 30);
		break;
		
		case 3: 
		agregarProducto("1 Chocolate caliente - L 15.00 ", 1, 15);
		break;
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			return;
			break;
		}	
	}
	
	
	cout << endl ;
	cout << "Producto agregado"<<endl<<endl;
	system("pause");

break;
	}
	

	case 2: {
		
	system("cls");	
	cout << "BEBIDAS FRIAS"<< endl ;
	cout << "*********************"<< endl ;
	cout << "1 - Te frio"<< endl ;
	cout << "2 - Malteada"<< endl ;
	cout << "3 - Batido de granada"<< endl ;
	
	cout<< endl;
	cout<<"Ingrese una opcion: " ;
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		agregarProducto("1 Te frio - L 25.00 ", 1, 25);
		break;
		
		case 2: 
		agregarProducto("1 Malteada - L 20.00 ", 1, 20);
		break;
		
		case 3: 
		agregarProducto("1 Batido de granada - L 30.00 ", 1, 30);
		break;
	
		default:
			{
			cout << "Opcion no valida "<< endl ;
			return;
			break;
		}	
	}
	
	
	cout << endl ;
	cout << "Producto agregado"<<endl<<endl;
	system("pause");

break;
	}
	
	case 3: {
		
	system("cls");	
	cout << "REPOSTERIA"<< endl ;
	cout << "*********************"<< endl ;
	cout << "1 - Pastel"<< endl ;
	cout << "2 - Galletas"<< endl ;
	cout << "3 - Postre de crema"<< endl ;
	cout<< endl;
	cout<<"Ingrese una opcion: " ;
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		agregarProducto("1 Pastel - L 250.00 ", 1, 250);
		break;
		
		case 2: 
		agregarProducto("1 Galletas - L 20.00 ", 1, 20);
		break;
	
		case 3: 
		agregarProducto("1 Postre de crema - L 50.00 ", 1, 50);
		break;
	
		default:
			{
			cout << "Opcion no valida "<< endl ;
			return;
			break;
		}	
	}
	
	
	cout << endl ;
	cout << "Producto agregado"<<endl<<endl;
	system("pause");

break;
	}
	

	default:
		break;
	}
	
	
	
	
}
