#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int ED , ES , PS ;
		cout<< "Este programa va a dar a conocer si una persona es admitida en un equipo de baloncesto de Bogotá" <<endl;
		cout<< "Ingrese la edad: " <<endl;
		cin>> ED;
		cout<< "Ingrese la estatura: " <<endl;
		cin>> ES;
		cout<<"Ingrese el peso: ";
		cin>> PS;
	
		
				if (ED>=18)
				{
					cout<<"Cumples con la edad "<<endl ;
					if(ES>=180)
					{
						cout<<"Cumples con la estatura  "<<endl ; 
						if(PS>=80)
						{
							cout<<"Cumples con todos los requisitos, ¡Bienvenido! "<<endl;
						}
						else
						{
							cout<<"Lo sentimos, cumples con la edad, y con la estatura, pero no cumples con el peso";
						}
					}
					else
					{
						cout<<"Cumples con la edad, pero no cumples con los demas requisitos "<<endl ;
					}
				}
	    		else 
	    		{
	    			cout<<"Lo sentimos no cumples con los requisitos requeridos";
				}
	
		
		

		
		
}
