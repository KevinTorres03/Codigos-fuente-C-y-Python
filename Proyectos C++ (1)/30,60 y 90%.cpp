#include <iostream>

using namespace std;
main (){
int num1 , porcent , porcent2, porcent3;
cout<<" Ingrese un numero para hallar el 30%, el 60% y el 90% del mismo: \n ";
cout<<" Ingrese un numero: ";
cin>> num1 ;

porcent = num1 * 30/100 ;
porcent2 = num1 * 60/100;
porcent3 = num1 * 90/100 ;
cout<< " El 30% es: " <<porcent ;
cout<< "\n El 60% es: " <<porcent2 ;
cout<< "\n El 90% es: " <<porcent3 ;
	return 0;
}
