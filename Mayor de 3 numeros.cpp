#include<iostream>

using namespace std;

void mayor_de_tres_numeros()
{
	int n1, n2, n3;
	
	cout<< "Ingrese un numero: ";
	cin>> n1;
	cout<< "Ingrese otro numero: ";
	cin>> n2;
	cout<< "Ingrese un numero mas: ";
	cin>> n3;
	
	if(n1>n2 & n1>n3)
	{
		cout<<" El numero mayor es: "<<n1<<endl;
	}
	else
	{
		if(n2>n1 & n2>n3)
		{
			cout<<" El numero mayor es: "<<n2<<endl;
		}
		else
		{
			if(n3>n1 & n3>n2)
			{
				cout<< " El numero mayor es: "<<n3<<endl;
			}
		}
	}
		
	system("pause");
}
