#include <iostream>
#include "par o impar.cpp"
#include "Tabla_Multiplicar.cpp"
#include "Hipotenusa.cpp"
#include "Puntero_pantalla.cpp"
using namespace std;


int main(){

	int num;
	

	cout<<"Ingrese el Numero de la funcion"<<endl;
		do{
			cout<<""<<endl;
			cout<<"2. Determinar Numero Par o Impar: "<<endl;
				cout<<"8. Tabla de Multiplicar:"<<endl;
				 	cout<<"14. Puntero en Pantalla:"<<endl;
						cout<<"16. Calcular la Hipotenusa:  "<<endl;
							cout<<"Ingrese 0 para salir "<<endl;
								cout<<""<<endl;
								cout<<"___________________________________"<<endl;
									cin>>num;					
		if(num == 2){
			cout<<"_____Ejecutando Numeros Par o Impar_______"<<endl;
	 		par_o_impar();
				}else if(num == 8){
					cout<<"_______Ejecutando Tabla de Multiplicar________"<<endl;
					multiplicar();
						}else if(num == 14){
									cout<<"_______Ejecutando puntero en Pantalla_______"<<endl;
									puntero();
							}else if(num == 16){
							cout<<"_______Ejecutando Calculo de Hipotenusar________"<<endl;
							hipotenusa();
								}else if(num == 0){
									cout<<"Saliendo del Programa_______"<<endl;
									break;
										}else {
	  										cout<<"Ingrese un dato correcto "<<endl;
											  cout<<""<<endl; 
											cout<<"__________Vuelva a Intentarlo__________"<<endl;	  
	}
	}while (true);
	
	


}
