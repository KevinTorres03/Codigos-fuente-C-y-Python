#include <iostream>
#include<locale.h>

using namespace std;
 
int cn,num;

int main()
{
setlocale(LC_CTYPE, "spanish");	
	cout<<"Programa que va terminar cuando el usuario ingrese un numero mayor a 30 "<<endl;
	cout<<"Presione 1 para continuar: "<<endl;
	cin>>cn;
	
	while (num<30)
	{
		cout<<"ingrese un n�mero: "<<endl;
		cin>>num;
		
	}
	cout<<"Ha ingresado un n�mero mayor a 30, fin del programa."<<endl;
	
}
