#include <iostream>
#include "factura.h"
using namespace std;

void productosTienda(int opc){
	
	int selectprd = 0;
	int selectmrc = 0;
		
	switch(opc){
	case 1: {
	
	system("cls");	
	system("cls");
		cout << " BIENVENIDO A TELEVISORES " << endl;
		cout << " 1 - RCA  " << endl;
		cout << " 2 - Samsung " << endl;
		cout << " 3 - LG " << endl;
		cout << "-------------------------" << endl;
		cout<<endl;
		cout << "Ingrese una opcion:";
		cin >> selectmrc;
		
	switch(selectmrc)
	{
	case 1: {
	system("cls");
		cout << " BIENVENIDO A TELEVISORES RCA " << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Smart TV RCA LED 65 pulg 4k " << endl;			
		cout << "2 - Smart TV  RCA LED 32 pulg HD" << endl;	
		cout << "3 - Smart TV RCA LED 43 pulg HD " << endl;			
		cout << "4 - Smart TV RCA 46 pulg LED FHD " << endl;
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
		agregarProductotienda("1 - Smart TV RCA LED 65 pulg 4k - L 16000.00 ", 1, 16000);
		break;		
		}
		
	case 2: {
		agregarProductotienda("1 - Smart TV  RCA LED 32 pulg HD - L 7,000.00 ", 1, 7000);
		break;		
		}
		
	case 3: {
		agregarProductotienda("1 - Smart TV RCA LED 43 pulg HD - L 6,000.00 ", 1, 6000);
		break;		
		}
		
	case 4: {
		agregarProductotienda("1 - Smart TV RCA 46 pulg LED FHD - L 10,000.00 ", 1, 10000);
		break;		
		}
		
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
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
		cout << " BIENVENIDO A TELEVISORES SAMSUNG " << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Smart TV Samsung 43 pulg UHD 4K " << endl;
		cout << "2 - Smart TV Samsung 43 pulg Crystal UHD 4K" << endl;
		cout << "3 - Samsung 75 pulg  " << endl;	
		cout << "4 - Samsung Televisor 32 pulg "<< endl;	
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
		agregarProductotienda("1 - Smart TV Samsung 43 pulg UHD 4K - L 10,495.00 ", 1, 10495);
		break;		
		}
		
	case 2: {
		agregarProductotienda("1 - Smart TV Samsung 43 pulg Crystal UHD 4K - L 13,000.00 ", 1, 13000);
		break;		
		}
		
	case 3: {
		agregarProductotienda("1 - Samsung 75 pulg - L 32,000.00 ", 1, 32000);
		break;		
		}
	
	case 4: {
		agregarProductotienda("1 - Samsung Televisor 32 pulg - L 6,500.00 ", 1, 6500);
		break;		
		}
				
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
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
		cout << " BIENVENIDO A TELEVISORES LG " << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Smart TV LG 43 pulg LED 4K ThinQ AI " << endl;
		cout << "2 - Smart TV LG 55 pulg NanoCell 4K ThinQ AI " << endl;
		cout << "3 - LG Televisor 43 pulg Smart TV " << endl;
		cout << "4 - LG Televisor de 55 pulg " << endl;	
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
		agregarProductotienda("1 - Smart TV LG 43 pulg LED 4K ThinQ AI - L 10,495.00 ", 1, 10495);
		break;		
		}
		
	case 2: {
		agregarProductotienda("1 - Smart TV LG 55 pulg NanoCell 4K ThinQ AI - L 19,000.00 ", 1, 19000);
		break;		
		}
	
	case 3: {
		agregarProductotienda("1- LG Televisor 43 pulg Smart TV - L 10,695.00 ", 1, 10695);
		break;		
		}
		
	case 4: {
		agregarProductotienda("1- LG Televisor de 55 pulg - L 15,500.00 ", 1, 15500);
		break;		
		}	
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
		}
	}
}
break;
	
