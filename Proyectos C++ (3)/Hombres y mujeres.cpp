#include<iostream>

using namespace std;

int main(){

	int num, g, h=0, m=0  ;
	cout<<"Este programa va a determinar cuantos hombres y mujeres hay en un curso de 25 estudiantes"<<endl;
	for(num=1;num<=25;num++){
		cout<<"Ingrese su genero de la siguiente manera Hombre=1, Mujeres=2: "<<endl ;
		cin>>g;
		if(g==1)
			h++;
		else
			m++;
			
	}
	cout<<"Hay " <<h<<" hombres"<<endl;
	cout<<"Hay " <<m<<" mujeres"<<endl;

}	
