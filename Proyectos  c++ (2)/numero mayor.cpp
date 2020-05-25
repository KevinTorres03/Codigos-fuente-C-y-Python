#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int n1 , n2;
		cout<< "Vamos a conocer cual de los 2 numeros ingresados es mayor" <<endl;
		cout<< "Ingrese el primer numero: " <<endl;
		cin>> n1;
		cout<< "Ingrese el segundo numero: " <<endl;
		cin>> n2;
		
		
		if (n1>n2)
		{
			cout<<"El numero mayor es: "<<n1 ;
		}
		else
		{
			cout<<"El numero mayor es: "<<n2 ;
		}
}
