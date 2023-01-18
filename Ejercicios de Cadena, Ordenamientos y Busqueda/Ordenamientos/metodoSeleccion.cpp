//Ordenamiento por seleccion
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int nums[]= {3,2,1,5,4};
	int i, j, aux, min;
	
	for(i = 0 ; i < 5; i++){
		min = i;	
		
		for(j = i + 1; j < 5; j++){
			
			if(nums[j] < nums[min]){
				min = j ;	
			}	
		}
		aux = nums[i];
		nums[i] = nums[min];
		nums[min] = aux;
	}
	cout<<"Orden Ascendente: ";
	for(i=0; i<5; i++){
		cout<<nums[i] <<" ";
	}
	cout<<endl<<"Orden Descendente: ";
	for(i=4; i >= 0 ; i--){
		cout<<nums[i] <<" ";
	}
	
	getch();
	return 0;
}
