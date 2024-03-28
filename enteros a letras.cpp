#include <iostream>
#include <string>

using namespace std;

string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

string convertirNumeroEnPalabras(int numero) {
    if (numero<10)return unidades[numero];
    if (numero<20)return especiales[numero - 10];
    return decenas[numero / 10] + ((numero % 10 != 0) ? " y " + unidades[numero % 10] : "");
}

void numero_entero() {
    double numero;
    cout<<"Ingrese un numero para convertirlo a letras : ";
    cin>>numero;

    int parte_entera=static_cast<int>(numero);
    int parte_decimal=static_cast<int>((numero - parte_entera) * 100);

    cout<<"El numero "<<numero<<" en palabras es: "<<convertirNumeroEnPalabras(parte_entera);
    if (parte_decimal > 0) {
        cout<<" punto "<<convertirNumeroEnPalabras(parte_decimal);
    }
    cout<<endl;

    return ;
}
