/* 9- Realizar un programa que lea una cadena de caracyteres de la entrada estandar y 
muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena
*/
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {

	char palabra[30];
	int vocal_a = 0, vocal_e = 0,vocal_i = 0,vocal_o = 0,vocal_u = 0;
	
	cout<<"Ingrese una palabra: "; cin.getline(palabra, 30, '\n');
	
	for(int i = 0; i < 30; i++){
		switch(palabra[i]){
			case 'a': 
			vocal_a++;
			break;
			
			case 'e': 
			vocal_e++;
			break;
			
			case 'i':
			vocal_i++;
			break;
			
			case 'o':
			vocal_o++;
			break;
			
			case 'u':
			vocal_u++;
			break;	
		}	
	}
	cout<<endl<<"Vocal a: "<<vocal_a<<endl;
	cout<<"Vocal e: "<<vocal_e<<endl;
	cout<<"Vocal i: "<<vocal_i<<endl;
	cout<<"Vocal o: "<<vocal_o<<endl;
	cout<<"Vocal u: "<<vocal_u<<endl;
	getch();
	return 0;
}
