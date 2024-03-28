#include <iostream>
#include "par o impar.cpp"
#include "Tabla_Multiplicar.cpp"
#include "Hipotenusa.cpp"
#include "Puntero_pantalla.cpp"
#include "sum_res_mul_div"
#include "arabigos_romanos"
#include "decimales_binario"
#include "area_triangulo"

using namespace std;
int main(){

	int num;	
	cout<<"Ingrese el Numero de la funcion"<<endl;
		do{
			cout<<""<<endl;
			cout<<"1. Suma, resta, multiplicacion y division: "<<endl;
			cout<<"2. Determinar Numero Par o Impar: "<<endl;
			cout<<"5. Convertir numeros arabigos a romanos: "<<endl;
			cout<<"8. Tabla de Multiplicar:"<<endl;
			cout<<"11. Conversion de numeros decimales a binarios: "<<endl;
			cout<<"14. Puntero en Pantalla:"<<endl;
			cout<<"16. Calcular la Hipotenusa:  "<<endl;
			cout<<"19. Calcular el area de un triangulo: "<<endl;
			cout<<"Ingrese 0 para salir "<<endl;
			cout<<""<<endl;
			cout<<"___________________________________"<<endl;
			cin>>num;	

		if(num == 1){
		cout<<"_____Ejecutando suma, resta, multiplicacion y divicion_______"<<endl;
	 	sum_res_mul_div();
		}else 
			
		if(num == 2){
		cout<<"_____Ejecutando Numeros Par o Impar_______"<<endl;
	 	par_o_impar();
		}else 

		if(num == 5){
		cout<<"_____Ejecutando Convertir numero arabigos a romanos_______"<<endl;
	 	arabigos_romanos();
		}else 
		
		if(num == 8){
		cout<<"_______Ejecutando Tabla de Multiplicar________"<<endl;
		multiplicar();
		}else 

		if(num == 11){
		cout<<"_______Ejecutando numeros decimales a binarios________"<<endl;
		decimales_binario();
		}else 
		
		if(num == 14){
		cout<<"_______Ejecutando puntero en Pantalla_______"<<endl;
		puntero();
		}else 
		
		if(num == 16){
		cout<<"_______Ejecutando Calculo de Hipotenusar________"<<endl;
		hipotenusa();
		}else 

		if(num == 19){
		cout<<"_______Ejecutando area de un triangulo________"<<endl;
		area_triangulo();
		}else 
								
				if(num == 0){
				cout<<"Saliendo del Programa_______"<<endl;
				break;
				}else {
				cout<<"Ingrese un dato correcto "<<endl;
				cout<<""<<endl; 
				cout<<"__________Vuelva a Intentarlo__________"<<endl;	  
	}
	}while (true);
	
	


}
