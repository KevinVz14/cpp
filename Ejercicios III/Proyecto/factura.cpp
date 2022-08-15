#include <iostream>
#include "factura.h"

using namespace std;

double subtotal = 0;
double total = 0;
double impuesto = 0.15;
double delivery = 0;
double envio = 150;
double im = 0;

//Info Delivery
string nombre = "";
string fechaEntrega = "";
string direccion = "";

string listaProductostienda;

void agregarProductotienda(string descripcion, int cantidad, double precio)
{
	listaProductostienda = listaProductostienda + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio);
	im = subtotal * impuesto;
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
	cout << "DATOS PERSONALES DEL COMPRADOR"<< endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << " Nombre:  "<< nombre << endl;
	cout << " Fecha de entrega: " << fechaEntrega << endl;
	cout << " Direccion de entrega: " << direccion << endl;
	cout << endl;
	cout << "---------------------------------------------" << endl;
	cout << " Productos adquiridos : " << endl;
	cout << listaProductostienda;
	cout << endl;	cout << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Subtotal de la compra : L " << subtotal;
	cout << endl;
	cout << "Impuesto de la compra : L " << im;
	cout << endl;
	cout << "Cobro por envio : L " << envio << endl;
	cout << "Total de la compra : L " << delivery;
	cout << endl; cout << endl;
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
	cout << "---------------------------------------------" << endl;
	cout << endl;
	cout << "Subtotal de la compra : L " << subtotal;
	cout << endl;
	cout << "Impuesto de la compra : L " << im;
	cout << endl;
	cout << "Total de la compra : L " << total;
	cout << endl;	cout << endl;
	cout << " Muchas gracias por su compra, vuelva pronto.  " << endl;
	system("pause");
}


