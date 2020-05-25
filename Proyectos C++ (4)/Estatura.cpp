#include <iostream>
#include<locale.h>

using namespace std;
int est, may, des;
int main (){
setlocale(LC_CTYPE, "spanish");
	cout<<"Programa que va a calcular la estatura mayor en un grupo de estudiantes"<<endl;
	may=0;
	
	while (des!=2){
		
		cout<<"Ingrese la estatura:"<<endl;
		cin>>est;
		if(est)
		{
		 if(est>may){
		 	may=est;
		 }
		}
		cout<<"¿Desea ingresar otra estatura? Si=1 No=2 "<<endl;
		cin>>des;
	}
	cout<<"la estatura mayor es: "<<may<<" cm";
	
	return(0);
}

