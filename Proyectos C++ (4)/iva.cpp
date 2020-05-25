#include <iostream>

using namespace std;
int des, vp, cp, st, iva;
int main ()
{

	cout<<"Programa que calcula el total a pagar en una caja registradora"<<endl;
	cout<<"Ingrese la cantidad de productos: "<<endl;
	cin>>cp;
	cout<<"Ingrese el valor de cada producto: "<<endl;
	cin>>vp;
	cout<<"¿Desea ingresar otro articulo? Si=1, No=2 "<<endl;
	cin>>des;
	st = vp * cp;
	while (des==1)
	{
		cout<<"Ingrese la cantidad de productos: "<<endl;
		cin>>cp;
		cout<<"Ingrese el valor de cada producto: "<<endl;
		cin>>vp;
		st = st + (cp*vp);
		cout<<"Desea ingresar otro producto? SI=1, No=2 "<<endl;
		cin>>des;
	}
	iva = st * 0.16;
	cout<<"Ingrese su forma de pago: tarjeta=3, efectivo=4 "<<endl;
	cin>>des;
	if(des==3)
	{
		cout<<"El valor total a pagar es: "<<st+iva<<"\n Y el valor total del iva es: "<<iva<<endl;
	}
	else
	{
		cout<<"El valor tota a pagar es: "<<st-iva<<"\n y el valor del iva es: "<<iva<<endl;
	}
	

}

