#include <iostream>

using namespace std;
int n=0;
int main(){
	cout<<"Programa que va a dar los numeros pares a partir de un numero entero dado"<<endl;
	cout<<"Ingrese el numero"<<endl;
	cin>>n;
	while (n >= 0)
	{
		if(n % 2 == 0)
		{
		cout<<"Numero: "<<n<<endl;
		n=(n-2);
		}
		else
			{
			n=n--;
			cout<<"Numero: "<<n<<endl;
			n--;
			}
			
	}
	return(0);
}

