//Transformar una cadena a números - Función atoi() y atof()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {

	char cad[] = "123";
	char cad2[] = "5.6";
	int num;
	float num2;
	
	num = atoi(cad);
	num2 = atof(cad2);
	
	cout<<num<<endl;
	cout<<num2<<endl;
	

	getch();
	return 0;
}
