#include <iostream>

using namespace std;

bool login(){
	string password = " ";
	int intentos = 0;
	
	while (intentos <= 3){
		system("cls");
		
		cout <<"Bienvenido a" <<endl;
		
 cout<<"   _____     ________                                    ";
 cout<<"  /  |  |   /  _____/_____    _____   ___________  ______";
  cout<<"/   |  |_ /   \  ___\__  \  /     \_/ __ \_  __ \/  ___/";
 cout<<"/    ^   / \    \_\  \/ __ \|  Y Y  \  ___/|  | \/\___ \ ";
 cout<<"\____   |   \______  (____  /__|_|  /\___  >__|  /____  >";
  cout<<"    |__|          \/     \/      \/     \/           \/";
cout<<endl;

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;	
		
	if (intentos == 3){
		
 
		
		
		
	cout <<"No se ha podido validar su password, por favor contacte al administrador de su sistema " 
	<< endl;
		
	return false;	
	}
	
	
	cout<<"Ingrese su password: ";
	cin >> password;
	
	
	if (password == "admin"){
		system("cls");
		
		return true;
	}
	
	intentos++;
	
	}
	
}
