#include<iostream>
#include<locale.h>

using namespace std;
int main(int argc, char *argv[])
{
setlocale(LC_CTYPE, "spanish");
int fac,a,num;
	
	cout<<"Programa que va a determinar el factorial de un n�mero ingresado"<<endl;
	cout<<"Ingrese un n�mero: "<<endl;
	cin>>num;
	
	fac=1;
	a=1;
	
	while(a<=num)
	{
		fac=fac*a;
		a=a+1;
	}	
		
	cout<<"El factorial de "<<num<<" es: "<<fac<<endl;
	
	
}
