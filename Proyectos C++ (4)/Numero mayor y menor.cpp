#include <iostream>
#include<locale.h>

using namespace std;

int main(int argc, char *argv[]) {
setlocale(LC_CTYPE, "spanish"); 
int num,men,may,ds,cn;
 
 
 cout<<"Programa que va a determina el n�mero mayor y el n�mero menor entre una serie de n�meros "<<endl;
 cout<<"\npresione 1 para continuar: ";
 cin>>cn;
 
 may=0;
 men=99999;
 
 while(ds!=2){
  cout<<"Ingrese el n�mero: "<<endl;
  cin>>num;
  if(num){
   if(num>may){
    may=num;
   }
   if(num<men){
    men=num;
   }
 
  }
	cout<<"�Desea ingresar mas n�meros? Si=1, No=2: "<<endl;
 	cin>>ds;
 
 }
 
 
 
 cout<<"El mayor n�mero es: "<<may<<endl;
 cout<<"El menor n�mero es: "<<men<<endl;

 
 return 0;
}
