#include <iostream>
#include<locale.h>

using namespace std;

int main(int argc, char *argv[]) {
setlocale(LC_CTYPE, "spanish"); 
int num,men,may,ds,cn;
 
 
 cout<<"Programa que va a determina el número mayor y el número menor entre una serie de números "<<endl;
 cout<<"\npresione 1 para continuar: ";
 cin>>cn;
 
 may=0;
 men=99999;
 
 while(ds!=2){
  cout<<"Ingrese el número: "<<endl;
  cin>>num;
  if(num){
   if(num>may){
    may=num;
   }
   if(num<men){
    men=num;
   }
 
  }
	cout<<"¿Desea ingresar mas números? Si=1, No=2: "<<endl;
 	cin>>ds;
 
 }
 
 
 
 cout<<"El mayor número es: "<<may<<endl;
 cout<<"El menor número es: "<<men<<endl;

 
 return 0;
}
