#include<iostream>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "spanish");
		char n[20] , m[50] ;
		int c, s, P, Na , Nb, Nc  ;
		
		cout<< "Vamos a conocer si un estudiante aprob� o reprob� una materia" <<endl;
		cout<< "Ingrese el c�digo del estudiante: " <<endl;
		cin>> c;
		cout<< "Ingrese el nombre del estudiante: " <<endl;
		cin.ignore();
		cin.getline(n,50,'\n');
		cout<<"Ingrese la materia: "<<endl;
		cin.getline(m,20);
		cout<<"Ingrese la primera nota de 01 a 50: "<<endl;
		cin>> Na;
		cout<<"Ingrese la seguda nota: "<<endl;
		cin>> Nb;
		cout<<"Ingrese la tercera nota: "<<endl;
		cin>> Nc;
		s = Na + Nb + Nc;
		P = s/3;
		
		if (P>=35)
		{
			cout<<"El estudiante: "<<n;
			cout<<"\nCon el codigo: "<<c;
			cout<<"\nAprob� "<<m;
			cout<<" ya que su nota final fue: "<<P; 
		}
		else
		{
			cout<<"El estudiante: "<<n;
			cout<<"\nCon el codigo: "<<c;
			cout<<"\nNo aprob� "<<m;
			cout<<" ya que su definitiva fu�: "<<P; 
		}
}
