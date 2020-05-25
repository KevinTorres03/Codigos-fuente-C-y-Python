#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		int cr ;
		cout<< "Vamos a conocer si un estudiante requiere refrigerio" <<endl;
		cout<< "Ingrese el curso del estudiante: ej. cuarto (4) " <<endl;
		cin>> cr;
		
		
		
		if (cr<=6)
		{
			cout<<"El estudiante si requiere refrigerio" ;
		}
		else
		{
			cout<<"El estudiante ya no requiere refrigerio" ;
		}
}
