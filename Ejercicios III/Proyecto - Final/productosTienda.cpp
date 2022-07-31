#include <iostream>
#include "factura.h"
using namespace std;



void productosTienda(int opc){
	

	int selectprd = 0;
	
	switch(opc){
	case 1: {
		system("cls");
		cout << "TELEVISIONES - RCA - Samsung - LG" << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Smart TV RCA LED 65 pulg 4k " << endl;			
		cout << "2 - Smart TV  RCA LED 32 pulg HD" << endl;
		cout << "3 - Smart TV Samsung 43 pulg UHD 4K " << endl;
		cout << "4 - Smart TV Samsung 43 pulg Crystal UHD 4K" << endl;
		cout << "5 - Smart TV LG 43 pulg LED 4K ThinQ AI " << endl;
		cout << "6 - Smart TV LG 55 pulg NanoCell 4K ThinQ AI" << endl;	
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
		
		switch (selectprd) {
		
		case 1: {
			agregarProductotienda(" 1 - Smart TV RCA LED 65 pulg 4k - L 16000.00 ", 1, 16000);
			break;
		}
		case 2: {
				agregarProductotienda(" 2 - Smart TV  RCA LED 32 pulg HD - L 6995.00 ", 1, 6995);
				break;
			}
			
		case 3: {
				agregarProductotienda(" 1 - Smart TV Samsung 43 pulg UHD 4K - L 10,495.00 ", 1, 10495);
				break;
			}
		case 4: {
				agregarProductotienda(" 2 - Smart TV Samsung 43 pulg Crystal UHD 4K - L 12,995.00 ", 1, 12995);
				break;
			}
			
			case 5: {
				agregarProductotienda(" 1 - Smart TV LG 43 pulg LED 4K ThinQ AI - L 10,495.00 ", 1, 10495);

				break;
			}
			case 6: {
				agregarProductotienda(" 2 - Smart TV LG 55 pulg NanoCell 4K ThinQ AI - L 19,995.00 ", 1, 19995);

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
		cout << "CELULARES Samsung - Xiaomi - Apple - Huawei" << endl;
		cout << "*******************************************" << endl;
		cout<<endl;
		cout << "1 - Samsung Galaxy A13 " << endl;			
		cout << "2 - Samsung Galaxy A23" << endl;
		cout << "3 - Samsung Galaxy S21 FE " << endl;
		cout << "4 - Xiaomi POCO X3 RAM 6GB " << endl;
		cout << "5 - Xiaomi Redmi 10  " << endl;
		cout << "6 - Xiaomi Redmi Note 10 Pro " << endl;	
		cout << "7 - Apple iPhone 13 " << endl;
		cout << "8 - " << endl;
		cout << "9 - " << endl;
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
		
		switch (selectprd) {
		
		case 1: {
				agregarProductotienda(" 1 - Samsung Galaxy A13 - L 6295.00 ", 1, 6295);
				break;
			}
		case 2: {
				agregarProductotienda(" 2 - Samsung Galaxy A23 - L 7500.00 ", 1, 7500);
				break;
			}
		case 3: {
				agregarProductotienda(" 1 - Samsung Galaxy S21 FE - L 17,995.00 ", 1, 17995);
				break;
			}
		case 4: {
				agregarProductotienda(" 1 - Xiaomi POCO X3 RAM 6GB - L 9500.00 ", 1, 8500);
				break;
			}
		case 5: {
				agregarProductotienda(" 1 - Xiaomi Redmi 10 - L 9500.00 ", 1, 9500);
				break;
			}
		case 6: {
				agregarProductotienda(" 1 - Xiaomi Redmi Note 10 Pro - L 11,500.00 ", 1, 11500);
				break;
			}
		case 7: {
				agregarProductotienda(" 1 - Apple iPhone 13 - L 30,500.00 ", 1, 30500);
				break;
			}
	
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
		cout << " Computadoras - DELL - HP - LENOVO " << endl;
		cout << "***********************************" << endl;
		cout<<endl;
		cout << "1 - Laptop HP 14 pulg / Intel Core i5/ 11va Generación/ 8GB RAM/ 256GB SSD " << endl;			
		cout << "2 - Laptop HP Victus 16 pulg / Intel Core i5/ 8GB RAM/ 256GB SSD "<< endl;
		cout << "3 - Laptop HP 15 pulg / AMD Ryzen 5/ 8GB RAM/ 256GB SSD " << endl;
		cout << "4 - Laptop Dell Inspiron 15 pulg / AMD Ryzen 7/ 8GB RAM/ 512GB SSD " << endl;
		cout << "5 - Laptop Dell Inspiron 15 pulg 3205/ Celeron N4020/ 4GB RAM/ 128GB SSD" << endl;
		cout << "6 - Laptop Lenovo IdeaPad D330 10 pulg / Intel Celeron/ 4GB RAM/ 64GB Disco Duro" << endl;	
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
		
		switch (selectprd) {
			
			case 1: {
				agregarProductotienda(" 1 - Laptop HP 14 pulg / Intel Core i5/ 11va Generación/ 8GB RAM/ 256GB SSD - L 19,000.00 ", 1, 19000);
				break;
			}
		case 2: {
				agregarProductotienda(" 1 - Laptop HP Victus 16 pulg / Intel Core i5/ 8GB RAM/ 256GB SSD - L 28,000.00 ", 1, 28000);
				break;
			}
			
		case 3: {
				agregarProductotienda(" 1 - Laptop HP 15 pulg / AMD Ryzen 5/ 8GB RAM/ 256GB SSD - L 18,000.00 ", 1, 18000);
				break;
			}
			
		case 4: {
				agregarProductotienda(" 1 - Laptop Dell Inspiron 15 pulg / AMD Ryzen 7/ 8GB RAM/ 512GB SSD - L 18,000.00 ", 1, 18000);
				break;
			}
			
		case 5: {
				agregarProductotienda(" 1 - Laptop Dell Inspiron 15 pulg 3205/ Celeron N4020/ 4GB RAM/ 128GB SSD - L 10,000.00 ", 1, 10000);
				break;
			}
			
		case 6: {
				agregarProductotienda(" 1 - Laptop Lenovo IdeaPad D330 10 pulg / Intel Celeron/ 4GB RAM/ 64GB Disco Duro - L 7,000.00 ", 1, 10000);
				break;
			}
		
		
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
	
	case 4: {
	system("cls");
		cout << " Video Juegos y Accesorios - Playstasion - Nitendo " << endl;
		cout << "***********************************" << endl;
		cout<<endl;
		cout << "1 - Nintendo Switch " << endl;			
		cout << "2 - DualShock 4 Controlador inalámbrico para PlayStation 4 " << endl;
		cout << "3 - FIFA 22 para PS4 " << endl;			
		cout << "4 -  " << endl;
		cout << "4 -  " << endl;			
		cout << "6 -  " << endl;
		cout<<endl;
		cout << "Ingrese una opcion del menu  --> : ";
		cin >> selectprd;
		
		switch (selectprd) {
			
			case 1: {
				agregarProductotienda(" 1 - Nintendo Switch - L 6,385.00 ", 1, 6385);
				break;
			}
		case 2: {
				agregarProductotienda(" 1 - DualShock 4 Controlador inalámbrico para PlayStation 4 - L 1473.00 ", 1, 1473);
				break;
			}
		case 3: {
				agregarProductotienda(" 1 - FIFA 22 para PS4  - L 1800.00 ", 1, 1800);
				break;
			}
			
		
		
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
	
	
	

	default:
		break;
	}
	
	
	
}	
}
	

		
			
				
		

