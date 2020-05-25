#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int ca , vu , m , p , p2 , ds , ds2 ;
		cout<< "Vamos conocer cuanto debe pagar un cliente por la compra de una serie de productos" <<endl;
		cout<< "Ingrese la cantidad de articulos: " <<endl;
		cin>> ca;
		cout<< "Ingrese el valor unitario: " <<endl;
		cin>> vu;
		m = ca * vu;
		p = m * 15/100;
		p2 = m * 35/100;
		ds = m - p;
		ds2 = m - p2;
		if (m>20000)
		{
			cout<<"El total a pagar es: "<<ds2 ;
			cout<<"\nYa que se le aplica el 35% de descuento ";
		}
		else
		{
			cout<<"El total a pagar por los productos es: "<<ds ;
			cout<<"\nYa que se le aplica el 15% de descuento ";
		}
}
