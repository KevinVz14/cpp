#include <iostream>

using namespace std;

double subtotal = 0;
double total = 0;
double impuesto = 0.15;
double delivery = 0;
double envio = 150;

string listaProductostienda;

void agregarProductotienda(string descripcion, int cantidad, double precio)
{
	listaProductostienda = listaProductostienda + descripcion + '\n';
	subtotal=subtotal + (cantidad * precio);
	total = subtotal + (subtotal * impuesto);
	delivery =  total + envio;
}

void presentaP(){
	system("cls");
	cout<<"Carro de compras "<< endl; 
	cout<<"Productos adquiridos hasta el momento : "<< endl; 
	cout<<endl;
	cout<<listaProductostienda;
	cout<<endl;	cout<<endl;
	system("pause");	
}



string Delivery(){
	
	system("cls");
	
	string nombreCompleto = "";
	string dir = "";
	string hora = "";
	
	cout<<" Ingrese su nombre : ";
	cin >> nombreCompleto;
	cout<<" Ingrese su Direcion : ";
	cin >> dir;
	cout<<" Ingrese la hora que desea recibir el paquete : ";
	cin >> hora;
	
	
	system("cls");
	cout<<"*******************************"<<endl;
	cout<<"   FACTURA CON DELIVERY   "<<endl;
	cout<<"------------------------------"<<endl;
	cout<<" Nombre completo | Direccion | Hora "   << endl;
	cout << nombreCompleto << " |  " << dir << " | " << hora ;
	cout<<endl;	cout<<endl;	cout<<endl;	
	cout<<" Productos adquiridos : "<< endl; 
	cout<<" Cantidad | Descripcion | Precio  "<< endl; 
	cout<<listaProductostienda;
	cout<<endl;	cout<<endl;
	cout<<"Subtotal de la compra : L " << subtotal;
	cout<<endl;
	cout<<"Cobro por envio : L " <<envio << endl ;
	cout<<"Total de la compra : L " <<delivery ;
	cout<<endl;	cout<<endl; cout<<endl;	cout<<endl;
	cout<<" Muchas gracias por su compra.  "<< endl; 
	system("pause");	
}


void imprimirFacturatienda() {
	
	system("cls");
	cout<<"********************************"<<endl;
	cout<<"         FACTURA        "<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<endl;	cout<<endl;
	cout<<" Productos adquiridos : "<< endl; 
	cout<<" Cantidad | Descripcion | Precio  "<< endl; 
	cout<<listaProductostienda;
	cout<<endl;	cout<<endl;
	cout<<"Subtotal de la compra : L " << subtotal;
	cout<<endl;	cout<<endl;
	cout<<"Total de la compra : L " <<total ;
	cout<<endl;	cout<<endl; cout<<endl;	cout<<endl;
	cout<<" Muchas gracias por su compra, vuelva pronto.  "<< endl; 
	system("pause");	
}


