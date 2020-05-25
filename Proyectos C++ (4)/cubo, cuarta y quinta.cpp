#include <iostream>

using namespace std;
int  n, n2, n3, cu, ca, qu, des;
int main (){
	cout<<"Programa que va a determinar la potencia (Cubo, cuarte o quinta de un numero)"<<endl;
	cout<<"¿Desea saber el cubo de un numero? si=3 no=4"<<endl;
	cin>>des;

	while (des==3){
		cout<<"Ingrese el numero: " <<endl;
		cin>>n;
		cu=n*n*n;
		cout<<"El cubo de "<<n<< " Es: " <<cu<<endl;
		cout<<"¿Desea conocer la cuarta de un numero? si=1, No=2 "<<endl;
		cin>>des;
		while (des==1){
			cout<<"Ingrese el numero: " <<endl;
			cin>>n2;
			ca=n2*n2*n2*n2;
			cout<<"La cuarta de "<<n2<< " Es: " <<ca<<endl;
			cout<<"¿Desea conocer la quinta de un numero? Si=1 No=2 "<<endl;
			cin>>des;
 			while (des==1){
 				cout<<"Ingrese el numero: " <<endl;
				cin>>n3;
				qu=n3*n3*n3*n3*n3;
				cout<<"El quinto de "<<n3<< " Es: " <<qu<<endl;
				cout<<"¿Desea hacer un nuevo procedimiento?  si=3, No=4 "<<endl;
				cin>>des;
				
		
					}
				}
	
	
	}
					
	cout<<"Estas fueron las potencias";
			
		return(0);
}

