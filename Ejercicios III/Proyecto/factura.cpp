#include <iostream>
#include "factura.h"

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
	subtotal = subtotal + (cantidad * precio);
	total = subtotal + (subtotal * impuesto);
	delivery = total + envio;
}

void presentaP() {

	system("cls");
	cout << "--------------------------------------------------------------------------------";
	cout << "\t\t\t\t CARRITO DE COMPRAS" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "Productos adquiridos hasta el momento : " << endl;
	cout << endl;
	cout << listaProductostienda << endl;
	cout << endl;	cout << endl;
	system("pause");
}



void Delivery() {
	system("cls");

	string nombre = "";
	string fechaEntrega = "";
	string direccion = "";


	cout << " Ingrese su nombre : ";
	cin >> nombre;
	cout << " Ingrese a fecha que desea recibir su pedido (dia/mes/año): ";
	cin >> fechaEntrega;
	cout << " Ingrese su Direcion : ";
	cin >> direccion;

	barraFact();
	system("cls");
	cout << "--------------------------------------------------------------------------------";
	cout << "\t\t\t\t FACTURA" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << " Nombre del comprador:  "<< nombre << endl;
	cout << " Fecha de entrega: " << fechaEntrega << endl;
	cout << " Direccion de entrega: " << direccion << endl;

	cout << endl;	cout << endl;	cout << endl;
	cout << " Productos adquiridos : " << endl;
	cout << " Cantidad | Descripcion | Precio  " << endl;
	cout << listaProductostienda;
	cout << endl;	cout << endl;
	cout << "Subtotal de la compra : L " << subtotal;
	cout << endl;
	cout << "Cobro por envio : L " << envio << endl;
	cout << "Total de la compra : L " << delivery;
	cout << endl;	cout << endl; cout << endl;	cout << endl;
	cout << " Muchas gracias por su compra.  " << endl;
	system("pause");
}


void imprimirFacturatienda() {

	barraFact();
	system("cls");
	cout << "--------------------------------------------------------------------------------";
	cout << "\t\t\t\t FACTURA" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << endl;	
	cout << " Productos adquiridos : " << endl;
	cout << endl;
	cout << listaProductostienda;
	cout << endl;	
	cout << "Subtotal de la compra : L " << subtotal;
	cout << endl;	cout << endl;
	cout << "Total de la compra : L " << total;
	cout << endl;	cout << endl; cout << endl;	cout << endl;
	cout << " Muchas gracias por su compra, vuelva pronto.  " << endl;
	system("pause");
}


