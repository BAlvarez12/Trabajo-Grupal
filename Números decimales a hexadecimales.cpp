#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Funcion para convertir decimal a hexadecimal
string decimalToHexadecimal(int decimalNumber) {
    stringstream ss;
    ss << hex << decimalNumber;
    return ss.str();
}

void numeros_decimales_hexadecimales() {
    int decimalNumber;

    // Solicitar al usuario que ingrese un número decimal
    cout << "Ingresa un número decimal: ";
    cin >> decimalNumber;

    // Convertir el número decimal a hexadecimal
    string hexadecimalNumber = decimalToHexadecimal(decimalNumber);

    // Mostrar el resultado
    cout << "El número hexadecimal equivalente es: " << hexadecimalNumber << endl;

    system("pause");
}
