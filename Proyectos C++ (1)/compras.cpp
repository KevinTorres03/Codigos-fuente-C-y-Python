#include <iostream>

using namespace std;
main (){
int CP, VP , porcent, VF;
cout<<" En este programa vamos a dar el total a pagar por una cantidad de alticulos, agregando el 16% del valor final: \n ";
cout<<" Ingrese la cantidad de productos comprados: ";
cin>> CP ;
cout<<" Ingrese el valor de cada producto: ";
cin>> VP ;


porcent = CP * VP * 16/100 ;
VF = CP * VP - porcent ;

cout<< " El valor total a pagar es " <<VF ;
cout<< " $ " ;
cout<< "\n Ya que el aumento del 16% es : " <<porcent ;
cout<< " $ " ;

	return 0;
}
