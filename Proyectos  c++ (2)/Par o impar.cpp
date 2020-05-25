#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int n1 ;
		cout<< "Vamos a determinar si un numero es par o impar" <<endl;
		cout<< "Ingrese el numero que deseé saber si es par o impar: " <<endl;
		cin>> n1;
		
		
				if (n1 %2==0)
				{
					cout<<"El numero: "<<n1; 
					cout<<" es par";
				}
	    		else 
	    		{
	    			cout<<"El numero: "<<n1; 
					cout<<" es impar";
				}
	
		
		

		
		
}
