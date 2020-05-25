#include<iostream>

using namespace std;

int main(){

	int i, cp, vu, acum, prom, prn;
	cout<<"Programa que va a determinar el total a pagar y el valor del iva"<<endl;
		cout<<"Ingrese la cantidad de productos: "<<endl ;
		cin>>cp;
		acum=0;
	for(i=1;i<=cp;i++)
	{
	
		cout<<"Ingrese el valor de cada producto: "<<endl ;
		cin>>vu;
		acum=acum+vu;
		
	}
	prn=acum+(acum*16/100);
	prom=acum+cp;
	cout<<"El valor total a pagar es: " <<prn<<endl;
	cout<<"El valor del iva a incluir es: "<<acum*16/100;

	
	return 0;

}	
