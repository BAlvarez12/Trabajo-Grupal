#include <iostream>
#include "par o impar.cpp" // Bryann
#include "Tabla_Multiplicar.cpp"// Bryann
#include "Hipotenusa.cpp" // Bryann
#include "Puntero_pantalla.cpp"// Bryann
#include "Anno bisiesto.cpp" //Bryann
#include "Convertidor de medidas.cpp" // Bryann
#include "enteros a letras.cpp" // Bryann

// #include "sum_res_mul_div.cpp"// Dary
// #include "arabigos_romanos.cpp" // Dary
// #include "decimales_binario.cpp"// Dary
// #include "area_triangulo.cpp" // Dary

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
			cout<<"5. Convertir numeros arabigos a romanos: "<<endl;
			cout<<"6. Numeros enteros con decimal a letras: "<<endl;
			cout<<"8. Tabla de Multiplicar:"<<endl;
			cout<<"11. Conversion de numeros decimales a binarios: "<<endl;
			cout<<"14. Puntero en Pantalla:"<<endl;
			cout<<"16. Calcular la Hipotenusa:  "<<endl;
			cout<<"19. Calcular el area de un triangulo: "<<endl;
			cout<<"21. Validar anno bisiesto: "<<endl;
			cout<<"Ingrese 0 para salir "<<endl;
			cout<<""<<endl;
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

		if(num == 21){
		cout<<"_______Ejecutando verificador de anno bisiesto________"<<endl;
		anno();
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
