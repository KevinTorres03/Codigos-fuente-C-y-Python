#include <iostream>

using namespace std;
main (){
int DT, SD , porcent, porcent2 , VF;
cout<<" Vamos a conocer el valor a pagar a un empleado por sus dias de trabajo, descontando pension y salud: \n ";
cout<<" Ingrese la cantidad de dias trabajados: ";
cin>> DT ;
cout<<" Ingrese el valor del salario diario: ";
cin>> SD ;


porcent = DT * SD * 10/100 ;
porcent2 = DT * SD * 15/100 ;
VF = DT * SD - porcent - porcent2 ;

cout<< " El valor total a pagar es " <<VF ;
cout<< " $ " ;
cout<< "\n Ya que se le desconto el 10% del valor de pension que es: " <<porcent ;
cout<< " $ " ;
cout<< "\n Y se le desconto el 15% del valor de salud que es: " <<porcent2 ;
cout<< " $ " ;

	return 0;
}
