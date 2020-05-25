#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int CP , VU , t , pr1 , pr2 , pr3 , r1 , r2 , r3 ;
		cout<< "Vamos calcular el valor final a pagar" <<endl;
		cout<< "Ingrese la cantidad de productos: " <<endl;
		cin>> CP;
		cout<< "Ingrese el valor unitario: " <<endl;
		cin>> VU;
		t = CP *VU;
		pr1 = t * 10/100;
		pr2 = t * 30/100;
		pr3 = t * 50/100;
		r1 = t-pr1;
		r2 = t-pr2;
		r3 = t-pr3;
		
				if (t>50000)
				{
					cout<<"El total a pagar por las compras es de: "<<r3 ;
					cout<<" Ya que se le hace el descuento del 50% ";
				}
	    		else 
	    		{
	    			cout<<"";
					if(t>20001)
					{
						cout<<"El total a pagar es: "<<r2 ;
						cout<<" ya que se le hace el descuento del 30% "; 
					}
					else
					{
						cout<<"";
						if(t>10000)
						{
							cout<<"El valor total a pagar es: "<<r1;
							cout<<" Ya que se le aplica el 10% de descuento ";
						}
						else
						{
							cout<<"El valor total a pagar es: "<<t;
						}
					}
				}
	
		
		

		
		
}
