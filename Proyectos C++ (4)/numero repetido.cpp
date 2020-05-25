#include <iostream>
#include<locale.h>

using namespace std;

int main(int argc, char *argv[]) {
setlocale(LC_CTYPE, "spanish"); 
int num,cont,ds,cn;
 
 
 cout<<"Programa que va a determina cuantas veces se repite un numero ingresado por el usuario "<<endl;
 cout<<"\nIngrese el numero que se va a repetir : ";
 cin>>cn;
 
 cont=0;
  
 while(ds!=2){
	cout<<"Ingrese un número: "<<endl;
	cin>>num;
	if(num == cn)
	{
		cont++;
    }
    else
    {
    cout<<"Ingrese un número: "<<endl;
	cin>>num;	
	}
	cout<<"¿Desea ingresar mas números? Si=1, No=2: "<<endl;
 	cin>>ds;
 
 
 
 
} 
 cout<<"El número que mas se repite es: "<<cn<<endl;
 cout<<"Con una cantidad de: "<<cont++<<" veces"<<endl;

 
 return 0;
}

