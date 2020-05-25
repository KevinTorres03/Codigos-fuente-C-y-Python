#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int n1 ;
		cout<< "Vamos conocer si la mitad de un numero ingresado es menor a 100" <<endl;
		cout<< "Ingrese el ultimo año en el que cumplio: " <<endl;
		cin>> n1;
		
		
		
		if (n1/2<100)
		{
			cout<<"El numero es menor a 100" ;
		}
		else
		{
			cout<<"El numero es mayor a 100" ;
		}
}
