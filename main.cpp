#include <iostream>
#include "par o impar.cpp"
using namespace std;


int main(){

	int num;

	cout<<"Ingrese el Numero de la funcion"<<endl;
		do{
			cout<<"2. Determinar Numero Par o Impar: ";
			cin>>num;
   		 if(num == 2){
			cout<<"_____Ejecutando Numeros Par o Impar_______"<<endl;
	 		par_o_impar();
	 		return 0;
		}else {
	  		cout<<"Ingrese un dato correcto "<<endl; 
			cout<<"__________________________________________"<<endl;	  
		}
	}while (true);
	
	
		

}
