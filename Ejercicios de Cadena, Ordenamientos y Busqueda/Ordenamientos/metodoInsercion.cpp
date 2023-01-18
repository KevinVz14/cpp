/*
Ordenamiento por insercion

*/
#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int nums[] = {4,2,3,1,5};
	int i, pos, aux;
	
	//Algotitmo del ordenamiento por insercicn
	for(i = 0; i < 5; i++){
		pos = i;
		aux = nums[i];
		
		while((pos>0) && (nums[pos-1])>aux){
			nums[pos]= nums[pos-1];
			pos--;	
		}
		nums[pos]=aux;
	}
	
	cout<<"Orden Ascendente: "<<endl;
	for(i = 0; i < 5; i++){
		cout<<nums[i]<<" ";
	}
	cout<<endl<<"Orden Descendente: "<<endl;
	for(i = 4; i >= 0; i--){
		cout<<nums[i]<<" ";
	}
	getch();
	return 0;
}
