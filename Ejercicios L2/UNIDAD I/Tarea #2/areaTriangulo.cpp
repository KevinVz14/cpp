#include <iostream>

using namespace std;

int main (){

int Base = 0; 
int Altura = 0; 
int Area = 0; 

cout<<"Ingrese la Base del triangulo: ";
cin>>Base;
cout<<"Ingrese la Altura del triangulo: ";
cin>>Altura;
	
Area = (Base * Altura)/2;
cout<<endl;
cout<<"El area del triangulo es: "<<Area;
	
	return 0;
}
