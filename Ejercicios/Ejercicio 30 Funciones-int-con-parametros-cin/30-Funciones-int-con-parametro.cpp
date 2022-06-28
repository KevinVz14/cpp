#include <iostream>

using namespace std;


int sumar(int a,int b){
	
	return a + b ;	
	
}

int restar(int a,int b){
	
	return a - b ;	
	
}


int main ()  {

int numero1 = 0;
int numero2 = 0;

system("cls");
cout<<"ingrese el valor de a: ";
cin>> numero1;
cout<<"ingrese el valor de b: ";
cin>> numero2;

cout<<"El resultado de la suma es: " <<sumar(numero1,numero2);
cout<<endl;
cout<< "El resultado de la suma es:"<< restar(numero1,numero2);

return 0;
}

