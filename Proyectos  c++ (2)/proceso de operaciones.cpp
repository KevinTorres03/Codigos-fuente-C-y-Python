#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int n1 , n2 , R , S;
		cout<< "Vamos a realizar la siguente operacion" <<endl;
		cout<< "Ingrese el primer numero: " <<endl;
		cin>> n1;
		cout<< "Ingrese el segundo numero: " <<endl;
		cin>> n2;
		R = n1-n2;
		S = n1+n2;
		
		if (n1==n2)
		{
			
			cout<<"Como los numeros son iguales, se proceden a restarsen y el resultado es: "<<R ;
		}
		else
		{
			cout<<"Ya que los numeros son diferentes, se procedera a sumarsen y el resultado es: "<<S ;
		}
}
