#include <iostream>
#include "par o impar.cpp" // Bryann
#include "Tabla_Multiplicar.cpp"// Bryann
#include "Hipotenusa.cpp" // Bryann
#include "Puntero_pantalla.cpp"// Bryann
#include "Anno bisiesto.cpp" //Bryann
#include "Convertidor de medidas.cpp" // Bryann
#include "enteros a letras.cpp" // Bryann
#include "sum_res_mul_div.cpp"// Dary
#include "arabigos_romanos.cpp" // Dary
#include "decimales_binario.cpp"// Dary
#include "area_triangulo.cpp" // Dary
#include "figuras_basicas.cpp" // Dary 
#include "cajero" // Dary 
#include "palabra o numero polindromo" //Cristian
#include "convesion numeros enteros a letras" //Cristian
#include "Multiplicacion manual" //Cristian

using namespace std;
int main(){

	int num;	
	cout<<"Ingrese el Numero de la funcion"<<endl;
		do{
			cout<<"________________________"<<endl;
			cout<<""<<endl;
			cout<<"1. Suma, resta, multiplicacion y division: "<<endl;
			cout<<"2. Determinar Numero Par o Impar: "<<endl;
			cout<<"3. Convertidor de medidas: "<<endl;
			cout<<"4. Palabra o numero polindromo: "<<endl;
			cout<<"5. Convertir numeros arabigos a romanos: "<<endl;
			cout<<"6. Numeros enteros con decimal a letras: "<<endl;
			cout<<"7. Conversion numeros enteros con decimal a letras: "<<endl;
			cout<<"8. Tabla de Multiplicar:"<<endl;
			cout<<"10. Multiplicacion manual:"<<endl;
			cout<<"11. Conversion de numeros decimales a binarios: "<<endl;
			cout<<"13. Crear Figuras Geométricas Básicas: "<<endl;
			cout<<"14. Puntero en Pantalla:"<<endl;
			cout<<"15. cajero: "<<endl;
			cout<<"16. Calcular la Hipotenusa:  "<<endl;
			cout<<"19. Calcular el area de un triangulo: "<<endl;
			cout<<"21. Validar anno bisiesto: "<<endl; // validar ya que la opcion 21 es el main, att dary 
			cout<<"Ingrese 0 para salir "<<endl;
			cout<<" "<<endl;
			cout<<"___________________________________"<<endl;
			cin>>num;	
			
		if(num == 2){
		cout<<"_____Ejecutando Numeros Par o Impar_______"<<endl;
	 	par_o_impar();
		}else  
		
		if(num == 3){
		cout<<"_______Ejecutando Convertidor de medidas________"<<endl;
		convertidor_medidas();
		}else  
		
		if(num == 6){
		cout<<"_______Ejecutando Convertidor de numeros a letras________"<<endl;
		numero_entero();
		}else  
		
		if(num == 8){
		cout<<"_______Ejecutando Tabla de Multiplicar________"<<endl;
		multiplicar();
		}else  
		
		if(num == 14){
		cout<<"_______Ejecutando puntero en Pantalla_______"<<endl;
		puntero();
		}else 
		
		if(num == 16){
		cout<<"_______Ejecutando Calculo de Hipotenusar________"<<endl;
		hipotenusa();
		}else 

		if(num == 21){  // validar ya que la opcion 21 es el main, att dary 
		cout<<"_______Ejecutando verificador de anno bisiesto________"<<endl;
		anno();
		}else 

	// inicio if dary 
			if(num == 1){
			cout<<"_______Ejecutando Suma resta multiplicacion y divicion ________"<<endl;
			sum_res_mul_div();
			}else 

			if(num == 5){
			cout<<"_______Ejecutando Conversión de números arábigos a romanos ________"<<endl;
			arabigos_romanos();
			}else 

			if(num == 11){
			cout<<"_______Ejecutando Conversión de números decimales a binario________"<<endl;
			decimales_binario();
			}else 

			if(num == 13){
			cout<<"_______Ejecutando Crear Figuras Geométricas Básicas________"<<endl;
			figuras_basicas();
			}else 

			if(num == 19){ //19. Libre (pueden realizar el programa que ustedes quieran)
			cout<<"_______Ejecutando calcular area triangulo________"<<endl;
			area_triangulo();
			}else 

			if(num == 15){ 
			cout<<"_______Ejecutando Simulador de un cajero automatico________"<<endl;
			cajero();
			}else 
	// fin if dary

		if(num == 4){
		cout<<"_____Ejecutando determinar si una palabra o numero es polindromo_______"<<endl;
	 	palabra_numero_polindromo();
		}else  

		if(num == 6){
		cout<<"_____Ejecutando Numeros enteros con decimal a letras_______"<<endl;
	 	numeros_enteros_con_decimal_a_letras();
		}else  

		if(num == 10){
		cout<<"_____Ejecutando Crear de forma grafica multiplicacion manual _______"<<endl;
	 	multiplicacion_manual();
		}else  
				
				if(num == 0){
				cout<<"Saliendo del Programa"<<endl;
				break;
				}else {
				cout<<"_______Ingrese un dato correcto______"<<endl;
				cout<<""<<endl; 
				cout<<"__________Vuelva a Intentarlo__________"<<endl;	  
	}
	}while (true);
	
	


}
