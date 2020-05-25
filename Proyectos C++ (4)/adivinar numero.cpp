#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main ()
{
	int x, num, cont = 0;
	srand ((unsigned)time(NULL));
	x = rand()%(101);
	
	cout<<"Programa que va a generar un numero aleatorio y el usuario va a adivinarlo"<<endl;
	cout<<"El numero esta entre 0 y 100"<<endl;
	int a = 0;
	
	while (a == 0)
	{
		cout<<"Ingrese un numero: "<<endl;
		cin>>num;
		cont++;
		if(num>x)
			cout<<"Menos"<<endl;
		else if (num<x)
			cout<<"Mas"<<endl;
		else
		{
			cout<<"¡Haz acertado!"<<endl;
			cout<<"Numero de intentos: "<<cont<<endl;
			
			a = 1;
		}
	}
	
}
