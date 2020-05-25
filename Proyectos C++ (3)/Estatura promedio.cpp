#include<iostream>

using namespace std;

int main(){

	int num, e, ma=0, me=0  ;
	cout<<"Vamos a determinar la estatura promedio en un grupo de 18 estudiantes"<<endl;
	for(num=1;num<=18;num++){
		cout<<"Ingrese su estatura: "<<endl ;
		cin>>e;
		if(e>=1)
			e+e/18;
		else
			;
			
	}
	cout<<"La estatura promedio es: " <<e<<"cm"<<endl;
		if(e<140)
		{
			cout<<"Estudiantes muy bajos";
		}
		else
		{
			cout<<"";
			if(e<170)
			{
				cout<<"Estudiantes de estatura normal";
			}
			else
			{
				cout<<"Estudiantes muy altos";
			}
		}	
	return 0;	
	
}	
