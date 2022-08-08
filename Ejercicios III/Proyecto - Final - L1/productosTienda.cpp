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
		cout<<endl;
		cout << " 1 - RCA  " << endl;
		cout << " 2 - Samsung " << endl;
		cout << " 3 - LG " << endl;
		cout << "-------------------------" << endl;
		cout<<endl;
		cout << "Seleccione una marca: ";
		cin >> selectmrc;
		
	switch(selectmrc)
	{
	case 1: {
	system("cls");
	cout<<endl;
		cout << "  \t\t\t\t TELEVISORES RCA " << endl;
		cout << "********************************************************************************" << endl;
		cout<<endl;
		cout << "\t\t PRODUCTO \t\t\t    PRECIO"<< endl;
		cout<<endl;
		
		cout << "1 - Smart TV RCA LED 65 pulg 4k " <<" \t\t L 16,000.00 " << endl;			
		cout << "2 - Smart TV  RCA LED 32 pulg HD" <<" \t\t L 7,000.00 " << endl;	
		cout << "3 - Smart TV RCA LED 43 pulg HD " <<" \t\t L 6,000.00 " << endl;			
		cout << "4 - Smart TV RCA 46 pulg LED FHD " <<"\t\t L 10,000.00 " << endl;
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
		agregarProductotienda("1 - Smart TV RCA LED 65 pulg 4k - L 16,000.00 ", 1, 16000);
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
	cout<<endl;
		cout << "  \t\t\t\t TELEVISORES SAMSUNG " << endl;
		cout << "********************************************************************************" << endl;
		cout<<endl;
		cout << "\t\t PRODUCTO \t\t\t   PRECIO"<< endl;
		cout<<endl;
		cout << "1 - Smart TV Samsung 43 pulg UHD 4K " <<" \t\t L 10,495.00 " << endl;
		cout << "2 - Smart TV Samsung 43 pulg Crystal UHD 4K" <<"\t L 13,000.00 "<< endl;
		cout << "3 - Samsung 75 pulg  " <<" \t\t\t\t L 32,000.00 " << endl;	
		cout << "4 - Samsung Televisor 32 pulg "<<" \t\t\t L 6,500.00 "<< endl;	
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
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
	cout<<endl;
		cout << " \t\t\t\t TELEVISORES LG " << endl;
		cout << "********************************************************************************" << endl;
		cout<<endl;
		cout << "\t\t PRODUCTO \t\t\t   PRECIO"<< endl;
		cout<<endl;
		cout << "1 - Smart TV LG 43 pulg LED 4K ThinQ AI " <<" \t L 10,495.00 " << endl;
		cout << "2 - Smart TV LG 55 pulg NanoCell 4K ThinQ AI " <<" \t L 19,000.00 " << endl;
		cout << "3 - LG Televisor 43 pulg Smart TV " <<" \t\t L 10,500.00 " << endl;
		cout << "4 - LG Televisor de 55 pulg "  <<" \t\t\t L 15,500.00 "<< endl;	
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
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
		agregarProductotienda("1- LG Televisor 43 pulg Smart TV - L 10,500.00 ", 1, 10500);
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
			cout<<endl;
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
		cout << " \t CELULARES Y ACCESORIOS XIAOMI " << endl;
		cout << "***********************************************" << endl;
		cout<<endl;
		cout << "1 - Xiaomi POCO X3 RAM 6GB " << endl;
		cout << "2 - Xiaomi Redmi 10  " << endl;
		cout << "3 - Xiaomi Redmi Note 10 Pro " << endl;
		cout << "4 - Xiaomi Redmi Note 9 Pro  " << endl;
		cout << "5 - Xiaomi Mi 11 Lite " << endl;
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
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
		cout << " \t CELULARES Y ACCESORIOS SAMSUNG " << endl;
		cout << "************************************************" << endl;
		cout<<endl;
		cout << "1 - Samsung Galaxy A13 " << endl;			
		cout << "2 - Samsung Galaxy A23" << endl;
		cout << "3 - Samsung Galaxy S21 FE " << endl;
		cout << "4 - Cargador Inalambrico Samsung " << endl;
		cout << "5 - Cobertor de Silicon Samsung Galaxy S21 FE " << endl;
		cout << "6 - Samsung Wireless Charger Stand (15W) " << endl;
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
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
		cout << " \t CELULARES Y ACCESORIOS APPLE " << endl;
		cout << "***********************************************" << endl;
		cout<<endl;
		cout << "1 - Apple iPhone 13 " << endl;
		cout << "2 - Apple Cargador Inalambrico " << endl;
		cout << "3 - Apple iPhone XR " << endl;
		cout << "4 - Apple iPhone 11 Pro " << endl;
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
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
		}			
	}

