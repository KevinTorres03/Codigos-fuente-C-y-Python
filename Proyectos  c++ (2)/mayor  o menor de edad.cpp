#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int ac , an;
		cout<< "Vamos a conocer si una persona es mayor o menor de edad" <<endl;
		cout<< "Ingrese el ultimo a�o en el que cumplio: " <<endl;
		cin>> ac;
		cout<< "Ingrese el a�o de nacimiento: " <<endl;
		cin>> an;
		
		
		if (ac- an>=18)
		{
			cout<<"La persona es mayor de edad" ;
		}
		else
		{
			cout<<"La persona es menor de edad" ;
		}
}
