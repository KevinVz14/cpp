#include <iostream>

using namespace std;

double subtotal = 0;
double total = 0;
double impuesto = 0.15;

string listaProductostienda;

void agregarProductotienda(string descripcion, int cantidad, double precio)
{
	listaProductostienda = listaProductostienda + descripcion + '\n';
	subtotal=subtotal + (cantidad * precio);
	total = subtotal + (subtotal * impuesto);
	
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


