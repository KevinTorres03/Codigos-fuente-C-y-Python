#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int ca , vu , m , p , ds ;
		cout<< "Vamos a dar a conocer cuanto debe pagar un cliente por su compra" <<endl;
		cout<< "Ingrese la cantidad de articulos: " <<endl;
		cin>> ca;
		cout<< "Ingrese el valor unitario: " <<endl;
		cin>> vu;
		m = ca * vu;
		p = m * 20/100;
		ds = m - p;
		if (m>100000)
		{
			cout<<"El total a pagar es: "<<ds ;
			cout<<"\nYa que se le aplica el 20% de descuento ";
		}
		else
		{
			cout<<"El total a pagar por los productos es: "<<m ;
		}
}
