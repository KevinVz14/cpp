#include <iostream>

using namespace std;

int main ()
{
	
	string alumnos[3];
	
	string encuesta[3][2] = {
	
	{"Llevara clases el siguiente periodo?", "" },
	{"Matriculara L2?", ""},
	{"Matriculara L2 con el lic Bily?", ""}

	};
		
	for (int i = 0; i < 3; i ++)
{
	
	cout<<"Ingrese su nombre: ";
	cin>>alumnos[i];
	
	cout<<endl;
	
	
	for (int j = 0; j < 3; j++ ){
		
		cout<<encuesta[j][0];
		cin  >> encuesta[j][1];
	}
	
}	
		
	return 0;
}
