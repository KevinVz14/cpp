#include <iostream>

using namespace std;

int main ()  {
	
	int a=2;
	int b=10;

while(a > b )  {
cout<<"(While) a > b "<<endl;
break;
}


do{
	cout<<"(do while) a > b "<<endl;
	break;

} while (a > b );  

return 0;
}

