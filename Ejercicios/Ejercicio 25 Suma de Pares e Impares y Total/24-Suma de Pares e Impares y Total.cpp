#include <iostream>

using namespace std;

int main ()  {

int pares = 0;
int impares = 0;
int Total = 0 ;

for (int i = 1; i <= 10; i++ )   {

if (i % 2 == 0 ){	
pares = pares + i;

} 
else {
			
impares = impares + i;

	}
}

Total = (pares + impares);

cout<< endl ;
cout<< "Suma de los pares es: "<<pares ;
cout<< endl ;	
cout<< "Suma de los impares es:"<< impares ;
cout<< endl ; cout<< endl ;
cout<< "Suma de los pares e impares es es: "<< Total ;



return 0;
}