break;
/*Menu principal (CASE 3) Computadoras */

case 3:{
	system("cls");
			cout<<" BIENVENIDO A LAPTOPS "<<endl;
			cout<<endl;
			cout << " 1 - DELL  " << endl;
			cout << " 2 - LENOVO " << endl;
			cout << " 3 - HP " << endl;
			cout << "---------------------------" << endl;
			cout<<endl;
			cout << "Seleccione una marca: ";
			cin >> selectmrc;
			
	switch(selectmrc)
	{
	case 1: {
	system("cls");
		cout << " \t LAPTOPS DELL " << endl;
		cout << "******************************" << endl;
		cout<<endl;
		cout << "1 - Laptop Dell Inspiron 15 pulg / AMD Ryzen 7/ 8GB RAM/ 512GB SSD " << endl;
		cout << "2 - Laptop Dell Inspiron 15 pulg 3205/ Celeron N4020/ 4GB RAM/ 128GB SSD" << endl;
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
		case 1: {
				agregarProductotienda(" 1 - Laptop Dell Inspiron 15 pulg /AMD Ryzen 7/8GB RAM/ 512GB SSD - L 18,000.00 ", 1, 18000);
				break;
			}
			
		case 2: {
				agregarProductotienda(" 1 - Laptop Dell Inspiron 15 pulg 3205/Celeron N4020/4GB RAM/128GB SSD - L 10,000.00 ", 1, 10000);
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
		cout << " \t LAPTOPS LENOVO " << endl;
		cout << "*********************************" << endl;
		cout<<endl;
		cout << "1 - Laptop Lenovo IdeaPad D330 10 pulg / Intel Celeron/4GB RAM" << endl;
		cout << "2 - Laptop Lenovo IdeaPad 3 14 pulg/ Intel Core i3/ 8GB RAM/ 256GB SSD" << endl;
		cout << "3 - Laptop Lenovo IdeaPad Gaming 3 15 pulg/ Intel Core i5/ 8GB RAM/ 512GB SSD " << endl;	
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
		case 1: {
				agregarProductotienda(" 1 - Laptop Lenovo IdeaPad D330 10 pulg / Intel Celeron/ 4GB RAM - L 7,000.00 ", 1, 7000);
				break;
			}
			
		case 2: {
				agregarProductotienda(" 1 - Laptop Lenovo IdeaPad 3 14 pulg/ i3/ 8GB RAM/ - L 17,000.00 ", 1, 17000);
				break;
			}
			
		case 3: {
				agregarProductotienda(" 1 - Laptop Lenovo IdeaPad Gaming 3 15 pulg/ i5/ 8GB RAM/ 512GB SSD - L 24,000.00 ", 1, 24000);
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
		cout << " \t\t\t\t LAPTOPS HP " << endl;
		cout << "********************************************************************************" << endl;
		cout<<endl;
		cout << "\t\t PRODUCTO \t\t\t\t\t    PRECIO"<< endl;
		cout<<endl;
		cout << "1 - Laptop HP 14 pulg / Intel Core i5/ 11va Generación/ 8GB RAM/ 256GB SSD " << endl;			
		cout << "2 - Laptop HP Victus 16 pulg / Intel Core i5/ 8GB RAM/ 256GB SSD "<< endl;
		cout << "3 - Laptop HP 15 pulg / AMD Ryzen 5/ 8GB RAM/ 256GB SSD " << endl;	
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
		case 1: {
				agregarProductotienda(" 1 - Laptop HP 14 pulg / Intel Core i5/ 8GB RAM/ 256GB SSD - L 19,000.00 ", 1, 19000);
				break;
			}
		case 2: {
				agregarProductotienda(" 1 - Laptop HP Victus 16 pulg /Intel Core i5/8GB RAM/256GB SSD - L 28,000.00 ", 1, 28000);
				break;
			}
			
		case 3: {
				agregarProductotienda(" 1 - Laptop HP 15 pulg /AMD Ryzen 5/8GB RAM/256GB SSD - L 18,000.00 ", 1, 18000);
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
	
	/*Menu principal (CASE 4) Video juegos */
		case 4:{
			system("cls");
			cout<<" BIENVENIDO A VIDEO JUEGOS Y COSOLAS "<<endl;
			cout<<endl;
			cout << " 1 - Play Station  " << endl;
			cout << " 2 - XBOX " << endl;
			cout << " 3 - Nintendo " << endl;
			cout << "---------------------------" << endl;
			cout<<endl;
			cout << "Seleccione una marca: ";
			cin >> selectmrc;
			
switch(selectmrc)
	{
		
	case 1: {
	system("cls");
		cout << " \t\t\t\t PLAY STATION " << endl;
		cout << "********************************************************************************" << endl;
		cout<<endl;
		cout << "\t\t PRODUCTO \t\t\t\t\t    PRECIO"<< endl;
		cout<<endl;
		cout << "1 - DualShock 4 Controlador inalambrico para PlayStation 4 " <<"\t L 1,500.00 "<< endl;
		cout << "2 - FIFA 22 para PS4 " <<" \t\t\t\t\t\t L 1,800.00 " << endl;	
		cout << "3 - Elden Ring para PS5" <<" \t\t\t\t\t L 2,300.00 " << endl;
		cout << "4 - BATTLEFIELD para PS5 " <<" \t\t\t\t\t L 1,900.00 "<< endl;
		cout << "5 - Consola Sony PlayStation 5 " <<" \t\t\t\t L 33,000.00 " << endl;
		cout << "6 - Consola PlayStation 4 " <<" \t\t\t\t\t L 18,000.00 " << endl;
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
				agregarProductotienda(" 1 - DualShock 4 Controlador inalambrico para PlayStation 4 - L 1,500.00 ", 1, 1500);
				break;
			}
	case 2: {
				agregarProductotienda(" 1 - FIFA 22 para PS4  - L 1,800.00 ", 1, 1800);
				break;
			}
			
	case 3: {
				agregarProductotienda(" 1 - Elden Ring para PS5 - L 2,300.00 ", 1, 2300);
				break;
			}
			
	case 4: {
				agregarProductotienda(" 1 - BATTLEFIELD 2042  - L 1,900.00 ", 1, 1900);
				break;
			}
			
	case 5: {
				agregarProductotienda(" 1 - Consola Sony PlayStation 5 - L 33,000.00 ", 1, 33000);
				break;
			}
			
	case 6: {
				agregarProductotienda(" 1 - Consola Sony PlayStation 4 - L 18,000.00 ", 1, 18000);
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
		cout << " \t\t\t\t  XBOX " << endl;
		cout << "********************************************************************************" << endl;
		cout<<endl;
		cout << "\t PRODUCTO \t\t   PRECIO"<< endl;
		cout<<endl;
		cout << "1 - Consola Xbox One" <<" \t\t L 9,800.00 "<< endl;
		cout << "2 - FIFA 22 para Xbox one" <<" \t L 1,900.00 " << endl;			
		cout << "3 - Consola Xbox One" <<"\t\t L 15,000.00 " << endl;
		cout << "4 - Consola Xbox Series S" <<"\t L 10,000.00 " << endl;
		
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
				agregarProductotienda(" 1 - Consola Xbox One - L 9,800.00 ", 1, 9800);
				break;
			}
	case 2: {
				agregarProductotienda(" 1 - FIFA 22 para Xbox one - L 1,900.00 ", 1, 1900);
				break;
			}
			
	case 3: {
				agregarProductotienda(" 1 - Consola Xbox One X - L 15,000.00 ", 1, 15000);
				break;
			}
			
			
	case 4: {
				agregarProductotienda(" 1 - Consola Xbox Series S - L 10,000.00 ", 1, 10000);
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
		cout << " \t\t\t\t NINTENDO " << endl;
		cout << "********************************************************************************" << endl;
		cout<<endl;
		cout << "\t PRODUCTO \t\t\t   PRECIO"<< endl;
		cout<<endl;
		cout << "1 - Nintendo Switch " <<" \t\t\t L 6,385.00 " << endl;						
		cout << "2 - Nintendo Super Mario 3D World " <<" \t L 1,600.00 " << endl;
		cout<<endl;
		cout << "Seleccione el producto que desea comprar --> : ";
		cin >> selectprd;
	
		switch (selectprd) {
		
	case 1: {
				agregarProductotienda(" 1 - Nintendo Switch - L 6,385.00 ", 1, 6385);
				break;
			}
			
			
	case 2: {
				agregarProductotienda(" 1 - Nintendo Super Mario 3D World - L 1,600.00 ", 1, 1600);
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
	}		
}		
