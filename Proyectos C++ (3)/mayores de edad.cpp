#include<iostream>

using namespace std;

int main(){

	int num, e, ma=0, me=0  ;
	cout<<"Vamos a determinar, en un grupo de 20 estudiantes, cuntos son mayores de edad"<<endl;
	for(num=1;num<=20;num++){
		cout<<"Ingrese su edad: "<<endl ;
		cin>>e;
		if(e>=18)
			ma++;
		else
			me++;
			
	}
	cout<<"Hay " <<ma<<" mayores de edad"<<endl;
	cout<<"Hay " <<me<<" menores de edad"<<endl;

}	
