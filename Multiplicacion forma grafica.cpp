#include <iostream>

using namespace std;

void multiplicacion_grafica() {
	
    int num1;
    int num2;

    cout<<"Ingrese el multiplicando: ";
    cin>>num1;
    cout<<"Ingrese el multiplicador: ";
    cin>>num2;

    int producto1 = num1 * (num2 % 10);
    int producto2 = num1 * (num2 / 10);
    int resultado = num1 * num2;

    cout<<"   " <<num1<<endl;
    cout<<"X  " <<num2<<endl;
    cout<<"--------"<<endl;
    cout<<"  "<<producto1<<endl;
    cout<<" "<<producto2<<endl;
    cout<<"--------"<<endl;
    cout<<" "<<resultado<<endl;

    return;
}




















/*#include <iostream>

using namespace std;

int main() {

    int num1;
    int num2;

    cout<<"Ingrese el multiplicando: ";
    cin>>num1;
    cout<<"Ingrese el multiplicador: ";
    cin>>num2;
    
    int result = num1 * num2;
    int residuo = result % 10;
    int suma = 0;
    
    int temp = result;
    
    while (temp>0){
    	suma += temp % 10;
    	temp/= 10;
	}

    cout<<"    " <<num1<<endl;
    cout<<"x   " <<num2<<endl;
    cout<<"---------"<<endl;
    cout<<"    " <<result-residuo<<"+"<<residuo<<"(residuo)"<<endl;
    cout<<"________"<<endl;
    cout<<"    "<<suma<<"(suma de digitos)"<<endl;

    return 0;
}*/
