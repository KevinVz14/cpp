//Metodo Burbuja
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int nums[] = {4,1,2,3,5};
	int i, j, aux;
	
	//Algotitmo de metodo burbuja
	for(i = 0; i < 5; i++ ){
	 	for(j = 0; j < 5; j++ ){
	 	
		 	if(nums[j] > nums[j+1]){
			 	aux = nums[j];
			 	nums[j] = nums[j+1];
				nums[j+1] = aux;		 	
			 }	
		}	
	}
	cout <<"orden ascendente: "<<endl;
	for(i = 0; i < 5; i++ ){
		cout<<nums[i]<<" ";
	}
	
	cout<<endl <<"orden descendente: "<<endl;
	for(i = 4; i >= 0; i-- ){
		cout<<nums[i]<<" ";
	}
	
	getch();
	return 0;
}
