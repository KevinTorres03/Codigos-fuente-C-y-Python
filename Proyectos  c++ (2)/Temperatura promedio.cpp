#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int d1 , d2 , d3 , d4  , d5 , d6 , d7 , s , pr  ;
		cout<< "Vamos calcular la temperatura promedio en una semana" <<endl;
		cout<< "Ingrese la temperatura en el primer dia: " <<endl;
		cin>> d1;
		cout<< "Ingrese la temperatura en el segundo dia: " <<endl;
		cin>> d2;
		cout<< "Ingrese la temperatura en el tercer dia: " <<endl;
		cin>> d3;
		cout<< "Ingrese la temperatura en el cuarto dia: " <<endl;
		cin>> d4;
		cout<< "Ingrese la temperatura en el quinto dia: " <<endl;
		cin>> d5;
		cout<< "Ingrese la temperatura en el sexto dia: " <<endl;
		cin>> d6;
		cout<< "Ingrese la temperatura en el septimo dia: " <<endl;
		cin>> d7;
		s = d1 + d2 + d3 + d4 + d5 + d6 + d7;
		pr = s / 7;
		
			if (pr>35)
					{
						cout<<"Que semana tan calurosa, el promedio de temperatura fue: "<<pr ;
					}
	    			else 
	    			{
	    				cout<<"";
						if(pr>=15)
						{
							cout<<"Que clima tan deliciso, la temperatura fue: "<<pr; 
						}
						else
						{
							cout<<"Que semana tan fria, promedio de la temperatura fue: "<<pr;
						}
					}
		

		
		
}