/*Menu principal (CASE 2) Celulares */		
	case 2:{
				system("cls");
			cout<<" BIENVENIDO A CELULARES Y ACCESORIOS "<<endl;
			cout << " 1 - XIAOMI  " << endl;
			cout << " 2 - Samsung " << endl;
			cout << " 3 - APPLE " << endl;
			cout << "---------------------------" << endl;
			cout<<endl;
			cout << "Seleccione una marca: ";
			cin >> selectmrc;
			
			switch(selectmrc)
	{
	case 1: {
	system("cls");
		cout << " BIENVENIDO A CELULARES Y ACCESORIOS XIAOMI " << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Xiaomi POCO X3 RAM 6GB " << endl;
		cout << "2 - Xiaomi Redmi 10  " << endl;
		cout << "3 - Xiaomi Redmi Note 10 Pro " << endl;
		cout << "4 - Xiaomi Redmi Note 9 Pro  " << endl;
		cout << "5 - Xiaomi Mi 11 Lite " << endl;
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
			agregarProductotienda(" 1 - Xiaomi POCO X3 RAM 6GB - L 9500.00 ", 1, 8500);
			break;
			}
			
	case 2: {
			agregarProductotienda(" 1 - Xiaomi Redmi 10 - L 9500.00 ", 1, 9500);
			break;
			}
			
	case 3: {
			agregarProductotienda(" 1 - Xiaomi Redmi Note 10 Pro - L 11,500.00 ", 1, 11500);
			break;
			}
			
	case 4: {
			agregarProductotienda(" 1 - Xiaomi Redmi Note 9 Pro - L 7,000.00 ", 1, 7000);
			break;
			}
			
	case 5: {
			agregarProductotienda(" 1 - Xiaomi Mi 11 Lite - L 9,200.00 ", 1, 9200);
			break;
			}	
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
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
		cout << " BIENVENIDO A CELULARES Y ACCESORIOS SAMSUNG " << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Samsung Galaxy A13 " << endl;			
		cout << "2 - Samsung Galaxy A23" << endl;
		cout << "3 - Samsung Galaxy S21 FE " << endl;
		cout << "4 - Cargador Inalambrico Samsung " << endl;
		cout << "5 - Cobertor de Silicon Samsung Galaxy S21 FE " << endl;
		cout << "6 - Samsung Wireless Charger Stand (15W) " << endl;
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
		case 1: {
				agregarProductotienda("1 - Samsung Galaxy A13 - L 6295.00 ", 1, 6295);
				break;
			}
			
		case 2: {
				agregarProductotienda(" - Samsung Galaxy A23 - L 7500.00 ", 1, 7500);
				break;
			}
			
		case 3: {
				agregarProductotienda("1 - Samsung Galaxy S21 FE - L 17,995.00 ", 1, 17995);
				break;
			}
		case 4: {
				agregarProductotienda("1 - Cargador Inalambrico Samsung - L 1,900.00 ", 1, 1900);
				break;
			}
			
		case 5: {
				agregarProductotienda("1 - Cobertor de Silicon Samsung Galaxy S21 FE - L 650.00 ", 1, 650);
				break;
			}
		case 6: {
				agregarProductotienda("1 - Samsung Wireless Charger Stand (15W) - L 1,200.00 ", 1, 1200);
				break;
			}	
			
			
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	}	
		break;
		
		case 3: {
		system("cls");
		cout << " BIENVENIDO A CELULARES Y ACCESORIOS APPLE " << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Apple iPhone 13 " << endl;
		cout << "2 - Apple Cargador Inalambrico " << endl;
		cout << "3 - Apple iPhone XR " << endl;
		cout << "4 - Apple iPhone 11 Pro " << endl;
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
		case 1: {
				agregarProductotienda(" 1 - Apple iPhone 13 - L 30,500.00 ", 1, 30500);
				break;
			}
			
		case 2: {
				agregarProductotienda(" 1 - Apple Cargador Inalambrico - L 1,300.00 ", 1, 1300);
				break;
			}
			
		case 3: {
				agregarProductotienda(" 1 - Apple iPhone XR - L 10,200.00 ", 1, 10200);
				break;
			}
			
		case 4: {
				agregarProductotienda(" 1 - Apple iPhone 11 Pro - L 14,500.00 ", 1, 14500);
				break;
			}
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	}		
			
				
			break;
			}	
			
		}

		default:
	break;
	}	
}
