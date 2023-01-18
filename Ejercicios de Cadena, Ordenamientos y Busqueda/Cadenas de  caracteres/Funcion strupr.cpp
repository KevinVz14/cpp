//Pasar una palabra a MAYUSCULA - Funcion strupr()
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	char pa[] = "Omar";
	
	strupr(pa);
	
	cout<<pa<<endl;

	getch();
	return 0;
}
