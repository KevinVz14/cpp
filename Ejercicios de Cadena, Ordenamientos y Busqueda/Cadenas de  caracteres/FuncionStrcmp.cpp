//Comparar dos cadenas de caracteres  - Funcion strcmp
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char palabra1[] = "becerro";
	char palabra2[] = "avion";
	 
	if(strcmp(palabra1, palabra2) < 0){
		
		cout<<palabra1 <<"Esta despues alfabeticamente"<<endl;
	}
	getch();
	return 0;
}
